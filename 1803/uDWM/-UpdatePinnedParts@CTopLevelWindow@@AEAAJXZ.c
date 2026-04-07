/*
 * XREFs of ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18001C400
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18001CDB0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180033750 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdatePinnedParts(CTopLevelWindow *this)
{
  __m128i v1; // xmm1
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  __int32 v6; // r13d
  struct CTopLevelWindow::WindowFrame *v7; // rax
  int v8; // r10d
  int v9; // r9d
  double v10; // xmm1_8
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r12d
  int v15; // esi
  int v16; // ebx
  int v17; // r13d
  int v18; // edx
  int v19; // ecx
  __int64 v20; // rax
  int v21; // esi
  __int64 v22; // rax
  int v23; // edi
  __int64 v24; // rax
  int v25; // ebx
  __int64 v26; // rax
  int v27; // r11d
  int v28; // r8d
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  int v32; // edx
  int v33; // r12d
  char *v34; // rbx
  __int64 v35; // rsi
  _DWORD *v36; // rdi
  __int64 v37; // rcx
  int v39; // edx
  __int64 v40; // rcx
  CVisual *v41; // rcx
  void (__fastcall *v42)(CVisual *__hidden, unsigned int); // rax
  int v43; // edx
  __int64 v44; // rcx
  CVisual *v45; // rcx
  void (__fastcall *v46)(CVisual *__hidden, unsigned int); // rax
  int v47; // eax
  CVisual *v48; // rcx
  void (__fastcall *v49)(CVisual *__hidden, unsigned int); // rax
  CVisual *v51; // rcx
  void (__fastcall *v52)(CVisual *__hidden, unsigned int); // rax
  CVisual *v53; // r14
  int v54; // ecx
  void (__fastcall *v55)(CVisual *__hidden); // rax
  int v56; // [rsp+20h] [rbp-E0h]
  int v57; // [rsp+24h] [rbp-DCh]
  int v58; // [rsp+28h] [rbp-D8h]
  int v59; // [rsp+30h] [rbp-D0h]
  __int32 v60; // [rsp+34h] [rbp-CCh]
  __int128 v61; // [rsp+38h] [rbp-C8h]
  __int32 v62; // [rsp+48h] [rbp-B8h]
  __int64 v63; // [rsp+48h] [rbp-B8h]
  __int64 v65; // [rsp+60h] [rbp-A0h]
  __m128i v66; // [rsp+70h] [rbp-90h]
  int v67; // [rsp+90h] [rbp-70h]
  int v68; // [rsp+94h] [rbp-6Ch]
  _DWORD v69[19]; // [rsp+98h] [rbp-68h] BYREF
  int v70; // [rsp+E4h] [rbp-1Ch]
  int v71; // [rsp+E8h] [rbp-18h]
  int v72; // [rsp+ECh] [rbp-14h]
  int v73; // [rsp+F0h] [rbp-10h]
  __int32 v74; // [rsp+F4h] [rbp-Ch]
  int v75; // [rsp+F8h] [rbp-8h]
  int v76; // [rsp+FCh] [rbp-4h]
  int v77; // [rsp+100h] [rbp+0h]
  int v78; // [rsp+104h] [rbp+4h]
  int v79; // [rsp+108h] [rbp+8h]
  int v80; // [rsp+10Ch] [rbp+Ch]
  int v81; // [rsp+110h] [rbp+10h]
  __int32 v82; // [rsp+114h] [rbp+14h]
  int v83; // [rsp+118h] [rbp+18h]
  int v84; // [rsp+11Ch] [rbp+1Ch]
  int v85; // [rsp+120h] [rbp+20h]
  int v86; // [rsp+124h] [rbp+24h]
  int v87; // [rsp+128h] [rbp+28h]
  __int32 v88; // [rsp+12Ch] [rbp+2Ch]
  int v89; // [rsp+130h] [rbp+30h]
  int v90; // [rsp+134h] [rbp+34h]
  int v91; // [rsp+138h] [rbp+38h]
  __int32 v92; // [rsp+13Ch] [rbp+3Ch]
  int v93; // [rsp+140h] [rbp+40h]
  __int32 v94; // [rsp+144h] [rbp+44h]
  int v95; // [rsp+148h] [rbp+48h]
  int v96; // [rsp+14Ch] [rbp+4Ch]
  int v97; // [rsp+150h] [rbp+50h]
  int v98; // [rsp+154h] [rbp+54h]
  int v99; // [rsp+158h] [rbp+58h]
  int v100; // [rsp+15Ch] [rbp+5Ch]
  int v101; // [rsp+160h] [rbp+60h]
  int v102; // [rsp+164h] [rbp+64h]
  int v103; // [rsp+168h] [rbp+68h]
  int v104; // [rsp+16Ch] [rbp+6Ch]
  int v105; // [rsp+170h] [rbp+70h]
  int v106; // [rsp+174h] [rbp+74h]
  int v107; // [rsp+178h] [rbp+78h]
  int v108; // [rsp+17Ch] [rbp+7Ch]
  int v109; // [rsp+180h] [rbp+80h]
  int v110; // [rsp+184h] [rbp+84h]
  int v111; // [rsp+188h] [rbp+88h]
  int v112; // [rsp+18Ch] [rbp+8Ch]
  int v113; // [rsp+190h] [rbp+90h]
  int v114; // [rsp+194h] [rbp+94h]
  int v115; // [rsp+198h] [rbp+98h]
  __int32 v116; // [rsp+19Ch] [rbp+9Ch]
  int v117; // [rsp+1A0h] [rbp+A0h]
  int v118; // [rsp+1A4h] [rbp+A4h]
  int v119; // [rsp+1A8h] [rbp+A8h]
  int v120; // [rsp+1ACh] [rbp+ACh]
  int v121; // [rsp+1B0h] [rbp+B0h]
  int v122; // [rsp+1B4h] [rbp+B4h]
  int v123; // [rsp+1B8h] [rbp+B8h]
  int v124; // [rsp+1BCh] [rbp+BCh]
  int v125; // [rsp+1C0h] [rbp+C0h]
  int v126; // [rsp+1C4h] [rbp+C4h]
  int v127; // [rsp+1C8h] [rbp+C8h]
  __int32 v128; // [rsp+1CCh] [rbp+CCh]
  int v129; // [rsp+1D0h] [rbp+D0h]
  int v130; // [rsp+1D4h] [rbp+D4h]
  int v131; // [rsp+1D8h] [rbp+D8h]
  int v132; // [rsp+1DCh] [rbp+DCh]
  int v133; // [rsp+1E0h] [rbp+E0h]
  int v134; // [rsp+1E4h] [rbp+E4h]
  int v135; // [rsp+1E8h] [rbp+E8h]
  __int32 v136; // [rsp+1ECh] [rbp+ECh]
  int v137; // [rsp+1F0h] [rbp+F0h]
  int v138; // [rsp+1F4h] [rbp+F4h]
  int v139; // [rsp+1F8h] [rbp+F8h]
  int v140; // [rsp+1FCh] [rbp+FCh]
  int v141; // [rsp+200h] [rbp+100h]
  __int32 v142; // [rsp+204h] [rbp+104h]
  int v143; // [rsp+208h] [rbp+108h]
  int v144; // [rsp+20Ch] [rbp+10Ch]
  int v145; // [rsp+210h] [rbp+110h]
  __int32 v146; // [rsp+214h] [rbp+114h]
  int v147; // [rsp+218h] [rbp+118h]
  __int32 v148; // [rsp+21Ch] [rbp+11Ch]
  int v149; // [rsp+220h] [rbp+120h]
  int v150; // [rsp+224h] [rbp+124h]
  int v151; // [rsp+228h] [rbp+128h]
  int v152; // [rsp+22Ch] [rbp+12Ch]
  int v153; // [rsp+230h] [rbp+130h]
  int v154; // [rsp+234h] [rbp+134h]
  int v155; // [rsp+238h] [rbp+138h]
  int v156; // [rsp+23Ch] [rbp+13Ch]
  int v157; // [rsp+240h] [rbp+140h]
  int v158; // [rsp+244h] [rbp+144h]
  int v159; // [rsp+248h] [rbp+148h]
  __int32 v160; // [rsp+24Ch] [rbp+14Ch]
  int v161; // [rsp+250h] [rbp+150h]
  int v162; // [rsp+254h] [rbp+154h]
  int v163; // [rsp+258h] [rbp+158h]
  int v164; // [rsp+25Ch] [rbp+15Ch]
  int v165; // [rsp+260h] [rbp+160h]
  __int32 v166; // [rsp+264h] [rbp+164h]
  int v167; // [rsp+268h] [rbp+168h]
  int v168; // [rsp+26Ch] [rbp+16Ch]
  int v169; // [rsp+270h] [rbp+170h]
  int v170; // [rsp+274h] [rbp+174h]
  int v171; // [rsp+278h] [rbp+178h]
  int v172; // [rsp+27Ch] [rbp+17Ch]
  int v173; // [rsp+280h] [rbp+180h]
  int v174; // [rsp+284h] [rbp+184h]
  int v175; // [rsp+288h] [rbp+188h]
  int v176; // [rsp+28Ch] [rbp+18Ch]
  int v177; // [rsp+290h] [rbp+190h]
  int v178; // [rsp+294h] [rbp+194h]
  int v179; // [rsp+298h] [rbp+198h]
  int v180; // [rsp+29Ch] [rbp+19Ch]

  v1 = *(__m128i *)((char *)this + 620);
  v3 = *((_DWORD *)this + 152) - v1.m128i_i32[1];
  v4 = _mm_cvtsi128_si32(v1);
  v66 = v1;
  v5 = *((_DWORD *)this + 151) - v4;
  v58 = _mm_cvtsi128_si32(_mm_srli_si128(v1, 8));
  v59 = *((_DWORD *)this + 153) - v58;
  v6 = *((_DWORD *)this + 154) - _mm_srli_si128(v1, 8).m128i_i32[1];
  v61 = 0uLL;
  v7 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
         *((_DWORD *)this + 146),
         1,
         (*(_BYTE *)(*((_QWORD *)this + 90) + 595LL) & 0x10) != 0);
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
  if ( *((_DWORD *)this + 148) - v8 >= 0 )
    v12 = *((_DWORD *)this + 148) - v8;
  v14 = v11 + v4;
  v60 = v12 + v66.m128i_i32[1];
  v66.m128i_i32[1] += v12;
  if ( *((_DWORD *)this + 150) - v8 >= 0 )
    v13 = *((_DWORD *)this + 150) - v8;
  v15 = v5 - v11;
  v16 = v3 - v12;
  v62 = v13 + v66.m128i_i32[3];
  v17 = v6 - v13;
  v66.m128i_i32[3] += v13;
  v56 = v15;
  v57 = v16;
  if ( v15 < 0 )
  {
    v18 = 0;
    v56 = 0;
  }
  else
  {
    v18 = v15;
  }
  if ( v16 < 0 )
  {
    v19 = 0;
    v57 = 0;
  }
  else
  {
    v19 = v16;
  }
  if ( v17 < 0 )
    v17 = 0;
  v20 = *((_QWORD *)this + 55);
  if ( v20 )
  {
    v21 = *(_DWORD *)(v20 + 24);
    LODWORD(v61) = v21;
  }
  else
  {
    v21 = 0;
  }
  v22 = *((_QWORD *)this + 56);
  if ( v22 )
  {
    v23 = *(_DWORD *)(v22 + 24);
    DWORD1(v61) = v23;
  }
  else
  {
    v23 = 0;
  }
  v24 = *((_QWORD *)this + 57);
  if ( v24 )
  {
    v25 = *(_DWORD *)(v24 + 28);
    DWORD2(v61) = v25;
  }
  else
  {
    v25 = 0;
  }
  v26 = *((_QWORD *)this + 58);
  if ( v26 )
  {
    v27 = *(_DWORD *)(v26 + 28);
    HIDWORD(v61) = v27;
  }
  else
  {
    v27 = (unsigned __int128)0LL >> 96;
  }
  v69[0] = v58;
  v69[6] = v58;
  *(_OWORD *)((char *)this + 652) = v61;
  v28 = *((_DWORD *)this + 151);
  v69[12] = v58;
  v69[14] = v19;
  v69[2] = v18;
  v29 = *((_DWORD *)this + 152);
  v30 = *((_DWORD *)this + 153);
  v70 = *((_DWORD *)this + 154);
  v76 = v70;
  v69[4] = v28;
  v85 = v28;
  v97 = v28;
  v77 = v57;
  v95 = v57;
  v69[3] = v59;
  v69[5] = v29;
  v69[9] = v59;
  v69[15] = v59;
  v69[18] = v30;
  v75 = v30;
  v86 = v29;
  v98 = v29;
  v102 = v59;
  v67 = v14;
  v68 = 0x7FFFFFFF;
  v69[1] = 0x7FFFFFFF;
  v69[7] = 0x7FFFFFFF;
  v69[8] = 0x7FFFFFFF;
  v69[10] = 0x7FFFFFFF;
  v69[11] = v60;
  v69[13] = 0x7FFFFFFF;
  v69[16] = v14;
  v69[17] = 0x7FFFFFFF;
  v71 = v56;
  v72 = 0x7FFFFFFF;
  v73 = 0x7FFFFFFF;
  v74 = v60;
  v78 = 0x7FFFFFFF;
  v79 = v14;
  v80 = 0x7FFFFFFF;
  v81 = 0x7FFFFFFF;
  v82 = v62;
  v83 = v56;
  v84 = v17;
  v87 = 0x7FFFFFFF;
  v88 = v62;
  v89 = 0x7FFFFFFF;
  v90 = v17;
  v91 = 0x7FFFFFFF;
  v92 = v60;
  v93 = 0x7FFFFFFF;
  v94 = v62;
  v96 = v17;
  v99 = v58;
  v100 = 0x7FFFFFFF;
  v101 = 0x7FFFFFFF;
  v103 = v14;
  v104 = 0x7FFFFFFF;
  v105 = v58;
  v106 = 0x7FFFFFFF;
  v107 = v9;
  v108 = v9;
  v109 = v14 + v9;
  v110 = v9 + v66.m128i_i32[1];
  v111 = v58;
  v112 = 0x7FFFFFFF;
  v113 = 0x7FFFFFFF;
  v116 = v66.m128i_i32[1];
  v128 = v66.m128i_i32[1];
  v146 = v66.m128i_i32[1];
  v31 = v60 - v23;
  v174 = v25;
  v117 = v58;
  v159 = v58;
  v165 = v58;
  v32 = v58 - v25;
  v121 = v14;
  v133 = v14;
  v33 = v14 - v21;
  v136 = v62;
  v142 = v62;
  v148 = v62;
  v160 = v62;
  v166 = v62;
  v123 = v9 + v66.m128i_i32[2];
  v34 = (char *)this + 296;
  v129 = v9 + v66.m128i_i32[2];
  v153 = v9 + v66.m128i_i32[2];
  v161 = v21;
  v35 = 22LL;
  v167 = v23;
  v36 = v69;
  v164 = v31;
  v170 = v31;
  v176 = v31;
  v114 = v9;
  v115 = 0x7FFFFFFF;
  v118 = 0x7FFFFFFF;
  v119 = v9;
  v120 = v9;
  v122 = 0x7FFFFFFF;
  v124 = v9 + v66.m128i_i32[3];
  v125 = v9;
  v126 = 0x7FFFFFFF;
  v127 = 0x7FFFFFFF;
  v130 = v9 + v66.m128i_i32[3];
  v131 = v9;
  v132 = 0x7FFFFFFF;
  v134 = 0x7FFFFFFF;
  v135 = 0x7FFFFFFF;
  v137 = v9;
  v138 = v9;
  v139 = v109;
  v140 = v9 + v66.m128i_i32[1];
  v141 = 0x7FFFFFFF;
  v143 = 0x7FFFFFFF;
  v144 = v9;
  v145 = 0x7FFFFFFF;
  v147 = 0x7FFFFFFF;
  v149 = v9;
  v150 = v9;
  v151 = v109;
  v152 = v9 + v66.m128i_i32[1];
  v154 = v9 + v66.m128i_i32[3];
  v155 = 0x7FFFFFFF;
  v156 = 0x7FFFFFFF;
  v157 = v33;
  v158 = 0x7FFFFFFF;
  v162 = 0x7FFFFFFF;
  v163 = 0x7FFFFFFF;
  v168 = 0x7FFFFFFF;
  v169 = v33;
  v171 = v32;
  v172 = 0x7FFFFFFF;
  v173 = 0x7FFFFFFF;
  v175 = v33;
  v177 = 0x7FFFFFFF;
  v178 = v62 - v27;
  v179 = 0x7FFFFFFF;
  v180 = v27;
  do
  {
    v37 = *(_QWORD *)v34;
    if ( *(_QWORD *)v34 )
    {
      if ( *(_DWORD *)(v37 + 32) != *(v36 - 2)
        || *(_DWORD *)(v37 + 36) != *(v36 - 1)
        || *(_DWORD *)(v37 + 40) != *v36
        || *(_DWORD *)(v37 + 44) != v36[1] )
      {
        *(_DWORD *)(v37 + 96) |= 1u;
        *(_OWORD *)(v37 + 32) = *(_OWORD *)(v36 - 2);
        v51 = *(CVisual **)(v37 + 80);
        if ( v51 )
        {
          v52 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v51 + 24LL);
          if ( v52 == CVisual::SetDirtyFlags )
            CVisual::SetDirtyFlags(v51, 0x1000u);
          else
            v52(v51, 4096u);
        }
      }
      v39 = v36[2];
      if ( v39 != 0x7FFFFFFF )
      {
        v40 = *(_QWORD *)v34;
        LODWORD(v65) = v36[2];
        HIDWORD(v65) = *(_DWORD *)(*(_QWORD *)v34 + 28LL);
        if ( *(_DWORD *)(*(_QWORD *)v34 + 24LL) != v39 )
        {
          *(_DWORD *)(v40 + 96) |= 1u;
          *(_QWORD *)(v40 + 24) = v65;
          v41 = *(CVisual **)(v40 + 80);
          if ( v41 )
          {
            v42 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v41 + 24LL);
            if ( v42 == CVisual::SetDirtyFlags )
              CVisual::SetDirtyFlags(v41, 0x2000u);
            else
              v42(v41, 0x2000u);
          }
        }
      }
      v43 = v36[3];
      if ( v43 != 0x7FFFFFFF )
      {
        v44 = *(_QWORD *)v34;
        HIDWORD(v63) = v36[3];
        LODWORD(v63) = *(_DWORD *)(*(_QWORD *)v34 + 24LL);
        if ( *(_DWORD *)(*(_QWORD *)v34 + 28LL) != v43 )
        {
          *(_DWORD *)(v44 + 96) |= 1u;
          *(_QWORD *)(v44 + 24) = v63;
          v45 = *(CVisual **)(v44 + 80);
          if ( v45 )
          {
            v46 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v45 + 24LL);
            if ( v46 == CVisual::SetDirtyFlags )
            {
              v47 = *((_DWORD *)v45 + 20);
              if ( (v47 & 0x2000) == 0 )
              {
                v53 = (CVisual *)*((_QWORD *)v45 + 3);
                for ( *((_DWORD *)v45 + 20) = v47 | 0x2000; v53; v53 = (CVisual *)*((_QWORD *)v53 + 3) )
                {
                  v54 = *((_DWORD *)v53 + 20);
                  if ( (v54 & 1) != 0 )
                    break;
                  v55 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v53 + 32LL);
                  if ( v55 == CVisual::SetDirtyChildren )
                    *((_DWORD *)v53 + 20) = v54 | 1;
                  else
                    v55(v53);
                }
              }
            }
            else
            {
              v46(v45, 0x2000u);
            }
          }
        }
      }
    }
    v34 += 8;
    v36 += 6;
    --v35;
  }
  while ( v35 );
  v48 = (CVisual *)*((_QWORD *)this + 34);
  v49 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v48 + 24LL);
  if ( v49 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(v48, 0x1000u);
  else
    v49(v48, 4096u);
  return 0LL;
}
