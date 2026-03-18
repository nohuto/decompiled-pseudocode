/*
 * XREFs of SymCryptSha256AppendBlocks_ul1 @ 0x140177644
 * Callers:
 *     SymCryptSha256AppendBlocks @ 0x140177220 (SymCryptSha256AppendBlocks.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall SymCryptSha256AppendBlocks_ul1(int *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 *a4)
{
  int v4; // r11d
  int v6; // r10d
  int v8; // r9d
  int v9; // r15d
  int v10; // r13d
  int v11; // edi
  int v12; // ebx
  int v13; // r8d
  unsigned int *v14; // r14
  int v15; // r8d
  int v16; // r9d
  int v17; // r8d
  int v18; // r10d
  int v19; // r8d
  int v20; // r13d
  int v21; // r11d
  int v22; // r8d
  int v23; // r15d
  int v24; // ebx
  int v25; // r8d
  int v26; // r9d
  int v27; // edi
  int v28; // r8d
  int v29; // r10d
  int v30; // esi
  int v31; // r8d
  int v32; // r11d
  int v33; // r14d
  unsigned __int32 v34; // r12d
  int v35; // r8d
  int v36; // ebx
  int v37; // r15d
  unsigned __int32 v38; // r8d
  unsigned __int32 v39; // edi
  int v40; // r13d
  unsigned __int32 v41; // r8d
  unsigned __int32 v42; // esi
  int v43; // r9d
  unsigned __int32 v44; // r8d
  unsigned __int32 v45; // r14d
  int v46; // r10d
  int v47; // r8d
  int v48; // r15d
  int v49; // r11d
  unsigned __int32 v50; // r8d
  int v51; // ebx
  int v52; // r8d
  int v53; // r9d
  int v54; // edi
  int v55; // r8d
  int v56; // r10d
  int v57; // r13d
  unsigned __int32 v58; // r14d
  int v59; // r8d
  int v60; // r11d
  int v61; // r15d
  unsigned __int32 v62; // r8d
  int v63; // r15d
  unsigned __int32 v64; // r8d
  unsigned __int32 v65; // ebx
  int v66; // r8d
  unsigned __int32 v67; // r9d
  unsigned __int32 v68; // edi
  int v69; // r9d
  unsigned __int32 v70; // r10d
  unsigned __int32 v71; // r13d
  int v72; // r10d
  unsigned __int32 v73; // r11d
  unsigned __int32 v74; // r15d
  int v75; // r11d
  unsigned __int32 v76; // ebx
  unsigned __int32 v77; // r8d
  int v78; // ebx
  unsigned __int32 v79; // edi
  unsigned __int32 v80; // r9d
  int v81; // edi
  unsigned __int32 v82; // r13d
  unsigned __int32 v83; // r10d
  int v84; // esi
  unsigned __int32 v85; // r15d
  unsigned __int32 v86; // r11d
  int v87; // r14d
  int v88; // r8d
  int v89; // ebx
  int v90; // r8d
  unsigned __int32 v91; // r9d
  unsigned __int32 v92; // edi
  int v93; // r9d
  unsigned __int32 v94; // r10d
  unsigned __int32 v95; // esi
  int v96; // r10d
  unsigned __int32 v97; // r11d
  unsigned __int32 v98; // r14d
  int v99; // r11d
  int v100; // ebx
  unsigned __int32 v101; // edi
  unsigned __int32 v102; // esi
  unsigned __int32 v103; // r14d
  unsigned __int32 v104; // r15d
  bool v105; // zf
  int v107; // [rsp+0h] [rbp-100h]
  int v108; // [rsp+0h] [rbp-100h]
  unsigned __int32 v109; // [rsp+0h] [rbp-100h]
  _DWORD *v110; // [rsp+8h] [rbp-F8h]
  unsigned __int32 v111; // [rsp+10h] [rbp-F0h]
  unsigned __int32 v112; // [rsp+18h] [rbp-E8h]
  unsigned __int32 v113; // [rsp+20h] [rbp-E0h]
  unsigned __int32 v114; // [rsp+30h] [rbp-D0h]
  int v115; // [rsp+40h] [rbp-C0h]
  unsigned __int32 v116; // [rsp+40h] [rbp-C0h]
  unsigned __int32 v117; // [rsp+50h] [rbp-B0h]
  unsigned __int32 v118; // [rsp+60h] [rbp-A0h]
  unsigned __int32 v119; // [rsp+68h] [rbp-98h]
  unsigned __int32 v120; // [rsp+6Ch] [rbp-94h]
  unsigned __int32 v121; // [rsp+70h] [rbp-90h]
  unsigned __int32 v122; // [rsp+80h] [rbp-80h]
  unsigned __int32 v123; // [rsp+90h] [rbp-70h]
  int v124; // [rsp+A0h] [rbp-60h]
  unsigned __int32 v125; // [rsp+A0h] [rbp-60h]
  int v126; // [rsp+B0h] [rbp-50h]
  unsigned __int32 v127; // [rsp+B0h] [rbp-50h]
  unsigned __int32 v128; // [rsp+C0h] [rbp-40h]
  unsigned int *v129; // [rsp+C8h] [rbp-38h]
  int v130; // [rsp+D0h] [rbp-30h]
  int v131; // [rsp+D4h] [rbp-2Ch]
  int v132; // [rsp+D8h] [rbp-28h]
  int v133; // [rsp+DCh] [rbp-24h]
  int v134; // [rsp+E0h] [rbp-20h]
  int v135; // [rsp+E4h] [rbp-1Ch]
  int v136; // [rsp+E8h] [rbp-18h]
  int v137; // [rsp+ECh] [rbp-14h]
  unsigned __int64 v138; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v139; // [rsp+100h] [rbp+0h]

  v4 = a1[4];
  v6 = a1[5];
  v8 = a1[6];
  v9 = *a1;
  v10 = a1[1];
  v11 = a1[2];
  v12 = a1[3];
  v13 = a1[7];
  v126 = v4;
  v124 = v6;
  v107 = v8;
  if ( a3 >= 0x40 )
  {
    v131 = *a1;
    v14 = (unsigned int *)(a2 + 8);
    v138 = a3 >> 6;
    v132 = a1[1];
    v133 = a1[2];
    v139 = -64LL * (a3 >> 6) + a3;
    v134 = a1[3];
    v135 = a1[4];
    v136 = a1[5];
    v137 = a1[6];
    v130 = a1[7];
    v129 = (unsigned int *)(a2 + 8);
    do
    {
      v114 = _byteswap_ulong(*(v14 - 2));
      v15 = v114 + (__ROR4__(v4, 11) ^ __ROR4__(v4, 25) ^ __ROR4__(v4, 6)) + 1116352408 + (v8 ^ v4 & (v8 ^ v6)) + v13;
      v115 = v15 + v12;
      v16 = (__ROR4__(v9, 2) ^ __ROR4__(v9, 13) ^ __ROR4__(v9, 22)) + v15 + (v10 & v11 | v9 & (v10 | v11));
      v111 = _byteswap_ulong(*(v14 - 1));
      v17 = v107
          + 1899447441
          + (v6 ^ (v15 + v12) & (v4 ^ v6))
          + (__ROR4__(v15 + v12, 6) ^ __ROR4__(v15 + v12, 11) ^ __ROR4__(v15 + v12, 25))
          + v111;
      v108 = v17 + v11;
      v18 = (__ROR4__(v16, 2) ^ __ROR4__(v16, 13) ^ __ROR4__(v16, 22)) + v17 + (v9 & v10 | v16 & (v9 | v10));
      v112 = _byteswap_ulong(*v14);
      v19 = v124
          - 1245643825
          + (v4 ^ (v17 + v11) & (v115 ^ v4))
          + (__ROR4__(v17 + v11, 6) ^ __ROR4__(v17 + v11, 11) ^ __ROR4__(v17 + v11, 25))
          + v112;
      v20 = v19 + v10;
      v21 = (__ROR4__(v18, 2) ^ __ROR4__(v18, 13) ^ __ROR4__(v18, 22)) + v19 + (v16 & v9 | v18 & (v16 | v9));
      v113 = _byteswap_ulong(v14[1]);
      v22 = v126
          - 373957723
          + (v115 ^ v20 & (v108 ^ v115))
          + (__ROR4__(v20, 6) ^ __ROR4__(v20, 11) ^ __ROR4__(v20, 25))
          + v113;
      v23 = v22 + v9;
      v24 = (__ROR4__(v21, 2) ^ __ROR4__(v21, 13) ^ __ROR4__(v21, 22)) + v22 + (v18 & v16 | v21 & (v18 | v16));
      v117 = _byteswap_ulong(v14[2]);
      v25 = v115
          + 961987163
          + (v108 ^ v23 & (v20 ^ v108))
          + (__ROR4__(v23, 6) ^ __ROR4__(v23, 11) ^ __ROR4__(v23, 25))
          + v117;
      v26 = v25 + v16;
      v27 = (__ROR4__(v24, 2) ^ __ROR4__(v24, 13) ^ __ROR4__(v24, 22)) + v25 + (v18 & v21 | v24 & (v18 | v21));
      v119 = _byteswap_ulong(v14[3]);
      v28 = v108
          + 1508970993
          + (v20 ^ v26 & (v23 ^ v20))
          + (__ROR4__(v26, 6) ^ __ROR4__(v26, 11) ^ __ROR4__(v26, 25))
          + v119;
      v29 = v28 + v18;
      v30 = (__ROR4__(v27, 2) ^ __ROR4__(v27, 13) ^ __ROR4__(v27, 22)) + v28 + (v24 & v21 | v27 & (v24 | v21));
      v121 = _byteswap_ulong(v14[4]);
      v31 = v20
          - 1841331548
          + (v23 ^ v29 & (v26 ^ v23))
          + (__ROR4__(v29, 6) ^ __ROR4__(v29, 11) ^ __ROR4__(v29, 25))
          + v121;
      v32 = v31 + v21;
      v33 = (__ROR4__(v30, 2) ^ __ROR4__(v30, 13) ^ __ROR4__(v30, 22)) + v31 + (v27 & v24 | v30 & (v27 | v24));
      v34 = _byteswap_ulong(v129[5]);
      v35 = v23
          + v34
          + (__ROR4__(v32, 11) ^ __ROR4__(v32, 25) ^ __ROR4__(v32, 6))
          - 1424204075
          + (v26 ^ v32 & (v29 ^ v26));
      v36 = v35 + v24;
      v37 = (__ROR4__(v33, 2) ^ __ROR4__(v33, 13) ^ __ROR4__(v33, 22)) + v35 + (v30 & v27 | v33 & (v30 | v27));
      v127 = _byteswap_ulong(v129[6]);
      v38 = v26
          + (v29 ^ v36 & (v29 ^ v32))
          - 670586216
          + (__ROR4__(v36, 6) ^ __ROR4__(v36, 11) ^ __ROR4__(v36, 25))
          + v127;
      v39 = v38 + v27;
      v40 = (__ROR4__(v37, 2) ^ __ROR4__(v37, 13) ^ __ROR4__(v37, 22)) + v38 + (v33 & v30 | v37 & (v33 | v30));
      v128 = _byteswap_ulong(v129[7]);
      v41 = v29
          + (v32 ^ v39 & (v36 ^ v32))
          + 310598401
          + (__ROR4__(v39, 6) ^ __ROR4__(v39, 11) ^ __ROR4__(v39, 25))
          + v128;
      v42 = v41 + v30;
      v43 = (__ROR4__(v40, 2) ^ __ROR4__(v40, 13) ^ __ROR4__(v40, 22)) + v41 + (v37 & v33 | v40 & (v37 | v33));
      v118 = _byteswap_ulong(v129[8]);
      v44 = v32
          + (v36 ^ v42 & (v39 ^ v36))
          + 607225278
          + (__ROR4__(v42, 6) ^ __ROR4__(v42, 11) ^ __ROR4__(v42, 25))
          + v118;
      v45 = v44 + v33;
      v46 = (__ROR4__(v43, 2) ^ __ROR4__(v43, 13) ^ __ROR4__(v43, 22)) + v44 + (v40 & v37 | v43 & (v40 | v37));
      v120 = _byteswap_ulong(v129[9]);
      v47 = v36
          + (v39 ^ v45 & (v42 ^ v39))
          + 1426881987
          + (__ROR4__(v45, 6) ^ __ROR4__(v45, 11) ^ __ROR4__(v45, 25))
          + v120;
      v48 = v47 + v37;
      v49 = (__ROR4__(v46, 2) ^ __ROR4__(v46, 13) ^ __ROR4__(v46, 22)) + v47 + (v43 & v40 | v46 & (v43 | v40));
      v122 = _byteswap_ulong(v129[10]);
      v50 = v39
          + (v42 ^ v48 & (v45 ^ v42))
          + (__ROR4__(v48, 6) ^ __ROR4__(v48, 11) ^ __ROR4__(v48, 25))
          + v122
          + 1925078388;
      v125 = v50 + v40;
      v51 = (__ROR4__(v49, 2) ^ __ROR4__(v49, 13) ^ __ROR4__(v49, 22)) + v50 + (v43 & v46 | v49 & (v43 | v46));
      v123 = _byteswap_ulong(v129[11]);
      v52 = v42
          - 2132889090
          + (v45 ^ (v50 + v40) & (v48 ^ v45))
          + (__ROR4__(v50 + v40, 6) ^ __ROR4__(v50 + v40, 11) ^ __ROR4__(v50 + v40, 25))
          + v123;
      v53 = v52 + v43;
      v54 = (__ROR4__(v51, 2) ^ __ROR4__(v51, 13) ^ __ROR4__(v51, 22)) + v52 + (v49 & v46 | v51 & (v49 | v46));
      v116 = _byteswap_ulong(v129[12]);
      v55 = v45
          - 1680079193
          + (v48 ^ v53 & (v125 ^ v48))
          + (__ROR4__(v53, 6) ^ __ROR4__(v53, 11) ^ __ROR4__(v53, 25))
          + v116;
      v56 = v55 + v46;
      v57 = (__ROR4__(v54, 2) ^ __ROR4__(v54, 13) ^ __ROR4__(v54, 22)) + v55 + (v51 & v49 | v54 & (v51 | v49));
      v58 = _byteswap_ulong(v129[13]);
      v109 = v58;
      v59 = v48
          - 1046744716
          + v58
          + (__ROR4__(v56, 11) ^ __ROR4__(v56, 25) ^ __ROR4__(v56, 6))
          + (v125 ^ v56 & (v53 ^ v125));
      v60 = v59 + v49;
      v61 = v59 + (v54 & v51 | v57 & (v54 | v51));
      v110 = (_DWORD *)&xmmword_1402BF540 + 2;
      v62 = v125;
      v63 = (__ROR4__(v57, 2) ^ __ROR4__(v57, 13) ^ __ROR4__(v57, 22)) + v61;
      do
      {
        v114 += ((v111 >> 3) ^ __ROR4__(v111, 7) ^ __ROR4__(v111, 18))
              + v128
              + ((v116 >> 10) ^ __ROR4__(v116, 17) ^ __ROR4__(v116, 19));
        v64 = v114
            + *(v110 - 2)
            + (v53 ^ v60 & (v53 ^ v56))
            + (__ROR4__(v60, 6) ^ __ROR4__(v60, 11) ^ __ROR4__(v60, 25))
            + v62;
        v65 = v64 + v51;
        v66 = (__ROR4__(v63, 2) ^ __ROR4__(v63, 13) ^ __ROR4__(v63, 22)) + (v57 & v54 | v63 & (v57 | v54)) + v64;
        v111 += ((v112 >> 3) ^ __ROR4__(v112, 7) ^ __ROR4__(v112, 18))
              + v118
              + ((v58 >> 10) ^ __ROR4__(v58, 17) ^ __ROR4__(v58, 19));
        v67 = v111
            + *(v110 - 1)
            + (v56 ^ v65 & (v60 ^ v56))
            + (__ROR4__(v65, 6) ^ __ROR4__(v65, 11) ^ __ROR4__(v65, 25))
            + v53;
        v68 = v67 + v54;
        v69 = (__ROR4__(v66, 2) ^ __ROR4__(v66, 13) ^ __ROR4__(v66, 22)) + (v63 & v57 | v66 & (v63 | v57)) + v67;
        v112 += ((v114 >> 10) ^ __ROR4__(v114, 17) ^ __ROR4__(v114, 19))
              + v120
              + ((v113 >> 3) ^ __ROR4__(v113, 7) ^ __ROR4__(v113, 18));
        v70 = v112
            + *v110
            + (v60 ^ v68 & (v65 ^ v60))
            + (__ROR4__(v68, 6) ^ __ROR4__(v68, 11) ^ __ROR4__(v68, 25))
            + v56;
        v71 = v70 + v57;
        v72 = (__ROR4__(v69, 2) ^ __ROR4__(v69, 13) ^ __ROR4__(v69, 22)) + (v66 & v63 | v69 & (v66 | v63)) + v70;
        v113 += ((v111 >> 10) ^ __ROR4__(v111, 17) ^ __ROR4__(v111, 19))
              + v122
              + ((v117 >> 3) ^ __ROR4__(v117, 7) ^ __ROR4__(v117, 18));
        v73 = v113
            + v110[1]
            + (v65 ^ v71 & (v68 ^ v65))
            + (__ROR4__(v71, 6) ^ __ROR4__(v71, 11) ^ __ROR4__(v71, 25))
            + v60;
        v74 = v73 + v63;
        v75 = (__ROR4__(v72, 2) ^ __ROR4__(v72, 13) ^ __ROR4__(v72, 22)) + (v69 & v66 | v72 & (v69 | v66)) + v73;
        v117 += ((v112 >> 10) ^ __ROR4__(v112, 17) ^ __ROR4__(v112, 19))
              + v123
              + ((v119 >> 3) ^ __ROR4__(v119, 7) ^ __ROR4__(v119, 18));
        v76 = v117
            + v110[2]
            + (v68 ^ v74 & (v71 ^ v68))
            + (__ROR4__(v74, 6) ^ __ROR4__(v74, 11) ^ __ROR4__(v74, 25))
            + v65;
        v77 = v76 + v66;
        v78 = (__ROR4__(v75, 2) ^ __ROR4__(v75, 13) ^ __ROR4__(v75, 22)) + (v69 & v72 | v75 & (v69 | v72)) + v76;
        v119 += ((v113 >> 10) ^ __ROR4__(v113, 17) ^ __ROR4__(v113, 19))
              + v116
              + ((v121 >> 3) ^ __ROR4__(v121, 7) ^ __ROR4__(v121, 18));
        v79 = v119
            + v110[3]
            + (v71 ^ v77 & (v74 ^ v71))
            + (__ROR4__(v77, 6) ^ __ROR4__(v77, 11) ^ __ROR4__(v77, 25))
            + v68;
        v80 = v79 + v69;
        v81 = (__ROR4__(v78, 2) ^ __ROR4__(v78, 13) ^ __ROR4__(v78, 22)) + (v75 & v72 | v78 & (v75 | v72)) + v79;
        v121 += ((v117 >> 10) ^ __ROR4__(v117, 17) ^ __ROR4__(v117, 19))
              + v58
              + ((v34 >> 3) ^ __ROR4__(v34, 7) ^ __ROR4__(v34, 18));
        v82 = v121
            + v110[4]
            + (v74 ^ v80 & (v77 ^ v74))
            + (__ROR4__(v80, 6) ^ __ROR4__(v80, 11) ^ __ROR4__(v80, 25))
            + v71;
        v83 = v82 + v72;
        v84 = (__ROR4__(v81, 2) ^ __ROR4__(v81, 13) ^ __ROR4__(v81, 22)) + v82 + (v78 & v75 | v81 & (v78 | v75));
        v34 += v114
             + ((v119 >> 10) ^ __ROR4__(v119, 17) ^ __ROR4__(v119, 19))
             + ((v127 >> 3) ^ __ROR4__(v127, 7) ^ __ROR4__(v127, 18));
        v85 = v34
            + v110[5]
            + (v77 ^ v83 & (v80 ^ v77))
            + (__ROR4__(v83, 6) ^ __ROR4__(v83, 11) ^ __ROR4__(v83, 25))
            + v74;
        v86 = v85 + v75;
        v87 = (__ROR4__(v84, 2) ^ __ROR4__(v84, 13) ^ __ROR4__(v84, 22)) + v85 + (v81 & v78 | v84 & (v81 | v78));
        v127 += v111
              + ((v121 >> 10) ^ __ROR4__(v121, 17) ^ __ROR4__(v121, 19))
              + ((v128 >> 3) ^ __ROR4__(v128, 7) ^ __ROR4__(v128, 18));
        v88 = v127
            + v110[6]
            + (v80 ^ v86 & (v80 ^ v83))
            + (__ROR4__(v86, 6) ^ __ROR4__(v86, 11) ^ __ROR4__(v86, 25))
            + v77;
        v89 = v88 + v78;
        v90 = (__ROR4__(v87, 2) ^ __ROR4__(v87, 13) ^ __ROR4__(v87, 22)) + (v84 & v81 | v87 & (v84 | v81)) + v88;
        v128 += v112
              + ((v34 >> 10) ^ __ROR4__(v34, 17) ^ __ROR4__(v34, 19))
              + ((v118 >> 3) ^ __ROR4__(v118, 7) ^ __ROR4__(v118, 18));
        v91 = v128
            + v110[7]
            + (v83 ^ v89 & (v86 ^ v83))
            + (__ROR4__(v89, 6) ^ __ROR4__(v89, 11) ^ __ROR4__(v89, 25))
            + v80;
        v92 = v91 + v81;
        v93 = (__ROR4__(v90, 2) ^ __ROR4__(v90, 13) ^ __ROR4__(v90, 22)) + (v87 & v84 | v90 & (v87 | v84)) + v91;
        v118 += v113
              + ((v127 >> 10) ^ __ROR4__(v127, 17) ^ __ROR4__(v127, 19))
              + ((v120 >> 3) ^ __ROR4__(v120, 7) ^ __ROR4__(v120, 18));
        v94 = v118
            + v110[8]
            + (v86 ^ v92 & (v89 ^ v86))
            + (__ROR4__(v92, 6) ^ __ROR4__(v92, 11) ^ __ROR4__(v92, 25))
            + v83;
        v95 = v94 + v84;
        v96 = (__ROR4__(v93, 2) ^ __ROR4__(v93, 13) ^ __ROR4__(v93, 22)) + (v90 & v87 | v93 & (v90 | v87)) + v94;
        v120 += v117
              + ((v128 >> 10) ^ __ROR4__(v128, 17) ^ __ROR4__(v128, 19))
              + ((v122 >> 3) ^ __ROR4__(v122, 7) ^ __ROR4__(v122, 18));
        v97 = v120
            + v110[9]
            + (v89 ^ v95 & (v92 ^ v89))
            + (__ROR4__(v95, 6) ^ __ROR4__(v95, 11) ^ __ROR4__(v95, 25))
            + v86;
        v98 = v97 + v87;
        v99 = (__ROR4__(v96, 2) ^ __ROR4__(v96, 13) ^ __ROR4__(v96, 22)) + (v93 & v90 | v96 & (v93 | v90)) + v97;
        v122 += v119
              + ((v118 >> 10) ^ __ROR4__(v118, 17) ^ __ROR4__(v118, 19))
              + ((v123 >> 3) ^ __ROR4__(v123, 7) ^ __ROR4__(v123, 18));
        v100 = v122
             + v110[10]
             + (v92 ^ v98 & (v95 ^ v92))
             + (__ROR4__(v98, 6) ^ __ROR4__(v98, 11) ^ __ROR4__(v98, 25))
             + v89;
        v62 = v100 + v90;
        v51 = (__ROR4__(v99, 2) ^ __ROR4__(v99, 13) ^ __ROR4__(v99, 22)) + (v93 & v96 | v99 & (v93 | v96)) + v100;
        v123 += v121
              + ((v120 >> 10) ^ __ROR4__(v120, 17) ^ __ROR4__(v120, 19))
              + ((v116 >> 3) ^ __ROR4__(v116, 7) ^ __ROR4__(v116, 18));
        v101 = v123
             + v110[11]
             + (v95 ^ v62 & (v98 ^ v95))
             + (__ROR4__(v62, 6) ^ __ROR4__(v62, 11) ^ __ROR4__(v62, 25))
             + v92;
        v53 = v101 + v93;
        v54 = (__ROR4__(v51, 2) ^ __ROR4__(v51, 13) ^ __ROR4__(v51, 22)) + (v99 & v96 | v51 & (v99 | v96)) + v101;
        v116 += v34
              + ((v122 >> 10) ^ __ROR4__(v122, 17) ^ __ROR4__(v122, 19))
              + ((v109 >> 3) ^ __ROR4__(v109, 7) ^ __ROR4__(v109, 18));
        v102 = v116
             + v110[12]
             + (v98 ^ v53 & (v62 ^ v98))
             + (__ROR4__(v53, 6) ^ __ROR4__(v53, 11) ^ __ROR4__(v53, 25))
             + v95;
        v56 = v102 + v96;
        v57 = (__ROR4__(v54, 2) ^ __ROR4__(v54, 13) ^ __ROR4__(v54, 22)) + v102 + (v51 & v99 | v54 & (v51 | v99));
        v109 += v127
              + ((v114 >> 3) ^ __ROR4__(v114, 7) ^ __ROR4__(v114, 18))
              + ((v123 >> 10) ^ __ROR4__(v123, 17) ^ __ROR4__(v123, 19));
        v103 = v109
             + v110[13]
             + (v62 ^ v56 & (v53 ^ v62))
             + (__ROR4__(v56, 6) ^ __ROR4__(v56, 11) ^ __ROR4__(v56, 25))
             + v98;
        v60 = v103 + v99;
        v110 += 16;
        v104 = v103 + (v54 & v51 | v57 & (v54 | v51));
        v58 = v109;
        v63 = (__ROR4__(v57, 2) ^ __ROR4__(v57, 13) ^ __ROR4__(v57, 22)) + v104;
      }
      while ( (__int64)v110 < (__int64)((_DWORD *)&_xmm + 2) );
      v4 = v135 + v60;
      v6 = v136 + v56;
      v8 = v137 + v53;
      v11 = v133 + v54;
      v13 = v130 + v62;
      v12 = v134 + v51;
      v9 = v131 + v63;
      v10 = v132 + v57;
      v131 = v9;
      v14 = v129 + 16;
      v105 = v138-- == 1;
      v134 = v12;
      *a1 = v9;
      v132 = v10;
      a1[1] = v10;
      v133 = v11;
      a1[2] = v11;
      v135 = v4;
      a1[4] = v4;
      v136 = v6;
      a1[5] = v6;
      v137 = v8;
      a1[6] = v8;
      v130 = v13;
      a1[7] = v13;
      a1[3] = v12;
      v126 = v4;
      v124 = v6;
      v107 = v8;
      v129 += 16;
    }
    while ( !v105 );
    a3 = v139;
  }
  *a4 = a3;
  return 0LL;
}
