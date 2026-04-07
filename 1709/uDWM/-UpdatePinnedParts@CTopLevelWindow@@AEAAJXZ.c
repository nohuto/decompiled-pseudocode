/*
 * XREFs of ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18001C5C0
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18001CF68 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x1800312C4 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdatePinnedParts(CTopLevelWindow *this)
{
  __m128i v1; // xmm1
  int v3; // edi
  int v4; // ebx
  int v5; // r15d
  __int32 v6; // r14d
  struct CTopLevelWindow::WindowFrame *v7; // rax
  int v8; // r10d
  int v9; // r9d
  double v10; // xmm1_8
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // ebx
  __int32 v15; // r12d
  int v16; // r15d
  __int32 v17; // esi
  int v18; // r14d
  int v19; // edi
  int v20; // edx
  int v21; // ecx
  __int64 v22; // rax
  int v23; // r15d
  __int64 v24; // rax
  int v25; // r14d
  __int64 v26; // rax
  int v27; // edi
  __int64 v28; // rax
  int v29; // r11d
  int v30; // r8d
  int v31; // eax
  int v32; // edx
  int v33; // edx
  char *v34; // rdi
  _DWORD *v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rcx
  int v39; // edx
  __int64 v40; // rcx
  CVisual *v41; // rcx
  void (__fastcall *v42)(CVisual *, int); // rax
  int v43; // edx
  __int64 v44; // rcx
  CVisual *v45; // rcx
  void (__fastcall *v46)(CVisual *, int); // rax
  CVisual *v47; // rcx
  void (__fastcall *v48)(CVisual *, int); // rax
  CVisual *v50; // rcx
  void (__fastcall *v51)(CVisual *, int); // rax
  int v52; // [rsp+20h] [rbp-E0h]
  int v53; // [rsp+24h] [rbp-DCh]
  int v54; // [rsp+28h] [rbp-D8h]
  int v55; // [rsp+30h] [rbp-D0h]
  int v56; // [rsp+38h] [rbp-C8h]
  __int64 v57; // [rsp+38h] [rbp-C8h]
  __int128 v59; // [rsp+48h] [rbp-B8h]
  int v60; // [rsp+60h] [rbp-A0h]
  __int64 v61; // [rsp+60h] [rbp-A0h]
  __m128i v62; // [rsp+70h] [rbp-90h]
  unsigned int v63; // [rsp+80h] [rbp-80h]
  int v64; // [rsp+90h] [rbp-70h]
  int v65; // [rsp+94h] [rbp-6Ch]
  _DWORD v66[18]; // [rsp+98h] [rbp-68h] BYREF
  int v67; // [rsp+E0h] [rbp-20h]
  int v68; // [rsp+E4h] [rbp-1Ch]
  int v69; // [rsp+E8h] [rbp-18h]
  int v70; // [rsp+ECh] [rbp-14h]
  int v71; // [rsp+F0h] [rbp-10h]
  __int32 v72; // [rsp+F4h] [rbp-Ch]
  int v73; // [rsp+F8h] [rbp-8h]
  int v74; // [rsp+FCh] [rbp-4h]
  int v75; // [rsp+100h] [rbp+0h]
  int v76; // [rsp+104h] [rbp+4h]
  int v77; // [rsp+108h] [rbp+8h]
  int v78; // [rsp+10Ch] [rbp+Ch]
  int v79; // [rsp+110h] [rbp+10h]
  __int32 v80; // [rsp+114h] [rbp+14h]
  int v81; // [rsp+118h] [rbp+18h]
  int v82; // [rsp+11Ch] [rbp+1Ch]
  int v83; // [rsp+120h] [rbp+20h]
  int v84; // [rsp+124h] [rbp+24h]
  int v85; // [rsp+128h] [rbp+28h]
  __int32 v86; // [rsp+12Ch] [rbp+2Ch]
  int v87; // [rsp+130h] [rbp+30h]
  int v88; // [rsp+134h] [rbp+34h]
  int v89; // [rsp+138h] [rbp+38h]
  __int32 v90; // [rsp+13Ch] [rbp+3Ch]
  int v91; // [rsp+140h] [rbp+40h]
  __int32 v92; // [rsp+144h] [rbp+44h]
  int v93; // [rsp+148h] [rbp+48h]
  int v94; // [rsp+14Ch] [rbp+4Ch]
  int v95; // [rsp+150h] [rbp+50h]
  int v96; // [rsp+154h] [rbp+54h]
  int v97; // [rsp+158h] [rbp+58h]
  int v98; // [rsp+15Ch] [rbp+5Ch]
  int v99; // [rsp+160h] [rbp+60h]
  int v100; // [rsp+164h] [rbp+64h]
  int v101; // [rsp+168h] [rbp+68h]
  int v102; // [rsp+16Ch] [rbp+6Ch]
  int v103; // [rsp+170h] [rbp+70h]
  int v104; // [rsp+174h] [rbp+74h]
  int v105; // [rsp+178h] [rbp+78h]
  int v106; // [rsp+17Ch] [rbp+7Ch]
  int v107; // [rsp+180h] [rbp+80h]
  __int32 v108; // [rsp+184h] [rbp+84h]
  int v109; // [rsp+188h] [rbp+88h]
  int v110; // [rsp+18Ch] [rbp+8Ch]
  int v111; // [rsp+190h] [rbp+90h]
  int v112; // [rsp+194h] [rbp+94h]
  int v113; // [rsp+198h] [rbp+98h]
  __int32 v114; // [rsp+19Ch] [rbp+9Ch]
  int v115; // [rsp+1A0h] [rbp+A0h]
  int v116; // [rsp+1A4h] [rbp+A4h]
  int v117; // [rsp+1A8h] [rbp+A8h]
  int v118; // [rsp+1ACh] [rbp+ACh]
  int v119; // [rsp+1B0h] [rbp+B0h]
  int v120; // [rsp+1B4h] [rbp+B4h]
  int v121; // [rsp+1B8h] [rbp+B8h]
  unsigned int v122; // [rsp+1BCh] [rbp+BCh]
  int v123; // [rsp+1C0h] [rbp+C0h]
  int v124; // [rsp+1C4h] [rbp+C4h]
  int v125; // [rsp+1C8h] [rbp+C8h]
  __int32 v126; // [rsp+1CCh] [rbp+CCh]
  unsigned __int64 v127; // [rsp+1D0h] [rbp+D0h]
  int v128; // [rsp+1D8h] [rbp+D8h]
  int v129; // [rsp+1DCh] [rbp+DCh]
  int v130; // [rsp+1E0h] [rbp+E0h]
  int v131; // [rsp+1E4h] [rbp+E4h]
  int v132; // [rsp+1E8h] [rbp+E8h]
  __int32 v133; // [rsp+1ECh] [rbp+ECh]
  int v134; // [rsp+1F0h] [rbp+F0h]
  int v135; // [rsp+1F4h] [rbp+F4h]
  int v136; // [rsp+1F8h] [rbp+F8h]
  __int32 v137; // [rsp+1FCh] [rbp+FCh]
  int v138; // [rsp+200h] [rbp+100h]
  __int32 v139; // [rsp+204h] [rbp+104h]
  int v140; // [rsp+208h] [rbp+108h]
  int v141; // [rsp+20Ch] [rbp+10Ch]
  int v142; // [rsp+210h] [rbp+110h]
  __int32 v143; // [rsp+214h] [rbp+114h]
  int v144; // [rsp+218h] [rbp+118h]
  __int32 v145; // [rsp+21Ch] [rbp+11Ch]
  int v146; // [rsp+220h] [rbp+120h]
  int v147; // [rsp+224h] [rbp+124h]
  int v148; // [rsp+228h] [rbp+128h]
  __int32 v149; // [rsp+22Ch] [rbp+12Ch]
  unsigned __int64 v150; // [rsp+230h] [rbp+130h]
  int v151; // [rsp+238h] [rbp+138h]
  int v152; // [rsp+23Ch] [rbp+13Ch]
  int v153; // [rsp+240h] [rbp+140h]
  int v154; // [rsp+244h] [rbp+144h]
  int v155; // [rsp+248h] [rbp+148h]
  __int32 v156; // [rsp+24Ch] [rbp+14Ch]
  int v157; // [rsp+250h] [rbp+150h]
  int v158; // [rsp+254h] [rbp+154h]
  int v159; // [rsp+258h] [rbp+158h]
  int v160; // [rsp+25Ch] [rbp+15Ch]
  int v161; // [rsp+260h] [rbp+160h]
  __int32 v162; // [rsp+264h] [rbp+164h]
  int v163; // [rsp+268h] [rbp+168h]
  int v164; // [rsp+26Ch] [rbp+16Ch]
  int v165; // [rsp+270h] [rbp+170h]
  int v166; // [rsp+274h] [rbp+174h]
  int v167; // [rsp+278h] [rbp+178h]
  int v168; // [rsp+27Ch] [rbp+17Ch]
  int v169; // [rsp+280h] [rbp+180h]
  int v170; // [rsp+284h] [rbp+184h]
  int v171; // [rsp+288h] [rbp+188h]
  int v172; // [rsp+28Ch] [rbp+18Ch]
  int v173; // [rsp+290h] [rbp+190h]
  int v174; // [rsp+294h] [rbp+194h]
  int v175; // [rsp+298h] [rbp+198h]
  int v176; // [rsp+29Ch] [rbp+19Ch]

  v1 = *(__m128i *)((char *)this + 620);
  v3 = *((_DWORD *)this + 152) - v1.m128i_i32[1];
  v4 = _mm_cvtsi128_si32(v1);
  v62 = v1;
  v5 = *((_DWORD *)this + 151) - v4;
  v55 = _mm_cvtsi128_si32(_mm_srli_si128(v1, 8));
  v56 = *((_DWORD *)this + 153) - v55;
  v6 = *((_DWORD *)this + 154) - _mm_srli_si128(v1, 8).m128i_i32[1];
  v59 = 0uLL;
  v7 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
         *((_DWORD *)this + 146),
         1,
         (*(_BYTE *)(*((_QWORD *)this + 90) + 595LL) & 0x20) != 0);
  v8 = 0;
  v9 = 0;
  if ( v7 )
  {
    v10 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 55);
    v8 = (int)((double)(*(_DWORD *)(*((_QWORD *)v7 + 187) + 24LL) - 1) * v10);
    v9 = (int)((double)(*(_DWORD *)(*((_QWORD *)v7 + 205) + 24LL) - 1) * v10);
  }
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( *((_DWORD *)this + 147) - v8 >= 0 )
    v11 = *((_DWORD *)this + 147) - v8;
  v14 = v11 + v4;
  if ( *((_DWORD *)this + 148) - v8 >= 0 )
    v12 = *((_DWORD *)this + 148) - v8;
  v15 = v12 + v62.m128i_i32[1];
  v62.m128i_i32[1] += v12;
  if ( *((_DWORD *)this + 150) - v8 >= 0 )
    v13 = *((_DWORD *)this + 150) - v8;
  v16 = v5 - v11;
  v17 = v13 + v62.m128i_i32[3];
  v52 = v16;
  v18 = v6 - v13;
  v19 = v3 - v12;
  v54 = v18;
  v53 = v19;
  if ( v16 < 0 )
  {
    v20 = 0;
    v52 = 0;
  }
  else
  {
    v20 = v16;
  }
  if ( v19 < 0 )
  {
    v21 = 0;
    v53 = 0;
  }
  else
  {
    v21 = v19;
  }
  if ( v18 < 0 )
    v54 = 0;
  v60 = v9 + v62.m128i_i32[2];
  v22 = *((_QWORD *)this + 55);
  v63 = v9 + v17;
  if ( v22 )
  {
    v23 = *(_DWORD *)(v22 + 24);
    LODWORD(v59) = v23;
  }
  else
  {
    v23 = 0;
  }
  v24 = *((_QWORD *)this + 56);
  if ( v24 )
  {
    v25 = *(_DWORD *)(v24 + 24);
    DWORD1(v59) = v25;
  }
  else
  {
    v25 = 0;
  }
  v26 = *((_QWORD *)this + 57);
  if ( v26 )
  {
    v27 = *(_DWORD *)(v26 + 28);
    DWORD2(v59) = v27;
  }
  else
  {
    v27 = 0;
  }
  v28 = *((_QWORD *)this + 58);
  if ( v28 )
  {
    v29 = *(_DWORD *)(v28 + 28);
    HIDWORD(v59) = v29;
  }
  else
  {
    v29 = (unsigned __int128)0LL >> 96;
  }
  v66[0] = v55;
  v66[6] = v55;
  *(_OWORD *)((char *)this + 652) = v59;
  v30 = *((_DWORD *)this + 151);
  v66[12] = v55;
  v66[2] = v20;
  v66[14] = v21;
  v31 = *((_DWORD *)this + 154);
  v32 = *((_DWORD *)this + 152);
  v67 = *((_DWORD *)this + 153);
  v73 = v67;
  v68 = v31;
  v74 = v31;
  v66[3] = v56;
  v66[9] = v56;
  v66[15] = v56;
  v66[4] = v30;
  v83 = v30;
  v95 = v30;
  v75 = v53;
  v81 = v52;
  v93 = v53;
  v66[5] = v32;
  v84 = v32;
  v96 = v32;
  v82 = v54;
  v88 = v54;
  v94 = v54;
  v100 = v56;
  v64 = v14;
  v65 = 0x7FFFFFFF;
  v66[1] = 0x7FFFFFFF;
  v66[7] = 0x7FFFFFFF;
  v66[8] = 0x7FFFFFFF;
  v66[10] = 0x7FFFFFFF;
  v66[11] = v15;
  v66[13] = 0x7FFFFFFF;
  v66[16] = v14;
  v66[17] = 0x7FFFFFFF;
  v69 = v52;
  v70 = 0x7FFFFFFF;
  v71 = 0x7FFFFFFF;
  v72 = v15;
  v76 = 0x7FFFFFFF;
  v77 = v14;
  v78 = 0x7FFFFFFF;
  v79 = 0x7FFFFFFF;
  v80 = v17;
  v85 = 0x7FFFFFFF;
  v86 = v17;
  v87 = 0x7FFFFFFF;
  v89 = 0x7FFFFFFF;
  v90 = v15;
  v91 = 0x7FFFFFFF;
  v92 = v17;
  v97 = v55;
  v98 = 0x7FFFFFFF;
  v99 = 0x7FFFFFFF;
  v101 = v14;
  v102 = 0x7FFFFFFF;
  v103 = v55;
  v104 = 0x7FFFFFFF;
  v105 = v9;
  v106 = v9;
  v107 = v9 + v14;
  v108 = v9 + v15;
  v109 = v55;
  v110 = 0x7FFFFFFF;
  v119 = v14;
  v130 = v14;
  v133 = v17;
  v139 = v17;
  v145 = v17;
  v156 = v17;
  v162 = v17;
  v170 = v27;
  v115 = v55;
  v155 = v55;
  v161 = v55;
  v33 = v55 - v27;
  v153 = v14 - v23;
  v34 = (char *)this + 296;
  v165 = v14 - v23;
  v171 = v14 - v23;
  v35 = v66;
  v174 = v17 - v29;
  v36 = 22LL;
  v163 = v25;
  v114 = v62.m128i_i32[1];
  v126 = v62.m128i_i32[1];
  v143 = v62.m128i_i32[1];
  v111 = 0x7FFFFFFF;
  v112 = v9;
  v113 = 0x7FFFFFFF;
  v116 = 0x7FFFFFFF;
  v117 = v9;
  v118 = v9;
  v120 = 0x7FFFFFFF;
  v121 = v9 + v62.m128i_i32[2];
  v122 = v63;
  v123 = v9;
  v124 = 0x7FFFFFFF;
  v125 = 0x7FFFFFFF;
  v127 = __PAIR64__(v63, v60);
  v128 = v9;
  v129 = 0x7FFFFFFF;
  v131 = 0x7FFFFFFF;
  v132 = 0x7FFFFFFF;
  v134 = v9;
  v135 = v9;
  v136 = v107;
  v137 = v9 + v15;
  v138 = 0x7FFFFFFF;
  v140 = 0x7FFFFFFF;
  v141 = v9;
  v142 = 0x7FFFFFFF;
  v144 = 0x7FFFFFFF;
  v146 = v9;
  v147 = v9;
  v148 = v107;
  v149 = v9 + v15;
  v150 = __PAIR64__(v63, v60);
  v151 = 0x7FFFFFFF;
  v152 = 0x7FFFFFFF;
  v154 = 0x7FFFFFFF;
  v157 = v23;
  v158 = 0x7FFFFFFF;
  v159 = 0x7FFFFFFF;
  v160 = v15 - v25;
  v164 = 0x7FFFFFFF;
  v166 = v15 - v25;
  v167 = v33;
  v168 = 0x7FFFFFFF;
  v169 = 0x7FFFFFFF;
  v172 = v15 - v25;
  v173 = 0x7FFFFFFF;
  v175 = 0x7FFFFFFF;
  v176 = v29;
  do
  {
    v37 = *(_QWORD *)v34;
    if ( *(_QWORD *)v34 )
    {
      if ( *(_DWORD *)(v37 + 32) != *(v35 - 2)
        || *(_DWORD *)(v37 + 36) != *(v35 - 1)
        || *(_DWORD *)(v37 + 40) != *v35
        || *(_DWORD *)(v37 + 44) != v35[1] )
      {
        *(_DWORD *)(v37 + 96) |= 1u;
        *(_OWORD *)(v37 + 32) = *(_OWORD *)(v35 - 2);
        v50 = *(CVisual **)(v37 + 80);
        if ( v50 )
        {
          v51 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v50 + 24LL);
          if ( v51 == CVisual::SetDirtyFlags )
            CVisual::SetDirtyFlags(v50, 4096);
          else
            v51(v50, 4096);
        }
      }
      v39 = v35[2];
      if ( v39 != 0x7FFFFFFF )
      {
        v40 = *(_QWORD *)v34;
        LODWORD(v61) = v35[2];
        HIDWORD(v61) = *(_DWORD *)(*(_QWORD *)v34 + 28LL);
        if ( *(_DWORD *)(*(_QWORD *)v34 + 24LL) != v39 )
        {
          *(_DWORD *)(v40 + 96) |= 1u;
          *(_QWORD *)(v40 + 24) = v61;
          v41 = *(CVisual **)(v40 + 80);
          if ( v41 )
          {
            v42 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v41 + 24LL);
            if ( v42 == CVisual::SetDirtyFlags )
              CVisual::SetDirtyFlags(v41, 0x2000);
            else
              v42(v41, 0x2000);
          }
        }
      }
      v43 = v35[3];
      if ( v43 != 0x7FFFFFFF )
      {
        v44 = *(_QWORD *)v34;
        HIDWORD(v57) = v35[3];
        LODWORD(v57) = *(_DWORD *)(*(_QWORD *)v34 + 24LL);
        if ( *(_DWORD *)(*(_QWORD *)v34 + 28LL) != v43 )
        {
          *(_DWORD *)(v44 + 96) |= 1u;
          *(_QWORD *)(v44 + 24) = v57;
          v45 = *(CVisual **)(v44 + 80);
          if ( v45 )
          {
            v46 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v45 + 24LL);
            if ( v46 == CVisual::SetDirtyFlags )
              CVisual::SetDirtyFlags(v45, 0x2000);
            else
              v46(v45, 0x2000);
          }
        }
      }
    }
    v34 += 8;
    v35 += 6;
    --v36;
  }
  while ( v36 );
  v47 = (CVisual *)*((_QWORD *)this + 34);
  v48 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v47 + 24LL);
  if ( v48 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(v47, 4096);
  else
    v48(v47, 4096);
  return 0LL;
}
