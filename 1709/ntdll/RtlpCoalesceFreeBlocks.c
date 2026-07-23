/*
 * XREFs of RtlpCoalesceFreeBlocks @ 0x180038A9C
 * Callers:
 *     RtlpExtendHeap @ 0x1800472B8 (RtlpExtendHeap.c)
 *     RtlpCoalesceHeap @ 0x180090494 (RtlpCoalesceHeap.c)
 * Callees:
 *     RtlpDeCommitFreeBlock @ 0x180038F8C (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x18004A2F4 (RtlpCommitBlock.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800A46C0 (RtlCompareMemoryUlong.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x180104C08 (RtlpBreakPointHeap.c)
 */

__int64 __fastcall RtlpCoalesceFreeBlocks(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  unsigned __int64 v5; // r10
  __int64 v6; // r14
  __int64 v7; // rbx
  _QWORD *v9; // r8
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 *v12; // rsi
  unsigned __int64 v13; // r12
  unsigned __int64 j; // rax
  unsigned int v15; // ecx
  unsigned int v16; // r15d
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r9
  unsigned int v20; // eax
  _QWORD *v21; // r10
  __int64 v22; // r13
  char v23; // al
  __int64 v24; // rax
  _QWORD *v25; // rsi
  __int64 v26; // rsi
  __int64 *v28; // rax
  _QWORD *v29; // r8
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 *v32; // rbx
  unsigned __int64 v33; // r12
  unsigned __int64 m; // rax
  unsigned int v35; // ecx
  unsigned int v36; // r15d
  unsigned int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r9
  unsigned int v40; // eax
  _QWORD *v41; // r10
  __int64 v42; // r13
  char v43; // al
  __int64 *v44; // rax
  _QWORD *v45; // r8
  __int64 v46; // rax
  __int64 v47; // r9
  __int64 *v48; // rsi
  unsigned __int64 v49; // r12
  unsigned __int64 i; // rax
  __int64 *v51; // rax
  unsigned int v52; // ecx
  unsigned int v53; // r15d
  unsigned int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // r9
  unsigned int v57; // eax
  _QWORD *v58; // r10
  __int64 v59; // r13
  char v60; // al
  SIZE_T v61; // rsi
  SIZE_T v62; // r15
  SIZE_T v63; // rsi
  SIZE_T v64; // r14
  _QWORD *v65; // r8
  __int64 v66; // rax
  __int64 v67; // r9
  __int64 *v68; // rbx
  unsigned __int64 v69; // r12
  unsigned __int64 k; // rax
  __int64 *v71; // rax
  unsigned int v72; // ecx
  unsigned int v73; // r15d
  unsigned int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // r9
  unsigned int v77; // eax
  _QWORD *v78; // r10
  __int64 v79; // r13
  char v80; // al
  SIZE_T v81; // rbx
  SIZE_T v82; // r12
  SIZE_T v83; // rbx
  SIZE_T v84; // r12
  __int64 *v85; // [rsp+30h] [rbp-49h]
  __int64 *v86; // [rsp+30h] [rbp-49h]
  __int64 *v87; // [rsp+30h] [rbp-49h]
  __int64 *v88; // [rsp+30h] [rbp-49h]
  int v89; // [rsp+40h] [rbp-39h]
  int v90; // [rsp+50h] [rbp-29h]
  int v91; // [rsp+60h] [rbp-19h]
  int v92; // [rsp+70h] [rbp-9h]
  int v93; // [rsp+80h] [rbp+7h]
  __int64 v94; // [rsp+E0h] [rbp+67h]
  __int64 v95; // [rsp+E0h] [rbp+67h]
  __int64 v96; // [rsp+E0h] [rbp+67h]
  __int64 v97; // [rsp+E0h] [rbp+67h]
  __int64 v98; // [rsp+E8h] [rbp+6Fh]
  __int64 v99; // [rsp+E8h] [rbp+6Fh]
  __int64 v100; // [rsp+E8h] [rbp+6Fh]
  __int64 v101; // [rsp+E8h] [rbp+6Fh]
  char v103; // [rsp+F8h] [rbp+7Fh]

  v103 = a4;
  v5 = 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
  v6 = a2;
  v7 = a2 - v5;
  if ( a2 - v5 == a2
    || ((*(_BYTE *)(v7 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
  {
    goto LABEL_42;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v7 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v7 + 11) != (*(_BYTE *)(v7 + 8) ^ (unsigned __int8)(*(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10))) )
      RtlpAnalyzeHeapFailure(a1, a2 - v5);
  }
  if ( a4 )
  {
    v45 = (_QWORD *)(v6 + 16);
    v100 = *(_QWORD *)(v6 + 16);
    v87 = *(__int64 **)(v6 + 24);
    v46 = *v87;
    v47 = *(_QWORD *)(v100 + 8);
    if ( *v87 != v47 || (_QWORD *)v46 != v45 )
    {
      RtlpLogHeapFailure(12, a1, (_DWORD)v45, v47, v46, 0LL);
LABEL_124:
      v103 = 0;
      goto LABEL_7;
    }
    *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v6 + 8);
    v48 = *(__int64 **)(a1 + 312);
    if ( v48 )
    {
      v49 = *(unsigned __int16 *)(v6 + 8);
      for ( i = *((unsigned int *)v48 + 2); ; i = *((unsigned int *)v51 + 2) )
      {
        if ( v49 < i )
        {
          v52 = *(unsigned __int16 *)(v6 + 8);
          goto LABEL_92;
        }
        v51 = (__int64 *)*v48;
        if ( !*v48 )
          break;
        v48 = (__int64 *)*v48;
      }
      v52 = *((_DWORD *)v48 + 2) - 1;
LABEL_92:
      v53 = v52 - *((_DWORD *)v48 + 6);
      v54 = 2 * v53;
      if ( !*((_DWORD *)v48 + 3) )
        v54 = v52 - *((_DWORD *)v48 + 6);
      v55 = v48[6];
      v56 = v54;
      v57 = *((_DWORD *)v48 + 2);
      v96 = v56;
      v58 = *(_QWORD **)(v55 + 8 * v56);
      --*((_DWORD *)v48 + 4);
      if ( v52 == v57 - 1 )
        --*((_DWORD *)v48 + 5);
      if ( v58 == v45 )
      {
        if ( !*v48 )
          --v57;
        if ( v52 >= v57 )
        {
          if ( *v45 != v48[4] )
          {
            *(_QWORD *)(v55 + 8 * v56) = *v45;
            goto LABEL_111;
          }
          *(_QWORD *)(v55 + 8 * v56) = 0LL;
        }
        else
        {
          v59 = *v45;
          if ( *v45 != v48[4] )
          {
            v89 = *(_DWORD *)(v59 - 16 + 8);
            if ( *(_DWORD *)(a1 + 124) )
            {
              v89 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v59 - 16 + 8);
              if ( HIBYTE(v89) != ((unsigned __int8)v89 ^ (unsigned __int8)(BYTE1(v89) ^ BYTE2(v89))) )
              {
                RtlpLogHeapFailure(3, a1, v59 - 16, 0, 0LL, 0LL);
                v56 = v96;
              }
            }
            if ( (_DWORD)v49 == (unsigned __int16)v89 )
            {
              *(_QWORD *)(v48[6] + 8 * v56) = v59;
              goto LABEL_111;
            }
          }
          *(_QWORD *)(v48[6] + 8 * v56) = 0LL;
        }
        *(_DWORD *)(v48[5] + 4 * ((unsigned __int64)v53 >> 5)) &= ~(1 << (v53 & 0x1F));
      }
    }
LABEL_111:
    *v87 = v100;
    *(_QWORD *)(v100 + 8) = v87;
    if ( (*(_BYTE *)(v6 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock((PVOID)a1) )
    {
      v60 = *(_BYTE *)(v6 + 10);
      if ( (v60 & 4) != 0 )
      {
        v61 = 16LL * *(unsigned __int16 *)(v6 + 8) - 32;
        if ( (v60 & 2) != 0 && v61 > 4 )
          v61 = 16LL * *(unsigned __int16 *)(v6 + 8) - 36;
        v62 = RtlCompareMemoryUlong((PVOID)(v6 + 32), v61, 0xFEEEFEEE);
        if ( v62 != v61 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v6,
            (const void *)(v62 + v6 + 32));
          RtlpBreakPointHeap();
        }
      }
    }
    else
    {
      RtlpDeCommitFreeBlock(a1);
    }
    goto LABEL_124;
  }
LABEL_7:
  v9 = (_QWORD *)(v7 + 16);
  v98 = *(_QWORD *)(v7 + 16);
  v85 = *(__int64 **)(v7 + 24);
  v10 = *v85;
  v11 = *(_QWORD *)(v98 + 8);
  if ( *v85 != v11 || (_QWORD *)v10 != v9 )
  {
    RtlpLogHeapFailure(12, a1, (_DWORD)v9, v11, v10, 0LL);
    goto LABEL_42;
  }
  *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v7 + 8);
  v12 = *(__int64 **)(a1 + 312);
  if ( v12 )
  {
    v13 = *(unsigned __int16 *)(v7 + 8);
    for ( j = *((unsigned int *)v12 + 2); ; j = *((unsigned int *)v28 + 2) )
    {
      if ( v13 < j )
      {
        v15 = *(unsigned __int16 *)(v7 + 8);
        goto LABEL_13;
      }
      v28 = (__int64 *)*v12;
      if ( !*v12 )
        break;
      v12 = (__int64 *)*v12;
    }
    v15 = *((_DWORD *)v12 + 2) - 1;
LABEL_13:
    v16 = v15 - *((_DWORD *)v12 + 6);
    v17 = 2 * v16;
    if ( !*((_DWORD *)v12 + 3) )
      v17 = v15 - *((_DWORD *)v12 + 6);
    v18 = v12[6];
    v19 = v17;
    v20 = *((_DWORD *)v12 + 2);
    v94 = v19;
    v21 = *(_QWORD **)(v18 + 8 * v19);
    --*((_DWORD *)v12 + 4);
    if ( v15 == v20 - 1 )
      --*((_DWORD *)v12 + 5);
    if ( v21 == v9 )
    {
      if ( !*v12 )
        --v20;
      if ( v15 >= v20 )
      {
        if ( *v9 == v12[4] )
        {
          *(_QWORD *)(v18 + 8 * v19) = 0LL;
          goto LABEL_27;
        }
        *(_QWORD *)(v18 + 8 * v19) = *v9;
      }
      else
      {
        v22 = *v9;
        if ( *v9 == v12[4] )
          goto LABEL_26;
        v90 = *(_DWORD *)(v22 - 16 + 8);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v90 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v22 - 16 + 8);
          if ( HIBYTE(v90) != ((unsigned __int8)v90 ^ (unsigned __int8)(BYTE1(v90) ^ BYTE2(v90))) )
          {
            RtlpLogHeapFailure(3, a1, v22 - 16, 0, 0LL, 0LL);
            v19 = v94;
          }
        }
        if ( (_DWORD)v13 != (unsigned __int16)v90 )
        {
LABEL_26:
          *(_QWORD *)(v12[6] + 8 * v19) = 0LL;
LABEL_27:
          *(_DWORD *)(v12[5] + 4 * ((unsigned __int64)v16 >> 5)) &= ~(1 << (v16 & 0x1F));
          goto LABEL_28;
        }
        *(_QWORD *)(v12[6] + 8 * v19) = v22;
      }
    }
  }
LABEL_28:
  *v85 = v98;
  *(_QWORD *)(v98 + 8) = v85;
  if ( (*(_BYTE *)(v7 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock((PVOID)a1) )
  {
    v23 = *(_BYTE *)(v7 + 10);
    if ( (v23 & 4) != 0 )
    {
      v63 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
      if ( (v23 & 2) != 0 && v63 > 4 )
        v63 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
      v64 = RtlCompareMemoryUlong((PVOID)(v7 + 32), v63, 0xFEEEFEEE);
      if ( v64 != v63 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "HEAP: Free Heap block %p modified at %p after it was freed\n",
          (const void *)v7,
          (const void *)(v64 + v7 + 32));
        RtlpBreakPointHeap();
      }
    }
    v24 = *(unsigned __int16 *)(v7 + 8);
    v6 = v7;
    v25 = a3;
    *(_BYTE *)(v7 + 10) = 0;
    *(_BYTE *)(v7 + 15) = 0;
    *a3 += v24;
    *(_WORD *)(v7 + 8) = *(_WORD *)a3;
    *(_WORD *)(v7 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
    goto LABEL_31;
  }
  RtlpDeCommitFreeBlock(a1);
LABEL_42:
  v25 = a3;
LABEL_31:
  v26 = v6 + 16LL * *v25;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v91 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v26 + 8);
    if ( HIBYTE(v91) != ((unsigned __int8)v91 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(a1 + 136) ^ *(_WORD *)(v26 + 8)) >> 8) ^ BYTE2(v91))) )
      RtlpLogHeapFailure(3, a1, v26, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v26 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v26 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v26 + 11) != (*(_BYTE *)(v26 + 8) ^ (unsigned __int8)(*(_BYTE *)(v26 + 9) ^ *(_BYTE *)(v26 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v26);
    }
    if ( !v103 )
      goto LABEL_50;
    v65 = (_QWORD *)(v6 + 16);
    v101 = *(_QWORD *)(v6 + 16);
    v88 = *(__int64 **)(v6 + 24);
    v66 = *v88;
    v67 = *(_QWORD *)(v101 + 8);
    if ( *v88 == v67 && (_QWORD *)v66 == v65 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v6 + 8);
      v68 = *(__int64 **)(a1 + 312);
      if ( !v68 )
        goto LABEL_163;
      v69 = *(unsigned __int16 *)(v6 + 8);
      for ( k = *((unsigned int *)v68 + 2); ; k = *((unsigned int *)v71 + 2) )
      {
        if ( v69 < k )
        {
          v72 = *(unsigned __int16 *)(v6 + 8);
          goto LABEL_144;
        }
        v71 = (__int64 *)*v68;
        if ( !*v68 )
          break;
        v68 = (__int64 *)*v68;
      }
      v72 = *((_DWORD *)v68 + 2) - 1;
LABEL_144:
      v73 = v72 - *((_DWORD *)v68 + 6);
      v74 = 2 * v73;
      if ( !*((_DWORD *)v68 + 3) )
        v74 = v72 - *((_DWORD *)v68 + 6);
      v75 = v68[6];
      v76 = v74;
      v77 = *((_DWORD *)v68 + 2);
      v97 = v76;
      v78 = *(_QWORD **)(v75 + 8 * v76);
      --*((_DWORD *)v68 + 4);
      if ( v72 == v77 - 1 )
        --*((_DWORD *)v68 + 5);
      if ( v78 != v65 )
        goto LABEL_163;
      if ( !*v68 )
        --v77;
      if ( v72 >= v77 )
      {
        if ( *v65 != v68[4] )
        {
          *(_QWORD *)(v75 + 8 * v76) = *v65;
          goto LABEL_163;
        }
        *(_QWORD *)(v75 + 8 * v76) = 0LL;
      }
      else
      {
        v79 = *v65;
        if ( *v65 != v68[4] )
        {
          v92 = *(_DWORD *)(v79 - 16 + 8);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v92 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v79 - 16 + 8);
            if ( HIBYTE(v92) != ((unsigned __int8)v92 ^ (unsigned __int8)(BYTE1(v92) ^ BYTE2(v92))) )
            {
              RtlpLogHeapFailure(3, a1, v79 - 16, 0, 0LL, 0LL);
              v76 = v97;
            }
          }
          if ( (_DWORD)v69 == (unsigned __int16)v92 )
          {
            *(_QWORD *)(v68[6] + 8 * v76) = v79;
LABEL_163:
            *v88 = v101;
            *(_QWORD *)(v101 + 8) = v88;
            if ( (*(_BYTE *)(v6 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock((PVOID)a1) )
            {
              v80 = *(_BYTE *)(v6 + 10);
              if ( (v80 & 4) != 0 )
              {
                v81 = 16LL * *(unsigned __int16 *)(v6 + 8) - 32;
                if ( (v80 & 2) != 0 && v81 > 4 )
                  v81 = 16LL * *(unsigned __int16 *)(v6 + 8) - 36;
                v82 = RtlCompareMemoryUlong((PVOID)(v6 + 32), v81, 0xFEEEFEEE);
                if ( v82 != v81 )
                {
                  if ( NtCurrentPeb()->Ldr )
                    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                  else
                    DbgPrint("HEAP: ");
                  DbgPrint(
                    "HEAP: Free Heap block %p modified at %p after it was freed\n",
                    (const void *)v6,
                    (const void *)(v6 + 32 + v82));
                  RtlpBreakPointHeap();
                }
              }
            }
            else
            {
              RtlpDeCommitFreeBlock(a1);
            }
            goto LABEL_176;
          }
        }
        *(_QWORD *)(v68[6] + 8 * v76) = 0LL;
      }
      *(_DWORD *)(v68[5] + 4 * ((unsigned __int64)v73 >> 5)) &= ~(1 << (v73 & 0x1F));
      goto LABEL_163;
    }
    RtlpLogHeapFailure(12, a1, (_DWORD)v65, v67, v66, 0LL);
LABEL_176:
    v103 = 0;
LABEL_50:
    v29 = (_QWORD *)(v26 + 16);
    v99 = *(_QWORD *)(v26 + 16);
    v86 = *(__int64 **)(v26 + 24);
    v30 = *v86;
    v31 = *(_QWORD *)(v99 + 8);
    if ( *v86 == v31 && (_QWORD *)v30 == v29 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v26 + 8);
      v32 = *(__int64 **)(a1 + 312);
      if ( v32 )
      {
        v33 = *(unsigned __int16 *)(v26 + 8);
        for ( m = *((unsigned int *)v32 + 2); ; m = *((unsigned int *)v44 + 2) )
        {
          if ( v33 < m )
          {
            v35 = *(unsigned __int16 *)(v26 + 8);
            goto LABEL_56;
          }
          v44 = (__int64 *)*v32;
          if ( !*v32 )
            break;
          v32 = (__int64 *)*v32;
        }
        v35 = *((_DWORD *)v32 + 2) - 1;
LABEL_56:
        v36 = v35 - *((_DWORD *)v32 + 6);
        v37 = 2 * v36;
        if ( !*((_DWORD *)v32 + 3) )
          v37 = v35 - *((_DWORD *)v32 + 6);
        v38 = v32[6];
        v39 = v37;
        v40 = *((_DWORD *)v32 + 2);
        v95 = v39;
        v41 = *(_QWORD **)(v38 + 8 * v39);
        --*((_DWORD *)v32 + 4);
        if ( v35 == v40 - 1 )
          --*((_DWORD *)v32 + 5);
        if ( v41 == v29 )
        {
          if ( !*v32 )
            --v40;
          if ( v35 >= v40 )
          {
            if ( *v29 != v32[4] )
            {
              *(_QWORD *)(v38 + 8 * v39) = *v29;
              goto LABEL_71;
            }
            *(_QWORD *)(v38 + 8 * v39) = 0LL;
          }
          else
          {
            v42 = *v29;
            if ( *v29 != v32[4] )
            {
              v93 = *(_DWORD *)(v42 - 16 + 8);
              if ( *(_DWORD *)(a1 + 124) )
              {
                v93 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v42 - 16 + 8);
                if ( HIBYTE(v93) != ((unsigned __int8)v93 ^ (unsigned __int8)(BYTE1(v93) ^ BYTE2(v93))) )
                {
                  RtlpLogHeapFailure(3, a1, v42 - 16, 0, 0LL, 0LL);
                  v39 = v95;
                }
              }
              if ( (_DWORD)v33 == (unsigned __int16)v93 )
              {
                *(_QWORD *)(v32[6] + 8 * v39) = v42;
                goto LABEL_71;
              }
            }
            *(_QWORD *)(v32[6] + 8 * v39) = 0LL;
          }
          *(_DWORD *)(v32[5] + 4 * ((unsigned __int64)v36 >> 5)) &= ~(1 << (v36 & 0x1F));
        }
      }
LABEL_71:
      *v86 = v99;
      *(_QWORD *)(v99 + 8) = v86;
      if ( (*(_BYTE *)(v26 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock((PVOID)a1) )
      {
        v43 = *(_BYTE *)(v26 + 10);
        if ( (v43 & 4) != 0 )
        {
          v83 = 16LL * *(unsigned __int16 *)(v26 + 8) - 32;
          if ( (v43 & 2) != 0 && v83 > 4 )
            v83 = 16LL * *(unsigned __int16 *)(v26 + 8) - 36;
          v84 = RtlCompareMemoryUlong((PVOID)(v26 + 32), v83, 0xFEEEFEEE);
          if ( v84 != v83 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v26,
              (const void *)(v26 + 32 + v84));
            RtlpBreakPointHeap();
          }
        }
        *(_BYTE *)(v6 + 10) = 0;
        *(_BYTE *)(v6 + 15) = 0;
        *a3 += *(unsigned __int16 *)(v26 + 8);
        *(_WORD *)(v6 + 8) = *(_WORD *)a3;
        *(_WORD *)(v6 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
        return v6;
      }
      RtlpDeCommitFreeBlock(a1);
    }
    else
    {
      RtlpLogHeapFailure(12, a1, (_DWORD)v29, v31, v30, 0LL);
    }
  }
  return v6;
}
