/*
 * XREFs of GreStretchBltInternal @ 0x1C001AF30
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C0019D78 (GreStretchDIBitsInternal.c)
 *     _InternalGetIconInfo @ 0x1C001D404 (_InternalGetIconInfo.c)
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0023600 (NtGdiAlphaBlend.c)
 *     BitBltSysBmp @ 0x1C0082AFC (BitBltSysBmp.c)
 *     BltIcon @ 0x1C009B384 (BltIcon.c)
 *     NtGdiStretchBlt @ 0x1C00FF040 (NtGdiStretchBlt.c)
 *     ?CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z @ 0x1C020CAB8 (-CreateScaledWindowShadowFromDIB@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@J@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C0251B40 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0002190 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     bCvtPts1 @ 0x1C000F444 (bCvtPts1.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0018340 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C001B860 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C001B97C (--1BLTRECORD@@QEAA@XZ.c)
 *     ?bEqualExtents@BLTRECORD@@QEAAHXZ @ 0x1C001BC50 (-bEqualExtents@BLTRECORD@@QEAAHXZ.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C001BC9C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C001C124 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001C7A8 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001CDEC (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     NtGdiPatBlt @ 0x1C001D870 (NtGdiPatBlt.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0020A2C (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0020A9C (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0021030 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0021E50 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0022CE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BE58 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002D4A0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreMovePointer @ 0x1C008AF20 (GreMovePointer.c)
 *     ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C011178C (--0UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     ??1UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C01117D4 (--1UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0252EE8 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C026C5A4 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 */

__int64 __fastcall GreStretchBltInternal(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  unsigned int v13; // ebx
  unsigned int v17; // r10d
  int v18; // eax
  char v19; // r15
  int v20; // r15d
  DC *v21; // rcx
  __int64 v22; // rdx
  int v23; // r8d
  int v24; // r9d
  int valid; // eax
  DC *v26; // r8
  __int64 *v27; // rbx
  struct SURFACE *v28; // rbx
  struct SURFACE *v29; // rcx
  DC *v30; // r9
  __int64 v31; // rbx
  SURFACE *v32; // r8
  __int64 v33; // rsi
  SURFACE *v34; // r10
  struct SURFACE *v35; // r14
  __int64 v36; // rbx
  struct SURFACE *v37; // rax
  struct SURFACE *v38; // rax
  int v39; // edx
  __int64 v40; // r9
  __int64 v41; // r11
  unsigned int v42; // edi
  unsigned __int8 v43; // r9
  unsigned int v44; // eax
  unsigned int v45; // edi
  __int64 *v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rbx
  int v50; // edi
  __int64 v51; // rdx
  int v52; // edi
  DC *v53; // r8
  __int64 v54; // rcx
  SURFACE *v55; // rax
  DC *v56; // rcx
  DC *v57; // r8
  __int64 v58; // rcx
  ULONG v59; // ecx
  __int64 v60; // rbx
  unsigned int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // r11
  __int64 v64; // r8
  int v65; // edx
  DC *v66; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v67; // [rsp+68h] [rbp-98h]
  unsigned int v68; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v69; // [rsp+78h] [rbp-88h] BYREF
  __int64 v70; // [rsp+80h] [rbp-80h]
  int v71; // [rsp+88h] [rbp-78h]
  int v72; // [rsp+8Ch] [rbp-74h]
  int v73; // [rsp+90h] [rbp-70h]
  unsigned int v74; // [rsp+94h] [rbp-6Ch]
  unsigned int v75; // [rsp+98h] [rbp-68h]
  SURFACE *v76; // [rsp+A0h] [rbp-60h]
  _BYTE v77[24]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v78[176]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v79; // [rsp+170h] [rbp+70h] BYREF
  int v80; // [rsp+178h] [rbp+78h]
  int v81; // [rsp+17Ch] [rbp+7Ch]
  struct _POINTFIX v82[2]; // [rsp+180h] [rbp+80h] BYREF
  unsigned __int64 v83; // [rsp+190h] [rbp+90h] BYREF
  __int64 v84; // [rsp+1A0h] [rbp+A0h]
  __int64 v85; // [rsp+1A8h] [rbp+A8h]
  __int64 v86; // [rsp+1B0h] [rbp+B0h]
  __int64 v87; // [rsp+1B8h] [rbp+B8h]
  struct SURFACE *v88; // [rsp+1C0h] [rbp+C0h]
  struct SURFACE *v89; // [rsp+1C8h] [rbp+C8h]
  __int64 v90; // [rsp+1D0h] [rbp+D0h]
  _BYTE v91[8]; // [rsp+1D8h] [rbp+D8h] BYREF
  char *v92; // [rsp+1E0h] [rbp+E0h]
  _DWORD v93[6]; // [rsp+218h] [rbp+118h] BYREF
  _DWORD v94[8]; // [rsp+230h] [rbp+130h] BYREF
  __int64 v95; // [rsp+250h] [rbp+150h]
  unsigned int v96; // [rsp+258h] [rbp+158h]
  int v97; // [rsp+25Ch] [rbp+15Ch]

  v13 = a11 & 0x7FFFFFFF;
  v71 = a4;
  v90 = 0LL;
  v73 = a5;
  v97 = 0;
  v68 = 0;
  v72 = 0;
  if ( (a11 & 0x40000000) != 0 )
  {
    v72 = 1;
    v13 = a11 & 0x3FFFFFFF;
  }
  v17 = ((v13 >> 8) | v13 & 0xFF0000) >> 8;
  v96 = v17;
  v18 = (unsigned __int8)gajRop3[(unsigned __int16)(v13 >> 8) >> 8];
  v19 = v18 | gajRop3[BYTE1(v17)];
  v75 = v18 | (unsigned __int8)gajRop3[BYTE1(v17)];
  v20 = v19 & 0xD4;
  if ( !v20 && (unsigned __int8)v17 == BYTE1(v17) )
  {
    v45 = NtGdiPatBlt(a1, a5, v13);
    goto LABEL_67;
  }
  v66 = 0LL;
  v67 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v66, a1);
  if ( ((gajRop3[(unsigned __int8)v13] | gajRop3[BYTE1(v13)]) & 2) != 0 && v13 != 16711778 && v13 != 66 )
    bSpDwmValidateSurface((struct XDCOBJ *)&v66, a2, a3, v71, v73);
  v69 = 0LL;
  v70 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v69, a6);
  bSpDwmValidateSurface((struct XDCOBJ *)&v69, a7, a8, a9, a10);
  v21 = v66;
  if ( !v66 )
    goto LABEL_127;
  if ( (*((_DWORD *)v66 + 9) & 0x10000) == 0 )
  {
    v22 = *((_QWORD *)v66 + 10);
    if ( (*(_DWORD *)(v22 + 8) & 0x1000) != 0 )
    {
      GreDCSelectBrush(v66, *(_QWORD *)(v22 + 16));
      v21 = v66;
    }
  }
  if ( !v21 || (*((_DWORD *)v21 + 9) & 0x10000) != 0 || !v69 && v20 )
  {
LABEL_127:
    EngSetLastError(6u);
    v46 = v69;
    v45 = !v20 || v69;
    goto LABEL_61;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v78);
  if ( v20 )
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v78, (struct XDCOBJ *)&v66, (struct XDCOBJ *)&v69, v24);
  else
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v78, (struct XDCOBJ *)&v66, v23);
  if ( (v78[72] & 1) == 0 )
  {
    v59 = 8;
    goto LABEL_121;
  }
  valid = XDCOBJ::bValidSurf((XDCOBJ *)&v66);
  v26 = v66;
  v27 = v69;
  if ( !valid || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)&v69) || (*(_DWORD *)(v27[64] + 112) & 0x10000000) != 0 )
  {
    if ( !*((_QWORD *)v26 + 64) || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)&v69) )
    {
      if ( (*((_DWORD *)v26 + 9) & 0xE0) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v77, (struct XDCOBJ *)&v66, 0x204u);
        v79 = __PAIR64__(a3, a2);
        v80 = a2 + v71;
        v81 = a3 + v73;
        if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v77, (struct ERECTL *)&v79) )
        {
          ERECTL::vOrder((ERECTL *)&v79);
          XDCOBJ::vAccumulate((XDCOBJ *)&v66, (struct ERECTL *)&v79);
        }
      }
      v45 = 1;
      goto LABEL_60;
    }
    if ( (*((_DWORD *)v27 + 9) & 1) == 0 )
      goto LABEL_122;
  }
  if ( v20 )
  {
    v28 = (struct SURFACE *)v27[64];
    if ( !v28 )
      v28 = SURFACE::pdibDefault;
    if ( *((_DWORD *)v28 + 148) && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *((_DWORD *)v28 + 148)
      || !(unsigned int)_SurfaceAccessCheck(v28) )
    {
      goto LABEL_120;
    }
    v26 = v66;
  }
  v29 = (struct SURFACE *)*((_QWORD *)v26 + 64);
  if ( !v29 )
    v29 = SURFACE::pdibDefault;
  if ( !(unsigned int)DestSurfaceAccessCheck(v29) )
  {
LABEL_120:
    v59 = 5;
    goto LABEL_121;
  }
  if ( (unsigned __int8)v96 == BYTE1(v96) )
  {
    v30 = v66;
    if ( (a11 < 0 && (v31 = *((_QWORD *)v66 + 10), (*(_DWORD *)(v31 + 312) & 1) != 0)
       || (v31 = *((_QWORD *)v66 + 10), (*(_BYTE *)(v31 + 312) & 9) == 9))
      && a6 != a1 )
    {
      v60 = *(_QWORD *)(v31 + 320);
      v61 = DC::dwSetLayout(v66, -1, 0);
      v30 = v66;
      a2 = v60 - v71 - a2;
      v68 = v61;
      v74 = 0x80000000;
    }
    else
    {
      v74 = 0;
    }
    v32 = (SURFACE *)*((_QWORD *)v30 + 64);
    v33 = 0LL;
    if ( v32 )
      v76 = (SURFACE *)*((_QWORD *)v30 + 64);
    else
      v76 = SURFACE::pdibDefault;
    v34 = (SURFACE *)v69[64];
    if ( v34 )
      v35 = (struct SURFACE *)v69[64];
    else
      v35 = SURFACE::pdibDefault;
    v36 = *((_QWORD *)v35 + 6);
    if ( !v72 )
      goto LABEL_36;
    v50 = *((_DWORD *)v69 + 9);
    if ( (v50 & 1) == 0
      || (v51 = v69[6], (*(_DWORD *)(v51 + 32) & 0x80u) != 0)
      || v51 != *((_QWORD *)v30 + 6)
      && (!(unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v66) || v62 != *(_QWORD *)(v63 + 3536))
      || !v36 )
    {
      v72 = 0;
      goto LABEL_36;
    }
    if ( v20 && (v50 & 0x4000) != 0 && v34 != v32 )
    {
      SURFACE::bUnMap(v34, 0LL, 0LL);
      v30 = v66;
    }
    if ( (*((_DWORD *)v30 + 9) & 0x4000) != 0 )
      SURFACE::bUnMap(*((SURFACE **)v30 + 64), 0LL, v30);
    GreAcquireSemaphore(*(_QWORD *)(v36 + 48));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoSrc.hsemPointer()", *(_QWORD *)(v36 + 48), 4LL);
    v79 = *(_QWORD *)(v36 + 56);
    UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v77);
    if ( (a13 & 2) == 0 || !gbForceSoftwareCursor )
      GreMovePointer(*((HDEV *)v35 + 6), -1, -1, 0);
    SURFACE::vSetIncludeSprites(v76);
    v52 = 0;
    if ( v20 && (*((_DWORD *)v69 + 9) & 0x4000) != 0 )
    {
      v53 = v66;
      v54 = v69[64];
      if ( v54 == *((_QWORD *)v66 + 64) )
      {
LABEL_92:
        if ( (*((_DWORD *)v53 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v53 + 64), 0LL, v53) == 2 )
        {
          v52 = 1;
          *((_DWORD *)v66 + 11) |= 1u;
        }
        UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v77);
        if ( v52 )
        {
          v45 = v75;
          goto LABEL_57;
        }
LABEL_36:
        EXFORMOBJ::vInit((EXFORMOBJ *)v82, (struct XDCOBJ *)&v66, 0x204u, 0);
        v37 = (struct SURFACE *)*((_QWORD *)v66 + 64);
        if ( !v37 )
          v37 = SURFACE::pdibDefault;
        v88 = v37;
        v84 = *((_QWORD *)v37 + 16);
        v85 = *((_QWORD *)v66 + 12);
        EXFORMOBJ::vInit((EXFORMOBJ *)&v83, (struct XDCOBJ *)&v69, 0x204u, 0);
        v38 = (struct SURFACE *)v69[64];
        if ( !v38 )
          v38 = SURFACE::pdibDefault;
        v39 = a12;
        v89 = v38;
        v40 = *((_QWORD *)v38 + 16);
        v86 = v40;
        v41 = v69[12];
        v87 = v41;
        if ( a12 == -1 )
          v39 = *(_DWORD *)(v69[10] + 36);
        if ( (a13 & 1) != 0 )
          v33 = *(_QWORD *)(*((_QWORD *)v66 + 10) + 112LL);
        if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                              v91,
                              v33,
                              *((unsigned int *)v66 + 28),
                              v40,
                              v84,
                              v41,
                              v85,
                              *(_DWORD *)(*((_QWORD *)v66 + 10) + 40LL),
                              *(_DWORD *)(*((_QWORD *)v66 + 10) + 32LL),
                              v39,
                              0) )
          goto LABEL_153;
        v42 = v75;
        v97 |= 2u;
        if ( (v75 & 0xE8) != 0 )
        {
          v92 = (char *)v66 + 1600;
          v64 = *((_QWORD *)v66 + 10);
          v65 = *(_DWORD *)(v64 + 8);
          if ( (v65 & 1) != 0 || (*((_DWORD *)v66 + 83) & 1) != 0 )
          {
            *(_DWORD *)(v64 + 8) = v65 & 0xFFFFFFFE;
            *((_DWORD *)v66 + 83) &= ~1u;
            EBRUSHOBJ::vInitBrush(v92, v66, *((_QWORD *)v66 + 18), v85, v84, v88, 1);
          }
          v95 = *((_QWORD *)v66 + 199);
        }
        else
        {
          v92 = 0LL;
        }
        v90 = 0LL;
        if ( (*(_DWORD *)(v83 + 32) & 1) == 0
          || (v94[0] = a7, v94[2] = a9 + a7, v94[1] = a8, v94[3] = a8 + a10, (*(_BYTE *)(v83 + 32) & 0x43) != 0x43)
          && !(unsigned int)bCvtPts1(v83, v94, 2LL) )
        {
LABEL_152:
          EngSetLastError(0x57u);
LABEL_153:
          v45 = 0;
LABEL_57:
          if ( v74 )
            DC::dwSetLayout(v66, -1, v68);
          if ( !v72 )
            goto LABEL_60;
          SURFACE::vClearIncludeSprites(v76);
          if ( v20 && (*((_DWORD *)v69 + 9) & 0x4000) != 0 )
          {
            v55 = (SURFACE *)v69[64];
            v56 = v66;
            if ( v55 == *((SURFACE **)v66 + 64) )
              goto LABEL_100;
            SURFACE::bUnMap(v55, 0LL, 0LL);
          }
          v56 = v66;
LABEL_100:
          if ( (*((_DWORD *)v56 + 9) & 0x4000) != 0 )
            SURFACE::bUnMap(*((SURFACE **)v56 + 64), 0LL, v56);
          UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v77);
          if ( (a13 & 2) == 0 || !gbForceSoftwareCursor )
            GreMovePointer(*((HDEV *)v35 + 6), v79, HIDWORD(v79), 0);
          EtwTraceGreLockReleaseSemaphore(L"pdoSrc.hsemPointer()", *(_QWORD *)(v36 + 48));
          GreReleaseSemaphoreInternal(*(_QWORD *)(v36 + 48));
          if ( v20 && (*((_DWORD *)v69 + 9) & 0x4000) != 0 )
          {
            v57 = v66;
            v58 = v69[64];
            if ( v58 == *((_QWORD *)v66 + 64) )
              goto LABEL_110;
            if ( (unsigned int)SURFACE::Map(v58, 0LL, 0LL) == 2 )
              *((_DWORD *)v69 + 11) |= 1u;
          }
          v57 = v66;
LABEL_110:
          if ( (*((_DWORD *)v57 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::Map(*((_QWORD *)v57 + 64), 0LL, v57) == 2 )
            *((_DWORD *)v66 + 11) |= 1u;
          UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v77);
          goto LABEL_60;
        }
        if ( v20 && ERECTL::bEmpty((ERECTL *)v94) )
        {
          v45 = 1;
          goto LABEL_57;
        }
        if ( (*(_DWORD *)(*(_QWORD *)v82 + 32LL) & 1) != 0 )
        {
          v93[0] = a2;
          v93[2] = a2 + v71;
          v93[1] = a3;
          v93[3] = a3 + v73;
          if ( (*(_BYTE *)(*(_QWORD *)v82 + 32LL) & 0x43) != 0x43 && !(unsigned int)bCvtPts1(*(_QWORD *)v82, v93, 2LL) )
            goto LABEL_152;
          v43 = *(_BYTE *)(*((_QWORD *)v66 + 10) + 75LL);
          if ( v43 == 4 || !(unsigned int)BLTRECORD::bEqualExtents((BLTRECORD *)v82) )
            v44 = BLTRECORD::bStretch((BLTRECORD *)v82, (struct DCOBJ *)&v66, (struct DCOBJ *)&v69, v42, v43);
          else
            v44 = BLTRECORD::bBitBlt((BLTRECORD *)v82, (struct DCOBJ *)&v66, (struct DCOBJ *)&v69, v42);
        }
        else
        {
          BLTRECORD::TrgPlg((BLTRECORD *)v82, a2, a3, v71, v73);
          v44 = BLTRECORD::bRotate(
                  v82,
                  (struct DCOBJ *)&v66,
                  (struct DCOBJ *)&v69,
                  v42,
                  *(_BYTE *)(*((_QWORD *)v66 + 10) + 75LL));
        }
        v45 = v44;
        goto LABEL_57;
      }
      if ( (unsigned int)SURFACE::Map(v54, 0LL, 0LL) == 2 )
      {
        v52 = 1;
        *((_DWORD *)v69 + 11) |= 1u;
      }
    }
    v53 = v66;
    goto LABEL_92;
  }
  v59 = 87;
LABEL_121:
  EngSetLastError(v59);
LABEL_122:
  v45 = 0;
LABEL_60:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v78);
  v46 = v69;
LABEL_61:
  if ( v46 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v69);
    v68 = 0;
    v47 = *v69;
    HmgDecrementExclusiveReferenceCountEx(v69, HIDWORD(v70), &v68);
    if ( v68 )
      bDeleteDCInternalEx(v47, 0LL);
  }
  if ( v66 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v66);
    v68 = 0;
    v48 = *(_QWORD *)v66;
    HmgDecrementExclusiveReferenceCountEx(v66, HIDWORD(v67), &v68);
    if ( v68 )
      bDeleteDCInternalEx(v48, 0LL);
  }
LABEL_67:
  BLTRECORD::~BLTRECORD((BLTRECORD *)v82);
  return v45;
}
