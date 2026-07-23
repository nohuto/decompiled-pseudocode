/*
 * XREFs of sub_1800135E0 @ 0x1800135E0
 * Callers:
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_18002A508 @ 0x18002A508 (sub_18002A508.c)
 *     sub_1800EC04C @ 0x1800EC04C (sub_1800EC04C.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_18005CA3C @ 0x18005CA3C (sub_18005CA3C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     RtlCompareMemoryUlong @ 0x18009F100 (RtlCompareMemoryUlong.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_1801011EC @ 0x1801011EC (sub_1801011EC.c)
 */

__int64 __fastcall sub_1800135E0(unsigned __int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  __int64 v5; // r14
  unsigned __int64 v6; // r10
  __int64 v8; // rdi
  _QWORD *v9; // rsi
  __int64 v10; // rsi
  int v11; // edx
  int v13; // edx
  __int64 *v14; // r8
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 *v17; // rsi
  unsigned __int64 v18; // r12
  unsigned __int64 j; // rax
  unsigned int v20; // ecx
  unsigned int v21; // r15d
  unsigned int v22; // eax
  unsigned int v23; // r11d
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // r9d
  __int64 *v27; // r10
  __int64 v28; // r13
  char v29; // al
  __int64 v30; // rax
  __int64 *v31; // rax
  int v32; // edx
  __int64 *v33; // r8
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 *v36; // rdi
  unsigned __int64 v37; // r12
  unsigned __int64 m; // rax
  unsigned int v39; // ecx
  unsigned int v40; // r15d
  unsigned int v41; // eax
  unsigned int v42; // r11d
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned int v45; // r9d
  __int64 *v46; // r10
  __int64 v47; // r13
  char v48; // al
  __int64 *v49; // rax
  __int64 *v50; // r8
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 *v53; // rsi
  unsigned __int64 v54; // r12
  unsigned __int64 i; // rax
  __int64 *v56; // rax
  unsigned int v57; // ecx
  unsigned int v58; // r15d
  unsigned int v59; // eax
  __int64 v60; // r9
  unsigned int v61; // r11d
  __int64 v62; // rdx
  unsigned int v63; // eax
  __int64 *v64; // r10
  __int64 v65; // r13
  char v66; // al
  SIZE_T v67; // rsi
  SIZE_T v68; // r15
  SIZE_T v69; // rsi
  SIZE_T v70; // r14
  __int64 *v71; // r8
  __int64 v72; // rax
  __int64 v73; // r9
  __int64 *v74; // rdi
  unsigned __int64 v75; // r12
  unsigned __int64 k; // rax
  __int64 *v77; // rax
  unsigned int v78; // ecx
  unsigned int v79; // r15d
  unsigned int v80; // eax
  __int64 v81; // r9
  unsigned int v82; // r11d
  __int64 v83; // rdx
  unsigned int v84; // eax
  __int64 *v85; // r10
  __int64 v86; // r13
  char v87; // al
  SIZE_T v88; // rdi
  SIZE_T v89; // r12
  SIZE_T v90; // rdi
  SIZE_T v91; // r12
  __int64 *v92; // [rsp+30h] [rbp-39h]
  __int64 *v93; // [rsp+30h] [rbp-39h]
  __int64 *v94; // [rsp+30h] [rbp-39h]
  __int64 *v95; // [rsp+30h] [rbp-39h]
  int v96; // [rsp+40h] [rbp-29h]
  int v97; // [rsp+50h] [rbp-19h]
  int v98; // [rsp+60h] [rbp-9h]
  int v99; // [rsp+70h] [rbp+7h]
  __int64 v100; // [rsp+D0h] [rbp+67h]
  __int64 v101; // [rsp+D0h] [rbp+67h]
  __int64 v102; // [rsp+D0h] [rbp+67h]
  __int64 v103; // [rsp+D0h] [rbp+67h]
  __int64 v104; // [rsp+D8h] [rbp+6Fh]
  __int64 v105; // [rsp+D8h] [rbp+6Fh]
  __int64 v106; // [rsp+D8h] [rbp+6Fh]
  __int64 v107; // [rsp+D8h] [rbp+6Fh]
  char v109; // [rsp+E8h] [rbp+7Fh]

  v109 = a4;
  v5 = a2;
  v6 = 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
  v8 = a2 - v6;
  if ( a2 - v6 == a2
    || ((*(_BYTE *)(v8 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
  {
    goto LABEL_3;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    v13 = *(_DWORD *)(v8 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v8 + 8) = v13;
    if ( HIBYTE(v13) != ((unsigned __int8)v13 ^ (unsigned __int8)(BYTE1(v13) ^ BYTE2(v13))) )
      sub_1800FC010(a1, v8);
  }
  if ( a4 )
  {
    v50 = (__int64 *)(v5 + 16);
    v106 = *(_QWORD *)(v5 + 16);
    v94 = *(__int64 **)(v5 + 24);
    v51 = *v94;
    v52 = *(_QWORD *)(v106 + 8);
    if ( *v94 != v52 || (__int64 *)v51 != v50 )
    {
      sub_18009A5F0(13, a1, (_DWORD)v50, v52, v51, 0LL);
LABEL_127:
      v109 = 0;
      goto LABEL_13;
    }
    *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v5 + 8);
    v53 = *(__int64 **)(a1 + 312);
    if ( v53 )
    {
      v54 = *(unsigned __int16 *)(v5 + 8);
      for ( i = *((unsigned int *)v53 + 2); ; i = *((unsigned int *)v56 + 2) )
      {
        if ( v54 < i )
        {
          v57 = *(unsigned __int16 *)(v5 + 8);
          goto LABEL_94;
        }
        v56 = (__int64 *)*v53;
        if ( !*v53 )
          break;
        v53 = (__int64 *)*v53;
      }
      v57 = *((_DWORD *)v53 + 2) - 1;
LABEL_94:
      v58 = v57 - *((_DWORD *)v53 + 6);
      v59 = 2 * v58;
      if ( !*((_DWORD *)v53 + 3) )
        v59 = v57 - *((_DWORD *)v53 + 6);
      v60 = v53[6];
      v61 = *((_DWORD *)v53 + 2);
      v62 = v59;
      v102 = v62;
      v63 = v61 - 1;
      v64 = *(__int64 **)(v60 + 8 * v62);
      --*((_DWORD *)v53 + 4);
      if ( v57 == v61 - 1 )
        --*((_DWORD *)v53 + 5);
      if ( v64 == v50 )
      {
        v65 = *v50;
        if ( *v53 )
          v63 = v61;
        if ( v57 >= v63 )
        {
          if ( v65 != v53[4] )
          {
            *(_QWORD *)(v60 + 8 * v62) = v65;
            goto LABEL_114;
          }
          *(_QWORD *)(v60 + 8 * v62) = 0LL;
        }
        else
        {
          if ( v65 != v53[4] )
          {
            v96 = *(_DWORD *)(v65 - 16 + 8);
            if ( *(_DWORD *)(a1 + 124) )
            {
              v96 = *(_DWORD *)(v65 - 16 + 8) ^ *(_DWORD *)(a1 + 136);
              if ( HIBYTE(v96) != ((unsigned __int8)v96 ^ (unsigned __int8)(BYTE1(v96) ^ BYTE2(v96))) )
                sub_18009A5F0(3, a1, v65 - 16, 0, 0LL, 0LL);
              v62 = v102;
            }
            if ( (_DWORD)v54 == (unsigned __int16)v96 )
            {
              *(_QWORD *)(v53[6] + 8 * v62) = v65;
              goto LABEL_114;
            }
          }
          *(_QWORD *)(v53[6] + 8 * v62) = 0LL;
        }
        *(_DWORD *)(v53[5] + 4 * ((unsigned __int64)v58 >> 5)) &= ~(1 << (v58 & 0x1F));
      }
    }
LABEL_114:
    *v94 = v106;
    *(_QWORD *)(v106 + 8) = v94;
    if ( (*(_BYTE *)(v5 + 10) & 8) == 0 || (unsigned __int8)sub_18005CA3C((PVOID)a1) )
    {
      v66 = *(_BYTE *)(v5 + 10);
      if ( (v66 & 4) != 0 )
      {
        v67 = 16LL * *(unsigned __int16 *)(v5 + 8) - 32;
        if ( (v66 & 2) != 0 && v67 > 4 )
          v67 = 16LL * *(unsigned __int16 *)(v5 + 8) - 36;
        v68 = RtlCompareMemoryUlong((PVOID)(v5 + 32), v67, 0xFEEEFEEE);
        if ( v68 != v67 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v5,
            (const void *)(v68 + v5 + 32));
          sub_1801011EC();
        }
      }
    }
    else
    {
      sub_1800128F0(a1, v5, *(unsigned __int16 *)(v5 + 8), 1);
    }
    goto LABEL_127;
  }
LABEL_13:
  v14 = (__int64 *)(v8 + 16);
  v104 = *(_QWORD *)(v8 + 16);
  v92 = *(__int64 **)(v8 + 24);
  v15 = *v92;
  v16 = *(_QWORD *)(v104 + 8);
  if ( *v92 != v16 || (__int64 *)v15 != v14 )
  {
    sub_18009A5F0(13, a1, (_DWORD)v14, v16, v15, 0LL);
    goto LABEL_3;
  }
  *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v8 + 8);
  v17 = *(__int64 **)(a1 + 312);
  if ( v17 )
  {
    v18 = *(unsigned __int16 *)(v8 + 8);
    for ( j = *((unsigned int *)v17 + 2); ; j = *((unsigned int *)v31 + 2) )
    {
      if ( v18 < j )
      {
        v20 = *(unsigned __int16 *)(v8 + 8);
        goto LABEL_19;
      }
      v31 = (__int64 *)*v17;
      if ( !*v17 )
        break;
      v17 = (__int64 *)*v17;
    }
    v20 = *((_DWORD *)v17 + 2) - 1;
LABEL_19:
    v21 = v20 - *((_DWORD *)v17 + 6);
    v22 = 2 * v21;
    if ( !*((_DWORD *)v17 + 3) )
      v22 = v20 - *((_DWORD *)v17 + 6);
    v23 = *((_DWORD *)v17 + 2);
    v24 = v22;
    v25 = v17[6];
    v100 = v24;
    v26 = v23 - 1;
    v27 = *(__int64 **)(v25 + 8 * v24);
    --*((_DWORD *)v17 + 4);
    if ( v20 == v23 - 1 )
      --*((_DWORD *)v17 + 5);
    if ( v27 == v14 )
    {
      v28 = *v14;
      if ( *v17 )
        v26 = v23;
      if ( v20 >= v26 )
      {
        if ( v28 == v17[4] )
        {
          *(_QWORD *)(v25 + 8 * v24) = 0LL;
          goto LABEL_34;
        }
      }
      else
      {
        if ( v28 == v17[4] )
          goto LABEL_33;
        v97 = *(_DWORD *)(v28 - 16 + 8);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v97 = *(_DWORD *)(v28 - 16 + 8) ^ *(_DWORD *)(a1 + 136);
          if ( HIBYTE(v97) != ((unsigned __int8)v97 ^ (unsigned __int8)(BYTE1(v97) ^ BYTE2(v97))) )
            sub_18009A5F0(3, a1, v28 - 16, 0, 0LL, 0LL);
          v24 = v100;
        }
        if ( (_DWORD)v18 != (unsigned __int16)v97 )
        {
LABEL_33:
          *(_QWORD *)(v17[6] + 8 * v24) = 0LL;
LABEL_34:
          *(_DWORD *)(v17[5] + 4 * ((unsigned __int64)v21 >> 5)) &= ~(1 << (v21 & 0x1F));
          goto LABEL_35;
        }
        v25 = v17[6];
      }
      *(_QWORD *)(v25 + 8 * v24) = v28;
    }
  }
LABEL_35:
  *v92 = v104;
  *(_QWORD *)(v104 + 8) = v92;
  if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || (unsigned __int8)sub_18005CA3C((PVOID)a1) )
  {
    v29 = *(_BYTE *)(v8 + 10);
    if ( (v29 & 4) != 0 )
    {
      v69 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
      if ( (v29 & 2) != 0 && v69 > 4 )
        v69 = 16LL * *(unsigned __int16 *)(v8 + 8) - 36;
      v70 = RtlCompareMemoryUlong((PVOID)(v8 + 32), v69, 0xFEEEFEEE);
      if ( v70 != v69 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "HEAP: Free Heap block %p modified at %p after it was freed\n",
          (const void *)v8,
          (const void *)(v70 + v8 + 32));
        sub_1801011EC();
      }
    }
    v30 = *(unsigned __int16 *)(v8 + 8);
    v5 = v8;
    v9 = a3;
    *(_BYTE *)(v8 + 10) = 0;
    *(_BYTE *)(v8 + 15) = 0;
    *a3 += v30;
    *(_WORD *)(v8 + 8) = *a3;
    *(_WORD *)(v8 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
    goto LABEL_4;
  }
  sub_1800128F0(a1, v8, *(unsigned __int16 *)(v8 + 8), 1);
LABEL_3:
  v9 = a3;
LABEL_4:
  v10 = v5 + 16LL * *v9;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v11 = *(_DWORD *)(v10 + 8) ^ *(_DWORD *)(a1 + 136);
    if ( HIBYTE(v11) != ((unsigned __int8)v11 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v10 + 8) ^ *(_WORD *)(a1 + 136)) >> 8) ^ BYTE2(v11))) )
      sub_18009A5F0(3, a1, v10, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v10 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v32 = *(_DWORD *)(v10 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v10 + 8) = v32;
      if ( HIBYTE(v32) != ((unsigned __int8)v32 ^ (unsigned __int8)(BYTE1(v32) ^ BYTE2(v32))) )
        sub_1800FC010(a1, v10);
    }
    if ( !v109 )
      goto LABEL_51;
    v71 = (__int64 *)(v5 + 16);
    v107 = *(_QWORD *)(v5 + 16);
    v95 = *(__int64 **)(v5 + 24);
    v72 = *v95;
    v73 = *(_QWORD *)(v107 + 8);
    if ( *v95 == v73 && (__int64 *)v72 == v71 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v5 + 8);
      v74 = *(__int64 **)(a1 + 312);
      if ( !v74 )
        goto LABEL_167;
      v75 = *(unsigned __int16 *)(v5 + 8);
      for ( k = *((unsigned int *)v74 + 2); ; k = *((unsigned int *)v77 + 2) )
      {
        if ( v75 < k )
        {
          v78 = *(unsigned __int16 *)(v5 + 8);
          goto LABEL_147;
        }
        v77 = (__int64 *)*v74;
        if ( !*v74 )
          break;
        v74 = (__int64 *)*v74;
      }
      v78 = *((_DWORD *)v74 + 2) - 1;
LABEL_147:
      v79 = v78 - *((_DWORD *)v74 + 6);
      v80 = 2 * v79;
      if ( !*((_DWORD *)v74 + 3) )
        v80 = v78 - *((_DWORD *)v74 + 6);
      v81 = v74[6];
      v82 = *((_DWORD *)v74 + 2);
      v83 = v80;
      v103 = v83;
      v84 = v82 - 1;
      v85 = *(__int64 **)(v81 + 8 * v83);
      --*((_DWORD *)v74 + 4);
      if ( v78 == v82 - 1 )
        --*((_DWORD *)v74 + 5);
      if ( v85 != v71 )
        goto LABEL_167;
      v86 = *v71;
      if ( *v74 )
        v84 = v82;
      if ( v78 >= v84 )
      {
        if ( v86 != v74[4] )
        {
          *(_QWORD *)(v81 + 8 * v83) = v86;
          goto LABEL_167;
        }
        *(_QWORD *)(v81 + 8 * v83) = 0LL;
      }
      else
      {
        if ( v86 != v74[4] )
        {
          v98 = *(_DWORD *)(v86 - 16 + 8);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v98 = *(_DWORD *)(v86 - 16 + 8) ^ *(_DWORD *)(a1 + 136);
            if ( HIBYTE(v98) != ((unsigned __int8)v98 ^ (unsigned __int8)(BYTE1(v98) ^ BYTE2(v98))) )
              sub_18009A5F0(3, a1, v86 - 16, 0, 0LL, 0LL);
            v83 = v103;
          }
          if ( (_DWORD)v75 == (unsigned __int16)v98 )
          {
            *(_QWORD *)(v74[6] + 8 * v83) = v86;
LABEL_167:
            *v95 = v107;
            *(_QWORD *)(v107 + 8) = v95;
            if ( (*(_BYTE *)(v5 + 10) & 8) == 0 || (unsigned __int8)sub_18005CA3C((PVOID)a1) )
            {
              v87 = *(_BYTE *)(v5 + 10);
              if ( (v87 & 4) != 0 )
              {
                v88 = 16LL * *(unsigned __int16 *)(v5 + 8) - 32;
                if ( (v87 & 2) != 0 && v88 > 4 )
                  v88 = 16LL * *(unsigned __int16 *)(v5 + 8) - 36;
                v89 = RtlCompareMemoryUlong((PVOID)(v5 + 32), v88, 0xFEEEFEEE);
                if ( v89 != v88 )
                {
                  if ( NtCurrentPeb()->Ldr )
                    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                  else
                    DbgPrint("HEAP: ");
                  DbgPrint(
                    "HEAP: Free Heap block %p modified at %p after it was freed\n",
                    (const void *)v5,
                    (const void *)(v5 + 32 + v89));
                  sub_1801011EC();
                }
              }
            }
            else
            {
              sub_1800128F0(a1, v5, *(unsigned __int16 *)(v5 + 8), 1);
            }
            goto LABEL_180;
          }
        }
        *(_QWORD *)(v74[6] + 8 * v83) = 0LL;
      }
      *(_DWORD *)(v74[5] + 4 * ((unsigned __int64)v79 >> 5)) &= ~(1 << (v79 & 0x1F));
      goto LABEL_167;
    }
    sub_18009A5F0(13, a1, (_DWORD)v71, v73, v72, 0LL);
LABEL_180:
    v109 = 0;
LABEL_51:
    v33 = (__int64 *)(v10 + 16);
    v105 = *(_QWORD *)(v10 + 16);
    v93 = *(__int64 **)(v10 + 24);
    v34 = *v93;
    v35 = *(_QWORD *)(v105 + 8);
    if ( *v93 == v35 && (__int64 *)v34 == v33 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v10 + 8);
      v36 = *(__int64 **)(a1 + 312);
      if ( v36 )
      {
        v37 = *(unsigned __int16 *)(v10 + 8);
        for ( m = *((unsigned int *)v36 + 2); ; m = *((unsigned int *)v49 + 2) )
        {
          if ( v37 < m )
          {
            v39 = *(unsigned __int16 *)(v10 + 8);
            goto LABEL_57;
          }
          v49 = (__int64 *)*v36;
          if ( !*v36 )
            break;
          v36 = (__int64 *)*v36;
        }
        v39 = *((_DWORD *)v36 + 2) - 1;
LABEL_57:
        v40 = v39 - *((_DWORD *)v36 + 6);
        v41 = 2 * v40;
        if ( !*((_DWORD *)v36 + 3) )
          v41 = v39 - *((_DWORD *)v36 + 6);
        v42 = *((_DWORD *)v36 + 2);
        v43 = v41;
        v44 = v36[6];
        v101 = v43;
        v45 = v42 - 1;
        v46 = *(__int64 **)(v44 + 8 * v43);
        --*((_DWORD *)v36 + 4);
        if ( v39 == v42 - 1 )
          --*((_DWORD *)v36 + 5);
        if ( v46 == v33 )
        {
          v47 = *v33;
          if ( *v36 )
            v45 = v42;
          if ( v39 >= v45 )
          {
            if ( v47 != v36[4] )
              goto LABEL_80;
            *(_QWORD *)(v44 + 8 * v43) = 0LL;
          }
          else
          {
            if ( v47 != v36[4] )
            {
              v99 = *(_DWORD *)(v47 - 16 + 8);
              if ( *(_DWORD *)(a1 + 124) )
              {
                v99 = *(_DWORD *)(v47 - 16 + 8) ^ *(_DWORD *)(a1 + 136);
                if ( HIBYTE(v99) != ((unsigned __int8)v99 ^ (unsigned __int8)(BYTE1(v99) ^ BYTE2(v99))) )
                  sub_18009A5F0(3, a1, v47 - 16, 0, 0LL, 0LL);
                v43 = v101;
              }
              if ( (_DWORD)v37 == (unsigned __int16)v99 )
              {
                v44 = v36[6];
LABEL_80:
                *(_QWORD *)(v44 + 8 * v43) = v47;
                goto LABEL_73;
              }
            }
            *(_QWORD *)(v36[6] + 8 * v43) = 0LL;
          }
          *(_DWORD *)(v36[5] + 4 * ((unsigned __int64)v40 >> 5)) &= ~(1 << (v40 & 0x1F));
        }
      }
LABEL_73:
      *v93 = v105;
      *(_QWORD *)(v105 + 8) = v93;
      if ( (*(_BYTE *)(v10 + 10) & 8) == 0 || (unsigned __int8)sub_18005CA3C((PVOID)a1) )
      {
        v48 = *(_BYTE *)(v10 + 10);
        if ( (v48 & 4) != 0 )
        {
          v90 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
          if ( (v48 & 2) != 0 && v90 > 4 )
            v90 = 16LL * *(unsigned __int16 *)(v10 + 8) - 36;
          v91 = RtlCompareMemoryUlong((PVOID)(v10 + 32), v90, 0xFEEEFEEE);
          if ( v91 != v90 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v10,
              (const void *)(v10 + 32 + v91));
            sub_1801011EC();
          }
        }
        *(_BYTE *)(v5 + 10) = 0;
        *(_BYTE *)(v5 + 15) = 0;
        *a3 += *(unsigned __int16 *)(v10 + 8);
        *(_WORD *)(v5 + 8) = *a3;
        *(_WORD *)(v5 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
        return v5;
      }
      sub_1800128F0(a1, v10, *(unsigned __int16 *)(v10 + 8), 1);
    }
    else
    {
      sub_18009A5F0(13, a1, (_DWORD)v33, v35, v34, 0LL);
    }
  }
  return v5;
}
