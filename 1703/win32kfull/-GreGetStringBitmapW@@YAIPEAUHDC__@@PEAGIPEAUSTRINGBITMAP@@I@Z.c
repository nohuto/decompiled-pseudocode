/*
 * XREFs of ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C027768C
 * Callers:
 *     NtGdiGetStringBitmapW @ 0x1C02784A0 (NtGdiGetStringBitmapW.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C013C23C (--1ESTROBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     vStringBitmapTextOut @ 0x1C013ED24 (vStringBitmapTextOut.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C028629C (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1C029AE38 (-vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
 */

__int64 __fastcall GreGetStringBitmapW(
        HDC a1,
        unsigned __int16 *a2,
        __int64 a3,
        struct STRINGBITMAP *a4,
        unsigned int a5)
{
  unsigned int v7; // edi
  int eXY_low; // r8d
  int v9; // esi
  __int64 v10; // rcx
  int v11; // ebx
  unsigned int v12; // r15d
  unsigned int v13; // eax
  bool v14; // zf
  int v15; // esi
  _DWORD *v16; // rbx
  FLOATL eXY; // r8d
  int v18; // ecx
  __int64 v19; // rax
  int v21; // [rsp+28h] [rbp-D8h]
  int v22; // [rsp+30h] [rbp-D0h]
  void *v23; // [rsp+38h] [rbp-C8h]
  struct _FD_XFORM *v24; // [rsp+40h] [rbp-C0h] BYREF
  struct _POINTL v25; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v26; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v27[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v30[4]; // [rsp+80h] [rbp-80h] BYREF
  int v31; // [rsp+90h] [rbp-70h]
  int v32; // [rsp+94h] [rbp-6Ch]
  int v33; // [rsp+98h] [rbp-68h]
  __int64 v34; // [rsp+A0h] [rbp-60h]
  int v35; // [rsp+B0h] [rbp-50h]
  _QWORD *v36; // [rsp+B8h] [rbp-48h]
  int v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  int *v39; // [rsp+158h] [rbp+58h]
  int v40; // [rsp+170h] [rbp+70h]

  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  if ( v27[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v29, (struct XDCOBJ *)v27, 516);
    if ( (*(_BYTE *)(v29 + 32) & 0x43) != 0x43 )
      goto LABEL_4;
    v24 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit(&v24, (struct XDCOBJ *)v27, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)&v24[33].eXX);
    if ( !v24
      || (LODWORD(v24[4].eYX) & 2) != 0
      || (eXY_low = LODWORD(v24[24].eXY), eXY_low | *(_DWORD *)(v27[0] + 2188LL)) )
    {
      v7 = 0;
      goto LABEL_36;
    }
    v37 = 0;
    ESTROBJ::vInitSimple((ESTROBJ *)v30, a2, eXY_low, (struct XDCOBJ *)v27, (struct RFONTOBJ *)&v24, v21, v22, v23);
    if ( (v37 & 4) == 0 )
    {
      v7 = 0;
LABEL_33:
      ESTROBJ::~ESTROBJ((ESTROBJ *)v30);
LABEL_36:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
      goto LABEL_37;
    }
    v9 = v33 - v31;
    v10 = *(_QWORD *)(v38 + 24LL * (unsigned int)(v30[0] - 1) + 8);
    v11 = v32
        + (*(int *)(*(_QWORD *)(v38 + 8) + 16LL) >> 4)
        + ((*(_DWORD *)(v10 + 12) - *(_DWORD *)(v10 + 20)) >> 4)
        - v30[3];
    v12 = (unsigned int)(v11 + 7) >> 3;
    v13 = (v33 - v31) * v12;
    v7 = v13 + 8;
    if ( a5 < v13 + 8 )
      goto LABEL_33;
    memset((char *)a4 + 8, 0, v13);
    v14 = (v37 & 0x1400) == 0;
    *((_DWORD *)a4 + 1) = v9;
    v15 = 0;
    *(_DWORD *)a4 = v11;
    v16 = 0LL;
    v25 = 0LL;
    if ( !v14 )
    {
      v15 = *v39;
      if ( *v39 )
      {
        if ( *v39 == 1 )
        {
          v16 = *(_DWORD **)&v24[45].eYX;
        }
        else if ( *v39 == 2 )
        {
          v16 = *(_DWORD **)&v24[46].eXX;
        }
        else
        {
          v16 = *v39 == 3
              ? *(_DWORD **)&v24[46].eYX
              : *(_DWORD **)(*(_QWORD *)&v24[47].eXX + 8LL * (unsigned int)(v15 - 4));
        }
        if ( v16 )
        {
          eXY = v24[19].eXY;
          v18 = v16[78];
          if ( SLODWORD(eXY) < v16[77] - v18 )
            v18 = v16[77] - LODWORD(eXY);
          v19 = v34;
          v25.y = v18 >> 4;
          v28 = 0LL;
          if ( v18 >> 4 )
            v19 = 0LL;
          v34 = v19;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
        }
      }
    }
    v40 = v15;
    v35 = 0;
    v26 = v16;
    if ( v16 )
    {
      if ( (v16[18] & 2) != 0 )
      {
        v7 = 0;
        goto LABEL_32;
      }
      v36 = &v26;
    }
    ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)v30, &v25);
    vStringBitmapTextOut((__int64)v30, a4, v12);
LABEL_32:
    v26 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
    goto LABEL_33;
  }
  EngSetLastError(6u);
LABEL_4:
  v7 = 0;
LABEL_37:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v27);
  return v7;
}
