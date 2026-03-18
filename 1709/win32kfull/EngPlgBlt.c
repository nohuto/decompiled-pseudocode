/*
 * XREFs of EngPlgBlt @ 0x1C0002840
 * Callers:
 *     EngPlgBlt @ 0x1C0002840 (EngPlgBlt.c)
 *     NtGdiAlphaBlend @ 0x1C0023600 (NtGdiAlphaBlend.c)
 *     NtGdiTransparentBlt @ 0x1C012CEF0 (NtGdiTransparentBlt.c)
 *     ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C025A5E0 (-SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C026A884 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C026AAFC (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C0278670 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     NtGdiEngPlgBlt @ 0x1C028E6C0 (NtGdiEngPlgBlt.c)
 * Callees:
 *     EngPlgBlt @ 0x1C0002840 (EngPlgBlt.c)
 *     ?vAdvYDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C000450C (-vAdvYDDA@@YAXPEAU_PLGDDA@@@Z.c)
 *     ?lSizeDDA@@YAJPEAU_PLGDDA@@@Z @ 0x1C0004740 (-lSizeDDA@@YAJPEAU_PLGDDA@@@Z.c)
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C0004824 (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0012530 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0018340 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B7CB4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngEraseSurface @ 0x1C00EF080 (EngEraseSurface.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0142F08 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C0142F40 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C01431B4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C01431DC (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

BOOL __stdcall EngPlgBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMsk,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlBrushOrg,
        POINTFIX *pptfx,
        RECTL *prcl,
        POINTL *pptl,
        ULONG iMode)
{
  __int64 v13; // rsi
  __int64 v14; // rax
  BOOL v15; // ebx
  BOOL v16; // edi
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  __int64 v20; // r8
  ULONG v21; // r9d
  __int64 v22; // r10
  ULONG v23; // r11d
  __int64 v24; // rdx
  LONG v25; // r8d
  LONG v26; // r9d
  int v27; // r10d
  int v28; // r9d
  __int64 v29; // r8
  __int64 v30; // rcx
  int v31; // edx
  int v32; // r8d
  SURFOBJ *v33; // rcx
  RECTL *v35; // rdx
  struct _PLGDDA *v36; // rax
  unsigned __int64 v37; // rdx
  POINTL *v38; // r8
  unsigned int v39; // eax
  _DWORD *v40; // r11
  size_t v41; // rcx
  struct _SURFOBJ *v42; // rax
  LONG top; // r11d
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // r8
  XLATEOBJ *v48; // rdx
  CLIPOBJ *v49; // rcx
  LONG v50; // ecx
  LONG v51; // eax
  int v52; // r11d
  SURFOBJ *v53; // rcx
  SURFOBJ *v54; // rcx
  SURFOBJ *v55; // rdx
  SURFOBJ *v56; // rax
  FIX x; // edx
  FIX y; // eax
  struct _RECTL *v59; // r9
  bool v60; // cf
  ULONG v61; // [rsp+60h] [rbp-548h]
  int v62; // [rsp+60h] [rbp-548h]
  int v63; // [rsp+64h] [rbp-544h]
  int v64; // [rsp+68h] [rbp-540h]
  __int64 v65; // [rsp+70h] [rbp-538h]
  int v66; // [rsp+78h] [rbp-530h]
  XLATEOBJ *v67; // [rsp+80h] [rbp-528h]
  __int64 v68; // [rsp+88h] [rbp-520h]
  __int64 v69; // [rsp+90h] [rbp-518h]
  __int64 v70; // [rsp+98h] [rbp-510h]
  __int64 v72; // [rsp+B8h] [rbp-4F0h]
  struct _PLGDDA *v73; // [rsp+C0h] [rbp-4E8h]
  __int64 v74; // [rsp+C8h] [rbp-4E0h] BYREF
  char v75; // [rsp+D0h] [rbp-4D8h]
  int v76; // [rsp+D4h] [rbp-4D4h]
  CLIPOBJ *v77; // [rsp+D8h] [rbp-4D0h]
  POINTFIX *v78; // [rsp+E0h] [rbp-4C8h]
  __int64 v79; // [rsp+E8h] [rbp-4C0h] BYREF
  XLATEOBJ *v80; // [rsp+F0h] [rbp-4B8h]
  struct _SURFOBJ *v81; // [rsp+F8h] [rbp-4B0h]
  struct _SURFOBJ *v82; // [rsp+100h] [rbp-4A8h]
  __int64 v83; // [rsp+108h] [rbp-4A0h]
  RECTL *v84; // [rsp+110h] [rbp-498h]
  POINTFIX *v85; // [rsp+118h] [rbp-490h]
  __int64 v86; // [rsp+120h] [rbp-488h] BYREF
  int v87; // [rsp+128h] [rbp-480h]
  int v88; // [rsp+12Ch] [rbp-47Ch]
  __int64 v89; // [rsp+130h] [rbp-478h] BYREF
  char v90; // [rsp+138h] [rbp-470h]
  int v91; // [rsp+13Ch] [rbp-46Ch]
  __int64 v92; // [rsp+140h] [rbp-468h] BYREF
  char v93; // [rsp+148h] [rbp-460h]
  int v94; // [rsp+14Ch] [rbp-45Ch]
  int v95; // [rsp+154h] [rbp-454h]
  struct REGION *v96[2]; // [rsp+158h] [rbp-450h] BYREF
  __int64 v97; // [rsp+168h] [rbp-440h] BYREF
  XLATEOBJ *v98; // [rsp+170h] [rbp-438h]
  struct _SURFOBJ *v99; // [rsp+178h] [rbp-430h]
  __int64 v100; // [rsp+180h] [rbp-428h]
  int v101; // [rsp+188h] [rbp-420h]
  __int64 v102; // [rsp+190h] [rbp-418h] BYREF
  char v103; // [rsp+198h] [rbp-410h]
  int v104; // [rsp+19Ch] [rbp-40Ch]
  struct REGION *v105[2]; // [rsp+1A0h] [rbp-408h] BYREF
  _QWORD v106[4]; // [rsp+1B0h] [rbp-3F8h] BYREF
  __int64 v107; // [rsp+1D0h] [rbp-3D8h]
  __int64 v108; // [rsp+1D8h] [rbp-3D0h]
  struct REGION *v109[2]; // [rsp+1E0h] [rbp-3C8h] BYREF
  _QWORD v110[2]; // [rsp+1F0h] [rbp-3B8h] BYREF
  _QWORD v111[4]; // [rsp+200h] [rbp-3A8h] BYREF
  int v112; // [rsp+220h] [rbp-388h]
  _QWORD v113[5]; // [rsp+228h] [rbp-380h] BYREF
  CLIPOBJ *v114; // [rsp+250h] [rbp-358h]
  _QWORD v115[5]; // [rsp+258h] [rbp-350h] BYREF
  char v116[8]; // [rsp+280h] [rbp-328h] BYREF
  __int64 v117; // [rsp+288h] [rbp-320h]
  RECTL v118; // [rsp+300h] [rbp-2A8h] BYREF
  RECTL v119; // [rsp+310h] [rbp-298h] BYREF
  __int64 v120; // [rsp+320h] [rbp-288h] BYREF
  int v121; // [rsp+328h] [rbp-280h]
  int v122; // [rsp+32Ch] [rbp-27Ch]
  struct _RECTL v123; // [rsp+330h] [rbp-278h] BYREF
  __int64 v124; // [rsp+340h] [rbp-268h]
  int v125; // [rsp+348h] [rbp-260h]
  int v126; // [rsp+34Ch] [rbp-25Ch]
  struct _RECTL v127; // [rsp+350h] [rbp-258h] BYREF
  _BYTE v128[160]; // [rsp+360h] [rbp-248h] BYREF
  char v129[4]; // [rsp+400h] [rbp-1A8h] BYREF
  char v130[156]; // [rsp+404h] [rbp-1A4h] BYREF
  CLIPOBJ pcoa; // [rsp+4A0h] [rbp-108h] BYREF
  POINTFIX v132; // [rsp+540h] [rbp-68h] BYREF
  POINTFIX v133; // [rsp+548h] [rbp-60h]
  POINTFIX v134; // [rsp+550h] [rbp-58h]
  int v135; // [rsp+558h] [rbp-50h]
  int v136; // [rsp+55Ch] [rbp-4Ch]
  POINTFIX v137; // [rsp+560h] [rbp-48h] BYREF
  POINTFIX v138; // [rsp+568h] [rbp-40h] BYREF
  int v139; // [rsp+570h] [rbp-38h]
  int v140; // [rsp+574h] [rbp-34h]
  FIX v141; // [rsp+578h] [rbp-30h]
  FIX v142; // [rsp+57Ch] [rbp-2Ch]

  v82 = psoSrc;
  v81 = psoTrg;
  v113[3] = pco;
  v100 = (__int64)pco;
  v114 = pco;
  v67 = pxlo;
  v78 = pptfx;
  v61 = iMode;
  v13 = ((__int64 (*)(void))SURFOBJ_TO_SURFACE)();
  v113[1] = v13;
  v65 = SURFOBJ_TO_SURFACE(psoSrc);
  v14 = SURFOBJ_TO_SURFACE(psoMsk);
  v69 = v14;
  v15 = 0;
  v66 = 0;
  if ( iMode != 4 || v14 )
  {
    v17 = 0;
    v64 = 0;
    v16 = 1;
  }
  else
  {
    v16 = 1;
    v17 = 1;
    v64 = 1;
  }
  v95 = v17;
  if ( iMode - 1 <= 3 )
  {
    v18 = *(_DWORD *)(v13 + 96);
    if ( (unsigned int)(v18 - 7) > 2 )
    {
      v19 = *(_DWORD *)(v65 + 96);
      if ( v19 != 9 && v18 != 10 && v19 != 10 )
      {
        ERECTL::vOrder((ERECTL *)prcl);
        if ( v21 < v23 && !v22 && (*(_DWORD *)(v20 + 96) == 1 || *(_DWORD *)(v13 + 96) == 1) )
        {
          v63 = 1;
        }
        else
        {
          v63 = 0;
          if ( v21 < v23 )
            v21 = v23;
          v61 = v21;
        }
        v79 = *(_QWORD *)(v13 + 48);
        v97 = *(_QWORD *)(v20 + 48);
        v74 = 0LL;
        v75 = 0;
        v76 = 0;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v128);
        v80 = 0LL;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v96);
        v24 = v65;
        v25 = *(_DWORD *)(v65 + 60);
        v26 = *(_DWORD *)(v65 + 56);
        *(_QWORD *)&v119.left = 0LL;
        v119.right = v26;
        v119.bottom = v25;
        if ( v97 && v65 == *(_QWORD *)(v97 + 2568) && (*(_DWORD *)(v97 + 32) & 0x20000) != 0 )
        {
          v119.left = *(_DWORD *)(v97 + 2600);
          v119.right = v26 + *(_DWORD *)(v97 + 2600);
          v119.top = *(_DWORD *)(v97 + 2604);
          v119.bottom = v25 + *(_DWORD *)(v97 + 2604);
          v24 = v65;
        }
        if ( !v63 && !*(_WORD *)(v13 + 100) && *(_QWORD *)(v13 + 32) != *(_QWORD *)(v24 + 32) && !v64 )
          goto LABEL_38;
        v132 = *v78;
        v133 = v78[1];
        v134 = v78[2];
        v135 = v134.x + v133.x - v132.x;
        v136 = v78[1].y + v78[2].y - v78->y;
        v27 = (v133.x > v132.x) ^ (v133.x > v135);
        v28 = (v133.y > v132.y) ^ (v133.y > v136);
        v29 = v27 ^ ((*(&v132.x + 2 * (v27 ^ 1)) > *(&v132.x + 2 * (v27 ^ 1 ^ 3LL))) + 1LL);
        v118.left = (*(&v132.x + 2 * v29) >> 4) - 1;
        v30 = v28 ^ ((*(&v132.y + 2 * (v28 ^ 1LL)) > *(&v132.y + 2 * (v28 ^ 2LL))) + 1LL);
        v118.top = (*(&v132.y + 2 * v30) >> 4) - 1;
        v118.right = ((*(&v132.x + 2 * (v29 ^ 3)) + 15) >> 4) + 1;
        v118.bottom = ((*(&v132.y + 2 * (v30 ^ 3)) + 15) >> 4) + 1;
        v31 = *(_DWORD *)(v13 + 60);
        v32 = *(_DWORD *)(v13 + 56);
        v86 = 0LL;
        v87 = v32;
        v88 = v31;
        if ( v79 && v13 == *(_QWORD *)(v79 + 2568) && (*(_DWORD *)(v79 + 32) & 0x20000) != 0 )
        {
          LODWORD(v86) = *(_DWORD *)(v79 + 2600);
          v87 = v32 + v86;
          HIDWORD(v86) = *(_DWORD *)(v79 + 2604);
          v88 = v31 + HIDWORD(v86);
        }
        ERECTL::operator*=(&v118, &v86);
        if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v118) )
        {
          if ( !v63
            && !*(_WORD *)(v13 + 100)
            && !v64
            && (v118.left > prcl->right || v118.right < prcl->left || v118.top > prcl->bottom || v118.bottom < prcl->top) )
          {
LABEL_38:
            v70 = v13;
            v85 = v78;
            v77 = pco;
            goto LABEL_58;
          }
          v132.x -= 16 * v118.left;
          v132.y -= 16 * v118.top;
          v133.x -= 16 * v118.left;
          v133.y -= 16 * v118.top;
          v134.x -= 16 * v118.left;
          v134.y -= 16 * v118.top;
          memset(v111, 0, sizeof(v111));
          HIDWORD(v111[0]) = v118.right - v118.left + 1;
          LODWORD(v111[1]) = v118.bottom - v118.top + 1;
          v111[2] = 0LL;
          LODWORD(v111[0]) = *(_DWORD *)(v13 + 96);
          LODWORD(v111[3]) = *(_DWORD *)(v13 + 112) & 0x40000;
          if ( v63 )
          {
            LODWORD(v111[0]) = 1;
          }
          else if ( v64 )
          {
            LODWORD(v111[0]) = *(_DWORD *)(v65 + 96);
          }
          SURFMEM::bCreateDIB((SURFMEM *)&v74, (struct _DEVBITMAPINFO *)v111, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( v74 )
          {
            v68 = *(_QWORD *)&v118.left;
            if ( v96[0] )
            {
              *(_QWORD *)&v118.left = 0LL;
              v118.right -= v68;
              v118.bottom -= HIDWORD(v68);
              RGNOBJ::vSet((RGNOBJ *)v96, &v118);
              XCLIPOBJ::vSetup((XCLIPOBJ *)v128, v96[0], (struct ERECTL *)&v118, 1);
              PDEVOBJ::vSync((PDEVOBJ *)&v79, v81, 0LL, 0);
              if ( v69 )
                _guard_dispatch_icall_fptr();
              if ( !v63 )
                goto LABEL_53;
              v33 = 0LL;
              if ( v74 )
                v33 = (SURFOBJ *)(v74 + 24);
              if ( EngEraseSurface(v33, &v118, (v61 != 1) - 1) )
              {
LABEL_53:
                v70 = v74;
                v85 = &v132;
                v77 = (CLIPOBJ *)v128;
                if ( v63 && *(_DWORD *)(v65 + 96) == 1 || v64 )
                {
                  v80 = pxlo;
                  v67 = 0LL;
                }
                else
                {
                  v80 = xloIdent;
                }
LABEL_58:
                PDEVOBJ::vSync((PDEVOBJ *)&v97, v82, 0LL, 0);
                ERECTL::operator*=(&v119, prcl);
                if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v119) )
                {
                  v15 = 1;
LABEL_140:
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v96);
                  SURFMEM::~SURFMEM((SURFMEM *)&v74);
                  return v15;
                }
                v89 = 0LL;
                v90 = 0;
                v91 = 0;
                if ( *(_WORD *)(v65 + 100) || (unsigned int)(*(_DWORD *)(v65 + 96) - 7) <= 1 )
                {
                  memset(v115, 0, 0x20uLL);
                  HIDWORD(v115[0]) = v119.right - v119.left + 1;
                  LODWORD(v115[1]) = v119.bottom - v119.top + 1;
                  v115[2] = 0LL;
                  LODWORD(v115[0]) = *(_DWORD *)(v70 + 96);
                  LODWORD(v115[3]) = *(_DWORD *)(v65 + 112) & 0x40000;
                  SURFMEM::bCreateDIB((SURFMEM *)&v89, (struct _DEVBITMAPINFO *)v115, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
                  if ( !v89 )
                  {
LABEL_64:
                    SURFMEM::~SURFMEM((SURFMEM *)&v89);
                    goto LABEL_140;
                  }
                  v120 = 0LL;
                  v121 = v119.right - v119.left;
                  v122 = v119.bottom - v119.top;
                  _guard_dispatch_icall_fptr();
                  LODWORD(v120) = prcl->left - v119.left;
                  HIDWORD(v120) = prcl->top - v119.top;
                  v121 = prcl->right - v119.left;
                  v122 = prcl->bottom - v119.top;
                  v65 = v89;
                  v107 = v89;
                  v67 = 0LL;
                  v98 = 0LL;
                  v84 = (RECTL *)&v120;
                  v119.right -= v119.left;
                  v119.bottom -= v119.top;
                  *(_QWORD *)&v119.left = 0LL;
                }
                else
                {
                  v107 = v65;
                  v98 = v67;
                  v84 = v35;
                }
                v113[0] = *(_QWORD *)(v70 + 48);
                PDEVOBJ::vSync((PDEVOBJ *)v113, (struct _SURFOBJ *)(v70 + 24), 0LL, 0);
                v36 = (struct _PLGDDA *)PALLOCMEM2(0x18CuLL);
                v73 = v36;
                if ( !v36 )
                {
LABEL_139:
                  SURFMEM::~SURFMEM((SURFMEM *)&v89);
                  v15 = v66;
                  goto LABEL_140;
                }
                if ( !(unsigned int)bInitPlgDDA(v36, &v119, v84, v85) )
                {
LABEL_68:
                  v66 = 1;
LABEL_138:
                  Win32FreePool(v73, v37, v38);
                  goto LABEL_139;
                }
                v108 = qword_1C02D7C60[*(unsigned int *)(v65 + 96)];
                v113[2] = v108;
                v39 = lSizeDDA(v73);
                v37 = v39 * (unsigned __int64)(unsigned int)(v119.right - v119.left + 2);
                v41 = 0xFFFFFFFFLL;
                if ( v37 <= 0xFFFFFFFF )
                  v41 = (unsigned int)v37;
                v112 = v41;
                if ( v37 > 0xFFFFFFFF || !(_DWORD)v41 )
                  goto LABEL_138;
                if ( v63 )
                {
                  *v40 = 1;
                  v42 = (struct _SURFOBJ *)qword_1C02D7BE0[v61];
                }
                else
                {
                  *v40 = 0;
                  v42 = (struct _SURFOBJ *)qword_1C02D7C00[*(unsigned int *)(v70 + 96)];
                }
                v82 = v42;
                v99 = v42;
                v72 = PALLOCMEM2(v41);
                if ( !v72 )
                  goto LABEL_138;
                top = v119.top;
                v83 = *(_QWORD *)(v65 + 80) + v119.top * *(_DWORD *)(v65 + 88);
                if ( v69 )
                {
                  v44 = bUMPDSecurityGateEx();
                  v38 = pptl;
                  if ( v44 && !pptl )
                  {
                    if ( gfUMPDDebug )
                      DbgPrint(
                        "windows\\core\\ntgdi\\gre\\windows\\plgblt.cxx:%d:EngPlgBlt:pptl/pptlMask == NULL\n",
                        1746);
                    Win32FreePool(v72, v45, v38);
                    Win32FreePool(v73, v46, v47);
                    goto LABEL_64;
                  }
                  v101 = v119.left + pptl->x - v84->left;
                  top = v119.top;
                }
                v48 = v67;
                if ( v67 )
                {
                  if ( (v67->flXlate & 1) != 0 )
                    v48 = 0LL;
                  v67 = v48;
                  v98 = v48;
                }
                v49 = v77;
                if ( !v77 || !v77->iDComplexity )
                {
                  v50 = *(_DWORD *)(v70 + 60);
                  v51 = *(_DWORD *)(v70 + 56);
                  *(_QWORD *)&v123.left = 0LL;
                  v123.right = v51;
                  v123.bottom = v50;
                  RGNOBJ::vSet((RGNOBJ *)v96, &v123);
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v128, v96[0], (struct ERECTL *)&v123, 1);
                  v49 = (CLIPOBJ *)v128;
                  v77 = (CLIPOBJ *)v128;
                  top = v119.top;
                  v48 = v67;
                }
                if ( v49->rclBounds.left >= v49->rclBounds.right || v49->rclBounds.top >= v49->rclBounds.bottom )
                {
                  Win32FreePool(v72, v48, v38);
                  goto LABEL_138;
                }
                while ( top < v119.bottom )
                {
                  *(_OWORD *)((char *)v73 + 68) = *(_OWORD *)((char *)v73 + 4);
                  *(_OWORD *)((char *)v73 + 84) = *(_OWORD *)((char *)v73 + 20);
                  *(_OWORD *)((char *)v73 + 100) = *(_OWORD *)((char *)v73 + 36);
                  *(_OWORD *)((char *)v73 + 116) = *(_OWORD *)((char *)v73 + 52);
                  _guard_dispatch_icall_fptr();
                  _guard_dispatch_icall_fptr();
                  vAdvYDDA(v73);
                  v83 += *(int *)(v65 + 88);
                  top = v52 + 1;
                  v48 = v67;
                }
                Win32FreePool(v72, v48, v38);
                if ( v70 == v13 )
                  goto LABEL_68;
                v62 = 0;
                v92 = 0LL;
                v93 = 0;
                v94 = 0;
                if ( prcl->right - prcl->left == v119.right && prcl->bottom - prcl->top == v119.bottom )
                {
                  v62 = 1;
                }
                else
                {
                  memset(v106, 0, sizeof(v106));
                  HIDWORD(v106[0]) = v118.right + 1;
                  LODWORD(v106[1]) = v118.bottom + 1;
                  v106[2] = 0LL;
                  LODWORD(v106[0]) = 1;
                  LODWORD(v106[3]) = *(_DWORD *)(v13 + 112) & 0x40000;
                  SURFMEM::bCreateDIB((SURFMEM *)&v92, (struct _DEVBITMAPINFO *)v106, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
                  if ( v92 )
                  {
                    v102 = 0LL;
                    v103 = 0;
                    v104 = 0;
                    HIDWORD(v106[0]) = v119.right;
                    LODWORD(v106[1]) = v119.bottom;
                    v106[2] = 0LL;
                    LODWORD(v106[0]) = 1;
                    LODWORD(v106[3]) = *(_DWORD *)(v13 + 112) & 0x40000;
                    SURFMEM::bCreateDIB(
                      (SURFMEM *)&v102,
                      (struct _DEVBITMAPINFO *)v106,
                      0LL,
                      0LL,
                      0,
                      0LL,
                      0LL,
                      0,
                      1,
                      0,
                      0);
                    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v109);
                    if ( v102 && v109[0] )
                    {
                      RGNOBJ::vSet((RGNOBJ *)v109, &v118);
                      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, v109[0], (struct ERECTL *)&v118, 1);
                      v53 = v92 ? (SURFOBJ *)(v92 + 24) : 0LL;
                      if ( EngEraseSurface(v53, &v118, 0) )
                      {
                        v54 = 0LL;
                        if ( v102 )
                          v54 = (SURFOBJ *)(v102 + 24);
                        if ( EngEraseSurface(v54, &v119, 0xFFFFFFFF) )
                        {
                          v55 = 0LL;
                          if ( v102 )
                            v55 = (SURFOBJ *)(v102 + 24);
                          if ( v92 )
                            v56 = (SURFOBJ *)(v92 + 24);
                          else
                            v56 = 0LL;
                          if ( EngPlgBlt(v56, v55, 0LL, &pcoa, 0LL, 0LL, 0LL, v85, v84, 0LL, 3u) )
                            v62 = 1;
                        }
                      }
                    }
                    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v109);
                    SURFMEM::~SURFMEM((SURFMEM *)&v102);
                  }
                }
                PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v116);
                if ( !v62 )
                  goto LABEL_136;
                if ( !v117 )
                  goto LABEL_136;
                v137 = *v78;
                v138 = v78[1];
                x = v78[2].x;
                v139 = x + v138.x - v137.x;
                y = v78[2].y;
                v140 = y + v138.y - v137.y;
                v141 = x;
                v142 = y;
                if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)v116, 0LL, (struct _POINTL *)&v137)
                  || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)v116, 0LL, (struct _POINTL *)&v138, 3u) )
                {
LABEL_136:
                  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v116);
                  SURFMEM::~SURFMEM((SURFMEM *)&v92);
                  goto LABEL_138;
                }
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v110, (struct EPATHOBJ *)v116, 1u, v59);
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v105);
                if ( v110[0] && v105[0] )
                {
                  if ( !pco )
                  {
                    if ( !RGNOBJ::bCopy((RGNOBJ *)v105, (struct RGNOBJ *)v110) )
                      goto LABEL_135;
LABEL_127:
                    v127 = *(struct _RECTL *)((char *)v105[0] + 88);
                    if ( !pco || bIntersect(&v127, &pco->rclBounds, &v127) )
                    {
                      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v129, v105[0], (struct ERECTL *)&v127, 1);
                      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v130) )
                      {
                        v118.left += v68;
                        v118.top += HIDWORD(v68);
                        v118.right += v68;
                        v118.bottom += HIDWORD(v68);
                        ++*(_DWORD *)(v13 + 92);
                        if ( v64 )
                        {
                          v124 = 0LL;
                          v125 = v118.right - v118.left;
                          v126 = v118.bottom - v118.top;
                          v81 = 0LL;
                        }
                        else
                        {
                          SURFACE::pfnBitBlt((SURFACE *)v13);
                        }
                        _guard_dispatch_icall_fptr();
                      }
                    }
                    v66 = 1;
                    goto LABEL_135;
                  }
                  v60 = v100 != 0;
                  v100 = -v100;
                  if ( RGNOBJ::bMerge(
                         (RGNOBJ *)v105,
                         (struct RGNOBJ *)v110,
                         (struct RGNOBJ *)((unsigned __int64)&v114[2].rclBounds.top & -(__int64)v60),
                         BYTE1(gafjRgnOp)) )
                  {
                    goto LABEL_127;
                  }
                }
LABEL_135:
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v105);
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v110);
                goto LABEL_136;
              }
            }
          }
          v16 = 0;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v96);
        SURFMEM::~SURFMEM((SURFMEM *)&v74);
        return v16;
      }
    }
  }
  return 0;
}
