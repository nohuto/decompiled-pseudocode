/*
 * XREFs of NtGdiGetWidthTable @ 0x1C00F4990
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0017300 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C00328B0 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C00329AC (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtGdiGetWidthTable(
        HDC a1,
        unsigned int a2,
        char *Src,
        unsigned int a4,
        volatile void *Address,
        ULONG64 a6,
        ULONG64 a7)
{
  __int64 v7; // rsi
  unsigned int WidthTable; // r14d
  unsigned __int16 *v11; // rbx
  unsigned __int16 *v12; // rdi
  size_t v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  FLOATL eXX; // edx
  unsigned __int16 v17; // dx
  __int64 v18; // rcx
  unsigned __int16 *v19; // rdi
  _BYTE *v20; // rdx
  FLOATL *v21; // rdx
  struct _FD_XFORM *v23; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int16 *v24; // [rsp+38h] [rbp-60h]
  unsigned __int16 *v25; // [rsp+40h] [rbp-58h]
  _QWORD v26[2]; // [rsp+48h] [rbp-50h] BYREF
  __int128 v27; // [rsp+58h] [rbp-40h] BYREF
  FLOATL eYX; // [rsp+B8h] [rbp+20h]

  v7 = a4;
  WidthTable = -1;
  eYX = NAN;
  DCOBJ::DCOBJ((DCOBJ *)v26, a1);
  if ( !(_DWORD)v7 || !v26[0] )
    goto LABEL_41;
  v11 = 0LL;
  v24 = 0LL;
  v12 = 0LL;
  if ( (unsigned int)v7 <= 0x9C4000 )
  {
    v11 = (unsigned __int16 *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
    v24 = v11;
  }
  if ( v11 )
  {
    v13 = 2 * v7;
    v12 = &v11[v7];
    v25 = v12;
    if ( 2 * v7 )
    {
      if ( ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v13] > MmUserProbeAddress || &Src[v13] < Src )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(&v11[v7], Src, v13);
  }
  else
  {
    LODWORD(v7) = 0;
  }
  if ( (_DWORD)v7 )
  {
    v23 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit(&v23, (struct XDCOBJ *)v26, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)&v23[33].eXX);
    if ( !v23 )
      goto LABEL_28;
    eYX = v23[30].eYX;
    if ( LODWORD(v23[21].eXX) >= 0xFFF )
      goto LABEL_28;
    eXX = v23[19].eXX;
    if ( eXX == 0.0 )
    {
      WidthTable = RFONTOBJ::bGetWidthTable((RFONTOBJ *)&v23, (struct XDCOBJ *)v26, a2, v12, v7, v11);
      if ( WidthTable == -1 )
      {
LABEL_28:
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23, v14, v15);
        goto LABEL_29;
      }
    }
    else
    {
      v17 = 16 * LOWORD(eXX);
      v18 = (unsigned int)v7;
      v19 = v11;
      while ( v18 )
      {
        *v19++ = v17;
        --v18;
      }
      WidthTable = 1;
    }
    if ( !(unsigned int)RFONTOBJ::bGetWidthData((RFONTOBJ *)&v23, (struct _WIDTHDATA *)&v27, (struct XDCOBJ *)v26) )
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
      v20 = (_BYTE *)a6;
      if ( a6 >= MmUserProbeAddress )
        v20 = (_BYTE *)MmUserProbeAddress;
      *v20 = *v20;
      v20[15] = v20[15];
      *(_OWORD *)a6 = v27;
    }
    v21 = (FLOATL *)a7;
    if ( a7 >= MmUserProbeAddress )
      v21 = (FLOATL *)MmUserProbeAddress;
    *v21 = eYX;
  }
  if ( v11 )
    FreeTmpBuffer(v11);
LABEL_41:
  DCOBJ::~DCOBJ((DCOBJ *)v26);
  return WidthTable;
}
