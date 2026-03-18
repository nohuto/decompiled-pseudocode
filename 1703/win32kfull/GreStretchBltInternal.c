/*
 * XREFs of GreStretchBltInternal @ 0x1C0094BA0
 * Callers:
 *     BltIcon @ 0x1C00447E0 (BltIcon.c)
 *     _InternalGetIconInfo @ 0x1C0048770 (_InternalGetIconInfo.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0087620 (NtGdiAlphaBlend.c)
 *     GreStretchDIBitsInternal @ 0x1C0093B84 (GreStretchDIBitsInternal.c)
 *     NtGdiStretchBlt @ 0x1C00F2420 (NtGdiStretchBlt.c)
 *     DxgkEngBltViaGDI @ 0x1C0250100 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0071CC8 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0071D38 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0071F50 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0072C4C (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0074BF8 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0074C40 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00762B0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     bCvtPts1 @ 0x1C0084E98 (bCvtPts1.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0086EE0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiPatBlt @ 0x1C00903D0 (NtGdiPatBlt.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0093064 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00936C4 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00954C4 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C009559C (--1BLTRECORD@@QEAA@XZ.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0095864 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEAAHXZ @ 0x1C0095CE8 (-bEqualExtents@BLTRECORD@@QEAAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0095D34 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     GreMovePointer @ 0x1C00BC9F0 (GreMovePointer.c)
 *     ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C0108590 (--0UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     ??1UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1C01085D8 (--1UNDORENDERLOCKCOUNTS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C02513F8 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C026BB04 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C026FE6C (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
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
  int v15; // r14d
  unsigned int v17; // r10d
  int v18; // eax
  char v19; // si
  int v20; // esi
  int v21; // ebx
  DC *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  struct SURFACE *v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  struct SURFACE *v29; // rax
  __int64 v30; // rbx
  int v31; // r15d
  __int64 v32; // r12
  struct SURFACE *v33; // rdi
  DC *v34; // r9
  __int64 v35; // rbx
  struct SURFACE *v36; // rax
  int v37; // edx
  __int64 v38; // r9
  __int64 v39; // r11
  unsigned int v40; // edi
  unsigned __int8 v41; // r9
  unsigned int v42; // eax
  unsigned int v43; // edi
  DC *v44; // rax
  bool v46; // zf
  DC *v47; // r8
  int v48; // r11d
  __int64 v49; // rdx
  SURFACE *v50; // rcx
  int v51; // edi
  DC *v52; // r8
  __int64 v53; // rcx
  SURFACE *v54; // rax
  DC *v55; // rcx
  DC *v56; // r8
  __int64 v57; // rcx
  DC *v58; // rdx
  __int64 v59; // r8
  ULONG v60; // ecx
  __int64 v61; // rbx
  unsigned int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // r10
  __int64 v65; // r8
  int v66; // edx
  DC *v67[2]; // [rsp+60h] [rbp-A0h] BYREF
  DC *v68[2]; // [rsp+70h] [rbp-90h] BYREF
  int v69; // [rsp+80h] [rbp-80h]
  int v70; // [rsp+84h] [rbp-7Ch]
  int v71[2]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v72; // [rsp+98h] [rbp-68h]
  unsigned int v73; // [rsp+9Ch] [rbp-64h]
  unsigned int v74; // [rsp+A0h] [rbp-60h]
  _QWORD v75[2]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v76[24]; // [rsp+B8h] [rbp-48h] BYREF
  HDC v77[9]; // [rsp+D0h] [rbp-30h] BYREF
  char v78; // [rsp+118h] [rbp+18h]
  unsigned __int64 v79; // [rsp+180h] [rbp+80h] BYREF
  int v80; // [rsp+188h] [rbp+88h]
  int v81; // [rsp+18Ch] [rbp+8Ch]
  unsigned __int64 v82[2]; // [rsp+190h] [rbp+90h] BYREF
  unsigned __int64 v83; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v84; // [rsp+1B0h] [rbp+B0h]
  __int64 v85; // [rsp+1B8h] [rbp+B8h]
  __int64 v86; // [rsp+1C0h] [rbp+C0h]
  __int64 v87; // [rsp+1C8h] [rbp+C8h]
  struct SURFACE *v88; // [rsp+1D0h] [rbp+D0h]
  struct SURFACE *v89; // [rsp+1D8h] [rbp+D8h]
  __int64 v90; // [rsp+1E0h] [rbp+E0h]
  __int64 v91; // [rsp+1E8h] [rbp+E8h] BYREF
  char *v92; // [rsp+1F0h] [rbp+F0h]
  _DWORD v93[6]; // [rsp+228h] [rbp+128h] BYREF
  _DWORD v94[8]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v95; // [rsp+260h] [rbp+160h]
  unsigned int v96; // [rsp+268h] [rbp+168h]
  int v97; // [rsp+26Ch] [rbp+16Ch]

  v13 = a11 & 0x7FFFFFFF;
  v71[0] = a4;
  v90 = 0LL;
  v15 = a2;
  v70 = a5;
  v97 = 0;
  v73 = 0;
  v69 = 0;
  if ( (a11 & 0x40000000) != 0 )
  {
    v69 = 1;
    v13 = a11 & 0x3FFFFFFF;
  }
  v17 = ((v13 >> 8) | v13 & 0xFF0000) >> 8;
  v96 = v17;
  v18 = (unsigned __int8)gajRop3[(unsigned __int16)(v13 >> 8) >> 8];
  v19 = v18 | gajRop3[BYTE1(v17)];
  v74 = v18 | (unsigned __int8)gajRop3[BYTE1(v17)];
  v20 = v19 & 0xD4;
  if ( !v20 && (unsigned __int8)v17 == BYTE1(v17) )
  {
    v43 = NtGdiPatBlt(a1, a2, a3, a4, a5, v13);
    goto LABEL_53;
  }
  v67[0] = 0LL;
  v67[1] = 0LL;
  XDCOBJ::vLock(v67, a1);
  if ( ((gajRop3[(unsigned __int8)v13] | gajRop3[BYTE1(v13)]) & 2) == 0 || v13 == 16711778 )
  {
    v21 = v71[0];
  }
  else
  {
    v46 = v13 == 66;
    v21 = v71[0];
    if ( !v46 )
      bSpDwmValidateSurface((struct XDCOBJ *)v67, v15, a3, v71[0], v70);
  }
  v68[0] = 0LL;
  v68[1] = 0LL;
  XDCOBJ::vLock(v68, a6);
  bSpDwmValidateSurface((struct XDCOBJ *)v68, a7, a8, a9, a10);
  v22 = v67[0];
  if ( !v67[0] )
    goto LABEL_115;
  if ( (*((_DWORD *)v67[0] + 9) & 0x10000) == 0 )
  {
    v23 = *((_QWORD *)v67[0] + 10);
    if ( (*(_DWORD *)(v23 + 8) & 0x1000) != 0 )
    {
      GreDCSelectBrush(v67[0], *(_QWORD *)(v23 + 16));
      v22 = v67[0];
    }
  }
  if ( !v22 || (*((_DWORD *)v22 + 9) & 0x10000) != 0 || !v68[0] && v20 )
  {
LABEL_115:
    EngSetLastError(6u);
    v44 = v68[0];
    v43 = !v20 || v68[0];
    goto LABEL_49;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v77);
  if ( v20 )
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v77, (struct XDCOBJ *)v67, (struct XDCOBJ *)v68);
  else
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v77, v67);
  if ( (v78 & 1) != 0 )
  {
    if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v67)
      || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v68)
      || (*(_DWORD *)(*(_QWORD *)(v24 + 512) + 112LL) & 0x10000000) != 0 )
    {
      v58 = v67[0];
      if ( !*((_QWORD *)v67[0] + 64) || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v68) )
      {
        if ( (*((_DWORD *)v58 + 9) & 0xE0) != 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v75, (struct XDCOBJ *)v67, 0x204u);
          v79 = __PAIR64__(a3, v15);
          v80 = v21 + v15;
          v81 = a3 + v70;
          if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v75, (struct ERECTL *)&v79) )
          {
            ERECTL::vOrder((ERECTL *)&v79);
            XDCOBJ::vAccumulate((XDCOBJ *)v67, (struct ERECTL *)&v79);
          }
        }
        v43 = 1;
        goto LABEL_48;
      }
      if ( (*(_DWORD *)(v59 + 36) & 1) == 0 )
        goto LABEL_108;
    }
    if ( (!v20
       || ((v26 = XDCOBJ::pSurfaceEff((XDCOBJ *)v68), !*((_DWORD *)v26 + 148))
        || ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) == *((_DWORD *)v26 + 148))
       && (unsigned int)_SurfaceAccessCheck(v26, v25, v27, v28))
      && (v29 = XDCOBJ::pSurfaceEff((XDCOBJ *)v67), (unsigned int)DestSurfaceAccessCheck(v29)) )
    {
      if ( (unsigned __int8)v96 == BYTE1(v96) )
      {
        if ( (a11 < 0 && (v30 = *((_QWORD *)v67[0] + 10), (*(_DWORD *)(v30 + 312) & 1) != 0)
           || (v30 = *((_QWORD *)v67[0] + 10), (*(_BYTE *)(v30 + 312) & 9) == 9))
          && a6 != a1 )
        {
          v61 = *(_QWORD *)(v30 + 320);
          v62 = DC::dwSetLayout(v67[0], -1, 0);
          v31 = v71[0];
          v15 = v61 - v71[0] - v15;
          v73 = v62;
          v72 = 0x80000000;
        }
        else
        {
          v72 = 0;
          v31 = v71[0];
        }
        v32 = 0LL;
        *(_QWORD *)v71 = XDCOBJ::pSurfaceEff((XDCOBJ *)v67);
        v33 = XDCOBJ::pSurfaceEff((XDCOBJ *)v68);
        v79 = (unsigned __int64)v33;
        v35 = *((_QWORD *)v33 + 6);
        if ( !v69 )
          goto LABEL_28;
        v47 = v68[0];
        v48 = *((_DWORD *)v68[0] + 9);
        if ( (v48 & 1) == 0
          || (v49 = *((_QWORD *)v68[0] + 6), (*(_DWORD *)(v49 + 32) & 0x80u) != 0)
          || v49 != *((_QWORD *)v34 + 6)
          && (!(unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v67) || v63 != *(_QWORD *)(v64 + 3536))
          || !v35 )
        {
          v69 = 0;
          goto LABEL_28;
        }
        if ( v20 )
        {
          if ( (v48 & 0x4000) != 0 )
          {
            v50 = (SURFACE *)*((_QWORD *)v47 + 64);
            if ( v50 != *((SURFACE **)v34 + 64) )
            {
              SURFACE::bUnMap(v50, 0LL, 0LL);
              v34 = v67[0];
            }
          }
        }
        if ( (*((_DWORD *)v34 + 9) & 0x4000) != 0 )
          SURFACE::bUnMap(*((SURFACE **)v34 + 64), 0LL, v34);
        GreAcquireSemaphore(*(_QWORD *)(v35 + 48));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoSrc.hsemPointer()", *(_QWORD *)(v35 + 48), 4LL);
        v75[0] = *(_QWORD *)(v35 + 56);
        UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v76);
        if ( (a13 & 2) == 0 || !gbForceSoftwareCursor )
          GreMovePointer(*((HDEV *)v33 + 6), -1, -1, 0);
        SURFACE::vSetIncludeSprites(*(SURFACE **)v71);
        v51 = 0;
        if ( v20 && (*((_DWORD *)v68[0] + 9) & 0x4000) != 0 )
        {
          v52 = v67[0];
          v53 = *((_QWORD *)v68[0] + 64);
          if ( v53 == *((_QWORD *)v67[0] + 64) )
          {
LABEL_78:
            if ( (*((_DWORD *)v52 + 9) & 0x4000) != 0
              && (unsigned int)SURFACE::Map(*((_QWORD *)v52 + 64), 0LL, v52) == 2 )
            {
              v51 = 1;
              *((_DWORD *)v67[0] + 11) |= 1u;
            }
            UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v76);
            if ( v51 )
            {
              v43 = v74;
              goto LABEL_45;
            }
LABEL_28:
            EXFORMOBJ::vInit((EXFORMOBJ *)v82, (struct XDCOBJ *)v67, 0x204u, 0);
            v88 = XDCOBJ::pSurfaceEff((XDCOBJ *)v67);
            v84 = *((_QWORD *)v88 + 16);
            v85 = *((_QWORD *)v67[0] + 12);
            EXFORMOBJ::vInit((EXFORMOBJ *)&v83, (struct XDCOBJ *)v68, 0x204u, 0);
            v36 = XDCOBJ::pSurfaceEff((XDCOBJ *)v68);
            v37 = a12;
            v89 = v36;
            v38 = *((_QWORD *)v36 + 16);
            v86 = v38;
            v39 = *((_QWORD *)v68[0] + 12);
            v87 = v39;
            if ( a12 == -1 )
              v37 = *(_DWORD *)(*((_QWORD *)v68[0] + 10) + 36LL);
            if ( (a13 & 1) != 0 )
              v32 = *(_QWORD *)(*((_QWORD *)v67[0] + 10) + 112LL);
            if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                  &v91,
                                  v32,
                                  *((_DWORD *)v67[0] + 28),
                                  v38,
                                  v84,
                                  v39,
                                  v85,
                                  *(_DWORD *)(*((_QWORD *)v67[0] + 10) + 40LL),
                                  *(_DWORD *)(*((_QWORD *)v67[0] + 10) + 32LL),
                                  v37,
                                  0) )
              goto LABEL_139;
            v40 = v74;
            v97 |= 2u;
            if ( (v74 & 0xE8) != 0 )
            {
              v92 = (char *)v67[0] + 1600;
              v65 = *((_QWORD *)v67[0] + 10);
              v66 = *(_DWORD *)(v65 + 8);
              if ( (v66 & 1) != 0 || (*((_DWORD *)v67[0] + 83) & 1) != 0 )
              {
                *(_DWORD *)(v65 + 8) = v66 & 0xFFFFFFFE;
                *((_DWORD *)v67[0] + 83) &= ~1u;
                EBRUSHOBJ::vInitBrush(v92, v67[0], *((_QWORD *)v67[0] + 18), v85, v84, v88, 1);
              }
              v95 = *((_QWORD *)v67[0] + 199);
            }
            else
            {
              v92 = 0LL;
            }
            v90 = 0LL;
            if ( (*(_BYTE *)(v83 + 32) & 1) == 0
              || (v94[0] = a7, v94[2] = a9 + a7, v94[1] = a8, v94[3] = a8 + a10, (*(_BYTE *)(v83 + 32) & 0x43) != 0x43)
              && !(unsigned int)bCvtPts1(v83, v94, 2LL) )
            {
LABEL_138:
              EngSetLastError(0x57u);
LABEL_139:
              v43 = 0;
LABEL_45:
              if ( v72 )
                DC::dwSetLayout(v67[0], -1, v73);
              if ( !v69 )
                goto LABEL_48;
              SURFACE::vClearIncludeSprites(*(SURFACE **)v71);
              if ( v20 && (*((_DWORD *)v68[0] + 9) & 0x4000) != 0 )
              {
                v54 = (SURFACE *)*((_QWORD *)v68[0] + 64);
                v55 = v67[0];
                if ( v54 == *((SURFACE **)v67[0] + 64) )
                  goto LABEL_86;
                SURFACE::bUnMap(v54, 0LL, 0LL);
              }
              v55 = v67[0];
LABEL_86:
              if ( (*((_DWORD *)v55 + 9) & 0x4000) != 0 )
                SURFACE::bUnMap(*((SURFACE **)v55 + 64), 0LL, v55);
              UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v71);
              if ( (a13 & 2) == 0 || !gbForceSoftwareCursor )
                GreMovePointer(*(HDEV *)(v79 + 48), v75[0], HIDWORD(v75[0]), 0);
              EtwTraceGreLockReleaseSemaphore(L"pdoSrc.hsemPointer()", *(_QWORD *)(v35 + 48));
              GreReleaseSemaphoreInternal(*(_QWORD *)(v35 + 48));
              if ( v20 && (*((_DWORD *)v68[0] + 9) & 0x4000) != 0 )
              {
                v56 = v67[0];
                v57 = *((_QWORD *)v68[0] + 64);
                if ( v57 == *((_QWORD *)v67[0] + 64) )
                  goto LABEL_96;
                if ( (unsigned int)SURFACE::Map(v57, 0LL, 0LL) == 2 )
                  *((_DWORD *)v68[0] + 11) |= 1u;
              }
              v56 = v67[0];
LABEL_96:
              if ( (*((_DWORD *)v56 + 9) & 0x4000) != 0
                && (unsigned int)SURFACE::Map(*((_QWORD *)v56 + 64), 0LL, v56) == 2 )
              {
                *((_DWORD *)v67[0] + 11) |= 1u;
              }
              UNDORENDERLOCKCOUNTS::~UNDORENDERLOCKCOUNTS((UNDORENDERLOCKCOUNTS *)v71);
              goto LABEL_48;
            }
            if ( v20 && ERECTL::bEmpty((ERECTL *)v94) )
            {
              v43 = 1;
              goto LABEL_45;
            }
            if ( (*(_BYTE *)(v82[0] + 32) & 1) != 0 )
            {
              v93[0] = v15;
              v93[2] = v31 + v15;
              v93[1] = a3;
              v93[3] = a3 + v70;
              if ( (*(_BYTE *)(v82[0] + 32) & 0x43) != 0x43 && !(unsigned int)bCvtPts1(v82[0], v93, 2LL) )
                goto LABEL_138;
              v41 = *(_BYTE *)(*((_QWORD *)v67[0] + 10) + 75LL);
              if ( v41 == 4 || !(unsigned int)BLTRECORD::bEqualExtents((BLTRECORD *)v82) )
                v42 = BLTRECORD::bStretch((BLTRECORD *)v82, (struct DCOBJ *)v67, (struct DCOBJ *)v68, v40, v41);
              else
                v42 = BLTRECORD::bBitBlt((BLTRECORD *)v82, (struct DCOBJ *)v67, (struct DCOBJ *)v68, v40);
            }
            else
            {
              BLTRECORD::TrgPlg((BLTRECORD *)v82, v15, a3, v31, v70);
              v42 = BLTRECORD::bRotate(
                      (BLTRECORD *)v82,
                      (struct DCOBJ *)v67,
                      (struct DCOBJ *)v68,
                      v40,
                      *(_BYTE *)(*((_QWORD *)v67[0] + 10) + 75LL));
            }
            v43 = v42;
            goto LABEL_45;
          }
          if ( (unsigned int)SURFACE::Map(v53, 0LL, 0LL) == 2 )
          {
            v51 = 1;
            *((_DWORD *)v68[0] + 11) |= 1u;
          }
        }
        v52 = v67[0];
        goto LABEL_78;
      }
      v60 = 87;
    }
    else
    {
      v60 = 5;
    }
  }
  else
  {
    v60 = 8;
  }
  EngSetLastError(v60);
LABEL_108:
  v43 = 0;
LABEL_48:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v77);
  v44 = v68[0];
LABEL_49:
  if ( v44 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v68);
    _InterlockedDecrement((volatile signed __int32 *)v68[0] + 3);
  }
  if ( v67[0] )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v67);
    _InterlockedDecrement((volatile signed __int32 *)v67[0] + 3);
  }
LABEL_53:
  BLTRECORD::~BLTRECORD((BLTRECORD *)v82);
  return v43;
}
