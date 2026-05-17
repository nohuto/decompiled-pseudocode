/*
 * XREFs of SHA256Transform @ 0x180057E14
 * Callers:
 *     SHA256Update @ 0x180057CF4 (SHA256Update.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

__int64 __fastcall SHA256Transform(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // r8
  unsigned __int64 v6; // rax
  int v7; // r11d
  int v8; // ebx
  int v9; // r15d
  int v10; // r12d
  int v11; // r13d
  int v12; // esi
  int v13; // edi
  int v14; // r9d
  __int64 v15; // r14
  int v16; // r8d
  int v17; // r12d
  __int64 v18; // r14
  int v19; // edx
  int v20; // r8d
  __int64 v21; // r14
  int v22; // r8d
  int v23; // r15d
  int v24; // edi
  int v25; // r8d
  __int64 v26; // r14
  int v27; // r8d
  int v28; // ebx
  int v29; // esi
  int v30; // r8d
  __int64 v31; // r14
  int v32; // r8d
  int v33; // r11d
  int v34; // r13d
  int v35; // r8d
  __int64 v36; // r14
  int v37; // r8d
  __int64 v38; // r14
  int v39; // r8d
  int v40; // r8d
  __int64 v41; // r14
  int v42; // r8d
  int v43; // r8d
  __int64 result; // rax
  bool v45; // cf
  _DWORD *v46; // r14
  unsigned int v47; // r14d
  __int64 v48; // rsi
  __int64 v49; // r9
  __int64 v50; // rbx
  unsigned int v51; // ecx
  int v52; // edx
  int v53; // ecx
  __int64 v54; // rdi
  int v55; // edx
  int v56; // r12d
  int v57; // r10d
  int v58; // ecx
  int v59; // r14d
  int v60; // eax
  __int64 v61; // r11
  int v62; // r14d
  unsigned int v63; // ecx
  int v64; // edx
  __int64 v65; // rbx
  int v66; // r8d
  int v67; // r15d
  __int64 v68; // r9
  int v69; // edx
  int v70; // r8d
  __int64 v71; // rdi
  __int64 v72; // r10
  int v73; // edx
  int v74; // r8d
  __int64 v75; // r9
  int v76; // r13d
  unsigned int v77; // r8d
  int v78; // edx
  int v79; // r8d
  __int64 v80; // r10
  unsigned int v81; // r8d
  int v82; // edx
  int v83; // r8d
  __int64 v84; // r9
  unsigned int v85; // ecx
  int v86; // edx
  int v87; // r8d
  unsigned int v88; // r8d
  unsigned int v89; // ecx
  int v90; // edx
  int v91; // [rsp+0h] [rbp-80h]
  int v92; // [rsp+0h] [rbp-80h]
  int v93; // [rsp+4h] [rbp-7Ch]
  int v94; // [rsp+4h] [rbp-7Ch]
  int v95; // [rsp+8h] [rbp-78h]
  int v96; // [rsp+Ch] [rbp-74h]
  int v97; // [rsp+Ch] [rbp-74h]
  int v98; // [rsp+10h] [rbp-70h]
  unsigned int v99; // [rsp+18h] [rbp-68h]
  _DWORD v101[4]; // [rsp+30h] [rbp-50h]
  _BYTE v102[48]; // [rsp+40h] [rbp-40h] BYREF

  v3 = a2 - (_QWORD)v102;
  v4 = v102;
  v5 = 2LL;
  do
  {
    *(v4 - 2) = __ROR8__(_byteswap_uint64(*(_QWORD *)((char *)v4 + v3)), 32);
    *(v4 - 1) = __ROR8__(_byteswap_uint64(*(_QWORD *)((char *)v4 + v3 + 8)), 32);
    *v4 = __ROR8__(_byteswap_uint64(*(_QWORD *)((char *)v4 + v3 + 16)), 32);
    v6 = *(_QWORD *)((char *)v4 + v3 + 24);
    v4 += 4;
    *(v4 - 3) = __ROR8__(_byteswap_uint64(v6), 32);
    --v5;
  }
  while ( v5 );
  v7 = *a1;
  v8 = a1[1];
  v9 = a1[2];
  v10 = a1[3];
  v11 = a1[4];
  v12 = a1[5];
  v13 = a1[6];
  v14 = a1[7];
  v15 = 0LL;
  do
  {
    v16 = v14
        + v101[v15]
        + SHA256Magic[v15]
        + (v11 & v12 ^ v13 & ~v11)
        + (__ROR4__(v11, 6) ^ __ROR4__(v11, 11) ^ __ROR4__(v11, 25));
    v17 = v16 + v10;
    v18 = (unsigned int)(v15 + 1);
    v19 = v16 + (__ROR4__(v7, 13) ^ __ROR4__(v7, 22) ^ __ROR4__(v7, 2)) + (v7 & v8 ^ v9 & (v7 ^ v8));
    v20 = v101[v18]
        + SHA256Magic[v18]
        + (v17 & v11 ^ v12 & ~v17)
        + (__ROR4__(v17, 6) ^ __ROR4__(v17, 11) ^ __ROR4__(v17, 25));
    v21 = (unsigned int)(v18 + 1);
    v22 = v13 + v20;
    v23 = v22 + v9;
    v24 = v22 + (__ROR4__(v19, 13) ^ __ROR4__(v19, 22) ^ __ROR4__(v19, 2)) + (v7 & v8 ^ v19 & (v7 ^ v8));
    v25 = v101[v21]
        + SHA256Magic[v21]
        + (v23 & v17 ^ v11 & ~v23)
        + (__ROR4__(v23, 6) ^ __ROR4__(v23, 11) ^ __ROR4__(v23, 25));
    v26 = (unsigned int)(v21 + 1);
    v27 = v12 + v25;
    v28 = v27 + v8;
    v29 = v27 + (__ROR4__(v24, 2) ^ __ROR4__(v24, 13) ^ __ROR4__(v24, 22)) + (v7 & v24 ^ v19 & (v7 ^ v24));
    v30 = v101[v26]
        + SHA256Magic[v26]
        + (v28 & v23 ^ v17 & ~v28)
        + (__ROR4__(v28, 6) ^ __ROR4__(v28, 11) ^ __ROR4__(v28, 25));
    v31 = (unsigned int)(v26 + 1);
    v32 = v11 + v30;
    v33 = v32 + v7;
    v34 = v32 + (__ROR4__(v29, 2) ^ __ROR4__(v29, 13) ^ __ROR4__(v29, 22)) + (v29 & v24 ^ v19 & (v29 ^ v24));
    v35 = v17
        + v101[v31]
        + SHA256Magic[v31]
        + (v33 & v28 ^ v23 & ~v33)
        + (__ROR4__(v33, 6) ^ __ROR4__(v33, 11) ^ __ROR4__(v33, 25));
    v14 = v35 + v19;
    v36 = (unsigned int)(v31 + 1);
    v95 = v14;
    v10 = v35 + (__ROR4__(v34, 2) ^ __ROR4__(v34, 13) ^ __ROR4__(v34, 22)) + (v34 & v29 ^ v24 & (v34 ^ v29));
    v37 = v101[v36]
        + SHA256Magic[v36]
        + (v33 & v14 ^ v28 & ~v14)
        + (__ROR4__(v14, 6) ^ __ROR4__(v14, 11) ^ __ROR4__(v35 + v19, 25));
    v38 = (unsigned int)(v36 + 1);
    v39 = v23 + v37;
    v13 = v39 + v24;
    v9 = v39 + (__ROR4__(v10, 2) ^ __ROR4__(v10, 13) ^ __ROR4__(v10, 22)) + (v10 & v34 ^ v29 & (v10 ^ v34));
    v40 = v28
        + v101[v38]
        + SHA256Magic[v38]
        + (v13 & v14 ^ v33 & ~v13)
        + (__ROR4__(v13, 6) ^ __ROR4__(v13, 11) ^ __ROR4__(v13, 25));
    v12 = v40 + v29;
    v41 = (unsigned int)(v38 + 1);
    v8 = v40 + (__ROR4__(v9, 2) ^ __ROR4__(v9, 13) ^ __ROR4__(v9, 22)) + (v9 & v10 ^ v34 & (v9 ^ v10));
    v42 = v101[v41]
        + SHA256Magic[v41]
        + (v12 & v13 ^ v14 & ~v12)
        + (__ROR4__(v12, 6) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 25));
    v15 = (unsigned int)(v41 + 1);
    v43 = v33 + v42;
    v11 = v43 + v34;
    result = v43 + (__ROR4__(v8, 2) ^ (unsigned int)(__ROR4__(v8, 13) ^ __ROR4__(v8, 22)));
    v7 = result + (v8 & v9 ^ v10 & (v8 ^ v9));
  }
  while ( (unsigned int)v15 < 0x10 );
  v99 = v15;
  v45 = (unsigned int)v15 < 0x40;
  v46 = a1;
  v91 = v13;
  v93 = v8;
  v96 = result + (v8 & v9 ^ v10 & (v8 ^ v9));
  v98 = v12;
  if ( v45 )
  {
    v47 = v99;
    do
    {
      v48 = v47 + 1;
      v49 = v47 & 0xF;
      v50 = ((_BYTE)v47 + 1) & 0xF;
      v51 = v101[((_BYTE)v47 - 2) & 0xF];
      v52 = ((v101[v50] >> 3) ^ __ROR4__(v101[v50], 7) ^ __ROR4__(v101[v50], 18))
          + ((v51 >> 10) ^ __ROR4__(v51, 17) ^ __ROR4__(v51, 19));
      v53 = v13 & ~v11;
      v54 = v47 + 2;
      v101[v49] += v101[((_BYTE)v47 - 7) & 0xF] + v52;
      v55 = v95
          + v101[v49]
          + SHA256Magic[v47]
          + (v11 & v98 ^ v53)
          + (__ROR4__(v11, 6) ^ __ROR4__(v11, 11) ^ __ROR4__(v11, 25));
      v56 = v55 + v10;
      LODWORD(v49) = v7 ^ v93;
      v57 = v7 & v93;
      v58 = __ROR4__(v7, 13) ^ __ROR4__(v7, 22);
      v59 = v7 & v93 ^ v9 & (v7 ^ v93);
      v60 = __ROR4__(v7, 2);
      v61 = v54 & 0xF;
      v62 = v55 + (v58 ^ v60) + v59;
      v63 = v101[((_BYTE)v48 - 2) & 0xF];
      v64 = v101[v50]
          + v101[((_BYTE)v48 - 7) & 0xF]
          + ((v63 >> 10) ^ __ROR4__(v63, 17) ^ __ROR4__(v63, 19))
          + (__ROR4__(v101[v61], 7) ^ __ROR4__(v101[v61], 18) ^ (v101[v61] >> 3));
      v101[v50] = v64;
      v65 = (unsigned int)(v54 + 1);
      v66 = v91
          + v64
          + SHA256Magic[v48]
          + (v56 & v11 ^ v98 & ~v56)
          + (__ROR4__(v56, 6) ^ __ROR4__(v56, 11) ^ __ROR4__(v56, 25));
      LODWORD(v48) = v57 ^ v62 & v49;
      v67 = v66 + v9;
      v68 = ((_BYTE)v54 + 1) & 0xF;
      v92 = v66 + (__ROR4__(v62, 13) ^ __ROR4__(v62, 22) ^ __ROR4__(v62, 2)) + v48;
      v69 = v101[v61]
          + v101[((_BYTE)v54 - 7) & 0xF]
          + ((v101[((_BYTE)v54 - 2) & 0xF] >> 10) ^ __ROR4__(v101[((_BYTE)v54 - 2) & 0xF], 17) ^ __ROR4__(
                                                                                                   v101[((_BYTE)v54 - 2) & 0xF],
                                                                                                   19))
          + (__ROR4__(v101[v68], 7) ^ __ROR4__(v101[v68], 18) ^ (v101[v68] >> 3));
      v101[v61] = v69;
      v70 = v98
          + v69
          + SHA256Magic[v54]
          + (v67 & v56 ^ v11 & ~v67)
          + (__ROR4__(v67, 6) ^ __ROR4__(v67, 11) ^ __ROR4__(v67, 25));
      v71 = (unsigned int)(v54 + 2);
      v94 = v70 + v93;
      v72 = v71 & 0xF;
      LODWORD(v48) = v70 + (__ROR4__(v92, 2) ^ __ROR4__(v92, 13) ^ __ROR4__(v92, 22)) + (v96 & v92 ^ v62 & (v96 ^ v92));
      v73 = v101[v68]
          + v101[((_BYTE)v65 - 7) & 0xF]
          + ((v101[((_BYTE)v65 - 2) & 0xF] >> 10) ^ __ROR4__(v101[((_BYTE)v65 - 2) & 0xF], 17) ^ __ROR4__(
                                                                                                   v101[((_BYTE)v65 - 2) & 0xF],
                                                                                                   19))
          + (__ROR4__(v101[v72], 7) ^ __ROR4__(v101[v72], 18) ^ (v101[v72] >> 3));
      v101[v68] = v73;
      v74 = v11
          + v73
          + SHA256Magic[v65]
          + (v94 & v67 ^ v56 & ~v94)
          + (__ROR4__(v94, 6) ^ __ROR4__(v94, 11) ^ __ROR4__(v94, 25));
      v97 = v74 + v96;
      v75 = ((_BYTE)v71 + 1) & 0xF;
      v76 = v74 + (__ROR4__(v48, 2) ^ __ROR4__(v48, 13) ^ __ROR4__(v48, 22)) + (v48 & v92 ^ v62 & (v48 ^ v92));
      v77 = v101[((_BYTE)v71 - 2) & 0xF];
      v78 = v101[v72]
          + v101[((_BYTE)v71 - 7) & 0xF]
          + ((v77 >> 10) ^ __ROR4__(v77, 17) ^ __ROR4__(v77, 19))
          + (__ROR4__(v101[v75], 7) ^ __ROR4__(v101[v75], 18) ^ (v101[v75] >> 3));
      v101[v72] = v78;
      v79 = v56
          + v78
          + SHA256Magic[v71]
          + (v97 & v94 ^ v67 & ~v97)
          + (__ROR4__(v97, 6) ^ __ROR4__(v97, 11) ^ __ROR4__(v97, 25));
      v95 = v79 + v62;
      v10 = v79 + (__ROR4__(v76, 2) ^ __ROR4__(v76, 13) ^ __ROR4__(v76, 22)) + (v76 & v48 ^ v92 & (v76 ^ v48));
      v80 = ((_BYTE)v71 + 2) & 0xF;
      v81 = v101[((_BYTE)v71 - 1) & 0xF];
      v82 = v101[v75]
          + v101[((_BYTE)v71 - 6) & 0xF]
          + ((v81 >> 10) ^ __ROR4__(v81, 17) ^ __ROR4__(v81, 19))
          + (__ROR4__(v101[v80], 7) ^ __ROR4__(v101[v80], 18) ^ (v101[v80] >> 3));
      v101[v75] = v82;
      v83 = v67
          + v82
          + SHA256Magic[(unsigned int)(v71 + 1)]
          + (v97 & v95 ^ v94 & ~v95)
          + (__ROR4__(v95, 6) ^ __ROR4__(v95, 11) ^ __ROR4__(v95, 25));
      v91 = v83 + v92;
      v84 = ((_BYTE)v71 + 3) & 0xF;
      v9 = v83 + (__ROR4__(v10, 2) ^ __ROR4__(v10, 13) ^ __ROR4__(v10, 22)) + (v10 & v76 ^ v48 & (v10 ^ v76));
      v85 = v101[v71 & 0xF];
      v86 = v101[v80]
          + v101[((_BYTE)v71 - 5) & 0xF]
          + ((v85 >> 10) ^ __ROR4__(v85, 17) ^ __ROR4__(v85, 19))
          + (__ROR4__(v101[v84], 7) ^ __ROR4__(v101[v84], 18) ^ (v101[v84] >> 3));
      v101[v80] = v86;
      v47 = v71 + 4;
      v87 = v94
          + v86
          + SHA256Magic[(unsigned int)(v71 + 2)]
          + (v91 & v95 ^ v97 & ~v91)
          + (__ROR4__(v91, 6) ^ __ROR4__(v91, 11) ^ __ROR4__(v91, 25));
      v12 = v87 + v48;
      v98 = v12;
      v8 = v87 + (__ROR4__(v9, 2) ^ __ROR4__(v9, 13) ^ __ROR4__(v9, 22)) + (v9 & v10 ^ v76 & (v9 ^ v10));
      v93 = v8;
      v88 = v101[((_BYTE)v71 + 1) & 0xF];
      v89 = v101[((_BYTE)v71 + 4) & 0xF];
      v101[v84] += v101[((_BYTE)v71 - 4) & 0xF]
                 + ((v89 >> 3) ^ __ROR4__(v89, 7) ^ __ROR4__(v89, 18))
                 + ((v88 >> 10) ^ __ROR4__(v88, 17) ^ __ROR4__(v88, 19));
      v90 = v97
          + v101[v84]
          + SHA256Magic[(unsigned int)(v71 + 3)]
          + (v12 & v91 ^ v95 & ~v12)
          + (__ROR4__(v12, 6) ^ __ROR4__(v12, 11) ^ __ROR4__(v12, 25));
      v11 = v90 + v76;
      v13 = v91;
      result = v90 + (__ROR4__(v8, 2) ^ (unsigned int)(__ROR4__(v8, 13) ^ __ROR4__(v8, 22)));
      v7 = result + (v8 & v9 ^ v10 & (v8 ^ v9));
      v96 = v7;
    }
    while ( v47 < 0x40 );
    v46 = a1;
    v14 = v95;
  }
  *v46 += v7;
  v46[1] += v8;
  v46[2] += v9;
  v46[3] += v10;
  v46[4] += v11;
  v46[5] += v12;
  v46[6] += v13;
  v46[7] += v14;
  return result;
}
