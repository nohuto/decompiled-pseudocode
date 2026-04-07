/*
 * XREFs of ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x18001DD3C
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18001C8A0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18001D6B0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x18001DC7C (-_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x18002BF34 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x18002C3A4 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccent::_UpdateBorderShadowForAccent(CVisual **this)
{
  int v2; // edx
  int v3; // r11d
  _QWORD *v4; // r8
  double v5; // xmm2_8
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // r9d
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // r10d
  __int64 v14; // rax
  LONG cx; // r14d
  __int64 v16; // rax
  LONG cy; // esi
  __int64 v18; // rax
  int v19; // ebx
  __int64 v20; // rax
  int v21; // eax
  LONG *v22; // rdi
  __int64 v23; // r14
  CAtlasedImage **v24; // rbx
  struct _MARGINS *v25; // rsi
  CVisual *v26; // rcx
  void (__fastcall *v27)(CVisual *__hidden, unsigned int); // rax
  CAtlasedImage *v29; // rcx
  CAtlasedImage *v30; // rcx
  struct tagSIZE v31; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v32; // [rsp+30h] [rbp-D8h]
  struct tagSIZE v33; // [rsp+38h] [rbp-D0h] BYREF
  struct _MARGINS v34; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v35[16]; // [rsp+58h] [rbp-B0h] BYREF
  int v36; // [rsp+98h] [rbp-70h]
  int v37; // [rsp+9Ch] [rbp-6Ch]
  int v38; // [rsp+A0h] [rbp-68h]
  int v39; // [rsp+A4h] [rbp-64h]
  int v40; // [rsp+A8h] [rbp-60h]
  int v41; // [rsp+ACh] [rbp-5Ch]
  int v42; // [rsp+B0h] [rbp-58h]
  int v43; // [rsp+B4h] [rbp-54h]
  int v44; // [rsp+B8h] [rbp-50h]
  int v45; // [rsp+BCh] [rbp-4Ch]
  int v46; // [rsp+C0h] [rbp-48h]
  int v47; // [rsp+C4h] [rbp-44h]
  int v48; // [rsp+C8h] [rbp-40h]
  int v49; // [rsp+CCh] [rbp-3Ch]
  int v50; // [rsp+D0h] [rbp-38h]
  int v51; // [rsp+D4h] [rbp-34h]
  int v52; // [rsp+D8h] [rbp-30h]
  int v53; // [rsp+DCh] [rbp-2Ch]
  int v54; // [rsp+E0h] [rbp-28h]
  int v55; // [rsp+E4h] [rbp-24h]
  int v56; // [rsp+E8h] [rbp-20h]
  int v57; // [rsp+ECh] [rbp-1Ch]
  int v58; // [rsp+F0h] [rbp-18h]
  int v59; // [rsp+F4h] [rbp-14h]
  int v60; // [rsp+F8h] [rbp-10h]
  int v61; // [rsp+FCh] [rbp-Ch]
  int v62; // [rsp+100h] [rbp-8h]
  int v63; // [rsp+104h] [rbp-4h]
  int v64; // [rsp+108h] [rbp+0h]
  int v65; // [rsp+10Ch] [rbp+4h]
  int v66; // [rsp+110h] [rbp+8h]
  int v67; // [rsp+114h] [rbp+Ch]
  int v68; // [rsp+118h] [rbp+10h]
  int v69; // [rsp+11Ch] [rbp+14h]
  int v70; // [rsp+120h] [rbp+18h]
  int v71; // [rsp+124h] [rbp+1Ch]
  int v72; // [rsp+128h] [rbp+20h]
  int v73; // [rsp+12Ch] [rbp+24h]
  int v74; // [rsp+130h] [rbp+28h]
  int v75; // [rsp+134h] [rbp+2Ch]
  int v76; // [rsp+138h] [rbp+30h]
  int v77; // [rsp+13Ch] [rbp+34h]
  int v78; // [rsp+140h] [rbp+38h]
  int v79; // [rsp+144h] [rbp+3Ch]
  int v80; // [rsp+148h] [rbp+40h]
  int v81; // [rsp+14Ch] [rbp+44h]
  int v82; // [rsp+150h] [rbp+48h]
  int v83; // [rsp+154h] [rbp+4Ch]
  int v84; // [rsp+158h] [rbp+50h]
  int v85; // [rsp+15Ch] [rbp+54h]
  int v86; // [rsp+160h] [rbp+58h]
  int v87; // [rsp+164h] [rbp+5Ch]
  int v88; // [rsp+168h] [rbp+60h]
  int v89; // [rsp+16Ch] [rbp+64h]
  LONG v90; // [rsp+170h] [rbp+68h]
  int v91; // [rsp+174h] [rbp+6Ch]
  int v92; // [rsp+178h] [rbp+70h]
  int v93; // [rsp+17Ch] [rbp+74h]
  int v94; // [rsp+180h] [rbp+78h]
  int v95; // [rsp+184h] [rbp+7Ch]
  LONG v96; // [rsp+188h] [rbp+80h]
  int v97; // [rsp+18Ch] [rbp+84h]
  int v98; // [rsp+190h] [rbp+88h]
  int v99; // [rsp+194h] [rbp+8Ch]
  int v100; // [rsp+198h] [rbp+90h]
  int v101; // [rsp+19Ch] [rbp+94h]
  int v102; // [rsp+1A0h] [rbp+98h]
  int v103; // [rsp+1A4h] [rbp+9Ch]
  int v104; // [rsp+1A8h] [rbp+A0h]
  int v105; // [rsp+1ACh] [rbp+A4h]
  int v106; // [rsp+1B0h] [rbp+A8h]
  int v107; // [rsp+1B4h] [rbp+ACh]
  int v108; // [rsp+1B8h] [rbp+B0h]
  int v109; // [rsp+1BCh] [rbp+B4h]
  int v110; // [rsp+1C0h] [rbp+B8h]
  int v111; // [rsp+1C4h] [rbp+BCh]
  int v112; // [rsp+1C8h] [rbp+C0h]
  int v113; // [rsp+1CCh] [rbp+C4h]
  int v114; // [rsp+1D0h] [rbp+C8h]
  int v115; // [rsp+1D4h] [rbp+CCh]
  int v116; // [rsp+1D8h] [rbp+D0h]
  int v117; // [rsp+1DCh] [rbp+D4h]
  int v118; // [rsp+1E0h] [rbp+D8h]
  int v119; // [rsp+1E4h] [rbp+DCh]
  LONG v120; // [rsp+1E8h] [rbp+E0h]
  int v121; // [rsp+1ECh] [rbp+E4h]
  int v122; // [rsp+1F0h] [rbp+E8h]
  int v123; // [rsp+1F4h] [rbp+ECh]
  int v124; // [rsp+1F8h] [rbp+F0h]
  int v125; // [rsp+1FCh] [rbp+F4h]
  int v126; // [rsp+200h] [rbp+F8h]
  int v127; // [rsp+204h] [rbp+FCh]
  LONG v128; // [rsp+208h] [rbp+100h]
  int v129; // [rsp+20Ch] [rbp+104h]
  int v130; // [rsp+210h] [rbp+108h]
  int v131; // [rsp+214h] [rbp+10Ch]
  int v132; // [rsp+218h] [rbp+110h]
  int v133; // [rsp+21Ch] [rbp+114h]
  LONG v134; // [rsp+220h] [rbp+118h]
  int v135; // [rsp+224h] [rbp+11Ch]
  int v136; // [rsp+228h] [rbp+120h]
  int v137; // [rsp+22Ch] [rbp+124h]
  int v138; // [rsp+230h] [rbp+128h]
  int v139; // [rsp+234h] [rbp+12Ch]
  int v140; // [rsp+238h] [rbp+130h]
  int v141; // [rsp+23Ch] [rbp+134h]
  int v142; // [rsp+240h] [rbp+138h]
  int v143; // [rsp+244h] [rbp+13Ch]
  int v144; // [rsp+248h] [rbp+140h]
  int v145; // [rsp+24Ch] [rbp+144h]
  int v146; // [rsp+250h] [rbp+148h]
  int v147; // [rsp+254h] [rbp+14Ch]

  v2 = 0;
  v3 = 0;
  v4 = *(_QWORD **)(CTopLevelWindow::s_rgpwfWindowFrames + 8);
  v31 = 0LL;
  v32 = 0LL;
  if ( !v4
    || (v5 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 49),
        v6 = 0,
        v3 = (int)((double)*(int *)(v4[187] + 28LL) * v5),
        v2 = (int)((double)(*(_DWORD *)(v4[187] + 24LL) - 1) * v5),
        v2 >= 0) )
  {
    v6 = v2;
  }
  v7 = v31.cx - v6;
  v8 = v2;
  if ( v2 < 0 )
    v8 = 0;
  v9 = v31.cy - v8;
  v10 = v2;
  if ( v2 < 0 )
    v10 = 0;
  v11 = HIDWORD(v32) - v10;
  v12 = v2;
  if ( v2 < 0 )
    v12 = 0;
  v13 = v32 - v12;
  v33.cx = v32 - v12 + v3;
  v31 = 0LL;
  v32 = 0LL;
  if ( v4 )
  {
    v14 = v4[223];
    if ( v14 )
      cx = *(_DWORD *)(v14 + 24);
    else
      cx = v31.cx;
    v16 = v4[225];
    if ( v16 )
      cy = *(_DWORD *)(v16 + 24);
    else
      cy = v31.cy;
    v18 = v4[227];
    if ( v18 )
      v19 = *(_DWORD *)(v18 + 28);
    else
      v19 = v32;
    v20 = v4[229];
    if ( v20 )
    {
      v21 = *(_DWORD *)(v20 + 28);
      goto LABEL_19;
    }
  }
  else
  {
    v19 = v32;
    cy = v31.cy;
    cx = v31.cx;
  }
  v21 = HIDWORD(v32);
LABEL_19:
  v35[2] = v7 + v2;
  v34.cxRightWidth = 0x7FFFFFFF;
  v39 = 0x7FFFFFFF;
  v40 = 0x7FFFFFFF;
  v42 = v13 + v3;
  v34.cyBottomHeight = 0x7FFFFFFF;
  v35[5] = 0x7FFFFFFF;
  v35[6] = 0x7FFFFFFF;
  v35[8] = 0x7FFFFFFF;
  v35[11] = 0x7FFFFFFF;
  v35[15] = 0x7FFFFFFF;
  v45 = 0x7FFFFFFF;
  v47 = 0x7FFFFFFF;
  v48 = 0x7FFFFFFF;
  v36 = v13 + v3;
  v52 = v7 + v2;
  v64 = v7 + v2;
  v34.cxLeftWidth = v7;
  v34.cyTopHeight = v13;
  v35[0] = v2;
  v35[1] = v3;
  v35[3] = v9 + v2;
  v35[4] = v13;
  v35[7] = v3;
  v35[9] = v9;
  v35[10] = v13;
  v35[12] = v2;
  v35[13] = v3;
  v35[14] = v7;
  v37 = v11 + v2;
  v38 = v2;
  v41 = v9;
  v43 = v11 + v2;
  v44 = v2;
  v46 = v7;
  v49 = v11;
  v50 = v2;
  v51 = v2;
  v53 = v9 + v2;
  v54 = 0x7FFFFFFF;
  v55 = v11;
  v56 = 0x7FFFFFFF;
  v57 = v2;
  v58 = 0x7FFFFFFF;
  v59 = v9;
  v60 = 0x7FFFFFFF;
  v61 = v11;
  v62 = v2;
  v63 = v2;
  v65 = v9 + v2;
  v66 = v13;
  v67 = 0x7FFFFFFF;
  v68 = 0x7FFFFFFF;
  v69 = v3;
  v70 = v7;
  v71 = 0x7FFFFFFF;
  v72 = v13;
  v73 = 0x7FFFFFFF;
  v74 = v2;
  v75 = v3;
  v76 = v7;
  v77 = v9;
  v78 = v13;
  v79 = 0x7FFFFFFF;
  v80 = 0x7FFFFFFF;
  v81 = v3;
  v82 = 0x7FFFFFFF;
  v83 = v9;
  v84 = v13;
  v85 = 0x7FFFFFFF;
  v86 = v2;
  v87 = v3;
  v88 = v7;
  v89 = 0x7FFFFFFF;
  v100 = v7;
  v124 = v7 - cx;
  v136 = v7 - cx;
  v142 = v7 - cx;
  v92 = v2;
  v98 = v2;
  v104 = v2;
  v105 = v2;
  v111 = v2;
  v116 = v2;
  v117 = v2;
  v95 = v9;
  v103 = v11;
  v106 = v7 + v2;
  v109 = v11;
  v113 = v9;
  v115 = v11;
  v118 = v7 + v2;
  v126 = v13;
  v127 = v11;
  v132 = v13;
  v133 = v11;
  v90 = v33.cx;
  v91 = v11 + v2;
  v93 = 0x7FFFFFFF;
  v94 = 0x7FFFFFFF;
  v96 = v33.cx;
  v97 = v11 + v2;
  v99 = 0x7FFFFFFF;
  v101 = 0x7FFFFFFF;
  v102 = 0x7FFFFFFF;
  v107 = v9 + v2;
  v108 = 0x7FFFFFFF;
  v110 = 0x7FFFFFFF;
  v112 = 0x7FFFFFFF;
  v114 = 0x7FFFFFFF;
  v119 = v9 + v2;
  v120 = v33.cx;
  v121 = v11 + v2;
  v122 = 0x7FFFFFFF;
  v123 = 0x7FFFFFFF;
  v125 = 0x7FFFFFFF;
  v128 = cx;
  v129 = 0x7FFFFFFF;
  v130 = 0x7FFFFFFF;
  v131 = v9 - cy;
  v134 = cy;
  v135 = 0x7FFFFFFF;
  v137 = v9 - cy;
  v138 = v13 - v19;
  v139 = 0x7FFFFFFF;
  v140 = 0x7FFFFFFF;
  v141 = v19;
  v143 = v9 - cy;
  v144 = 0x7FFFFFFF;
  v145 = v11 - v21;
  v146 = 0x7FFFFFFF;
  v147 = v21;
  if ( !CAccent::_IsShadowPartApplicableFromFlags((CAccent *)this, 20) )
  {
    v126 = 0;
    v132 = 0;
    v36 = 0;
    v42 = 0;
  }
  if ( !CAccent::_IsShadowPartApplicableFromFlags((CAccent *)this, 21) )
  {
    v127 = 0;
    v133 = 0;
  }
  v22 = v35;
  v23 = 22LL;
  v24 = this + 51;
  v25 = &v34;
  do
  {
    if ( *v24 )
    {
      CAtlasedImage::SetInsetFromParent(*v24, v25);
      if ( *v22 != 0x7FFFFFFF )
      {
        v29 = *v24;
        v33.cx = *v22;
        v33.cy = *((_DWORD *)v29 + 7);
        CAtlasedImage::SetSize(v29, &v33);
      }
      if ( v22[1] != 0x7FFFFFFF )
      {
        v30 = *v24;
        v31.cy = v22[1];
        v31.cx = *((_DWORD *)v30 + 6);
        CAtlasedImage::SetSize(v30, &v31);
      }
    }
    v25 = (struct _MARGINS *)((char *)v25 + 24);
    ++v24;
    v22 += 6;
    --v23;
  }
  while ( v23 );
  v26 = this[49];
  v27 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v26 + 24LL);
  if ( v27 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(v26, 0x1000u);
  else
    v27(v26, 4096u);
  return 0LL;
}
