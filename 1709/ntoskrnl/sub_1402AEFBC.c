/*
 * XREFs of sub_1402AEFBC @ 0x1402AEFBC
 * Callers:
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x14029A010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_1402AC5F8 @ 0x1402AC5F8 (sub_1402AC5F8.c)
 *     sub_1402AE570 @ 0x1402AE570 (sub_1402AE570.c)
 *     sub_14080CF60 @ 0x14080CF60 (sub_14080CF60.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x1402B1470 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_1402AEFBC(_DWORD *a1, unsigned int a2, int a3)
{
  _DWORD *v4; // rdi
  __int64 v5; // rbx
  unsigned __int8 v6; // r12
  int v7; // r10d
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r15d
  unsigned __int64 v11; // rax
  unsigned __int128 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // r12
  __int64 v16; // r12
  _QWORD *v17; // r8
  int v18; // r11d
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rax
  unsigned __int128 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int128 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned int v25; // r11d
  unsigned int v26; // r15d
  _QWORD *v27; // r8
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rax
  unsigned __int128 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int128 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // edx
  char *v36; // r8
  unsigned __int64 v37; // r15
  char *v38; // r8
  int v39; // eax
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // r9d
  unsigned __int64 v44; // rax
  unsigned __int128 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  int v49; // r12d
  unsigned __int128 v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // r9
  int v53; // r10d
  unsigned __int64 v54; // r15
  unsigned __int64 v55; // rax
  unsigned __int128 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int128 v58; // rax
  unsigned __int64 v59; // rdx
  unsigned int v60; // r12d
  _QWORD *v61; // r9
  unsigned __int64 v62; // r10
  unsigned __int64 v63; // rax
  unsigned __int128 v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int128 v66; // rax
  unsigned __int64 v67; // rdx
  __int64 *v68; // r12
  int v69; // ecx
  _QWORD *v70; // rax
  __int64 v71; // rdx
  int v72; // ecx
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned int v75; // r11d
  _QWORD *v76; // r8
  int v77; // r9d
  unsigned __int64 v78; // r11
  unsigned __int64 v79; // rax
  unsigned __int128 v80; // rax
  unsigned __int64 v81; // rax
  unsigned __int128 v82; // rax
  unsigned __int64 v83; // rdx
  __int64 v84; // rax
  unsigned int v85; // r9d
  unsigned int v86; // r11d
  _QWORD *v87; // r8
  unsigned __int64 v88; // r11
  unsigned __int64 v89; // rax
  unsigned __int128 v90; // rax
  unsigned __int64 v91; // rax
  unsigned __int128 v92; // rax
  unsigned __int64 v93; // rdx
  __int64 v94; // rcx
  unsigned int v95; // edx
  char *v96; // r8
  unsigned __int64 v97; // r9
  char *v98; // r8
  int v99; // eax
  unsigned __int64 v100; // [rsp+40h] [rbp-C0h]
  __int64 v101; // [rsp+40h] [rbp-C0h]
  __int64 v102; // [rsp+40h] [rbp-C0h]
  __int64 v103; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v104; // [rsp+48h] [rbp-B8h]
  __int64 v105; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v106; // [rsp+50h] [rbp-B0h]
  __int64 v107; // [rsp+50h] [rbp-B0h]
  __int64 v108; // [rsp+50h] [rbp-B0h]
  unsigned int v111; // [rsp+160h] [rbp+60h]
  unsigned int v112; // [rsp+168h] [rbp+68h]
  __int64 v113; // [rsp+168h] [rbp+68h]
  unsigned int v114; // [rsp+168h] [rbp+68h]

  v4 = a1;
  if ( a3 != 3 )
  {
    v5 = 0LL;
    v6 = 1;
    v7 = 0;
    if ( (a1[502] & 0x10000000) != 0 )
      v6 = 0;
    else
      v7 = a1[479];
    v112 = a1[412];
    v8 = __rdtsc();
    v9 = __ROR8__(v8, 3);
    v10 = ((unsigned __int16)(((v9 ^ v8) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int16)(8193 * (v9 ^ v8))) & 0x7FF;
    v11 = __rdtsc();
    v12 = (__ROR8__(v11, 3) ^ v11) * (unsigned __int128)0x7010008004002001uLL;
    v100 = (*((_QWORD *)&v12 + 1) ^ (unsigned __int64)v12) % (unsigned int)(v10 + 1);
    if ( v7 )
    {
      v13 = __rdtsc();
      v14 = __ROR8__(v13, 3);
      v10 += ((((unsigned int)(((v14 ^ v13) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057
                                                                                                * ((unsigned int)v14 ^ (unsigned int)v13))) & 1) << 12)
           + 4096;
      v113 = v10 + a2;
      v15 = (_QWORD *)(*((__int64 (__fastcall **)(__int64, __int64))v4 + 66))(v113 + 8, 0xFFFFFFFFLL);
      if ( !v15 )
        goto LABEL_12;
      if ( !(*((unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, __int64))v4 + 68))(
              v15,
              ((_DWORD)v113 + 4095) & 0xFFFFF000,
              64LL) )
      {
        (*((void (__fastcall **)(_QWORD *, __int64))v4 + 67))(v15, v113);
        goto LABEL_12;
      }
      *v15 = v113 + 8;
      v16 = (__int64)(v15 + 1);
    }
    else
    {
      v16 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))v4 + 29))((v6 ^ 1u) << 9, v10 + a2, v112);
    }
    if ( v16 )
    {
      v17 = (_QWORD *)v16;
      v18 = v100;
      if ( (unsigned int)v100 >= 8 )
      {
        v19 = (unsigned __int64)(unsigned int)v100 >> 3;
        do
        {
          v20 = __rdtsc();
          v18 -= 8;
          v21 = (__ROR8__(v20, 3) ^ v20) * (unsigned __int128)0x7010008004002001uLL;
          *v17++ = v21 ^ *((_QWORD *)&v21 + 1);
          --v19;
        }
        while ( v19 );
      }
      if ( v18 )
      {
        v22 = __rdtsc();
        v23 = (__ROR8__(v22, 3) ^ v22) * (unsigned __int128)0x7010008004002001uLL;
        v24 = v23 ^ *((_QWORD *)&v23 + 1);
        do
        {
          *(_BYTE *)v17 = v24;
          v17 = (_QWORD *)((char *)v17 + 1);
          v24 >>= 8;
          --v18;
        }
        while ( v18 );
      }
      v25 = a2;
      v26 = v10 - v100;
      v27 = (_QWORD *)((unsigned int)v100 + v16 + a2);
      if ( v26 >= 8 )
      {
        v28 = (unsigned __int64)v26 >> 3;
        do
        {
          v29 = __rdtsc();
          v26 -= 8;
          v30 = (__ROR8__(v29, 3) ^ v29) * (unsigned __int128)0x7010008004002001uLL;
          *v27++ = v30 ^ *((_QWORD *)&v30 + 1);
          --v28;
        }
        while ( v28 );
        v25 = a2;
      }
      if ( v26 )
      {
        v31 = __rdtsc();
        v32 = (__ROR8__(v31, 3) ^ v31) * (unsigned __int128)0x7010008004002001uLL;
        v33 = v32 ^ *((_QWORD *)&v32 + 1);
        do
        {
          *(_BYTE *)v27 = v33;
          v27 = (_QWORD *)((char *)v27 + 1);
          v33 >>= 8;
          --v26;
        }
        while ( v26 );
      }
      v34 = v16 + (unsigned int)v100;
      if ( v34 )
      {
        v35 = v4[401];
        v36 = (char *)(v16 + (unsigned int)v100);
        if ( v35 >= 8 )
        {
          v37 = (unsigned __int64)v35 >> 3;
          do
          {
            v35 -= 8;
            *(_QWORD *)v36 = *(_QWORD *)v4;
            v4 += 2;
            v36 += 8;
            --v37;
          }
          while ( v37 );
        }
        if ( v35 )
        {
          v38 = (char *)(v36 - (char *)v4);
          do
          {
            v38[(_QWORD)v4] = *(_BYTE *)v4;
            v4 = (_DWORD *)((char *)v4 + 1);
            --v35;
          }
          while ( v35 );
        }
        *(_DWORD *)(v34 + 1916) = a3;
        v39 = *(_DWORD *)(v34 + 2008);
        *(_DWORD *)(v34 + 1604) = v25;
        *(_QWORD *)(v34 + 1576) = v16;
        if ( (v39 & 0x10000000) == 0 )
          *(_DWORD *)(v34 + 2008) = v39 | 0x20000000;
        return v16 + (unsigned int)v100;
      }
      return v5;
    }
LABEL_12:
    ++v4[534];
    return v5;
  }
  v41 = __rdtsc();
  v42 = __ROR8__(v41, 3);
  v43 = ((unsigned __int16)(((v42 ^ v41) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int16)(8193 * (v42 ^ v41))) & 0x7FF;
  v44 = __rdtsc();
  v45 = (__ROR8__(v44, 3) ^ v44) * (unsigned __int128)0x7010008004002001uLL;
  v104 = (*((_QWORD *)&v45 + 1) ^ (unsigned __int64)v45) % (unsigned int)(v43 + 1);
  *(_QWORD *)&v45 = __rdtsc();
  v46 = __ROR8__(v45, 3);
  v47 = (unsigned int)v4[412];
  v114 = v43
       + 4096
       + ((((unsigned int)(((v46 ^ (unsigned __int64)v45) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * ((unsigned int)v46 ^ (unsigned int)v45))) & 1) << 12);
  *(_QWORD *)&v45 = __rdtsc();
  v48 = __ROR8__(v45, 3);
  v49 = ((unsigned __int16)(((v48 ^ (unsigned __int64)v45) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int16)(8193 * (v48 ^ v45))) & 0x7FF;
  *(_QWORD *)&v45 = __rdtsc();
  v50 = (__ROR8__(v45, 3) ^ (unsigned __int64)v45) * (unsigned __int128)0x7010008004002001uLL;
  v106 = (*((_QWORD *)&v50 + 1) ^ (unsigned __int64)v50) % (unsigned int)(v49 + 1);
  v51 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v4 + 29))(512LL, (unsigned int)(v49 + 32), v47);
  v101 = v51;
  if ( !v51 )
  {
    ++v4[534];
LABEL_85:
    ++v4[534];
    return 0LL;
  }
  v52 = (_QWORD *)v51;
  v53 = v106;
  if ( (unsigned int)v106 >= 8 )
  {
    v54 = (unsigned __int64)(unsigned int)v106 >> 3;
    do
    {
      v55 = __rdtsc();
      v53 -= 8;
      v56 = (__ROR8__(v55, 3) ^ v55) * (unsigned __int128)0x7010008004002001uLL;
      *v52++ = v56 ^ *((_QWORD *)&v56 + 1);
      --v54;
    }
    while ( v54 );
  }
  if ( v53 )
  {
    v57 = __rdtsc();
    v58 = (__ROR8__(v57, 3) ^ v57) * (unsigned __int128)0x7010008004002001uLL;
    v59 = v58 ^ *((_QWORD *)&v58 + 1);
    do
    {
      *(_BYTE *)v52 = v59;
      v52 = (_QWORD *)((char *)v52 + 1);
      v59 >>= 8;
      --v53;
    }
    while ( v53 );
  }
  v60 = v49 - v106;
  v61 = (_QWORD *)((unsigned int)v106 + v101 + 32);
  v107 = (unsigned int)v106 + v101;
  if ( v60 >= 8 )
  {
    v62 = (unsigned __int64)v60 >> 3;
    do
    {
      v63 = __rdtsc();
      v60 -= 8;
      v64 = (__ROR8__(v63, 3) ^ v63) * (unsigned __int128)0x7010008004002001uLL;
      *v61++ = v64 ^ *((_QWORD *)&v64 + 1);
      --v62;
    }
    while ( v62 );
  }
  if ( v60 )
  {
    v65 = __rdtsc();
    v66 = (__ROR8__(v65, 3) ^ v65) * (unsigned __int128)0x7010008004002001uLL;
    v67 = v66 ^ *((_QWORD *)&v66 + 1);
    do
    {
      *(_BYTE *)v61 = v67;
      v61 = (_QWORD *)((char *)v61 + 1);
      v67 >>= 8;
      --v60;
    }
    while ( v60 );
  }
  v68 = (__int64 *)v107;
  if ( !v107 )
    goto LABEL_85;
  v69 = 32;
  v70 = (_QWORD *)v107;
  v71 = 4LL;
  do
  {
    *v70 = 0LL;
    v69 -= 8;
    ++v70;
    --v71;
  }
  while ( v71 );
  for ( ; v69; --v69 )
  {
    *(_BYTE *)v70 = 0;
    v70 = (_QWORD *)((char *)v70 + 1);
  }
  v111 = v4[412];
  *(_DWORD *)(v107 + 16) = v111;
  *(_QWORD *)(v107 + 24) = v101;
  v72 = v4[502] & 0x1000000;
  if ( !v72 )
    v4[502] |= 0x1000000u;
  v108 = a2 + v114;
  v73 = (*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, int))v4 + 103))(
          0LL,
          -1LL,
          0LL,
          v108,
          1,
          v72 != 0 ? 21 : 5);
  v102 = v73;
  if ( !v73
    || (*v68 = v73, (v74 = (*((__int64 (__fastcall **)(__int64, _QWORD))v4 + 104))(v108, v111)) == 0)
    || (v68[1] = v74,
        v103 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))v4 + 105))(v74, v111, v102, 1LL),
        !(*((unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64))v4 + 68))(
           v103,
           ((_DWORD)v108 + 4095) & 0xFFFFF000,
           64LL)) )
  {
    (*((void (__fastcall **)(__int64 *))v4 + 107))(v68);
    goto LABEL_85;
  }
  v75 = v104;
  v76 = (_QWORD *)v103;
  v77 = v104;
  if ( (unsigned int)v104 >= 8 )
  {
    v78 = (unsigned __int64)(unsigned int)v104 >> 3;
    do
    {
      v79 = __rdtsc();
      v77 -= 8;
      v80 = (__ROR8__(v79, 3) ^ v79) * (unsigned __int128)0x7010008004002001uLL;
      *v76++ = v80 ^ *((_QWORD *)&v80 + 1);
      --v78;
    }
    while ( v78 );
    v75 = v104;
  }
  if ( v77 )
  {
    v81 = __rdtsc();
    v82 = (__ROR8__(v81, 3) ^ v81) * (unsigned __int128)0x7010008004002001uLL;
    v83 = v82 ^ *((_QWORD *)&v82 + 1);
    do
    {
      *(_BYTE *)v76 = v83;
      v76 = (_QWORD *)((char *)v76 + 1);
      v83 >>= 8;
      --v77;
    }
    while ( v77 );
  }
  v84 = v75;
  v85 = v114 - v75;
  v86 = a2;
  v105 = v84;
  v87 = (_QWORD *)(v103 + v84 + a2);
  if ( v85 >= 8 )
  {
    v88 = (unsigned __int64)v85 >> 3;
    do
    {
      v89 = __rdtsc();
      v85 -= 8;
      v90 = (__ROR8__(v89, 3) ^ v89) * (unsigned __int128)0x7010008004002001uLL;
      *v87++ = v90 ^ *((_QWORD *)&v90 + 1);
      --v88;
    }
    while ( v88 );
    v86 = a2;
  }
  if ( v85 )
  {
    v91 = __rdtsc();
    v92 = (__ROR8__(v91, 3) ^ v91) * (unsigned __int128)0x7010008004002001uLL;
    v93 = v92 ^ *((_QWORD *)&v92 + 1);
    do
    {
      *(_BYTE *)v87 = v93;
      v87 = (_QWORD *)((char *)v87 + 1);
      v93 >>= 8;
      --v85;
    }
    while ( v85 );
  }
  v94 = v103 + v105;
  if ( v103 + v105 )
  {
    v95 = v4[401];
    v96 = (char *)(v103 + v105);
    if ( v95 >= 8 )
    {
      v97 = (unsigned __int64)v95 >> 3;
      do
      {
        v95 -= 8;
        *(_QWORD *)v96 = *(_QWORD *)v4;
        v4 += 2;
        v96 += 8;
        --v97;
      }
      while ( v97 );
    }
    if ( v95 )
    {
      v98 = (char *)(v96 - (char *)v4);
      do
      {
        *((_BYTE *)v4 + (_QWORD)v98) = *(_BYTE *)v4;
        v4 = (_DWORD *)((char *)v4 + 1);
        --v95;
      }
      while ( v95 );
    }
    v99 = *(_DWORD *)(v94 + 2008);
    *(_DWORD *)(v94 + 1604) = v86;
    *(_QWORD *)(v94 + 1576) = v68;
    *(_DWORD *)(v94 + 1916) = 3;
    if ( (v99 & 0x10000000) == 0 )
      *(_DWORD *)(v94 + 2008) = v99 | 0x20000000;
    return v94;
  }
  return 0LL;
}
