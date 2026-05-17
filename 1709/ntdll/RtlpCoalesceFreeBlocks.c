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
  __int64 v29; // r9
  _QWORD *v30; // r8
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 *v33; // rbx
  unsigned __int64 v34; // r12
  unsigned __int64 m; // rax
  unsigned int v36; // ecx
  unsigned int v37; // r15d
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // r9
  unsigned int v41; // eax
  _QWORD *v42; // r10
  __int64 v43; // r13
  char v44; // al
  __int64 *v45; // rax
  __int64 v46; // r9
  _QWORD *v47; // r8
  __int64 v48; // rax
  __int64 v49; // r9
  __int64 *v50; // rsi
  unsigned __int64 v51; // r12
  unsigned __int64 i; // rax
  __int64 *v53; // rax
  unsigned int v54; // ecx
  unsigned int v55; // r15d
  unsigned int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // r9
  unsigned int v59; // eax
  _QWORD *v60; // r10
  __int64 v61; // r13
  __int64 v62; // r9
  char v63; // al
  unsigned __int64 v64; // rsi
  __int64 v65; // r15
  unsigned __int64 v66; // rsi
  __int64 v67; // r14
  _QWORD *v68; // r8
  __int64 v69; // rax
  __int64 v70; // r9
  __int64 *v71; // rbx
  unsigned __int64 v72; // r12
  unsigned __int64 k; // rax
  __int64 *v74; // rax
  unsigned int v75; // ecx
  unsigned int v76; // r15d
  unsigned int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // r9
  unsigned int v80; // eax
  _QWORD *v81; // r10
  __int64 v82; // r13
  __int64 v83; // r9
  char v84; // al
  unsigned __int64 v85; // rbx
  __int64 v86; // r12
  unsigned __int64 v87; // rbx
  __int64 v88; // r12
  __int64 *v89; // [rsp+30h] [rbp-49h]
  __int64 *v90; // [rsp+30h] [rbp-49h]
  __int64 *v91; // [rsp+30h] [rbp-49h]
  __int64 *v92; // [rsp+30h] [rbp-49h]
  int v93; // [rsp+40h] [rbp-39h]
  int v94; // [rsp+50h] [rbp-29h]
  int v95; // [rsp+60h] [rbp-19h]
  int v96; // [rsp+70h] [rbp-9h]
  int v97; // [rsp+80h] [rbp+7h]
  __int64 v98; // [rsp+E0h] [rbp+67h]
  __int64 v99; // [rsp+E0h] [rbp+67h]
  __int64 v100; // [rsp+E0h] [rbp+67h]
  __int64 v101; // [rsp+E0h] [rbp+67h]
  __int64 v102; // [rsp+E8h] [rbp+6Fh]
  __int64 v103; // [rsp+E8h] [rbp+6Fh]
  __int64 v104; // [rsp+E8h] [rbp+6Fh]
  __int64 v105; // [rsp+E8h] [rbp+6Fh]
  char v107; // [rsp+F8h] [rbp+7Fh]

  v107 = a4;
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
    v47 = (_QWORD *)(v6 + 16);
    v104 = *(_QWORD *)(v6 + 16);
    v91 = *(__int64 **)(v6 + 24);
    v48 = *v91;
    v49 = *(_QWORD *)(v104 + 8);
    if ( *v91 != v49 || (_QWORD *)v48 != v47 )
    {
      RtlpLogHeapFailure(12, a1, (_DWORD)v47, v49, v48, 0LL);
LABEL_124:
      v107 = 0;
      goto LABEL_7;
    }
    *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v6 + 8);
    v50 = *(__int64 **)(a1 + 312);
    if ( v50 )
    {
      v51 = *(unsigned __int16 *)(v6 + 8);
      for ( i = *((unsigned int *)v50 + 2); ; i = *((unsigned int *)v53 + 2) )
      {
        if ( v51 < i )
        {
          v54 = *(unsigned __int16 *)(v6 + 8);
          goto LABEL_92;
        }
        v53 = (__int64 *)*v50;
        if ( !*v50 )
          break;
        v50 = (__int64 *)*v50;
      }
      v54 = *((_DWORD *)v50 + 2) - 1;
LABEL_92:
      v55 = v54 - *((_DWORD *)v50 + 6);
      v56 = 2 * v55;
      if ( !*((_DWORD *)v50 + 3) )
        v56 = v54 - *((_DWORD *)v50 + 6);
      v57 = v50[6];
      v58 = v56;
      v59 = *((_DWORD *)v50 + 2);
      v100 = v58;
      v60 = *(_QWORD **)(v57 + 8 * v58);
      --*((_DWORD *)v50 + 4);
      if ( v54 == v59 - 1 )
        --*((_DWORD *)v50 + 5);
      if ( v60 == v47 )
      {
        if ( !*v50 )
          --v59;
        if ( v54 >= v59 )
        {
          if ( *v47 != v50[4] )
          {
            *(_QWORD *)(v57 + 8 * v58) = *v47;
            goto LABEL_111;
          }
          *(_QWORD *)(v57 + 8 * v58) = 0LL;
        }
        else
        {
          v61 = *v47;
          if ( *v47 != v50[4] )
          {
            v93 = *(_DWORD *)(v61 - 16 + 8);
            if ( *(_DWORD *)(a1 + 124) )
            {
              v93 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v61 - 16 + 8);
              if ( HIBYTE(v93) != ((unsigned __int8)v93 ^ (unsigned __int8)(BYTE1(v93) ^ BYTE2(v93))) )
              {
                RtlpLogHeapFailure(3, a1, v61 - 16, 0, 0LL, 0LL);
                v58 = v100;
              }
            }
            if ( (_DWORD)v51 == (unsigned __int16)v93 )
            {
              *(_QWORD *)(v50[6] + 8 * v58) = v61;
              goto LABEL_111;
            }
          }
          *(_QWORD *)(v50[6] + 8 * v58) = 0LL;
        }
        *(_DWORD *)(v50[5] + 4 * ((unsigned __int64)v55 >> 5)) &= ~(1 << (v55 & 0x1F));
      }
    }
LABEL_111:
    *v91 = v104;
    *(_QWORD *)(v104 + 8) = v91;
    if ( (*(_BYTE *)(v6 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v6) )
    {
      v63 = *(_BYTE *)(v6 + 10);
      if ( (v63 & 4) != 0 )
      {
        v64 = 16LL * *(unsigned __int16 *)(v6 + 8) - 32;
        if ( (v63 & 2) != 0 && v64 > 4 )
          v64 = 16LL * *(unsigned __int16 *)(v6 + 8) - 36;
        v65 = RtlCompareMemoryUlong(v6 + 32, v64, 4277075694LL);
        if ( v65 != v64 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v6,
            (const void *)(v65 + v6 + 32));
          RtlpBreakPointHeap();
        }
      }
    }
    else
    {
      LOBYTE(v62) = 1;
      RtlpDeCommitFreeBlock(a1, v6, *(unsigned __int16 *)(v6 + 8), v62);
    }
    goto LABEL_124;
  }
LABEL_7:
  v9 = (_QWORD *)(v7 + 16);
  v102 = *(_QWORD *)(v7 + 16);
  v89 = *(__int64 **)(v7 + 24);
  v10 = *v89;
  v11 = *(_QWORD *)(v102 + 8);
  if ( *v89 != v11 || (_QWORD *)v10 != v9 )
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
    v98 = v19;
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
        v94 = *(_DWORD *)(v22 - 16 + 8);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v94 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v22 - 16 + 8);
          if ( HIBYTE(v94) != ((unsigned __int8)v94 ^ (unsigned __int8)(BYTE1(v94) ^ BYTE2(v94))) )
          {
            RtlpLogHeapFailure(3, a1, v22 - 16, 0, 0LL, 0LL);
            v19 = v98;
          }
        }
        if ( (_DWORD)v13 != (unsigned __int16)v94 )
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
  *v89 = v102;
  *(_QWORD *)(v102 + 8) = v89;
  if ( (*(_BYTE *)(v7 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v7) )
  {
    v23 = *(_BYTE *)(v7 + 10);
    if ( (v23 & 4) != 0 )
    {
      v66 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
      if ( (v23 & 2) != 0 && v66 > 4 )
        v66 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
      v67 = RtlCompareMemoryUlong(v7 + 32, v66, 4277075694LL);
      if ( v67 != v66 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "HEAP: Free Heap block %p modified at %p after it was freed\n",
          (const void *)v7,
          (const void *)(v67 + v7 + 32));
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
  LOBYTE(v29) = 1;
  RtlpDeCommitFreeBlock(a1, v7, *(unsigned __int16 *)(v7 + 8), v29);
LABEL_42:
  v25 = a3;
LABEL_31:
  v26 = v6 + 16LL * *v25;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v95 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v26 + 8);
    if ( HIBYTE(v95) != ((unsigned __int8)v95 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(a1 + 136) ^ *(_WORD *)(v26 + 8)) >> 8) ^ BYTE2(v95))) )
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
    if ( !v107 )
      goto LABEL_50;
    v68 = (_QWORD *)(v6 + 16);
    v105 = *(_QWORD *)(v6 + 16);
    v92 = *(__int64 **)(v6 + 24);
    v69 = *v92;
    v70 = *(_QWORD *)(v105 + 8);
    if ( *v92 == v70 && (_QWORD *)v69 == v68 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v6 + 8);
      v71 = *(__int64 **)(a1 + 312);
      if ( !v71 )
        goto LABEL_163;
      v72 = *(unsigned __int16 *)(v6 + 8);
      for ( k = *((unsigned int *)v71 + 2); ; k = *((unsigned int *)v74 + 2) )
      {
        if ( v72 < k )
        {
          v75 = *(unsigned __int16 *)(v6 + 8);
          goto LABEL_144;
        }
        v74 = (__int64 *)*v71;
        if ( !*v71 )
          break;
        v71 = (__int64 *)*v71;
      }
      v75 = *((_DWORD *)v71 + 2) - 1;
LABEL_144:
      v76 = v75 - *((_DWORD *)v71 + 6);
      v77 = 2 * v76;
      if ( !*((_DWORD *)v71 + 3) )
        v77 = v75 - *((_DWORD *)v71 + 6);
      v78 = v71[6];
      v79 = v77;
      v80 = *((_DWORD *)v71 + 2);
      v101 = v79;
      v81 = *(_QWORD **)(v78 + 8 * v79);
      --*((_DWORD *)v71 + 4);
      if ( v75 == v80 - 1 )
        --*((_DWORD *)v71 + 5);
      if ( v81 != v68 )
        goto LABEL_163;
      if ( !*v71 )
        --v80;
      if ( v75 >= v80 )
      {
        if ( *v68 != v71[4] )
        {
          *(_QWORD *)(v78 + 8 * v79) = *v68;
          goto LABEL_163;
        }
        *(_QWORD *)(v78 + 8 * v79) = 0LL;
      }
      else
      {
        v82 = *v68;
        if ( *v68 != v71[4] )
        {
          v96 = *(_DWORD *)(v82 - 16 + 8);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v96 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v82 - 16 + 8);
            if ( HIBYTE(v96) != ((unsigned __int8)v96 ^ (unsigned __int8)(BYTE1(v96) ^ BYTE2(v96))) )
            {
              RtlpLogHeapFailure(3, a1, v82 - 16, 0, 0LL, 0LL);
              v79 = v101;
            }
          }
          if ( (_DWORD)v72 == (unsigned __int16)v96 )
          {
            *(_QWORD *)(v71[6] + 8 * v79) = v82;
LABEL_163:
            *v92 = v105;
            *(_QWORD *)(v105 + 8) = v92;
            if ( (*(_BYTE *)(v6 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v6) )
            {
              v84 = *(_BYTE *)(v6 + 10);
              if ( (v84 & 4) != 0 )
              {
                v85 = 16LL * *(unsigned __int16 *)(v6 + 8) - 32;
                if ( (v84 & 2) != 0 && v85 > 4 )
                  v85 = 16LL * *(unsigned __int16 *)(v6 + 8) - 36;
                v86 = RtlCompareMemoryUlong(v6 + 32, v85, 4277075694LL);
                if ( v86 != v85 )
                {
                  if ( NtCurrentPeb()->Ldr )
                    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                  else
                    DbgPrint("HEAP: ");
                  DbgPrint(
                    "HEAP: Free Heap block %p modified at %p after it was freed\n",
                    (const void *)v6,
                    (const void *)(v6 + 32 + v86));
                  RtlpBreakPointHeap();
                }
              }
            }
            else
            {
              LOBYTE(v83) = 1;
              RtlpDeCommitFreeBlock(a1, v6, *(unsigned __int16 *)(v6 + 8), v83);
            }
            goto LABEL_176;
          }
        }
        *(_QWORD *)(v71[6] + 8 * v79) = 0LL;
      }
      *(_DWORD *)(v71[5] + 4 * ((unsigned __int64)v76 >> 5)) &= ~(1 << (v76 & 0x1F));
      goto LABEL_163;
    }
    RtlpLogHeapFailure(12, a1, (_DWORD)v68, v70, v69, 0LL);
LABEL_176:
    v107 = 0;
LABEL_50:
    v30 = (_QWORD *)(v26 + 16);
    v103 = *(_QWORD *)(v26 + 16);
    v90 = *(__int64 **)(v26 + 24);
    v31 = *v90;
    v32 = *(_QWORD *)(v103 + 8);
    if ( *v90 == v32 && (_QWORD *)v31 == v30 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v26 + 8);
      v33 = *(__int64 **)(a1 + 312);
      if ( v33 )
      {
        v34 = *(unsigned __int16 *)(v26 + 8);
        for ( m = *((unsigned int *)v33 + 2); ; m = *((unsigned int *)v45 + 2) )
        {
          if ( v34 < m )
          {
            v36 = *(unsigned __int16 *)(v26 + 8);
            goto LABEL_56;
          }
          v45 = (__int64 *)*v33;
          if ( !*v33 )
            break;
          v33 = (__int64 *)*v33;
        }
        v36 = *((_DWORD *)v33 + 2) - 1;
LABEL_56:
        v37 = v36 - *((_DWORD *)v33 + 6);
        v38 = 2 * v37;
        if ( !*((_DWORD *)v33 + 3) )
          v38 = v36 - *((_DWORD *)v33 + 6);
        v39 = v33[6];
        v40 = v38;
        v41 = *((_DWORD *)v33 + 2);
        v99 = v40;
        v42 = *(_QWORD **)(v39 + 8 * v40);
        --*((_DWORD *)v33 + 4);
        if ( v36 == v41 - 1 )
          --*((_DWORD *)v33 + 5);
        if ( v42 == v30 )
        {
          if ( !*v33 )
            --v41;
          if ( v36 >= v41 )
          {
            if ( *v30 != v33[4] )
            {
              *(_QWORD *)(v39 + 8 * v40) = *v30;
              goto LABEL_71;
            }
            *(_QWORD *)(v39 + 8 * v40) = 0LL;
          }
          else
          {
            v43 = *v30;
            if ( *v30 != v33[4] )
            {
              v97 = *(_DWORD *)(v43 - 16 + 8);
              if ( *(_DWORD *)(a1 + 124) )
              {
                v97 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v43 - 16 + 8);
                if ( HIBYTE(v97) != ((unsigned __int8)v97 ^ (unsigned __int8)(BYTE1(v97) ^ BYTE2(v97))) )
                {
                  RtlpLogHeapFailure(3, a1, v43 - 16, 0, 0LL, 0LL);
                  v40 = v99;
                }
              }
              if ( (_DWORD)v34 == (unsigned __int16)v97 )
              {
                *(_QWORD *)(v33[6] + 8 * v40) = v43;
                goto LABEL_71;
              }
            }
            *(_QWORD *)(v33[6] + 8 * v40) = 0LL;
          }
          *(_DWORD *)(v33[5] + 4 * ((unsigned __int64)v37 >> 5)) &= ~(1 << (v37 & 0x1F));
        }
      }
LABEL_71:
      *v90 = v103;
      *(_QWORD *)(v103 + 8) = v90;
      if ( (*(_BYTE *)(v26 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v26) )
      {
        v44 = *(_BYTE *)(v26 + 10);
        if ( (v44 & 4) != 0 )
        {
          v87 = 16LL * *(unsigned __int16 *)(v26 + 8) - 32;
          if ( (v44 & 2) != 0 && v87 > 4 )
            v87 = 16LL * *(unsigned __int16 *)(v26 + 8) - 36;
          v88 = RtlCompareMemoryUlong(v26 + 32, v87, 4277075694LL);
          if ( v88 != v87 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v26,
              (const void *)(v26 + 32 + v88));
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
      LOBYTE(v46) = 1;
      RtlpDeCommitFreeBlock(a1, v26, *(unsigned __int16 *)(v26 + 8), v46);
    }
    else
    {
      RtlpLogHeapFailure(12, a1, (_DWORD)v30, v32, v31, 0LL);
    }
  }
  return v6;
}
