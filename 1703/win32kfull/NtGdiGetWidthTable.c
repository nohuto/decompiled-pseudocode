/*
 * XREFs of NtGdiGetWidthTable @ 0x1C00E2570
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C007E0B0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C008C9B8 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C008CAB4 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtGdiGetWidthTable(
        HDC a1,
        unsigned int a2,
        char *Src,
        unsigned int a4,
        volatile void *Address,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  __int64 v7; // rsi
  unsigned int WidthTable; // r14d
  unsigned __int16 *v11; // rbx
  unsigned __int16 *v12; // rdi
  size_t v13; // r8
  FLOATL eXX; // edx
  unsigned __int16 v15; // dx
  __int64 v16; // rcx
  unsigned __int16 *v17; // rdi
  _BYTE *v18; // rdx
  FLOATL *v19; // rdx
  struct _FD_XFORM *v21; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int16 *v22; // [rsp+38h] [rbp-60h]
  unsigned __int16 *v23; // [rsp+40h] [rbp-58h]
  _QWORD v24[2]; // [rsp+48h] [rbp-50h] BYREF
  __int128 v25; // [rsp+58h] [rbp-40h] BYREF
  FLOATL eYX; // [rsp+B8h] [rbp+20h]

  v7 = a4;
  WidthTable = -1;
  eYX = NAN;
  DCOBJ::DCOBJ((DCOBJ *)v24, a1);
  if ( !(_DWORD)v7 || !v24[0] )
    goto LABEL_41;
  v11 = 0LL;
  v22 = 0LL;
  v12 = 0LL;
  if ( (unsigned int)v7 <= 0x9C4000 )
  {
    v11 = (unsigned __int16 *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
    v22 = v11;
  }
  if ( v11 )
  {
    v13 = 2 * v7;
    v12 = &v11[v7];
    v23 = v12;
    if ( 2 * v7 )
    {
      if ( ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v13] > W32UserProbeAddress || &Src[v13] < Src )
        *W32UserProbeAddress = 0;
    }
    memmove(&v11[v7], Src, v13);
  }
  else
  {
    LODWORD(v7) = 0;
  }
  if ( (_DWORD)v7 )
  {
    v21 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit(&v21, (struct XDCOBJ *)v24, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)&v21[33].eXX);
    if ( !v21 )
      goto LABEL_28;
    eYX = v21[30].eYX;
    if ( LODWORD(v21[21].eXX) >= 0xFFF )
      goto LABEL_28;
    eXX = v21[19].eXX;
    if ( eXX == 0.0 )
    {
      WidthTable = RFONTOBJ::bGetWidthTable((RFONTOBJ *)&v21, (struct XDCOBJ *)v24, a2, v12, v7, v11);
      if ( WidthTable == -1 )
      {
LABEL_28:
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
        goto LABEL_29;
      }
    }
    else
    {
      v15 = 16 * LOWORD(eXX);
      v16 = (unsigned int)v7;
      v17 = v11;
      while ( v16 )
      {
        *v17++ = v15;
        --v16;
      }
      WidthTable = 1;
    }
    if ( !(unsigned int)RFONTOBJ::bGetWidthData((RFONTOBJ *)&v21, (struct _WIDTHDATA *)&v25, (struct XDCOBJ *)v24) )
      WidthTable = -1;
    goto LABEL_28;
  }
LABEL_29:
  if ( WidthTable != -1 )
  {
    ProbeForWrite(Address, 2LL * (unsigned int)v7, 2u);
    memmove((void *)Address, v11, 2LL * (unsigned int)v7);
    if ( a6 )
    {
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = (_BYTE *)a6;
      if ( a6 >= W32UserProbeAddress )
        v18 = (_BYTE *)W32UserProbeAddress;
      *v18 = *v18;
      v18[15] = v18[15];
      *(_OWORD *)a6 = v25;
    }
    v19 = (FLOATL *)a7;
    if ( a7 >= W32UserProbeAddress )
      v19 = (FLOATL *)W32UserProbeAddress;
    *v19 = eYX;
  }
  if ( v11 )
    FreeTmpBuffer(v11);
LABEL_41:
  DCOBJ::~DCOBJ((DCOBJ *)v24);
  return WidthTable;
}
