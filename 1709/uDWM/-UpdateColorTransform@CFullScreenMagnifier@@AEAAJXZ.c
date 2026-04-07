/*
 * XREFs of ?UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ @ 0x18006F574
 * Callers:
 *     ?OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x18006F3D0 (-OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x18006F4F8 (-OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800797CC (-SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z.c)
 */

__int64 __fastcall CFullScreenMagnifier::UpdateColorTransform(CFullScreenMagnifier *this)
{
  float v1; // xmm4_4
  float v3; // xmm3_4
  float v4; // xmm5_4
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm12_4
  float v8; // xmm14_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm8_4
  float v22; // xmm2_4
  float v23; // xmm4_4
  float v24; // xmm0_4
  float v25; // xmm3_4
  float v26; // xmm5_4
  float v27; // xmm6_4
  float v28; // xmm1_4
  float v29; // xmm7_4
  float v30; // xmm2_4
  float v31; // xmm0_4
  float v32; // xmm3_4
  float v33; // xmm3_4
  float v34; // xmm0_4
  float v35; // xmm2_4
  float v36; // xmm3_4
  float v37; // xmm2_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm8_4
  float v41; // xmm4_4
  float v42; // xmm3_4
  float v43; // xmm0_4
  float v44; // xmm8_4
  float v45; // xmm5_4
  float v46; // xmm8_4
  float v47; // xmm6_4
  float v48; // xmm3_4
  float v49; // xmm8_4
  float v50; // xmm7_4
  float v51; // xmm0_4
  float v52; // xmm3_4
  float v53; // xmm3_4
  float v54; // xmm0_4
  float v55; // xmm2_4
  float v56; // xmm3_4
  float v57; // xmm2_4
  float v58; // xmm0_4
  float v59; // xmm1_4
  float v60; // xmm8_4
  float v61; // xmm4_4
  float v62; // xmm3_4
  float v63; // xmm0_4
  float v64; // xmm8_4
  float v65; // xmm5_4
  float v66; // xmm3_4
  float v67; // xmm1_4
  float v68; // xmm8_4
  float v69; // xmm6_4
  float v70; // xmm3_4
  float v71; // xmm0_4
  float v72; // xmm8_4
  float v73; // xmm7_4
  float v74; // xmm3_4
  float v75; // xmm8_4
  float v76; // xmm2_4
  float v77; // xmm0_4
  float v78; // xmm3_4
  float v79; // xmm3_4
  float v80; // xmm2_4
  float v81; // xmm0_4
  float v82; // xmm1_4
  float v83; // xmm2_4
  float v84; // xmm3_4
  float v85; // xmm8_4
  float v86; // xmm4_4
  float v87; // xmm0_4
  float v88; // xmm3_4
  float v89; // xmm8_4
  float v90; // xmm5_4
  float v91; // xmm1_4
  float v92; // xmm7_4
  float v93; // xmm3_4
  float v94; // xmm0_4
  float v95; // xmm3_4
  float v96; // xmm1_4
  float v97; // xmm8_4
  float v98; // xmm6_4
  float v99; // xmm8_4
  float v100; // xmm7_4
  float v101; // xmm8_4
  float v102; // xmm2_4
  float v103; // xmm1_4
  float v104; // xmm3_4
  float v105; // xmm0_4
  float v106; // xmm3_4
  float v107; // xmm0_4
  float v108; // xmm2_4
  float v109; // xmm1_4
  float v110; // xmm3_4
  float v111; // xmm8_4
  float v112; // xmm0_4
  float v113; // xmm3_4
  float v114; // xmm1_4
  float v115; // xmm7_4
  float v116; // xmm1_4
  CVisual *v117; // rcx
  int v118; // eax
  unsigned int v119; // ebx
  int v120; // eax
  float v122[28]; // [rsp+38h] [rbp-79h] BYREF

  v1 = *((float *)this + 44);
  v3 = *((float *)this + 43);
  v4 = *((float *)this + 45);
  v5 = *((float *)this + 46);
  v6 = *((float *)this + 47);
  v7 = *((float *)this + 32);
  v8 = *((float *)this + 37);
  v9 = *((float *)this + 24) * v1;
  v10 = *((float *)this + 29) * v4;
  v122[0] = (float)((float)((float)((float)(v3 * *((float *)this + 18)) + (float)(v1 * *((float *)this + 23)))
                          + (float)(v4 * *((float *)this + 28)))
                  + (float)(v5 * *((float *)this + 33)))
          + (float)(v6 * *((float *)this + 38));
  v11 = (float)(*((float *)this + 19) * v3) + v9;
  v12 = *((float *)this + 25) * v1;
  v13 = (float)((float)(v11 + v10) + (float)(*((float *)this + 34) * v5)) + (float)(*((float *)this + 39) * v6);
  v14 = *((float *)this + 30) * v4;
  v122[1] = v13;
  v15 = (float)(*((float *)this + 20) * v3) + v12;
  v16 = *((float *)this + 26) * v1;
  v17 = (float)((float)(v15 + v14) + (float)(*((float *)this + 35) * v5)) + (float)(*((float *)this + 40) * v6);
  v18 = *((float *)this + 31) * v4;
  v122[2] = v17;
  v19 = (float)(*((float *)this + 21) * v3) + v16;
  v20 = *((float *)this + 27) * v1;
  v122[3] = (float)((float)(v19 + v18) + (float)(*((float *)this + 36) * v5)) + (float)(*((float *)this + 41) * v6);
  v21 = *((float *)this + 49);
  v22 = (float)((float)((float)((float)(*((float *)this + 22) * v3) + v20) + (float)(v7 * v4)) + (float)(v8 * v5))
      + (float)(*((float *)this + 42) * v6);
  v23 = *((float *)this + 48);
  v24 = v21 * *((float *)this + 23);
  v25 = v23 * *((float *)this + 19);
  v26 = *((float *)this + 50);
  v27 = *((float *)this + 51);
  v28 = v26 * *((float *)this + 28);
  v29 = *((float *)this + 52);
  v122[4] = v22;
  v30 = (float)(v23 * *((float *)this + 18)) + v24;
  v31 = v27 * *((float *)this + 34);
  v32 = (float)(v25 + (float)(v21 * *((float *)this + 24))) + (float)(v26 * *((float *)this + 29));
  v122[5] = (float)((float)(v30 + v28) + (float)(v27 * *((float *)this + 33))) + (float)(v29 * *((float *)this + 38));
  v33 = v32 + v31;
  v34 = v27 * *((float *)this + 35);
  v35 = (float)((float)(v23 * *((float *)this + 20)) + (float)(v21 * *((float *)this + 25)))
      + (float)(v26 * *((float *)this + 30));
  v122[6] = v33 + (float)(v29 * *((float *)this + 39));
  v36 = v23 * *((float *)this + 21);
  v37 = v35 + v34;
  v38 = v21;
  v39 = v26 * *((float *)this + 31);
  v40 = (float)(v21 * *((float *)this + 27)) + (float)(v23 * *((float *)this + 22));
  v41 = *((float *)this + 54);
  v42 = v36 + (float)(v38 * *((float *)this + 26));
  v43 = v27 * *((float *)this + 36);
  v44 = v40 + (float)(v26 * v7);
  v45 = *((float *)this + 55);
  v122[7] = v37 + (float)(v29 * *((float *)this + 40));
  v46 = v44 + (float)(v27 * v8);
  v47 = *((float *)this + 56);
  v48 = (float)((float)(v42 + v39) + v43) + (float)(v29 * *((float *)this + 41));
  v122[9] = v46 + (float)(v29 * *((float *)this + 42));
  v49 = *((float *)this + 53);
  v122[8] = v48;
  v50 = *((float *)this + 57);
  v51 = v47 * *((float *)this + 34);
  v52 = (float)((float)(v49 * *((float *)this + 19)) + (float)(v41 * *((float *)this + 24)))
      + (float)(v45 * *((float *)this + 29));
  v122[10] = (float)((float)((float)((float)(v49 * *((float *)this + 18)) + (float)(v41 * *((float *)this + 23)))
                           + (float)(v45 * *((float *)this + 28)))
                   + (float)(v47 * *((float *)this + 33)))
           + (float)(v50 * *((float *)this + 38));
  v53 = v52 + v51;
  v54 = v47 * *((float *)this + 35);
  v55 = (float)((float)(v49 * *((float *)this + 20)) + (float)(v41 * *((float *)this + 25)))
      + (float)(v45 * *((float *)this + 30));
  v122[11] = v53 + (float)(v50 * *((float *)this + 39));
  v56 = v49;
  v57 = v55 + v54;
  v58 = v41;
  v59 = v45 * *((float *)this + 31);
  v60 = (float)(v49 * *((float *)this + 22)) + (float)(v41 * *((float *)this + 27));
  v61 = *((float *)this + 59);
  v62 = (float)(v56 * *((float *)this + 21)) + (float)(v58 * *((float *)this + 26));
  v63 = v47 * *((float *)this + 36);
  v64 = v60 + (float)(v45 * v7);
  v122[12] = v57 + (float)(v50 * *((float *)this + 40));
  v65 = *((float *)this + 60);
  v66 = v62 + v59;
  v67 = v50;
  v68 = v64 + (float)(v47 * v8);
  v69 = *((float *)this + 61);
  v70 = v66 + v63;
  v71 = v61 * *((float *)this + 23);
  v72 = v68 + (float)(v50 * *((float *)this + 42));
  v73 = *((float *)this + 62);
  v74 = v70 + (float)(v67 * *((float *)this + 41));
  v122[14] = v72;
  v75 = *((float *)this + 58);
  v122[13] = v74;
  v76 = (float)((float)((float)(v75 * *((float *)this + 18)) + v71) + (float)(v65 * *((float *)this + 28)))
      + (float)(v69 * *((float *)this + 33));
  v77 = v69 * *((float *)this + 34);
  v78 = (float)((float)(v75 * *((float *)this + 19)) + (float)(v61 * *((float *)this + 24)))
      + (float)(v65 * *((float *)this + 29));
  v122[15] = v76 + (float)(v73 * *((float *)this + 38));
  v79 = v78 + v77;
  v80 = (float)(v75 * *((float *)this + 20)) + (float)(v61 * *((float *)this + 25));
  v81 = v69 * *((float *)this + 35);
  v82 = v65 * *((float *)this + 30);
  v122[16] = v79 + (float)(v73 * *((float *)this + 39));
  v83 = (float)(v80 + v82) + v81;
  v84 = (float)(v75 * *((float *)this + 21)) + (float)(v61 * *((float *)this + 26));
  v85 = (float)(v75 * *((float *)this + 22)) + (float)(v61 * *((float *)this + 27));
  v86 = *((float *)this + 64);
  v87 = v69 * *((float *)this + 36);
  v88 = v84 + (float)(v65 * *((float *)this + 31));
  v122[17] = v83 + (float)(v73 * *((float *)this + 40));
  v89 = v85 + (float)(v65 * v7);
  v90 = *((float *)this + 65);
  v91 = v73 * *((float *)this + 41);
  v92 = v73 * *((float *)this + 42);
  v93 = v88 + v87;
  v94 = v86 * *((float *)this + 23);
  v95 = v93 + v91;
  v96 = v90 * *((float *)this + 28);
  v97 = v89 + (float)(v69 * v8);
  v98 = *((float *)this + 66);
  v122[18] = v95;
  v99 = v97 + v92;
  v100 = *((float *)this + 67);
  v122[19] = v99;
  v101 = *((float *)this + 63);
  v102 = (float)((float)((float)(v101 * *((float *)this + 18)) + v94) + v96) + (float)(v98 * *((float *)this + 33));
  v103 = v90 * *((float *)this + 29);
  v104 = (float)(v101 * *((float *)this + 19)) + (float)(v86 * *((float *)this + 24));
  v105 = v98 * *((float *)this + 34);
  v122[20] = v102 + (float)(v100 * *((float *)this + 38));
  v106 = (float)(v104 + v103) + v105;
  v107 = v98 * *((float *)this + 35);
  v108 = (float)((float)(v101 * *((float *)this + 20)) + (float)(v86 * *((float *)this + 25)))
       + (float)(v90 * *((float *)this + 30));
  v122[21] = v106 + (float)(v100 * *((float *)this + 39));
  v109 = v90 * *((float *)this + 31);
  v110 = (float)(v101 * *((float *)this + 21)) + (float)(v86 * *((float *)this + 26));
  v111 = (float)((float)(v101 * *((float *)this + 22)) + (float)(v86 * *((float *)this + 27))) + (float)(v90 * v7);
  v122[22] = (float)(v108 + v107) + (float)(v100 * *((float *)this + 40));
  v112 = v98 * *((float *)this + 36);
  v113 = v110 + v109;
  v114 = v100;
  v115 = v100 * *((float *)this + 42);
  v116 = v114 * *((float *)this + 41);
  v117 = (CVisual *)*((_QWORD *)this + 5);
  v122[24] = (float)(v111 + (float)(v98 * v8)) + v115;
  v122[23] = (float)(v113 + v112) + v116;
  v118 = CVisual::SetColorTransform(v117, (const struct MilColorTransform *)v122);
  v119 = v118;
  if ( v118 >= 0 )
  {
    v120 = CVisual::RenderRecursive(*((CVisual **)this + 5));
    v119 = v120;
    if ( v120 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v120, 0x154u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v118, 0x14Fu);
  }
  return v119;
}
