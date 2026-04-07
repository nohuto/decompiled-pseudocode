/*
 * XREFs of ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800038E0
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180010650 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18003B370 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x180003820 (-_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x1800206D4 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x180020BEC (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccent::_UpdateBorderShadowForAccent(CVisual **this)
{
  int v1; // edx
  int v2; // ebx
  _QWORD *v4; // r8
  double v5; // xmm2_8
  int v6; // eax
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d
  int v10; // ecx
  int v11; // r13d
  int v12; // r12d
  __int64 v13; // rax
  LONG cx; // r14d
  __int64 v15; // rax
  LONG cy; // esi
  __int64 v17; // rax
  int v18; // edi
  __int64 v19; // rax
  int v20; // eax
  LONG *v21; // rdi
  __int64 v22; // r14
  CAtlasedImage **v23; // rbx
  struct _MARGINS *v24; // rsi
  CVisual *v25; // rcx
  void (__fastcall *v26)(CVisual *__hidden, unsigned int); // rax
  CAtlasedImage *v28; // rcx
  CAtlasedImage *v29; // rcx
  struct tagSIZE v30; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v31; // [rsp+30h] [rbp-D8h]
  struct tagSIZE v32; // [rsp+38h] [rbp-D0h] BYREF
  struct _MARGINS v33; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v34[16]; // [rsp+58h] [rbp-B0h] BYREF
  int v35; // [rsp+98h] [rbp-70h]
  int v36; // [rsp+9Ch] [rbp-6Ch]
  int v37; // [rsp+A0h] [rbp-68h]
  int v38; // [rsp+A4h] [rbp-64h]
  int v39; // [rsp+A8h] [rbp-60h]
  int v40; // [rsp+ACh] [rbp-5Ch]
  int v41; // [rsp+B0h] [rbp-58h]
  int v42; // [rsp+B4h] [rbp-54h]
  int v43; // [rsp+B8h] [rbp-50h]
  int v44; // [rsp+BCh] [rbp-4Ch]
  int v45; // [rsp+C0h] [rbp-48h]
  int v46; // [rsp+C4h] [rbp-44h]
  int v47; // [rsp+C8h] [rbp-40h]
  int v48; // [rsp+CCh] [rbp-3Ch]
  int v49; // [rsp+D0h] [rbp-38h]
  int v50; // [rsp+D4h] [rbp-34h]
  int v51; // [rsp+D8h] [rbp-30h]
  int v52; // [rsp+DCh] [rbp-2Ch]
  int v53; // [rsp+E0h] [rbp-28h]
  int v54; // [rsp+E4h] [rbp-24h]
  int v55; // [rsp+E8h] [rbp-20h]
  int v56; // [rsp+ECh] [rbp-1Ch]
  int v57; // [rsp+F0h] [rbp-18h]
  int v58; // [rsp+F4h] [rbp-14h]
  int v59; // [rsp+F8h] [rbp-10h]
  int v60; // [rsp+FCh] [rbp-Ch]
  int v61; // [rsp+100h] [rbp-8h]
  int v62; // [rsp+104h] [rbp-4h]
  int v63; // [rsp+108h] [rbp+0h]
  int v64; // [rsp+10Ch] [rbp+4h]
  int v65; // [rsp+110h] [rbp+8h]
  int v66; // [rsp+114h] [rbp+Ch]
  int v67; // [rsp+118h] [rbp+10h]
  int v68; // [rsp+11Ch] [rbp+14h]
  int v69; // [rsp+120h] [rbp+18h]
  int v70; // [rsp+124h] [rbp+1Ch]
  int v71; // [rsp+128h] [rbp+20h]
  int v72; // [rsp+12Ch] [rbp+24h]
  int v73; // [rsp+130h] [rbp+28h]
  int v74; // [rsp+134h] [rbp+2Ch]
  int v75; // [rsp+138h] [rbp+30h]
  int v76; // [rsp+13Ch] [rbp+34h]
  int v77; // [rsp+140h] [rbp+38h]
  int v78; // [rsp+144h] [rbp+3Ch]
  int v79; // [rsp+148h] [rbp+40h]
  int v80; // [rsp+14Ch] [rbp+44h]
  int v81; // [rsp+150h] [rbp+48h]
  int v82; // [rsp+154h] [rbp+4Ch]
  int v83; // [rsp+158h] [rbp+50h]
  int v84; // [rsp+15Ch] [rbp+54h]
  int v85; // [rsp+160h] [rbp+58h]
  int v86; // [rsp+164h] [rbp+5Ch]
  int v87; // [rsp+168h] [rbp+60h]
  int v88; // [rsp+16Ch] [rbp+64h]
  LONG v89; // [rsp+170h] [rbp+68h]
  int v90; // [rsp+174h] [rbp+6Ch]
  int v91; // [rsp+178h] [rbp+70h]
  int v92; // [rsp+17Ch] [rbp+74h]
  int v93; // [rsp+180h] [rbp+78h]
  int v94; // [rsp+184h] [rbp+7Ch]
  LONG v95; // [rsp+188h] [rbp+80h]
  int v96; // [rsp+18Ch] [rbp+84h]
  int v97; // [rsp+190h] [rbp+88h]
  int v98; // [rsp+194h] [rbp+8Ch]
  int v99; // [rsp+198h] [rbp+90h]
  int v100; // [rsp+19Ch] [rbp+94h]
  int v101; // [rsp+1A0h] [rbp+98h]
  int v102; // [rsp+1A4h] [rbp+9Ch]
  int v103; // [rsp+1A8h] [rbp+A0h]
  int v104; // [rsp+1ACh] [rbp+A4h]
  int v105; // [rsp+1B0h] [rbp+A8h]
  int v106; // [rsp+1B4h] [rbp+ACh]
  int v107; // [rsp+1B8h] [rbp+B0h]
  int v108; // [rsp+1BCh] [rbp+B4h]
  int v109; // [rsp+1C0h] [rbp+B8h]
  int v110; // [rsp+1C4h] [rbp+BCh]
  int v111; // [rsp+1C8h] [rbp+C0h]
  int v112; // [rsp+1CCh] [rbp+C4h]
  int v113; // [rsp+1D0h] [rbp+C8h]
  int v114; // [rsp+1D4h] [rbp+CCh]
  int v115; // [rsp+1D8h] [rbp+D0h]
  int v116; // [rsp+1DCh] [rbp+D4h]
  int v117; // [rsp+1E0h] [rbp+D8h]
  int v118; // [rsp+1E4h] [rbp+DCh]
  LONG v119; // [rsp+1E8h] [rbp+E0h]
  int v120; // [rsp+1ECh] [rbp+E4h]
  int v121; // [rsp+1F0h] [rbp+E8h]
  int v122; // [rsp+1F4h] [rbp+ECh]
  int v123; // [rsp+1F8h] [rbp+F0h]
  int v124; // [rsp+1FCh] [rbp+F4h]
  int v125; // [rsp+200h] [rbp+F8h]
  int v126; // [rsp+204h] [rbp+FCh]
  LONG v127; // [rsp+208h] [rbp+100h]
  int v128; // [rsp+20Ch] [rbp+104h]
  int v129; // [rsp+210h] [rbp+108h]
  int v130; // [rsp+214h] [rbp+10Ch]
  int v131; // [rsp+218h] [rbp+110h]
  int v132; // [rsp+21Ch] [rbp+114h]
  LONG v133; // [rsp+220h] [rbp+118h]
  int v134; // [rsp+224h] [rbp+11Ch]
  int v135; // [rsp+228h] [rbp+120h]
  int v136; // [rsp+22Ch] [rbp+124h]
  int v137; // [rsp+230h] [rbp+128h]
  int v138; // [rsp+234h] [rbp+12Ch]
  int v139; // [rsp+238h] [rbp+130h]
  int v140; // [rsp+23Ch] [rbp+134h]
  int v141; // [rsp+240h] [rbp+138h]
  int v142; // [rsp+244h] [rbp+13Ch]
  int v143; // [rsp+248h] [rbp+140h]
  int v144; // [rsp+24Ch] [rbp+144h]
  int v145; // [rsp+250h] [rbp+148h]
  int v146; // [rsp+254h] [rbp+14Ch]

  v1 = 0;
  v2 = 0;
  v4 = *(_QWORD **)(CTopLevelWindow::s_rgpwfWindowFrames + 8);
  v30 = 0LL;
  v31 = 0LL;
  if ( v4 )
  {
    v5 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 55);
    v2 = (int)((double)*(int *)(v4[187] + 28LL) * v5);
    v1 = (int)((double)(*(_DWORD *)(v4[187] + 24LL) - 1) * v5);
  }
  v6 = 0;
  if ( v1 >= 0 )
    v6 = v1;
  v7 = v30.cy - v6;
  v8 = v31 - v6;
  v9 = HIDWORD(v31) - v6;
  v10 = -v6;
  v32.cx = v31 - v6 + v2;
  v11 = v30.cy - v6 + v1;
  v12 = v1 - v6;
  v30 = 0LL;
  v31 = 0LL;
  if ( v4 )
  {
    v13 = v4[223];
    if ( v13 )
      cx = *(_DWORD *)(v13 + 24);
    else
      cx = v30.cx;
    v15 = v4[225];
    if ( v15 )
      cy = *(_DWORD *)(v15 + 24);
    else
      cy = v30.cy;
    v17 = v4[227];
    if ( v17 )
      v18 = *(_DWORD *)(v17 + 28);
    else
      v18 = v31;
    v19 = v4[229];
    if ( v19 )
    {
      v20 = *(_DWORD *)(v19 + 28);
      goto LABEL_14;
    }
  }
  else
  {
    v18 = v31;
    cy = v30.cy;
    cx = v30.cx;
  }
  v20 = HIDWORD(v31);
LABEL_14:
  v34[2] = v12;
  v33.cxRightWidth = 0x7FFFFFFF;
  v38 = 0x7FFFFFFF;
  v39 = 0x7FFFFFFF;
  v41 = v8 + v2;
  v33.cyBottomHeight = 0x7FFFFFFF;
  v34[5] = 0x7FFFFFFF;
  v34[6] = 0x7FFFFFFF;
  v34[8] = 0x7FFFFFFF;
  v34[11] = 0x7FFFFFFF;
  v34[15] = 0x7FFFFFFF;
  v44 = 0x7FFFFFFF;
  v46 = 0x7FFFFFFF;
  v47 = 0x7FFFFFFF;
  v35 = v8 + v2;
  v51 = v10 + v1;
  v63 = v10 + v1;
  v33.cxLeftWidth = v10;
  v33.cyTopHeight = v8;
  v34[0] = v1;
  v34[1] = v2;
  v34[3] = v7 + v1;
  v34[4] = v8;
  v34[7] = v2;
  v34[9] = v7;
  v34[10] = v8;
  v34[12] = v1;
  v34[13] = v2;
  v34[14] = v10;
  v36 = v9 + v1;
  v37 = v1;
  v40 = v7;
  v42 = v9 + v1;
  v43 = v1;
  v45 = v10;
  v48 = v9;
  v49 = v1;
  v50 = v1;
  v52 = v7 + v1;
  v53 = 0x7FFFFFFF;
  v54 = v9;
  v55 = 0x7FFFFFFF;
  v56 = v1;
  v57 = 0x7FFFFFFF;
  v58 = v7;
  v59 = 0x7FFFFFFF;
  v60 = v9;
  v61 = v1;
  v62 = v1;
  v64 = v7 + v1;
  v65 = v8;
  v66 = 0x7FFFFFFF;
  v67 = 0x7FFFFFFF;
  v68 = v2;
  v69 = v10;
  v70 = 0x7FFFFFFF;
  v71 = v8;
  v72 = 0x7FFFFFFF;
  v73 = v1;
  v74 = v2;
  v75 = v10;
  v76 = v7;
  v77 = v8;
  v78 = 0x7FFFFFFF;
  v79 = 0x7FFFFFFF;
  v80 = v2;
  v81 = 0x7FFFFFFF;
  v82 = v7;
  v83 = v8;
  v84 = 0x7FFFFFFF;
  v85 = v1;
  v86 = v2;
  v87 = v10;
  v88 = 0x7FFFFFFF;
  v99 = v10;
  v123 = v10 - cx;
  v135 = v10 - cx;
  v141 = v10 - cx;
  v91 = v1;
  v97 = v1;
  v103 = v1;
  v104 = v1;
  v110 = v1;
  v115 = v1;
  v116 = v1;
  v94 = v7;
  v102 = v9;
  v105 = v10 + v1;
  v108 = v9;
  v112 = v7;
  v114 = v9;
  v117 = v10 + v1;
  v125 = v8;
  v126 = v9;
  v131 = v8;
  v132 = v9;
  v89 = v32.cx;
  v90 = v9 + v1;
  v92 = 0x7FFFFFFF;
  v93 = 0x7FFFFFFF;
  v95 = v32.cx;
  v96 = v9 + v1;
  v98 = 0x7FFFFFFF;
  v100 = 0x7FFFFFFF;
  v101 = 0x7FFFFFFF;
  v106 = v11;
  v107 = 0x7FFFFFFF;
  v109 = 0x7FFFFFFF;
  v111 = 0x7FFFFFFF;
  v113 = 0x7FFFFFFF;
  v118 = v11;
  v119 = v32.cx;
  v120 = v9 + v1;
  v121 = 0x7FFFFFFF;
  v122 = 0x7FFFFFFF;
  v124 = 0x7FFFFFFF;
  v127 = cx;
  v128 = 0x7FFFFFFF;
  v129 = 0x7FFFFFFF;
  v130 = v7 - cy;
  v133 = cy;
  v134 = 0x7FFFFFFF;
  v136 = v7 - cy;
  v137 = v8 - v18;
  v138 = 0x7FFFFFFF;
  v139 = 0x7FFFFFFF;
  v140 = v18;
  v142 = v7 - cy;
  v143 = 0x7FFFFFFF;
  v144 = v9 - v20;
  v145 = 0x7FFFFFFF;
  v146 = v20;
  if ( !CAccent::_IsShadowPartApplicableFromFlags((CAccent *)this, 20) )
  {
    v125 = 0;
    v131 = 0;
    v35 = 0;
    v41 = 0;
  }
  if ( !CAccent::_IsShadowPartApplicableFromFlags((CAccent *)this, 21) )
  {
    v126 = 0;
    v132 = 0;
  }
  v21 = v34;
  v22 = 22LL;
  v23 = this + 52;
  v24 = &v33;
  do
  {
    if ( *v23 )
    {
      CAtlasedImage::SetInsetFromParent(*v23, v24);
      if ( *v21 != 0x7FFFFFFF )
      {
        v28 = *v23;
        v32.cx = *v21;
        v32.cy = *((_DWORD *)v28 + 7);
        CAtlasedImage::SetSize(v28, &v32);
      }
      if ( v21[1] != 0x7FFFFFFF )
      {
        v29 = *v23;
        v30.cy = v21[1];
        v30.cx = *((_DWORD *)v29 + 6);
        CAtlasedImage::SetSize(v29, &v30);
      }
    }
    v24 = (struct _MARGINS *)((char *)v24 + 24);
    ++v23;
    v21 += 6;
    --v22;
  }
  while ( v22 );
  v25 = this[50];
  v26 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v25 + 24LL);
  if ( v26 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(v25, 0x1000u);
  else
    v26(v25, 4096u);
  return 0LL;
}
