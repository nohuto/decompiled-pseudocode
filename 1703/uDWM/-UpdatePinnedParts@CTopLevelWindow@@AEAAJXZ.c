/*
 * XREFs of ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x180027A50
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180028460 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18001532C (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdatePinnedParts(CTopLevelWindow *this)
{
  __m128i v1; // xmm1
  int v3; // r13d
  int v4; // esi
  int v5; // edi
  __int32 v6; // ebx
  struct CTopLevelWindow::WindowFrame *v7; // rax
  int v8; // r10d
  int v9; // r9d
  double v10; // xmm1_8
  int v11; // eax
  int v12; // r8d
  int v13; // esi
  int v14; // eax
  int v15; // edx
  __int32 v16; // ecx
  int v17; // eax
  int v18; // ecx
  __int32 v19; // r10d
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // r13d
  int v24; // eax
  int v25; // ebx
  int v26; // ecx
  __int64 v27; // rax
  int v28; // r14d
  __int64 v29; // rax
  int v30; // edi
  __int64 v31; // rax
  int v32; // ebx
  __int64 v33; // rax
  int v34; // r11d
  int v35; // r8d
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  int v39; // edx
  char *v40; // rdi
  _DWORD *v41; // rbx
  __int64 v42; // rsi
  __int64 v43; // rcx
  int v44; // edx
  __int64 v45; // rcx
  CVisual *v46; // rcx
  void (__fastcall *v47)(CVisual *, int); // rax
  int v48; // eax
  __int64 v49; // rcx
  CVisual *v50; // rcx
  void (__fastcall *v51)(CVisual *, int); // rax
  int v52; // eax
  CVisual *v53; // rcx
  void (__fastcall *v54)(CVisual *, int); // rax
  CVisual *v56; // r14
  int v57; // ecx
  void (__fastcall *v58)(CVisual *); // rax
  CVisual *v59; // rcx
  void (__fastcall *v60)(CVisual *, int); // rax
  CVisual *v61; // r14
  int v62; // ecx
  void (__fastcall *v63)(CVisual *); // rax
  int v64; // [rsp+20h] [rbp-E0h]
  __int32 v65; // [rsp+24h] [rbp-DCh]
  int v66; // [rsp+28h] [rbp-D8h]
  int v67; // [rsp+30h] [rbp-D0h]
  int v68; // [rsp+38h] [rbp-C8h]
  __int64 v69; // [rsp+38h] [rbp-C8h]
  __int128 v70; // [rsp+40h] [rbp-C0h]
  __int64 v71; // [rsp+50h] [rbp-B0h]
  __m128i v73; // [rsp+60h] [rbp-A0h]
  int v74; // [rsp+90h] [rbp-70h]
  int v75; // [rsp+94h] [rbp-6Ch]
  int v76; // [rsp+98h] [rbp-68h]
  int v77; // [rsp+9Ch] [rbp-64h]
  int v78; // [rsp+A0h] [rbp-60h]
  _DWORD v79[16]; // [rsp+A4h] [rbp-5Ch] BYREF
  int v80; // [rsp+E4h] [rbp-1Ch]
  int v81; // [rsp+E8h] [rbp-18h]
  int v82; // [rsp+ECh] [rbp-14h]
  int v83; // [rsp+F0h] [rbp-10h]
  int v84; // [rsp+F4h] [rbp-Ch]
  int v85; // [rsp+F8h] [rbp-8h]
  int v86; // [rsp+FCh] [rbp-4h]
  int v87; // [rsp+100h] [rbp+0h]
  int v88; // [rsp+104h] [rbp+4h]
  int v89; // [rsp+108h] [rbp+8h]
  int v90; // [rsp+10Ch] [rbp+Ch]
  int v91; // [rsp+110h] [rbp+10h]
  __int32 v92; // [rsp+114h] [rbp+14h]
  int v93; // [rsp+118h] [rbp+18h]
  int v94; // [rsp+11Ch] [rbp+1Ch]
  int v95; // [rsp+120h] [rbp+20h]
  int v96; // [rsp+124h] [rbp+24h]
  int v97; // [rsp+128h] [rbp+28h]
  __int32 v98; // [rsp+12Ch] [rbp+2Ch]
  int v99; // [rsp+130h] [rbp+30h]
  int v100; // [rsp+134h] [rbp+34h]
  int v101; // [rsp+138h] [rbp+38h]
  int v102; // [rsp+13Ch] [rbp+3Ch]
  int v103; // [rsp+140h] [rbp+40h]
  __int32 v104; // [rsp+144h] [rbp+44h]
  int v105; // [rsp+148h] [rbp+48h]
  int v106; // [rsp+14Ch] [rbp+4Ch]
  int v107; // [rsp+150h] [rbp+50h]
  int v108; // [rsp+154h] [rbp+54h]
  int v109; // [rsp+158h] [rbp+58h]
  int v110; // [rsp+15Ch] [rbp+5Ch]
  int v111; // [rsp+160h] [rbp+60h]
  int v112; // [rsp+164h] [rbp+64h]
  int v113; // [rsp+168h] [rbp+68h]
  int v114; // [rsp+16Ch] [rbp+6Ch]
  int v115; // [rsp+170h] [rbp+70h]
  int v116; // [rsp+174h] [rbp+74h]
  int v117; // [rsp+178h] [rbp+78h]
  int v118; // [rsp+17Ch] [rbp+7Ch]
  int v119; // [rsp+180h] [rbp+80h]
  int v120; // [rsp+184h] [rbp+84h]
  int v121; // [rsp+188h] [rbp+88h]
  int v122; // [rsp+18Ch] [rbp+8Ch]
  int v123; // [rsp+190h] [rbp+90h]
  int v124; // [rsp+194h] [rbp+94h]
  int v125; // [rsp+198h] [rbp+98h]
  __int32 v126; // [rsp+19Ch] [rbp+9Ch]
  int v127; // [rsp+1A0h] [rbp+A0h]
  int v128; // [rsp+1A4h] [rbp+A4h]
  int v129; // [rsp+1A8h] [rbp+A8h]
  int v130; // [rsp+1ACh] [rbp+ACh]
  int v131; // [rsp+1B0h] [rbp+B0h]
  int v132; // [rsp+1B4h] [rbp+B4h]
  int v133; // [rsp+1B8h] [rbp+B8h]
  __int32 v134; // [rsp+1BCh] [rbp+BCh]
  int v135; // [rsp+1C0h] [rbp+C0h]
  int v136; // [rsp+1C4h] [rbp+C4h]
  int v137; // [rsp+1C8h] [rbp+C8h]
  __int32 v138; // [rsp+1CCh] [rbp+CCh]
  int v139; // [rsp+1D0h] [rbp+D0h]
  __int32 v140; // [rsp+1D4h] [rbp+D4h]
  int v141; // [rsp+1D8h] [rbp+D8h]
  int v142; // [rsp+1DCh] [rbp+DCh]
  int v143; // [rsp+1E0h] [rbp+E0h]
  int v144; // [rsp+1E4h] [rbp+E4h]
  int v145; // [rsp+1E8h] [rbp+E8h]
  __int32 v146; // [rsp+1ECh] [rbp+ECh]
  int v147; // [rsp+1F0h] [rbp+F0h]
  int v148; // [rsp+1F4h] [rbp+F4h]
  int v149; // [rsp+1F8h] [rbp+F8h]
  int v150; // [rsp+1FCh] [rbp+FCh]
  int v151; // [rsp+200h] [rbp+100h]
  __int32 v152; // [rsp+204h] [rbp+104h]
  int v153; // [rsp+208h] [rbp+108h]
  int v154; // [rsp+20Ch] [rbp+10Ch]
  int v155; // [rsp+210h] [rbp+110h]
  __int32 v156; // [rsp+214h] [rbp+114h]
  int v157; // [rsp+218h] [rbp+118h]
  __int32 v158; // [rsp+21Ch] [rbp+11Ch]
  int v159; // [rsp+220h] [rbp+120h]
  int v160; // [rsp+224h] [rbp+124h]
  int v161; // [rsp+228h] [rbp+128h]
  int v162; // [rsp+22Ch] [rbp+12Ch]
  int v163; // [rsp+230h] [rbp+130h]
  __int32 v164; // [rsp+234h] [rbp+134h]
  int v165; // [rsp+238h] [rbp+138h]
  int v166; // [rsp+23Ch] [rbp+13Ch]
  int v167; // [rsp+240h] [rbp+140h]
  int v168; // [rsp+244h] [rbp+144h]
  int v169; // [rsp+248h] [rbp+148h]
  __int32 v170; // [rsp+24Ch] [rbp+14Ch]
  int v171; // [rsp+250h] [rbp+150h]
  int v172; // [rsp+254h] [rbp+154h]
  int v173; // [rsp+258h] [rbp+158h]
  int v174; // [rsp+25Ch] [rbp+15Ch]
  int v175; // [rsp+260h] [rbp+160h]
  __int32 v176; // [rsp+264h] [rbp+164h]
  int v177; // [rsp+268h] [rbp+168h]
  int v178; // [rsp+26Ch] [rbp+16Ch]
  int v179; // [rsp+270h] [rbp+170h]
  int v180; // [rsp+274h] [rbp+174h]
  int v181; // [rsp+278h] [rbp+178h]
  int v182; // [rsp+27Ch] [rbp+17Ch]
  int v183; // [rsp+280h] [rbp+180h]
  int v184; // [rsp+284h] [rbp+184h]
  int v185; // [rsp+288h] [rbp+188h]
  int v186; // [rsp+28Ch] [rbp+18Ch]
  int v187; // [rsp+290h] [rbp+190h]
  int v188; // [rsp+294h] [rbp+194h]
  int v189; // [rsp+298h] [rbp+198h]
  int v190; // [rsp+29Ch] [rbp+19Ch]

  v1 = *(__m128i *)((char *)this + 620);
  v3 = *((_DWORD *)this + 152) - v1.m128i_i32[1];
  v4 = _mm_cvtsi128_si32(v1);
  v73 = v1;
  v5 = *((_DWORD *)this + 151) - v4;
  v67 = _mm_cvtsi128_si32(_mm_srli_si128(v1, 8));
  v68 = *((_DWORD *)this + 153) - v67;
  v6 = *((_DWORD *)this + 154) - _mm_srli_si128(v1, 8).m128i_i32[1];
  v70 = 0uLL;
  v7 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
         *((_DWORD *)this + 146),
         1,
         (*(_BYTE *)(*((_QWORD *)this + 90) + 595LL) & 0x20) != 0);
  v8 = 0;
  v9 = 0;
  if ( v7 )
  {
    v10 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 49);
    v8 = (int)((double)(*(_DWORD *)(*((_QWORD *)v7 + 187) + 24LL) - 1) * v10);
    v9 = (int)((double)(*(_DWORD *)(*((_QWORD *)v7 + 205) + 24LL) - 1) * v10);
  }
  v11 = 0;
  v12 = *((_DWORD *)this + 147) - v8;
  if ( v12 >= 0 )
    v11 = *((_DWORD *)this + 147) - v8;
  v13 = v11 + v4;
  v14 = 0;
  v15 = *((_DWORD *)this + 148) - v8;
  if ( v15 >= 0 )
    v14 = *((_DWORD *)this + 148) - v8;
  v16 = v14 + v73.m128i_i32[1];
  v17 = 0;
  v65 = v16;
  v73.m128i_i32[1] = v16;
  v18 = *((_DWORD *)this + 150) - v8;
  if ( v18 >= 0 )
    v17 = *((_DWORD *)this + 150) - v8;
  v19 = v17 + v73.m128i_i32[3];
  v20 = 0;
  if ( v12 >= 0 )
    v20 = v12;
  v21 = v5 - v20;
  v22 = 0;
  v64 = v21;
  if ( v15 >= 0 )
    v22 = v15;
  v23 = v3 - v22;
  v24 = 0;
  if ( v18 >= 0 )
    v24 = v18;
  v25 = v6 - v24;
  v66 = v25;
  if ( v21 < 0 )
  {
    v26 = 0;
    v64 = 0;
  }
  else
  {
    v26 = v21;
  }
  if ( v23 < 0 )
    v23 = 0;
  if ( v25 < 0 )
    v66 = 0;
  v27 = *((_QWORD *)this + 55);
  if ( v27 )
  {
    v28 = *(_DWORD *)(v27 + 24);
    LODWORD(v70) = v28;
  }
  else
  {
    v28 = 0;
  }
  v29 = *((_QWORD *)this + 56);
  if ( v29 )
  {
    v30 = *(_DWORD *)(v29 + 24);
    DWORD1(v70) = v30;
  }
  else
  {
    v30 = 0;
  }
  v31 = *((_QWORD *)this + 57);
  if ( v31 )
  {
    v32 = *(_DWORD *)(v31 + 28);
    DWORD2(v70) = v32;
  }
  else
  {
    v32 = 0;
  }
  v33 = *((_QWORD *)this + 58);
  if ( v33 )
  {
    v34 = *(_DWORD *)(v33 + 28);
    HIDWORD(v70) = v34;
  }
  else
  {
    v34 = (unsigned __int128)0LL >> 96;
  }
  v79[8] = v65;
  *(_OWORD *)((char *)this + 652) = v70;
  v35 = *((_DWORD *)this + 151);
  v36 = *((_DWORD *)this + 152);
  v78 = v26;
  v79[0] = v68;
  v79[6] = v68;
  v79[12] = v68;
  v37 = *((_DWORD *)this + 153);
  v80 = *((_DWORD *)this + 154);
  v86 = v80;
  v93 = v64;
  v76 = v67;
  v79[3] = v67;
  v79[9] = v67;
  v79[1] = v35;
  v95 = v35;
  v107 = v35;
  v94 = v66;
  v100 = v66;
  v106 = v66;
  v79[2] = v36;
  v79[15] = v37;
  v81 = v64;
  v85 = v37;
  v96 = v36;
  v108 = v36;
  v112 = v68;
  v74 = v13;
  v75 = 0x7FFFFFFF;
  v77 = 0x7FFFFFFF;
  v79[4] = 0x7FFFFFFF;
  v79[5] = 0x7FFFFFFF;
  v79[7] = 0x7FFFFFFF;
  v79[10] = 0x7FFFFFFF;
  v79[11] = v23;
  v79[13] = v13;
  v79[14] = 0x7FFFFFFF;
  v82 = 0x7FFFFFFF;
  v83 = 0x7FFFFFFF;
  v84 = v65;
  v87 = v23;
  v88 = 0x7FFFFFFF;
  v89 = v13;
  v90 = 0x7FFFFFFF;
  v91 = 0x7FFFFFFF;
  v92 = v19;
  v97 = 0x7FFFFFFF;
  v98 = v19;
  v99 = 0x7FFFFFFF;
  v101 = 0x7FFFFFFF;
  v102 = v65;
  v103 = 0x7FFFFFFF;
  v104 = v19;
  v105 = v23;
  v109 = v67;
  v110 = 0x7FFFFFFF;
  v111 = 0x7FFFFFFF;
  v113 = v13;
  v114 = 0x7FFFFFFF;
  v115 = v67;
  v116 = 0x7FFFFFFF;
  v117 = v9;
  v118 = v9;
  v119 = v9 + v13;
  v120 = v9 + v73.m128i_i32[1];
  v121 = v67;
  v126 = v73.m128i_i32[1];
  v138 = v73.m128i_i32[1];
  v156 = v73.m128i_i32[1];
  v38 = v65 - v30;
  v131 = v13;
  v143 = v13;
  v177 = v30;
  v127 = v67;
  v146 = v19;
  v152 = v19;
  v158 = v19;
  v169 = v67;
  v170 = v19;
  v175 = v67;
  v39 = v67 - v32;
  v176 = v19;
  v167 = v13 - v28;
  v40 = (char *)this + 296;
  v179 = v13 - v28;
  v184 = v32;
  v41 = v79;
  v185 = v13 - v28;
  v42 = 22LL;
  v122 = 0x7FFFFFFF;
  v123 = 0x7FFFFFFF;
  v124 = v9;
  v125 = 0x7FFFFFFF;
  v128 = 0x7FFFFFFF;
  v129 = v9;
  v130 = v9;
  v132 = 0x7FFFFFFF;
  v133 = v9 + v73.m128i_i32[2];
  v134 = v9 + v19;
  v135 = v9;
  v136 = 0x7FFFFFFF;
  v137 = 0x7FFFFFFF;
  v139 = v9 + v73.m128i_i32[2];
  v140 = v9 + v19;
  v141 = v9;
  v142 = 0x7FFFFFFF;
  v144 = 0x7FFFFFFF;
  v145 = 0x7FFFFFFF;
  v147 = v9;
  v148 = v9;
  v149 = v119;
  v150 = v9 + v73.m128i_i32[1];
  v151 = 0x7FFFFFFF;
  v153 = 0x7FFFFFFF;
  v154 = v9;
  v155 = 0x7FFFFFFF;
  v157 = 0x7FFFFFFF;
  v159 = v9;
  v160 = v9;
  v161 = v119;
  v162 = v9 + v73.m128i_i32[1];
  v163 = v9 + v73.m128i_i32[2];
  v164 = v9 + v19;
  v165 = 0x7FFFFFFF;
  v166 = 0x7FFFFFFF;
  v168 = 0x7FFFFFFF;
  v171 = v28;
  v172 = 0x7FFFFFFF;
  v173 = 0x7FFFFFFF;
  v174 = v38;
  v178 = 0x7FFFFFFF;
  v180 = v38;
  v181 = v39;
  v182 = 0x7FFFFFFF;
  v183 = 0x7FFFFFFF;
  v186 = v38;
  v187 = 0x7FFFFFFF;
  v188 = v19 - v34;
  v189 = 0x7FFFFFFF;
  v190 = v34;
  do
  {
    v43 = *(_QWORD *)v40;
    if ( *(_QWORD *)v40 )
    {
      if ( *(_DWORD *)(v43 + 32) != *(v41 - 5)
        || *(_DWORD *)(v43 + 36) != *(v41 - 4)
        || *(_DWORD *)(v43 + 40) != *(v41 - 3)
        || *(_DWORD *)(v43 + 44) != *(v41 - 2) )
      {
        *(_DWORD *)(v43 + 96) |= 1u;
        *(_OWORD *)(v43 + 32) = *(_OWORD *)(v41 - 5);
        v59 = *(CVisual **)(v43 + 80);
        if ( v59 )
        {
          v60 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v59 + 24LL);
          if ( v60 == CVisual::SetDirtyFlags )
            CVisual::SetDirtyFlags(v59, 4096);
          else
            v60(v59, 4096);
        }
      }
      v44 = *(v41 - 1);
      if ( v44 != 0x7FFFFFFF )
      {
        v45 = *(_QWORD *)v40;
        LODWORD(v71) = *(v41 - 1);
        HIDWORD(v71) = *(_DWORD *)(*(_QWORD *)v40 + 28LL);
        if ( *(_DWORD *)(*(_QWORD *)v40 + 24LL) != v44 )
        {
          *(_DWORD *)(v45 + 96) |= 1u;
          *(_QWORD *)(v45 + 24) = v71;
          v46 = *(CVisual **)(v45 + 80);
          if ( v46 )
          {
            v47 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v46 + 24LL);
            if ( v47 == CVisual::SetDirtyFlags )
            {
              v48 = *((_DWORD *)v46 + 20);
              if ( (v48 & 0x2000) == 0 )
              {
                v61 = (CVisual *)*((_QWORD *)v46 + 3);
                for ( *((_DWORD *)v46 + 20) = v48 | 0x2000; v61; v61 = (CVisual *)*((_QWORD *)v61 + 3) )
                {
                  v62 = *((_DWORD *)v61 + 20);
                  if ( (v62 & 1) != 0 )
                    break;
                  v63 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v61 + 32LL);
                  if ( v63 == CVisual::SetDirtyChildren )
                    *((_DWORD *)v61 + 20) = v62 | 1;
                  else
                    v63(v61);
                }
              }
            }
            else
            {
              v47(v46, 0x2000);
            }
          }
        }
      }
      if ( *v41 != 0x7FFFFFFF )
      {
        v49 = *(_QWORD *)v40;
        HIDWORD(v69) = *v41;
        LODWORD(v69) = *(_DWORD *)(*(_QWORD *)v40 + 24LL);
        if ( *(_DWORD *)(*(_QWORD *)v40 + 28LL) != *v41 )
        {
          *(_DWORD *)(v49 + 96) |= 1u;
          *(_QWORD *)(v49 + 24) = v69;
          v50 = *(CVisual **)(v49 + 80);
          if ( v50 )
          {
            v51 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v50 + 24LL);
            if ( v51 == CVisual::SetDirtyFlags )
            {
              v52 = *((_DWORD *)v50 + 20);
              if ( (v52 & 0x2000) == 0 )
              {
                v56 = (CVisual *)*((_QWORD *)v50 + 3);
                for ( *((_DWORD *)v50 + 20) = v52 | 0x2000; v56; v56 = (CVisual *)*((_QWORD *)v56 + 3) )
                {
                  v57 = *((_DWORD *)v56 + 20);
                  if ( (v57 & 1) != 0 )
                    break;
                  v58 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v56 + 32LL);
                  if ( v58 == CVisual::SetDirtyChildren )
                    *((_DWORD *)v56 + 20) = v57 | 1;
                  else
                    v58(v56);
                }
              }
            }
            else
            {
              v51(v50, 0x2000);
            }
          }
        }
      }
    }
    v40 += 8;
    v41 += 6;
    --v42;
  }
  while ( v42 );
  v53 = (CVisual *)*((_QWORD *)this + 34);
  v54 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v53 + 24LL);
  if ( v54 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(v53, 4096);
  else
    v54(v53, 4096);
  return 0LL;
}
