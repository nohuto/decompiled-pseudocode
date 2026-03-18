/*
 * XREFs of ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0274058
 * Callers:
 *     NtGdiGetStringBitmapW @ 0x1C0274E70 (NtGdiGetStringBitmapW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C0142F68 (--1ESTROBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     vStringBitmapTextOut @ 0x1C0144D08 (vStringBitmapTextOut.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C0282DEC (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1C029758C (-vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
 */

__int64 __fastcall GreGetStringBitmapW(
        HDC a1,
        unsigned __int16 *a2,
        __int64 a3,
        struct STRINGBITMAP *a4,
        unsigned int a5)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 eXY_low; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // esi
  __int64 v13; // rcx
  int v14; // ebx
  unsigned int v15; // r15d
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  bool v19; // zf
  int v20; // esi
  _DWORD *v21; // rbx
  __int64 v22; // r8
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // rax
  int v27; // [rsp+28h] [rbp-D8h]
  int v28; // [rsp+30h] [rbp-D0h]
  void *v29; // [rsp+38h] [rbp-C8h]
  struct _FD_XFORM *v30; // [rsp+40h] [rbp-C0h] BYREF
  struct _POINTL v31; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v32; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v33[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v36[4]; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+90h] [rbp-70h]
  int v38; // [rsp+94h] [rbp-6Ch]
  int v39; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  int v41; // [rsp+B0h] [rbp-50h]
  _QWORD *v42; // [rsp+B8h] [rbp-48h]
  int v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  int *v45; // [rsp+158h] [rbp+58h]
  int v46; // [rsp+170h] [rbp+70h]

  DCOBJ::DCOBJ((DCOBJ *)v33, a1);
  if ( !v33[0] )
  {
    EngSetLastError(6u);
LABEL_4:
    v7 = 0;
    goto LABEL_37;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v35, (struct XDCOBJ *)v33, 516);
  if ( (*(_BYTE *)(v35 + 32) & 0x43) != 0x43 )
    goto LABEL_4;
  v30 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit(&v30, (struct XDCOBJ *)v33, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)&v30[33].eXX);
  if ( !v30
    || (LODWORD(v30[4].eYX) & 2) != 0
    || (eXY_low = LODWORD(v30[24].eXY), (unsigned int)eXY_low | *(_DWORD *)(v33[0] + 2188LL)) )
  {
    v7 = 0;
    goto LABEL_36;
  }
  v43 = 0;
  ESTROBJ::vInitSimple((ESTROBJ *)v36, a2, eXY_low, (struct XDCOBJ *)v33, (struct RFONTOBJ *)&v30, v27, v28, v29);
  if ( (v43 & 4) != 0 )
  {
    v10 = v44;
    v12 = v39 - v37;
    v13 = *(_QWORD *)(v44 + 24LL * (unsigned int)(v36[0] - 1) + 8);
    v14 = v38
        + (*(int *)(*(_QWORD *)(v44 + 8) + 16LL) >> 4)
        + ((*(_DWORD *)(v13 + 12) - *(_DWORD *)(v13 + 20)) >> 4)
        - v36[3];
    v15 = (unsigned int)(v14 + 7) >> 3;
    v16 = (v39 - v37) * v15;
    v7 = v16 + 8;
    if ( a5 < v16 + 8 )
      goto LABEL_33;
    memset((char *)a4 + 8, 0, v16);
    v19 = (v43 & 0x1400) == 0;
    *((_DWORD *)a4 + 1) = v12;
    v20 = 0;
    *(_DWORD *)a4 = v14;
    v21 = 0LL;
    v31 = 0LL;
    if ( !v19 )
    {
      v20 = *v45;
      if ( *v45 )
      {
        switch ( *v45 )
        {
          case 1:
            v21 = *(_DWORD **)&v30[45].eYX;
            break;
          case 2:
            v21 = *(_DWORD **)&v30[46].eXX;
            break;
          case 3:
            v21 = *(_DWORD **)&v30[46].eYX;
            break;
          default:
            v17 = (unsigned int)(v20 - 4);
            v21 = *(_DWORD **)(*(_QWORD *)&v30[47].eXX + 8 * v17);
            break;
        }
        if ( v21 )
        {
          v22 = LODWORD(v30[19].eXY);
          v23 = (unsigned int)v21[77];
          v24 = v21[78];
          if ( (int)v22 < v21[77] - v24 )
            v24 = v23 - v22;
          v25 = v40;
          v31.y = v24 >> 4;
          v34 = 0LL;
          if ( v24 >> 4 )
            v25 = 0LL;
          v40 = v25;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v34, v23, v22);
        }
      }
    }
    v46 = v20;
    v41 = 0;
    v32 = v21;
    if ( v21 )
    {
      if ( (v21[18] & 2) != 0 )
      {
        v7 = 0;
        goto LABEL_32;
      }
      v42 = &v32;
    }
    ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)v36, &v31);
    vStringBitmapTextOut((__int64)v36, a4, v15);
LABEL_32:
    v32 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32, v17, v18);
    goto LABEL_33;
  }
  v7 = 0;
LABEL_33:
  ESTROBJ::~ESTROBJ((ESTROBJ *)v36, v10, v11);
LABEL_36:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v30, v8, eXY_low);
LABEL_37:
  if ( v33[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v33);
  return v7;
}
