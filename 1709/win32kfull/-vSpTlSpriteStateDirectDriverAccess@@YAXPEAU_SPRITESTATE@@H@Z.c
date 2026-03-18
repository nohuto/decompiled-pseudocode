/*
 * XREFs of ?vSpTlSpriteStateDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0065628
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C002A1E0 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C002A4A0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0065F44 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0066260 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00ED06C (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

void __fastcall vSpTlSpriteStateDirectDriverAccess(struct _SPRITESTATE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  struct _KTHREAD *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rsi
  struct _KTHREAD *v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rsi
  struct _KTHREAD *v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rsi
  struct _KTHREAD *v36; // rbp
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rsi
  struct _KTHREAD *v43; // rbp
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rsi
  struct _KTHREAD *v50; // rbp
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rsi
  struct _KTHREAD *v57; // rbp
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rsi
  struct _KTHREAD *v64; // rbp
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rsi
  struct _KTHREAD *v71; // rbp
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rsi
  struct _KTHREAD *v78; // rbp
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 *v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rsi
  struct _KTHREAD *v85; // rbp
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 *v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rsi
  struct _KTHREAD *v92; // rbp
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rsi
  struct _KTHREAD *v99; // rbp
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 *v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rsi
  struct _KTHREAD *v106; // rbp
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 *v110; // rax
  __int64 v111; // rcx
  struct _KTHREAD *v112; // rsi
  __int64 *v113; // rax
  struct _KTHREAD *v114; // rsi
  __int64 v115; // rdi
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rdi
  struct _KTHREAD *v123; // rsi
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 *v127; // rax
  __int64 v128; // rax
  __int64 v129; // rdi
  struct _KTHREAD *v130; // rsi
  __int64 v131; // rdx
  __int64 v132; // r8
  __int64 v133; // r9
  __int64 *v134; // rax
  __int64 v135; // rax
  __int64 v136; // rdi
  struct _KTHREAD *v137; // rsi
  __int64 v138; // rdx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 *v141; // rax
  __int64 v142; // rax
  __int64 v143; // rdi
  struct _KTHREAD *v144; // rsi
  __int64 v145; // rdx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 *v148; // rax
  __int64 v149; // rax
  __int64 v150; // rdi
  struct _KTHREAD *v151; // rsi
  __int64 v152; // rdx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 *v155; // rax
  __int64 v156; // rax
  __int64 v157; // rdi
  struct _KTHREAD *v158; // rsi
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 *v162; // rax
  __int64 v163; // rax
  __int64 v164; // rdi
  struct _KTHREAD *v165; // rsi
  __int64 v166; // rdx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 *v169; // rax
  __int64 v170; // rax
  __int64 v171; // rdi
  struct _KTHREAD *v172; // rsi
  __int64 v173; // rdx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 *v176; // rax
  __int64 v177; // rax
  __int64 v178; // rdi
  struct _KTHREAD *v179; // rsi
  __int64 v180; // rdx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 *v183; // rax
  __int64 v184; // rax
  __int64 v185; // rdi
  struct _KTHREAD *v186; // rsi
  __int64 v187; // rdx
  __int64 v188; // r8
  __int64 v189; // r9
  __int64 *v190; // rax
  __int64 v191; // rax
  __int64 v192; // rdi
  struct _KTHREAD *v193; // rsi
  __int64 v194; // rdx
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 *v197; // rax
  __int64 v198; // rax
  __int64 v199; // rdi
  struct _KTHREAD *v200; // rsi
  __int64 v201; // rdx
  __int64 v202; // r8
  __int64 v203; // r9
  __int64 *v204; // rax
  __int64 v205; // rax
  __int64 v206; // rdi
  struct _KTHREAD *v207; // rsi
  __int64 v208; // rdx
  __int64 v209; // r8
  __int64 v210; // r9
  __int64 *v211; // rax
  __int64 v212; // rax
  __int64 v213; // rdi
  struct _KTHREAD *v214; // rsi
  __int64 v215; // rdx
  __int64 v216; // r8
  __int64 v217; // r9
  __int64 *v218; // rax
  struct _KTHREAD *v219; // rdi
  __int64 *v220; // rax

  v4 = 0LL;
  if ( (_DWORD)a2 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v7 = *ThreadWin32Thread;
    }
    v13 = *(_QWORD *)(v7 + 280);
    v14 = 0LL;
    *(_QWORD *)(v13 + 32) = a1;
    v15 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v8, v10, v11) )
    {
      v19 = (__int64 *)PsGetThreadWin32Thread(v15);
      if ( v19 )
        v14 = *v19;
    }
    v20 = *(_QWORD *)(v14 + 280);
    v21 = 0LL;
    *(_QWORD *)(v20 + 40) = *((_QWORD *)a1 + 152);
    v22 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v20, v16, v17, v18) )
    {
      v26 = (__int64 *)PsGetThreadWin32Thread(v22);
      if ( v26 )
        v21 = *v26;
    }
    v27 = *(_QWORD *)(v21 + 280);
    v28 = 0LL;
    *(_QWORD *)(v27 + 48) = *((_QWORD *)a1 + 153);
    v29 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v27, v23, v24, v25) )
    {
      v33 = (__int64 *)PsGetThreadWin32Thread(v29);
      if ( v33 )
        v28 = *v33;
    }
    v34 = *(_QWORD *)(v28 + 280);
    v35 = 0LL;
    *(_QWORD *)(v34 + 56) = *((_QWORD *)a1 + 154);
    v36 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v34, v30, v31, v32) )
    {
      v40 = (__int64 *)PsGetThreadWin32Thread(v36);
      if ( v40 )
        v35 = *v40;
    }
    v41 = *(_QWORD *)(v35 + 280);
    v42 = 0LL;
    *(_QWORD *)(v41 + 72) = *((_QWORD *)a1 + 156);
    v43 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v41, v37, v38, v39) )
    {
      v47 = (__int64 *)PsGetThreadWin32Thread(v43);
      if ( v47 )
        v42 = *v47;
    }
    v48 = *(_QWORD *)(v42 + 280);
    v49 = 0LL;
    *(_QWORD *)(v48 + 80) = *((_QWORD *)a1 + 157);
    v50 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v48, v44, v45, v46) )
    {
      v54 = (__int64 *)PsGetThreadWin32Thread(v50);
      if ( v54 )
        v49 = *v54;
    }
    v55 = *(_QWORD *)(v49 + 280);
    v56 = 0LL;
    *(_QWORD *)(v55 + 88) = *((_QWORD *)a1 + 158);
    v57 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v55, v51, v52, v53) )
    {
      v61 = (__int64 *)PsGetThreadWin32Thread(v57);
      if ( v61 )
        v56 = *v61;
    }
    v62 = *(_QWORD *)(v56 + 280);
    v63 = 0LL;
    *(_QWORD *)(v62 + 96) = *((_QWORD *)a1 + 159);
    v64 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v62, v58, v59, v60) )
    {
      v68 = (__int64 *)PsGetThreadWin32Thread(v64);
      if ( v68 )
        v63 = *v68;
    }
    v69 = *(_QWORD *)(v63 + 280);
    v70 = 0LL;
    *(_QWORD *)(v69 + 104) = *((_QWORD *)a1 + 160);
    v71 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v69, v65, v66, v67) )
    {
      v75 = (__int64 *)PsGetThreadWin32Thread(v71);
      if ( v75 )
        v70 = *v75;
    }
    v76 = *(_QWORD *)(v70 + 280);
    v77 = 0LL;
    *(_QWORD *)(v76 + 112) = *((_QWORD *)a1 + 161);
    v78 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v76, v72, v73, v74) )
    {
      v82 = (__int64 *)PsGetThreadWin32Thread(v78);
      if ( v82 )
        v77 = *v82;
    }
    v83 = *(_QWORD *)(v77 + 280);
    v84 = 0LL;
    *(_QWORD *)(v83 + 120) = *((_QWORD *)a1 + 162);
    v85 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v83, v79, v80, v81) )
    {
      v89 = (__int64 *)PsGetThreadWin32Thread(v85);
      if ( v89 )
        v84 = *v89;
    }
    v90 = *(_QWORD *)(v84 + 280);
    v91 = 0LL;
    *(_QWORD *)(v90 + 128) = *((_QWORD *)a1 + 163);
    v92 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v90, v86, v87, v88) )
    {
      v96 = (__int64 *)PsGetThreadWin32Thread(v92);
      if ( v96 )
        v91 = *v96;
    }
    v97 = *(_QWORD *)(v91 + 280);
    v98 = 0LL;
    *(_QWORD *)(v97 + 136) = *((_QWORD *)a1 + 164);
    v99 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v97, v93, v94, v95) )
    {
      v103 = (__int64 *)PsGetThreadWin32Thread(v99);
      if ( v103 )
        v98 = *v103;
    }
    v104 = *(_QWORD *)(v98 + 280);
    v105 = 0LL;
    *(_QWORD *)(v104 + 152) = *((_QWORD *)a1 + 166);
    v106 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v104, v100, v101, v102) )
    {
      v110 = (__int64 *)PsGetThreadWin32Thread(v106);
      if ( v110 )
        v105 = *v110;
    }
    v111 = *(_QWORD *)(v105 + 280);
    *(_QWORD *)(v111 + 144) = *((_QWORD *)a1 + 165);
    v112 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v111, v107, v108, v109) )
    {
      v113 = (__int64 *)PsGetThreadWin32Thread(v112);
      if ( v113 )
        v4 = *v113;
    }
    *(_QWORD *)(*(_QWORD *)(v4 + 280) + 160LL) = *((_QWORD *)a1 + 167);
  }
  else
  {
    v114 = KeGetCurrentThread();
    v115 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
    {
      v120 = (__int64 *)PsGetThreadWin32Thread(v114);
      if ( v120 )
        v115 = *v120;
    }
    v121 = *(_QWORD *)(v115 + 280);
    v122 = 0LL;
    *(_QWORD *)(v121 + 32) = 0LL;
    v123 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v117, v116, v118, v119) )
    {
      v127 = (__int64 *)PsGetThreadWin32Thread(v123);
      if ( v127 )
        v122 = *v127;
    }
    v128 = *(_QWORD *)(v122 + 280);
    v129 = 0LL;
    *(_QWORD *)(v128 + 40) = SpStrokeAndFillPath;
    v130 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpStrokeAndFillPath, v124, v125, v126) )
    {
      v134 = (__int64 *)PsGetThreadWin32Thread(v130);
      if ( v134 )
        v129 = *v134;
    }
    v135 = *(_QWORD *)(v129 + 280);
    v136 = 0LL;
    *(_QWORD *)(v135 + 48) = SpStrokePath;
    v137 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpStrokePath, v131, v132, v133) )
    {
      v141 = (__int64 *)PsGetThreadWin32Thread(v137);
      if ( v141 )
        v136 = *v141;
    }
    v142 = *(_QWORD *)(v136 + 280);
    v143 = 0LL;
    *(_QWORD *)(v142 + 56) = SpFillPath;
    v144 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpFillPath, v138, v139, v140) )
    {
      v148 = (__int64 *)PsGetThreadWin32Thread(v144);
      if ( v148 )
        v143 = *v148;
    }
    v149 = *(_QWORD *)(v143 + 280);
    v150 = 0LL;
    *(_QWORD *)(v149 + 72) = SpBitBlt;
    v151 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpBitBlt, v145, v146, v147) )
    {
      v155 = (__int64 *)PsGetThreadWin32Thread(v151);
      if ( v155 )
        v150 = *v155;
    }
    v156 = *(_QWORD *)(v150 + 280);
    v157 = 0LL;
    *(_QWORD *)(v156 + 80) = SpCopyBits;
    v158 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpCopyBits, v152, v153, v154) )
    {
      v162 = (__int64 *)PsGetThreadWin32Thread(v158);
      if ( v162 )
        v157 = *v162;
    }
    v163 = *(_QWORD *)(v157 + 280);
    v164 = 0LL;
    *(_QWORD *)(v163 + 88) = SpStretchBlt;
    v165 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpStretchBlt, v159, v160, v161) )
    {
      v169 = (__int64 *)PsGetThreadWin32Thread(v165);
      if ( v169 )
        v164 = *v169;
    }
    v170 = *(_QWORD *)(v164 + 280);
    v171 = 0LL;
    *(_QWORD *)(v170 + 96) = SpTextOut;
    v172 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpTextOut, v166, v167, v168) )
    {
      v176 = (__int64 *)PsGetThreadWin32Thread(v172);
      if ( v176 )
        v171 = *v176;
    }
    v177 = *(_QWORD *)(v171 + 280);
    v178 = 0LL;
    *(_QWORD *)(v177 + 104) = SpLineTo;
    v179 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpLineTo, v173, v174, v175) )
    {
      v183 = (__int64 *)PsGetThreadWin32Thread(v179);
      if ( v183 )
        v178 = *v183;
    }
    v184 = *(_QWORD *)(v178 + 280);
    v185 = 0LL;
    *(_QWORD *)(v184 + 112) = SpTransparentBlt;
    v186 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpTransparentBlt, v180, v181, v182) )
    {
      v190 = (__int64 *)PsGetThreadWin32Thread(v186);
      if ( v190 )
        v185 = *v190;
    }
    v191 = *(_QWORD *)(v185 + 280);
    v192 = 0LL;
    *(_QWORD *)(v191 + 120) = SpAlphaBlend;
    v193 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpAlphaBlend, v187, v188, v189) )
    {
      v197 = (__int64 *)PsGetThreadWin32Thread(v193);
      if ( v197 )
        v192 = *v197;
    }
    v198 = *(_QWORD *)(v192 + 280);
    v199 = 0LL;
    *(_QWORD *)(v198 + 128) = SpPlgBlt;
    v200 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpPlgBlt, v194, v195, v196) )
    {
      v204 = (__int64 *)PsGetThreadWin32Thread(v200);
      if ( v204 )
        v199 = *v204;
    }
    v205 = *(_QWORD *)(v199 + 280);
    v206 = 0LL;
    *(_QWORD *)(v205 + 136) = SpGradientFill;
    v207 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpGradientFill, v201, v202, v203) )
    {
      v211 = (__int64 *)PsGetThreadWin32Thread(v207);
      if ( v211 )
        v206 = *v211;
    }
    v212 = *(_QWORD *)(v206 + 280);
    v213 = 0LL;
    *(_QWORD *)(v212 + 152) = SpStretchBltROP;
    v214 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpStretchBltROP, v208, v209, v210) )
    {
      v218 = (__int64 *)PsGetThreadWin32Thread(v214);
      if ( v218 )
        v213 = *v218;
    }
    *(_QWORD *)(*(_QWORD *)(v213 + 280) + 144LL) = SpSaveScreenBits;
    v219 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(SpSaveScreenBits, v215, v216, v217) )
    {
      v220 = (__int64 *)PsGetThreadWin32Thread(v219);
      if ( v220 )
        v4 = *v220;
    }
    *(_QWORD *)(*(_QWORD *)(v4 + 280) + 160LL) = SpDrawStream;
  }
}
