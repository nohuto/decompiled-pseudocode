/*
 * XREFs of EngPlgBlt @ 0x1C026C840
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0087620 (NtGdiAlphaBlend.c)
 *     NtGdiTransparentBlt @ 0x1C0126860 (NtGdiTransparentBlt.c)
 *     ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C02594B0 (-SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C026C19C (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C026C444 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     EngPlgBlt @ 0x1C026C840 (EngPlgBlt.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C027BC80 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     NtGdiEngPlgBlt @ 0x1C0291FC0 (NtGdiEngPlgBlt.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00842D8 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00AC408 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     EngEraseSurface @ 0x1C00DDE90 (EngEraseSurface.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C013C0B0 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C013C0E8 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C013C2FC (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C013C35C (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     EngPlgBlt @ 0x1C026C840 (EngPlgBlt.c)
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02B17EC (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 *     ?lSizeDDA@@YAJPEAU_PLGDDA@@@Z @ 0x1C02B36D8 (-lSizeDDA@@YAJPEAU_PLGDDA@@@Z.c)
 *     ?vAdvYDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C02B4594 (-vAdvYDDA@@YAXPEAU_PLGDDA@@@Z.c)
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
  BOOL v15; // edi
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  __int64 v19; // r8
  ULONG v20; // r9d
  __int64 v21; // r10
  ULONG v22; // r11d
  __int64 v23; // rdx
  LONG v24; // r8d
  LONG v25; // r9d
  BOOL v26; // r10d
  int v27; // eax
  __int64 v28; // r9
  int v29; // eax
  int v30; // edx
  int v31; // r8d
  SURFOBJ *v32; // rcx
  RECTL *v34; // rdx
  int v35; // eax
  struct _PLGDDA *v36; // rax
  unsigned int v37; // eax
  _DWORD *v38; // r11
  unsigned __int64 v39; // r9
  int v40; // eax
  struct _SURFOBJ *v41; // rax
  LONG top; // r11d
  XLATEOBJ *v43; // rdx
  CLIPOBJ *v44; // rcx
  LONG v45; // ecx
  LONG v46; // eax
  struct _PLGDDA *v47; // rcx
  int v48; // r11d
  SURFOBJ *v49; // rcx
  SURFOBJ *v50; // rcx
  SURFOBJ *v51; // rdx
  SURFOBJ *v52; // rax
  FIX x; // edx
  FIX y; // eax
  struct _RECTL *v55; // r9
  bool v56; // cf
  ULONG v57; // [rsp+60h] [rbp-548h]
  int v58; // [rsp+60h] [rbp-548h]
  int v59; // [rsp+64h] [rbp-544h]
  int v60; // [rsp+68h] [rbp-540h]
  __int64 v61; // [rsp+70h] [rbp-538h]
  int v62; // [rsp+78h] [rbp-530h]
  XLATEOBJ *v63; // [rsp+80h] [rbp-528h]
  __int64 v64; // [rsp+88h] [rbp-520h]
  __int64 v65; // [rsp+90h] [rbp-518h]
  __int64 v66; // [rsp+98h] [rbp-510h]
  __int64 v68; // [rsp+B8h] [rbp-4F0h] BYREF
  char v69; // [rsp+C0h] [rbp-4E8h]
  int v70; // [rsp+C4h] [rbp-4E4h]
  CLIPOBJ *v71; // [rsp+C8h] [rbp-4E0h]
  POINTFIX *v72; // [rsp+D0h] [rbp-4D8h]
  void *v73; // [rsp+D8h] [rbp-4D0h]
  struct _PLGDDA *v74; // [rsp+E0h] [rbp-4C8h]
  struct _SURFOBJ *v75; // [rsp+E8h] [rbp-4C0h]
  __int64 v76; // [rsp+F0h] [rbp-4B8h]
  RECTL *v77; // [rsp+F8h] [rbp-4B0h]
  POINTFIX *v78; // [rsp+100h] [rbp-4A8h]
  __int64 v79; // [rsp+108h] [rbp-4A0h] BYREF
  XLATEOBJ *v80; // [rsp+110h] [rbp-498h]
  struct _SURFOBJ *v81; // [rsp+118h] [rbp-490h]
  __int64 v82; // [rsp+120h] [rbp-488h] BYREF
  int v83; // [rsp+128h] [rbp-480h]
  int v84; // [rsp+12Ch] [rbp-47Ch]
  __int64 v85; // [rsp+130h] [rbp-478h] BYREF
  char v86; // [rsp+138h] [rbp-470h]
  int v87; // [rsp+13Ch] [rbp-46Ch]
  __int64 v88; // [rsp+140h] [rbp-468h] BYREF
  char v89; // [rsp+148h] [rbp-460h]
  int v90; // [rsp+14Ch] [rbp-45Ch]
  int v91; // [rsp+150h] [rbp-458h]
  XLATEOBJ *v92; // [rsp+158h] [rbp-450h]
  struct _SURFOBJ *v93; // [rsp+160h] [rbp-448h]
  __int64 v94; // [rsp+168h] [rbp-440h]
  __int64 v95; // [rsp+170h] [rbp-438h] BYREF
  int v96; // [rsp+178h] [rbp-430h]
  __int64 v97; // [rsp+180h] [rbp-428h] BYREF
  char v98; // [rsp+188h] [rbp-420h]
  int v99; // [rsp+18Ch] [rbp-41Ch]
  struct REGION *v100[2]; // [rsp+190h] [rbp-418h] BYREF
  int v101; // [rsp+1A0h] [rbp-408h] BYREF
  __int64 v102; // [rsp+1A4h] [rbp-404h]
  int v103; // [rsp+1ACh] [rbp-3FCh]
  __int64 v104; // [rsp+1B0h] [rbp-3F8h]
  int v105; // [rsp+1B8h] [rbp-3F0h]
  int v106; // [rsp+1BCh] [rbp-3ECh]
  struct REGION *v107[2]; // [rsp+1C0h] [rbp-3E8h] BYREF
  __int64 v108; // [rsp+1D0h] [rbp-3D8h]
  __int64 v109; // [rsp+1D8h] [rbp-3D0h]
  _DWORD v110[4]; // [rsp+1E0h] [rbp-3C8h] BYREF
  __int64 v111; // [rsp+1F0h] [rbp-3B8h]
  int v112; // [rsp+1F8h] [rbp-3B0h]
  int v113; // [rsp+1FCh] [rbp-3ACh]
  struct REGION *v114[2]; // [rsp+200h] [rbp-3A8h] BYREF
  _QWORD v115[2]; // [rsp+210h] [rbp-398h] BYREF
  _DWORD v116[4]; // [rsp+220h] [rbp-388h] BYREF
  __int64 v117; // [rsp+230h] [rbp-378h]
  int v118; // [rsp+238h] [rbp-370h]
  int v119; // [rsp+23Ch] [rbp-36Ch]
  CLIPOBJ *v120; // [rsp+248h] [rbp-360h]
  __int64 v121; // [rsp+250h] [rbp-358h] BYREF
  int v122; // [rsp+258h] [rbp-350h]
  __int64 v123; // [rsp+260h] [rbp-348h]
  __int64 v124; // [rsp+268h] [rbp-340h]
  CLIPOBJ *v125; // [rsp+270h] [rbp-338h]
  char v126[8]; // [rsp+280h] [rbp-328h] BYREF
  __int64 v127; // [rsp+288h] [rbp-320h]
  RECTL v128; // [rsp+300h] [rbp-2A8h] BYREF
  RECTL v129; // [rsp+310h] [rbp-298h] BYREF
  __int64 v130; // [rsp+320h] [rbp-288h] BYREF
  int v131; // [rsp+328h] [rbp-280h]
  int v132; // [rsp+32Ch] [rbp-27Ch]
  struct _RECTL v133; // [rsp+330h] [rbp-278h] BYREF
  __int64 v134; // [rsp+340h] [rbp-268h]
  int v135; // [rsp+348h] [rbp-260h]
  int v136; // [rsp+34Ch] [rbp-25Ch]
  struct _RECTL v137; // [rsp+350h] [rbp-258h] BYREF
  _BYTE v138[160]; // [rsp+360h] [rbp-248h] BYREF
  char v139[4]; // [rsp+400h] [rbp-1A8h] BYREF
  char v140[156]; // [rsp+404h] [rbp-1A4h] BYREF
  CLIPOBJ pcoa; // [rsp+4A0h] [rbp-108h] BYREF
  POINTFIX v142; // [rsp+540h] [rbp-68h] BYREF
  POINTFIX v143; // [rsp+548h] [rbp-60h]
  POINTFIX v144; // [rsp+550h] [rbp-58h]
  int v145; // [rsp+558h] [rbp-50h]
  int v146; // [rsp+55Ch] [rbp-4Ch]
  POINTFIX v147; // [rsp+560h] [rbp-48h] BYREF
  POINTFIX v148; // [rsp+568h] [rbp-40h] BYREF
  int v149; // [rsp+570h] [rbp-38h]
  int v150; // [rsp+574h] [rbp-34h]
  FIX v151; // [rsp+578h] [rbp-30h]
  FIX v152; // [rsp+57Ch] [rbp-2Ch]

  v75 = psoSrc;
  v81 = psoTrg;
  v125 = pco;
  v94 = (__int64)pco;
  v120 = pco;
  v63 = pxlo;
  v72 = pptfx;
  v57 = iMode;
  v13 = SURFOBJ_TO_SURFACE(psoTrg);
  v123 = v13;
  v61 = SURFOBJ_TO_SURFACE(psoSrc);
  v14 = SURFOBJ_TO_SURFACE(psoMsk);
  v65 = v14;
  v62 = 0;
  if ( iMode != 4 || v14 )
  {
    v16 = 0;
    v60 = 0;
    v15 = 1;
  }
  else
  {
    v15 = 1;
    v16 = 1;
    v60 = 1;
  }
  v91 = v16;
  if ( iMode - 1 <= 3 )
  {
    v17 = *(_DWORD *)(v13 + 96);
    if ( v17 != 7 && v17 != 8 && v17 != 9 )
    {
      v18 = *(_DWORD *)(v61 + 96);
      if ( v18 != 9 && v17 != 10 && v18 != 10 )
      {
        ERECTL::vOrder((ERECTL *)prcl);
        if ( v20 < v22 && !v21 && (*(_DWORD *)(v19 + 96) == 1 || *(_DWORD *)(v13 + 96) == 1) )
        {
          v59 = 1;
        }
        else
        {
          v59 = 0;
          if ( v20 < v22 )
            v20 = v22;
          v57 = v20;
        }
        v79 = *(_QWORD *)(v13 + 48);
        v95 = *(_QWORD *)(v19 + 48);
        v68 = 0LL;
        v69 = 0;
        v70 = 0;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v138);
        v80 = 0LL;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v100);
        v23 = v61;
        v24 = *(_DWORD *)(v61 + 60);
        v25 = *(_DWORD *)(v61 + 56);
        *(_QWORD *)&v129.left = 0LL;
        v129.right = v25;
        v129.bottom = v24;
        if ( v95 && v61 == *(_QWORD *)(v95 + 2568) && (*(_DWORD *)(v95 + 32) & 0x20000) != 0 )
        {
          v129.left = *(_DWORD *)(v95 + 2600);
          v129.right = v25 + *(_DWORD *)(v95 + 2600);
          v129.top = *(_DWORD *)(v95 + 2604);
          v129.bottom = v24 + *(_DWORD *)(v95 + 2604);
          v23 = v61;
        }
        if ( !v59 && !*(_WORD *)(v13 + 100) && *(_QWORD *)(v13 + 32) != *(_QWORD *)(v23 + 32) && !v60 )
          goto LABEL_44;
        v142 = *v72;
        v143 = v72[1];
        v144 = v72[2];
        v145 = v143.x + v144.x - v142.x;
        v146 = v72[1].y + v72[2].y - v72->y;
        v26 = v143.y > v142.y == v143.y > v146;
        v27 = (v143.x > v142.x == v143.x > v145) ^ 3;
        if ( *(&v142.x + 2 * (v143.x > v142.x == v143.x > v145)) <= *(&v142.x
                                                                    + 2 * ((v143.x > v142.x == v143.x > v145) ^ 3LL)) )
          v27 = v143.x > v142.x == v143.x > v145;
        v28 = v27;
        v128.left = (*(&v142.x + 2 * v27) >> 4) - 1;
        v29 = v26 ^ 3;
        if ( *(&v142.y + 2 * v26) <= *(&v142.y + 2 * (v26 ^ 3LL)) )
          v29 = v143.y > v142.y == v143.y > v146;
        v128.top = (*(&v142.y + 2 * v29) >> 4) - 1;
        v128.right = ((*(&v142.x + 2 * (v28 ^ 3)) + 15) >> 4) + 1;
        v128.bottom = ((*(&v142.y + 2 * (v29 ^ 3LL)) + 15) >> 4) + 1;
        v30 = *(_DWORD *)(v13 + 60);
        v31 = *(_DWORD *)(v13 + 56);
        v82 = 0LL;
        v83 = v31;
        v84 = v30;
        if ( v79 && v13 == *(_QWORD *)(v79 + 2568) && (*(_DWORD *)(v79 + 32) & 0x20000) != 0 )
        {
          LODWORD(v82) = *(_DWORD *)(v79 + 2600);
          v83 = v31 + v82;
          HIDWORD(v82) = *(_DWORD *)(v79 + 2604);
          v84 = v30 + HIDWORD(v82);
        }
        ERECTL::operator*=(&v128, &v82);
        if ( ERECTL::bEmpty((ERECTL *)&v128) )
          goto LABEL_58;
        if ( v59
          || *(_WORD *)(v13 + 100)
          || v60
          || v128.left <= prcl->right
          && v128.right >= prcl->left
          && v128.top <= prcl->bottom
          && v128.bottom >= prcl->top )
        {
          v142.x -= 16 * v128.left;
          v142.y -= 16 * v128.top;
          v143.x -= 16 * v128.left;
          v143.y -= 16 * v128.top;
          v144.x -= 16 * v128.left;
          v144.y -= 16 * v128.top;
          v110[3] = 0;
          v112 = 0;
          v113 = 0;
          v110[1] = v128.right - v128.left + 1;
          v110[2] = v128.bottom - v128.top + 1;
          v111 = 0LL;
          v110[0] = *(_DWORD *)(v13 + 96);
          v112 = *(_DWORD *)(v13 + 112) & 0x40000;
          if ( v59 )
          {
            v110[0] = 1;
          }
          else if ( v60 )
          {
            v110[0] = *(_DWORD *)(v61 + 96);
          }
          SURFMEM::bCreateDIB((SURFMEM *)&v68, (struct _DEVBITMAPINFO *)v110, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v68 )
            goto LABEL_57;
          v64 = *(_QWORD *)&v128.left;
          if ( !v100[0] )
            goto LABEL_57;
          *(_QWORD *)&v128.left = 0LL;
          v128.right -= v64;
          v128.bottom -= HIDWORD(v64);
          RGNOBJ::vSet((RGNOBJ *)v100, &v128);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v138, v100[0], (struct ERECTL *)&v128, 1);
          PDEVOBJ::vSync((PDEVOBJ *)&v79, v81, 0LL, 0);
          if ( v65 )
            _guard_dispatch_icall_fptr();
          if ( v59 )
          {
            v32 = 0LL;
            if ( v68 )
              v32 = (SURFOBJ *)(v68 + 24);
            if ( !EngEraseSurface(v32, &v128, (v57 != 1) - 1) )
            {
LABEL_57:
              v15 = 0;
              goto LABEL_58;
            }
          }
          v66 = v68;
          v78 = &v142;
          v71 = (CLIPOBJ *)v138;
          if ( v59 && *(_DWORD *)(v61 + 96) == 1 || v60 )
          {
            v80 = pxlo;
            v63 = 0LL;
          }
          else
          {
            v80 = xloIdent;
          }
        }
        else
        {
LABEL_44:
          v66 = v13;
          v78 = v72;
          v71 = pco;
        }
        PDEVOBJ::vSync((PDEVOBJ *)&v95, v75, 0LL, 0);
        ERECTL::operator*=(&v129, prcl);
        if ( !ERECTL::bEmpty((ERECTL *)&v129) )
        {
          v88 = 0LL;
          v89 = 0;
          v90 = 0;
          if ( *(_WORD *)(v61 + 100) || (v35 = *(_DWORD *)(v61 + 96), v35 == 7) || v35 == 8 )
          {
            v116[3] = 0;
            v118 = 0;
            v119 = 0;
            v116[1] = v129.right - v129.left + 1;
            v116[2] = v129.bottom - v129.top + 1;
            v117 = 0LL;
            v116[0] = *(_DWORD *)(v66 + 96);
            v118 = *(_DWORD *)(v61 + 112) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v88, (struct _DEVBITMAPINFO *)v116, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( !v88 )
            {
LABEL_70:
              v15 = 0;
              SURFMEM::~SURFMEM((SURFMEM *)&v88);
              goto LABEL_58;
            }
            v130 = 0LL;
            v131 = v129.right - v129.left;
            v132 = v129.bottom - v129.top;
            _guard_dispatch_icall_fptr();
            LODWORD(v130) = prcl->left - v129.left;
            HIDWORD(v130) = prcl->top - v129.top;
            v131 = prcl->right - v129.left;
            v132 = prcl->bottom - v129.top;
            v61 = v88;
            v109 = v88;
            v63 = 0LL;
            v92 = 0LL;
            v77 = (RECTL *)&v130;
            v129.right -= v129.left;
            v129.bottom -= v129.top;
            *(_QWORD *)&v129.left = 0LL;
          }
          else
          {
            v109 = v61;
            v92 = v63;
            v77 = v34;
          }
          v121 = *(_QWORD *)(v66 + 48);
          PDEVOBJ::vSync((PDEVOBJ *)&v121, (struct _SURFOBJ *)(v66 + 24), 0LL, 0);
          v36 = (struct _PLGDDA *)PALLOCMEM2(0x18CuLL, 1650946119LL, 1);
          v74 = v36;
          if ( !v36 )
          {
LABEL_146:
            SURFMEM::~SURFMEM((SURFMEM *)&v88);
            v15 = v62;
            goto LABEL_58;
          }
          if ( !(unsigned int)bInitPlgDDA(v36, &v129, v77, v78) )
          {
LABEL_74:
            v62 = 1;
LABEL_145:
            Win32FreePool(v74);
            goto LABEL_146;
          }
          v108 = qword_1C02DDBE0[*(unsigned int *)(v61 + 96)];
          v124 = v108;
          v37 = lSizeDDA(v74);
          v39 = v37 * (unsigned __int64)(unsigned int)(v129.right - v129.left + 2);
          if ( v39 > 0xFFFFFFFF )
          {
            LODWORD(v39) = -1;
            v96 = -1;
            v40 = -2147024362;
          }
          else
          {
            v96 = v37 * (v129.right - v129.left + 2);
            v40 = 0;
          }
          if ( v40 < 0 || !(_DWORD)v39 )
            goto LABEL_145;
          if ( v59 )
          {
            *v38 = 1;
            v41 = (struct _SURFOBJ *)qword_1C02DDB60[v57];
          }
          else
          {
            *v38 = 0;
            v41 = (struct _SURFOBJ *)qword_1C02DDB80[*(unsigned int *)(v66 + 96)];
          }
          v75 = v41;
          v93 = v41;
          v73 = PALLOCMEM2((unsigned int)v39, 1650946119LL, 1);
          if ( !v73 )
            goto LABEL_145;
          top = v129.top;
          v76 = *(_QWORD *)(v61 + 80) + v129.top * *(_DWORD *)(v61 + 88);
          if ( v65 )
          {
            if ( bUMPDSecurityGateEx() && !pptl )
            {
              if ( gfUMPDDebug )
                DbgPrint("windows\\core\\ntgdi\\gre\\windows\\plgblt.cxx:%d:EngPlgBlt:pptl/pptlMask == NULL\n", 1746);
              Win32FreePool(v73);
              Win32FreePool(v74);
              goto LABEL_70;
            }
            v122 = v129.left + pptl->x - v77->left;
            top = v129.top;
          }
          v43 = v63;
          if ( v63 )
          {
            if ( (v63->flXlate & 1) != 0 )
              v43 = 0LL;
            v92 = v43;
          }
          v44 = v71;
          if ( !v71 || !v71->iDComplexity )
          {
            v45 = *(_DWORD *)(v66 + 60);
            v46 = *(_DWORD *)(v66 + 56);
            *(_QWORD *)&v133.left = 0LL;
            v133.right = v46;
            v133.bottom = v45;
            RGNOBJ::vSet((RGNOBJ *)v100, &v133);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v138, v100[0], (struct ERECTL *)&v133, 1);
            v44 = (CLIPOBJ *)v138;
            v71 = (CLIPOBJ *)v138;
            top = v129.top;
          }
          if ( v44->rclBounds.left >= v44->rclBounds.right || v44->rclBounds.top >= v44->rclBounds.bottom )
          {
            Win32FreePool(v73);
            goto LABEL_145;
          }
          while ( top < v129.bottom )
          {
            v47 = v74;
            *(_OWORD *)((char *)v74 + 68) = *(_OWORD *)((char *)v74 + 4);
            *(_OWORD *)((char *)v47 + 84) = *(_OWORD *)((char *)v47 + 20);
            *(_OWORD *)((char *)v47 + 100) = *(_OWORD *)((char *)v47 + 36);
            *(_OWORD *)((char *)v47 + 116) = *(_OWORD *)((char *)v47 + 52);
            _guard_dispatch_icall_fptr();
            _guard_dispatch_icall_fptr();
            vAdvYDDA(v74);
            v76 += *(int *)(v61 + 88);
            top = v48 + 1;
          }
          Win32FreePool(v73);
          if ( v66 == v13 )
            goto LABEL_74;
          v58 = 0;
          v85 = 0LL;
          v86 = 0;
          v87 = 0;
          if ( prcl->right - prcl->left == v129.right && prcl->bottom - prcl->top == v129.bottom )
          {
            v58 = 1;
          }
          else
          {
            v103 = 0;
            v105 = 0;
            v106 = 0;
            LODWORD(v102) = v128.right + 1;
            HIDWORD(v102) = v128.bottom + 1;
            v104 = 0LL;
            v101 = 1;
            v105 = *(_DWORD *)(v13 + 112) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v85, (struct _DEVBITMAPINFO *)&v101, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( v85 )
            {
              v97 = 0LL;
              v98 = 0;
              v99 = 0;
              v102 = *(_QWORD *)&v129.right;
              v104 = 0LL;
              v101 = 1;
              v105 = *(_DWORD *)(v13 + 112) & 0x40000;
              SURFMEM::bCreateDIB((SURFMEM *)&v97, (struct _DEVBITMAPINFO *)&v101, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v114);
              if ( v97 && v114[0] )
              {
                RGNOBJ::vSet((RGNOBJ *)v114, &v128);
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, v114[0], (struct ERECTL *)&v128, 1);
                v49 = v85 ? (SURFOBJ *)(v85 + 24) : 0LL;
                if ( EngEraseSurface(v49, &v128, 0) )
                {
                  v50 = 0LL;
                  if ( v97 )
                    v50 = (SURFOBJ *)(v97 + 24);
                  if ( EngEraseSurface(v50, &v129, 0xFFFFFFFF) )
                  {
                    v51 = 0LL;
                    if ( v97 )
                      v51 = (SURFOBJ *)(v97 + 24);
                    if ( v85 )
                      v52 = (SURFOBJ *)(v85 + 24);
                    else
                      v52 = 0LL;
                    if ( EngPlgBlt(v52, v51, 0LL, &pcoa, 0LL, 0LL, 0LL, v78, v77, 0LL, 3u) )
                      v58 = 1;
                  }
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v114);
              SURFMEM::~SURFMEM((SURFMEM *)&v97);
            }
          }
          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v126);
          if ( !v58 )
            goto LABEL_143;
          if ( !v127 )
            goto LABEL_143;
          v147 = *v72;
          v148 = v72[1];
          x = v72[2].x;
          v149 = x + v148.x - v147.x;
          y = v72[2].y;
          v150 = y + v148.y - v147.y;
          v151 = x;
          v152 = y;
          if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)v126, 0LL, (struct _POINTL *)&v147)
            || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)v126, 0LL, (struct _POINTL *)&v148, 3u) )
          {
LABEL_143:
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v126);
            SURFMEM::~SURFMEM((SURFMEM *)&v85);
            goto LABEL_145;
          }
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v115, (struct EPATHOBJ *)v126, 1u, v55);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v107);
          if ( v115[0] && v107[0] )
          {
            if ( !pco )
            {
              if ( !RGNOBJ::bCopy((RGNOBJ *)v107, (struct RGNOBJ *)v115) )
                goto LABEL_142;
LABEL_134:
              v137 = *(struct _RECTL *)((char *)v107[0] + 88);
              if ( !pco || bIntersect(&v137, &pco->rclBounds, &v137) )
              {
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v139, v107[0], (struct ERECTL *)&v137, 1);
                if ( !ERECTL::bEmpty((ERECTL *)v140) )
                {
                  v128.left += v64;
                  v128.top += HIDWORD(v64);
                  v128.right += v64;
                  v128.bottom += HIDWORD(v64);
                  ++*(_DWORD *)(v13 + 92);
                  if ( v60 )
                  {
                    v134 = 0LL;
                    v135 = v128.right - v128.left;
                    v136 = v128.bottom - v128.top;
                    v81 = 0LL;
                  }
                  else
                  {
                    SURFACE::pfnBitBlt((SURFACE *)v13);
                  }
                  _guard_dispatch_icall_fptr();
                }
              }
              v62 = 1;
              goto LABEL_142;
            }
            v56 = v94 != 0;
            v94 = -v94;
            if ( RGNOBJ::bMerge(
                   (RGNOBJ *)v107,
                   (struct RGNOBJ *)v115,
                   (struct RGNOBJ *)((unsigned __int64)&v120[2].rclBounds.top & -(__int64)v56),
                   BYTE1(gafjRgnOp)) )
            {
              goto LABEL_134;
            }
          }
LABEL_142:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v107);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v115);
          goto LABEL_143;
        }
LABEL_58:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v100);
        SURFMEM::~SURFMEM((SURFMEM *)&v68);
        return v15;
      }
    }
  }
  return 0;
}
