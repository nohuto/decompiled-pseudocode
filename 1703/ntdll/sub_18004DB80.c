/*
 * XREFs of sub_18004DB80 @ 0x18004DB80
 * Callers:
 *     sub_18004DA54 @ 0x18004DA54 (sub_18004DA54.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_18004DB80(int *a1, __int64 a2)
{
  __int64 v2; // rdx
  _BYTE *v3; // r8
  __int64 v4; // r9
  unsigned __int64 v5; // rax
  int v6; // r11d
  int v7; // ebx
  int v8; // esi
  __int64 v9; // rdi
  int v10; // r15d
  int v11; // r12d
  int v12; // r13d
  int v13; // r14d
  __int64 result; // rax
  __int64 v15; // r8
  __int64 v16; // rdi
  int v17; // r9d
  __int64 v18; // r8
  int v19; // r12d
  __int64 v20; // rdi
  int v21; // r14d
  int v22; // r9d
  __int64 v23; // r8
  int v24; // r9d
  int v25; // r15d
  int v26; // r11d
  __int64 v27; // rdi
  int v28; // r9d
  __int64 v29; // r8
  int v30; // r9d
  int v31; // esi
  __int64 v32; // rdi
  int v33; // eax
  int v34; // r9d
  __int64 v35; // r8
  int v36; // r9d
  int v37; // ebx
  int v38; // r13d
  __int64 v39; // rdi
  int v40; // r9d
  __int64 v41; // r8
  int v42; // r9d
  __int64 v43; // rdi
  int v44; // r9d
  int v45; // r9d
  __int64 v46; // rdi
  __int64 v47; // r8
  int v48; // r9d
  __int64 v49; // r14
  __int64 v50; // rdi
  _DWORD *v51; // r10
  int v52; // r8d
  int v53; // r11d
  int v54; // r12d
  __int64 v55; // rbx
  unsigned int v56; // edx
  int v57; // r8d
  __int64 v58; // rdi
  int v59; // r9d
  int v60; // r15d
  unsigned int v61; // r9d
  unsigned int v62; // edx
  int v63; // r8d
  int v64; // r9d
  __int64 v65; // rsi
  int v66; // eax
  __int64 v67; // r11
  unsigned int v68; // r9d
  int v69; // r8d
  __int64 v70; // rbx
  int v71; // r9d
  int v72; // r13d
  unsigned int v73; // r9d
  unsigned int v74; // edx
  int v75; // r8d
  int v76; // r9d
  __int64 v77; // r11
  unsigned int v78; // r9d
  int v79; // r8d
  int v80; // r9d
  __int64 v81; // rbx
  int v82; // r9d
  __int64 v83; // r10
  unsigned int v84; // edx
  int v85; // r8d
  int v86; // r9d
  int v87; // r9d
  unsigned int v88; // edx
  int v89; // r9d
  unsigned int v90; // edx
  int v91; // r8d
  int v92; // [rsp+0h] [rbp-80h]
  unsigned int v93; // [rsp+0h] [rbp-80h]
  int v94; // [rsp+4h] [rbp-7Ch]
  int v95; // [rsp+4h] [rbp-7Ch]
  int v96; // [rsp+8h] [rbp-78h]
  int v97; // [rsp+8h] [rbp-78h]
  int v98; // [rsp+Ch] [rbp-74h]
  unsigned int v99; // [rsp+10h] [rbp-70h]
  int v100; // [rsp+18h] [rbp-68h]
  _DWORD v101[4]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v102[48]; // [rsp+40h] [rbp-40h] BYREF

  v2 = a2 - (_QWORD)v102;
  v3 = v102;
  v4 = 2LL;
  do
  {
    v5 = *(_QWORD *)&v3[v2];
    v3 += 32;
    *((_QWORD *)v3 - 6) = __ROR8__(_byteswap_uint64(v5), 32);
    *((_QWORD *)v3 - 5) = __ROR8__(_byteswap_uint64(*(_QWORD *)&v3[v2 - 24]), 32);
    *((_QWORD *)v3 - 4) = __ROR8__(_byteswap_uint64(*(_QWORD *)&v3[v2 - 16]), 32);
    *((_QWORD *)v3 - 3) = __ROR8__(_byteswap_uint64(*(_QWORD *)&v3[v2 - 8]), 32);
    --v4;
  }
  while ( v4 );
  v6 = a1[6];
  v7 = *a1;
  v8 = a1[1];
  v9 = 0LL;
  v10 = a1[2];
  v11 = a1[3];
  v12 = a1[4];
  v13 = a1[7];
  v100 = *a1;
  LODWORD(result) = a1[5];
  v92 = v6;
  do
  {
    v15 = v9;
    v16 = (unsigned int)(v9 + 1);
    v17 = v13
        + v101[v15]
        + dword_180119C30[v15]
        + (v12 & result ^ v6 & ~v12)
        + (__ROR4__(v12, 6) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 25));
    v18 = v16;
    v19 = v17 + v11;
    v20 = (unsigned int)(v16 + 1);
    v21 = v17 + (__ROR4__(v7, 13) ^ __ROR4__(v7, 22) ^ __ROR4__(v7, 2)) + (v7 & v8 ^ v10 & (v7 ^ v8));
    v22 = v101[v18]
        + dword_180119C30[v18]
        + (v19 & v12 ^ result & ~v19)
        + (__ROR4__(v19, 6) ^ __ROR4__(v19, 11) ^ __ROR4__(v19, 25));
    v23 = v20;
    v24 = v92 + v22;
    v25 = v24 + v10;
    v26 = v24 + (__ROR4__(v21, 2) ^ __ROR4__(v21, 13) ^ __ROR4__(v21, 22)) + (v7 & v8 ^ v21 & (v7 ^ v8));
    v27 = (unsigned int)(v20 + 1);
    v28 = v101[v23]
        + dword_180119C30[v23]
        + (v25 & v19 ^ v12 & ~v25)
        + (__ROR4__(v25, 6) ^ __ROR4__(v25, 11) ^ __ROR4__(v25, 25));
    v29 = v27;
    v30 = result + v28;
    v31 = v30 + v8;
    v32 = (unsigned int)(v27 + 1);
    v33 = v30 + (__ROR4__(v26, 2) ^ __ROR4__(v26, 13) ^ __ROR4__(v26, 22)) + (v7 & v26 ^ v21 & (v7 ^ v26));
    v34 = v101[v29]
        + dword_180119C30[v29]
        + (v31 & v25 ^ v19 & ~v31)
        + (__ROR4__(v31, 6) ^ __ROR4__(v31, 11) ^ __ROR4__(v31, 25));
    v35 = v32;
    v36 = v12 + v34;
    v37 = v36 + v7;
    v38 = v36 + (__ROR4__(v33, 2) ^ __ROR4__(v33, 13) ^ __ROR4__(v33, 22)) + (v33 & v26 ^ v21 & (v33 ^ v26));
    v39 = (unsigned int)(v32 + 1);
    v40 = v101[v35]
        + dword_180119C30[v35]
        + (v37 & v31 ^ v25 & ~v37)
        + (__ROR4__(v37, 6) ^ __ROR4__(v37, 11) ^ __ROR4__(v37, 25));
    v41 = v39;
    v42 = v19 + v40;
    v13 = v42 + v21;
    v43 = (unsigned int)(v39 + 1);
    v11 = v42 + (__ROR4__(v38, 2) ^ __ROR4__(v38, 13) ^ __ROR4__(v38, 22)) + (v38 & v33 ^ v26 & (v38 ^ v33));
    v44 = v25
        + v101[v41]
        + dword_180119C30[v41]
        + (v37 & v13 ^ v31 & ~v13)
        + (__ROR4__(v13, 6) ^ __ROR4__(v13, 11) ^ __ROR4__(v13, 25));
    v6 = v44 + v26;
    v92 = v6;
    v10 = v44 + (__ROR4__(v11, 2) ^ __ROR4__(v11, 13) ^ __ROR4__(v11, 22)) + (v11 & v38 ^ v33 & (v11 ^ v38));
    v45 = v31
        + v101[v43]
        + dword_180119C30[v43]
        + (v6 & v13 ^ v37 & ~v6)
        + (__ROR4__(v6, 6) ^ __ROR4__(v6, 11) ^ __ROR4__(v6, 25));
    v46 = (unsigned int)(v43 + 1);
    result = (unsigned int)(v45 + v33);
    v47 = v46;
    v9 = (unsigned int)(v46 + 1);
    v8 = v45 + (__ROR4__(v10, 2) ^ __ROR4__(v10, 13) ^ __ROR4__(v10, 22)) + (v10 & v11 ^ v38 & (v10 ^ v11));
    v48 = v37
        + v101[v47]
        + dword_180119C30[v47]
        + (result & v6 ^ v13 & ~(_DWORD)result)
        + (__ROR4__(result, 6) ^ __ROR4__(result, 11) ^ __ROR4__(result, 25));
    v12 = v48 + v38;
    v7 = v48 + (__ROR4__(v8, 2) ^ __ROR4__(v8, 13) ^ __ROR4__(v8, 22)) + (v8 & v10 ^ v11 & (v8 ^ v10));
  }
  while ( (unsigned int)v9 < 0x10 );
  v94 = v13;
  v99 = v9;
  v96 = v8;
  v98 = v7;
  if ( (unsigned int)v9 < 0x40 )
  {
    do
    {
      v49 = (unsigned int)(v9 + 1);
      v50 = ((_BYTE)v9 + 1) & 0xF;
      v51 = &v101[v99 & 0xF];
      *v51 += v101[((_BYTE)v99 - 7) & 0xF]
            + ((v101[v50] >> 3) ^ __ROR4__(v101[v50], 7) ^ __ROR4__(v101[v50], 18))
            + ((v101[((_BYTE)v99 - 2) & 0xF] >> 10) ^ __ROR4__(v101[((_BYTE)v99 - 2) & 0xF], 17) ^ __ROR4__(
                                                                                                     v101[((_BYTE)v99 - 2) & 0xF],
                                                                                                     19));
      v52 = v94
          + *v51
          + dword_180119C30[v99]
          + (v12 & result ^ v92 & ~v12)
          + (__ROR4__(v12, 6) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 25));
      v53 = v7 & v8;
      LODWORD(v51) = v7 ^ v8;
      v54 = v52 + v11;
      v95 = v52 + (__ROR4__(v7, 13) ^ __ROR4__(v7, 22) ^ __ROR4__(v7, 2)) + (v7 & v8 ^ v10 & (v7 ^ v8));
      v55 = ((_BYTE)v49 + 1) & 0xF;
      v56 = v101[((_BYTE)v49 - 2) & 0xF];
      v57 = v101[v50]
          + v101[((_BYTE)v49 - 7) & 0xF]
          + ((v56 >> 10) ^ __ROR4__(v56, 17) ^ __ROR4__(v56, 19))
          + (__ROR4__(v101[v55], 7) ^ __ROR4__(v101[v55], 18) ^ (v101[v55] >> 3));
      v101[v50] = v57;
      v58 = (unsigned int)(v49 + 2);
      v59 = v92
          + v57
          + dword_180119C30[v49]
          + (v54 & v12 ^ result & ~v54)
          + (__ROR4__(v54, 6) ^ __ROR4__(v54, 11) ^ __ROR4__(v54, 25));
      v60 = v59 + v10;
      v93 = v59 + (__ROR4__(v95, 13) ^ __ROR4__(v95, 22) ^ __ROR4__(v95, 2)) + (v53 ^ v95 & (unsigned int)v51);
      v61 = v101[((_BYTE)v49 - 1) & 0xF];
      v62 = v101[((_BYTE)v49 + 2) & 0xF];
      v63 = v101[v55]
          + v101[((_BYTE)v49 - 6) & 0xF]
          + ((v61 >> 10) ^ __ROR4__(v61, 17) ^ __ROR4__(v61, 19))
          + (__ROR4__(v62, 7) ^ __ROR4__(v62, 18) ^ (v62 >> 3));
      v101[v55] = v63;
      v64 = result
          + v63
          + dword_180119C30[(unsigned int)(v49 + 1)]
          + (v60 & v54 ^ v12 & ~v60)
          + (__ROR4__(v60, 6) ^ __ROR4__(v60, 11) ^ __ROR4__(v60, 25));
      v65 = (unsigned int)(v49 + 3);
      v97 = v64 + v96;
      v66 = v64 + (__ROR4__(v93, 2) ^ __ROR4__(v93, 13) ^ __ROR4__(v93, 22)) + (v98 & v93 ^ v95 & (v98 ^ v93));
      v67 = ((_BYTE)v49 + 3) & 0xF;
      v68 = v101[v49 & 0xF];
      v69 = v101[((_BYTE)v49 + 2) & 0xF]
          + v101[((_BYTE)v49 - 5) & 0xF]
          + ((v68 >> 10) ^ __ROR4__(v68, 17) ^ __ROR4__(v68, 19))
          + (__ROR4__(v101[v67], 7) ^ __ROR4__(v101[v67], 18) ^ (v101[v67] >> 3));
      v101[((_BYTE)v49 + 2) & 0xF] = v69;
      v70 = (unsigned int)(v49 + 4);
      v71 = v12
          + v69
          + dword_180119C30[v58]
          + (v97 & v60 ^ v54 & ~v97)
          + (__ROR4__(v97, 6) ^ __ROR4__(v97, 11) ^ __ROR4__(v97, 25));
      LODWORD(v49) = v71 + v98;
      v72 = v71 + (__ROR4__(v66, 2) ^ __ROR4__(v66, 13) ^ __ROR4__(v66, 22)) + (v66 & v93 ^ v95 & (v66 ^ v93));
      v73 = v101[((_BYTE)v65 - 2) & 0xF];
      v74 = v101[v70 & 0xF];
      v75 = v101[v67]
          + v101[((_BYTE)v65 - 7) & 0xF]
          + ((v73 >> 10) ^ __ROR4__(v73, 17) ^ __ROR4__(v73, 19))
          + (__ROR4__(v74, 7) ^ __ROR4__(v74, 18) ^ (v74 >> 3));
      v101[v67] = v75;
      v76 = v54
          + v75
          + dword_180119C30[v65]
          + (v49 & v97 ^ v60 & ~(_DWORD)v49)
          + (__ROR4__(v49, 6) ^ __ROR4__(v49, 11) ^ __ROR4__(v49, 25));
      v94 = v76 + v95;
      v9 = (unsigned int)(v58 + 3);
      v11 = v76 + (__ROR4__(v72, 2) ^ __ROR4__(v72, 13) ^ __ROR4__(v72, 22)) + (v72 & v66 ^ v93 & (v72 ^ v66));
      v77 = ((_BYTE)v70 + 1) & 0xF;
      v78 = v101[((_BYTE)v70 - 2) & 0xF];
      v79 = v101[v70 & 0xF]
          + v101[((_BYTE)v70 - 7) & 0xF]
          + ((v78 >> 10) ^ __ROR4__(v78, 17) ^ __ROR4__(v78, 19))
          + (__ROR4__(v101[v77], 7) ^ __ROR4__(v101[v77], 18) ^ (v101[v77] >> 3));
      v101[v70 & 0xF] = v79;
      v80 = dword_180119C30[v70] + (v49 & v94 ^ v97 & ~v94) + (__ROR4__(v94, 6) ^ __ROR4__(v94, 11) ^ __ROR4__(v94, 25));
      v81 = (unsigned int)(v70 + 2);
      v82 = v60 + v79 + v80;
      v92 = v82 + v93;
      v83 = v81 & 0xF;
      v10 = v82 + (__ROR4__(v11, 2) ^ __ROR4__(v11, 13) ^ __ROR4__(v11, 22)) + (v11 & v72 ^ v66 & (v11 ^ v72));
      v84 = v101[((_BYTE)v9 - 2) & 0xF];
      v85 = v101[v77]
          + v101[((_BYTE)v9 - 7) & 0xF]
          + ((v84 >> 10) ^ __ROR4__(v84, 17) ^ __ROR4__(v84, 19))
          + (__ROR4__(v101[v83], 7) ^ __ROR4__(v101[v83], 18) ^ (v101[v83] >> 3));
      v101[v77] = v85;
      v6 = v92;
      v86 = dword_180119C30[v9] + (v92 & v94 ^ v49 & ~v92) + (__ROR4__(v92, 6) ^ __ROR4__(v92, 11) ^ __ROR4__(v92, 25));
      LODWORD(v9) = v81 + 1;
      v87 = v97 + v85 + v86;
      result = (unsigned int)(v87 + v66);
      v99 = v81 + 1;
      v8 = v87 + (__ROR4__(v10, 2) ^ __ROR4__(v10, 13) ^ __ROR4__(v10, 22)) + (v10 & v11 ^ v72 & (v10 ^ v11));
      v96 = v8;
      v88 = v101[((_BYTE)v81 - 2) & 0xF];
      v89 = (v88 >> 10) ^ __ROR4__(v88, 17) ^ __ROR4__(v88, 19);
      v90 = v101[((_BYTE)v81 + 1) & 0xF];
      v101[v83] += v101[((_BYTE)v81 - 7) & 0xF] + ((v90 >> 3) ^ __ROR4__(v90, 7) ^ __ROR4__(v90, 18)) + v89;
      v91 = v49
          + v101[v83]
          + dword_180119C30[v81]
          + (result & v92 ^ v94 & ~(_DWORD)result)
          + (__ROR4__(result, 6) ^ __ROR4__(result, 11) ^ __ROR4__(result, 25));
      v12 = v91 + v72;
      v7 = v91 + (__ROR4__(v8, 2) ^ __ROR4__(v8, 13) ^ __ROR4__(v8, 22)) + (v8 & v10 ^ v11 & (v8 ^ v10));
      v98 = v7;
    }
    while ( (unsigned int)v9 < 0x40 );
    v13 = v94;
  }
  a1[1] += v8;
  a1[2] += v10;
  a1[3] += v11;
  a1[4] += v12;
  a1[5] += result;
  a1[6] += v6;
  a1[7] += v13;
  *a1 = v7 + v100;
  return result;
}
