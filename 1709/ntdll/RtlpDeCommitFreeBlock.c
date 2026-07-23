/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x180038F8C
 * Callers:
 *     RtlpGrowBlockInPlace @ 0x180008C44 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x1800090BC (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x180038A9C (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x180038F8C (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 *     RtlpCoalesceHeap @ 0x180090494 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1800F25E0 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801053B8 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpDeCommitFreeBlock @ 0x180038F8C (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180039B00 (RtlpInsertFreeBlock.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpCreateUCREntry @ 0x180047904 (RtlpCreateUCREntry.c)
 *     RtlpCommitBlock @ 0x18004A2F4 (RtlpCommitBlock.c)
 *     RtlpCollectFreeBlocks @ 0x18004A3FC (RtlpCollectFreeBlocks.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x18004A5E4 (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18004A630 (RtlpSecMemFreeVirtualMemory.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     RtlpRemoveUCRBlock @ 0x180084C6C (RtlpRemoveUCRBlock.c)
 *     RtlpInsertUCRBlock @ 0x18008690C (RtlpInsertUCRBlock.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800A46C0 (RtlCompareMemoryUlong.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1800FF958 (RtlpHeapHandleError.c)
 *     RtlpLogHeapContractEvent @ 0x18010148C (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x1801015B0 (RtlpLogHeapDecommit.c)
 *     RtlpBreakPointHeap @ 0x180104C08 (RtlpBreakPointHeap.c)
 */

int __fastcall RtlpDeCommitFreeBlock(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // r11
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdi
  unsigned __int8 v14; // cl
  unsigned __int64 v15; // rdi
  struct _PEB *v16; // rax
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rsi
  __int64 v19; // r10
  unsigned __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned __int64 v33; // rax
  _BYTE *v34; // rdi
  __int64 *v35; // rax
  unsigned __int64 v36; // rax
  bool v37; // cc
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  _QWORD *v41; // r8
  __int64 v42; // r11
  _QWORD *v43; // rcx
  __int64 v44; // rax
  int v45; // r8d
  char v46; // r9
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rcx
  unsigned __int64 v51; // rcx
  __int64 *v52; // rdx
  unsigned __int64 v53; // rcx
  _BYTE *v54; // rdi
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // rcx
  _QWORD *v63; // r8
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rax
  unsigned int v69; // r10d
  bool v70; // zf
  unsigned __int64 v71; // rax
  __int64 v72; // r11
  _QWORD *v73; // rax
  unsigned int v74; // eax
  _QWORD *v75; // r8
  int v76; // edx
  __int64 *v77; // rcx
  __int64 v78; // rax
  __int16 v79; // cx
  __int64 v80; // rax
  __int64 v81; // r8
  _QWORD *v82; // rcx
  __int64 v83; // rax
  __int64 v84; // r9
  __int64 v85; // rcx
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rax
  unsigned int v88; // r9d
  unsigned int v89; // eax
  __int64 v90; // r10
  __int64 v91; // r11
  __int64 *v92; // rax
  unsigned int v93; // eax
  __int64 *v94; // r8
  __int64 *v95; // r8
  int v96; // edx
  __int64 *v97; // rcx
  _QWORD *v98; // rax
  __int16 v99; // cx
  __int64 v100; // rax
  SIZE_T v101; // rax
  SIZE_T v102; // rax
  int v104[2]; // [rsp+48h] [rbp-69h] BYREF
  int v105[2]; // [rsp+50h] [rbp-61h] BYREF
  __int64 *v106; // [rsp+58h] [rbp-59h]
  __int64 v107; // [rsp+60h] [rbp-51h]
  __int64 v108; // [rsp+68h] [rbp-49h]
  unsigned __int64 v109; // [rsp+70h] [rbp-41h]
  __int64 *v110; // [rsp+78h] [rbp-39h]
  __int64 v111; // [rsp+80h] [rbp-31h]
  unsigned int v112; // [rsp+88h] [rbp-29h]
  _QWORD *v113; // [rsp+90h] [rbp-21h]
  __int64 v114; // [rsp+98h] [rbp-19h] BYREF
  __int64 v115; // [rsp+A0h] [rbp-11h]
  unsigned __int64 v116; // [rsp+A8h] [rbp-9h]
  __int64 v117; // [rsp+B0h] [rbp-1h]
  __int64 v118; // [rsp+B8h] [rbp+7h] BYREF
  int v119; // [rsp+C8h] [rbp+17h]
  int v120; // [rsp+D8h] [rbp+27h]
  int v121; // [rsp+E8h] [rbp+37h]
  char v122[24]; // [rsp+F0h] [rbp+3Fh] BYREF
  char v123; // [rsp+118h] [rbp+67h]
  __int64 v124; // [rsp+118h] [rbp+67h]
  char v125; // [rsp+118h] [rbp+67h]
  unsigned __int64 v126; // [rsp+128h] [rbp+77h] BYREF
  char v127; // [rsp+130h] [rbp+7Fh]

  v127 = a4;
  v126 = a3;
  v115 = 0LL;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v123 = 0;
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
    goto LABEL_20;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*(_DWORD *)(a1 + 628);
      if ( (unsigned __int8)RtlpGetFreeBlockInsidePageBoundaries(a1, a2, v122, &v114) )
        *(_QWORD *)(v7 + 632) -= v114;
    }
    v107 = a2;
    goto LABEL_22;
  }
  if ( a3 < *(_QWORD *)(a1 + 176) )
  {
LABEL_20:
    LODWORD(v16) = RtlpInsertFreeBlock(a1, a2, a3);
    return (int)v16;
  }
  v8 = a3 + *(_QWORD *)(a1 + 192);
  if ( v8 < *(_QWORD *)(a1 + 184) || v8 < *(_QWORD *)(a1 + 544) >> (*(_BYTE *)(a1 + 656) + 4) )
  {
    a2 = v6;
LABEL_19:
    a1 = v7;
    goto LABEL_20;
  }
  v9 = v6;
  v10 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v6 + 12);
  v107 = v6;
  v11 = 16 * v10;
  v12 = v6 - v11;
  v108 = v6 - v11;
  if ( v6 - v11 == v6
    || ((*(_BYTE *)(v12 + 10) ^ (unsigned __int8)(*(_BYTE *)(v7 + 138) & (*(_DWORD *)(v7 + 124) >> 20))) & 1) != 0 )
  {
    goto LABEL_8;
  }
  if ( *(_DWORD *)(v7 + 124) )
  {
    *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(v7 + 136);
    if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
    {
      RtlpAnalyzeHeapFailure(v7, v6 - v11);
      v12 = v108;
    }
  }
  v63 = (_QWORD *)(v12 + 16);
  v64 = *(_QWORD *)(v12 + 16);
  v110 = *(__int64 **)(v12 + 24);
  v117 = v64;
  v65 = *v110;
  if ( *v110 != *(_QWORD *)(v64 + 8) || (_QWORD *)v65 != v63 )
  {
    RtlpLogHeapFailure(12, v7, (_DWORD)v63, *(_QWORD *)(v64 + 8), v65, 0LL);
    goto LABEL_181;
  }
  v66 = *(_QWORD *)(v7 + 312);
  *(_QWORD *)(v7 + 192) -= *(unsigned __int16 *)(v12 + 8);
  v106 = (__int64 *)v66;
  if ( v66 )
  {
    v67 = *(unsigned __int16 *)(v12 + 8);
    v68 = *(unsigned int *)(v66 + 8);
    v116 = v67;
    while ( v67 >= v68 )
    {
      v80 = *(_QWORD *)v66;
      if ( !*(_QWORD *)v66 )
      {
        LODWORD(v67) = *(_DWORD *)(v66 + 8) - 1;
        break;
      }
      v66 = *(_QWORD *)v66;
      v106 = (__int64 *)v80;
      v68 = *(unsigned int *)(v80 + 8);
    }
    v69 = v67 - *(_DWORD *)(v66 + 24);
    v70 = *(_DWORD *)(v66 + 12) == 0;
    LODWORD(v111) = v69;
    if ( v70 )
      v71 = v69;
    else
      v71 = 2 * v69;
    v72 = *(_QWORD *)(v66 + 48);
    v109 = v71;
    v73 = *(_QWORD **)(v72 + 8 * v71);
    --*(_DWORD *)(v66 + 16);
    v113 = v73;
    v74 = *(_DWORD *)(v66 + 8);
    v112 = v74 - 1;
    v12 = v108;
    if ( (_DWORD)v67 == v74 - 1 )
      --*(_DWORD *)(v66 + 20);
    if ( v113 == v63 )
    {
      if ( !*(_QWORD *)v66 )
        v74 = v112;
      if ( (unsigned int)v67 >= v74 )
      {
        if ( *v63 != *(_QWORD *)(v66 + 32) )
        {
          *(_QWORD *)(v72 + 8 * v109) = *v63;
          goto LABEL_120;
        }
        *(_QWORD *)(v72 + 8 * v109) = 0LL;
      }
      else
      {
        v75 = (_QWORD *)*v63;
        v113 = v75;
        if ( v75 != *(_QWORD **)(v66 + 32) )
        {
          v76 = *((_DWORD *)v75 - 2);
          v119 = v76;
          if ( *(_DWORD *)(v7 + 124) )
          {
            v119 = *(_DWORD *)(v7 + 136) ^ v76;
            if ( HIBYTE(v119) != ((unsigned __int8)v119 ^ (unsigned __int8)(BYTE1(v119) ^ BYTE2(v119))) )
            {
              RtlpLogHeapFailure(3, v7, (_DWORD)v75 - 16, 0, 0LL, 0LL);
              v12 = v108;
              v69 = v111;
              v75 = v113;
            }
            v66 = (__int64)v106;
          }
          v5 = v126;
          if ( (_DWORD)v116 == (unsigned __int16)v119 )
          {
            *(_QWORD *)(*(_QWORD *)(v66 + 48) + 8 * v109) = v75;
            goto LABEL_120;
          }
        }
        *(_QWORD *)(*(_QWORD *)(v66 + 48) + 8 * v109) = 0LL;
      }
      *(_DWORD *)(*(_QWORD *)(v66 + 40) + 4 * ((unsigned __int64)v69 >> 5)) &= ~(1 << (v69 & 0x1F));
    }
  }
LABEL_120:
  v77 = v110;
  v78 = v117;
  *v110 = v117;
  *(_QWORD *)(v78 + 8) = v77;
  if ( (*(_BYTE *)(v12 + 10) & 8) == 0 )
  {
LABEL_121:
    if ( (*(_BYTE *)(v12 + 10) & 4) != 0 )
    {
      v101 = 16LL * *(unsigned __int16 *)(v12 + 8) - 32;
      v70 = (*(_BYTE *)(v12 + 10) & 2) == 0;
      v106 = (__int64 *)v101;
      if ( !v70 && v101 > 4 )
      {
        v101 -= 4LL;
        v106 = (__int64 *)v101;
      }
      v110 = (__int64 *)RtlCompareMemoryUlong((PVOID)(v12 + 32), v101, 0xFEEEFEEE);
      if ( v110 != v106 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "HEAP: Free Heap block %p modified at %p after it was freed\n",
          (const void *)v108,
          (char *)v110 + v108 + 32);
        RtlpBreakPointHeap();
        v5 = v126;
      }
      v12 = v108;
    }
    v9 = v12;
    v5 += *(unsigned __int16 *)(v12 + 8);
    *(_BYTE *)(v12 + 10) = 0;
    *(_WORD *)(v12 + 8) = v5;
    *(_BYTE *)(v12 + 15) = 0;
    v79 = v5 ^ *(_WORD *)(v7 + 140);
    v107 = v12;
    v126 = v5;
    *(_WORD *)(v12 + 16 * v5 + 12) = v79;
    goto LABEL_8;
  }
  if ( (unsigned __int8)RtlpCommitBlock((PVOID)v7) )
  {
    v12 = v108;
    goto LABEL_121;
  }
  RtlpDeCommitFreeBlock(v7);
LABEL_181:
  v9 = v6;
LABEL_8:
  v13 = v9 + 16 * v5;
  if ( *(_DWORD *)(v7 + 124) )
  {
    v14 = ((unsigned __int16)(*(_WORD *)(v7 + 136) ^ *(_WORD *)(v13 + 8)) >> 8) ^ ((unsigned int)(*(_DWORD *)(v7 + 136) ^ *(_DWORD *)(v13 + 8)) >> 16);
    v120 = *(_DWORD *)(v7 + 136) ^ *(_DWORD *)(v13 + 8);
    if ( HIBYTE(v120) != ((unsigned __int8)v120 ^ v14) )
      RtlpLogHeapFailure(3, v7, v13, 0, 0LL, 0LL);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( ((*(_BYTE *)(v13 + 10) ^ (unsigned __int8)(*(_BYTE *)(v7 + 138) & (*(_DWORD *)(v7 + 124) >> 20))) & 1) != 0 )
      {
        v5 = v126;
        a2 = v107;
        goto LABEL_13;
      }
      if ( *(_DWORD *)(v7 + 124) )
      {
        *(_DWORD *)(v13 + 8) ^= *(_DWORD *)(v7 + 136);
        if ( *(_BYTE *)(v13 + 11) != (*(_BYTE *)(v13 + 8) ^ (unsigned __int8)(*(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10))) )
          RtlpAnalyzeHeapFailure(v7, v13);
      }
      v81 = v13 + 16;
      v82 = *(_QWORD **)(v13 + 16);
      v109 = *(_QWORD *)(v13 + 24);
      v113 = v82;
      v83 = *(_QWORD *)v109;
      v84 = v82[1];
      if ( *(_QWORD *)v109 == v84 && v83 == v81 )
        break;
      RtlpLogHeapFailure(12, v7, v81, v84, v83, 0LL);
    }
    v85 = *(_QWORD *)(v7 + 312);
    *(_QWORD *)(v7 + 192) -= *(unsigned __int16 *)(v13 + 8);
    v106 = (__int64 *)v85;
    if ( v85 )
    {
      v86 = *(unsigned __int16 *)(v13 + 8);
      v87 = *(unsigned int *)(v85 + 8);
      v116 = v86;
      while ( v86 >= v87 )
      {
        v100 = *(_QWORD *)v85;
        if ( !*(_QWORD *)v85 )
        {
          LODWORD(v86) = *(_DWORD *)(v85 + 8) - 1;
          break;
        }
        v85 = *(_QWORD *)v85;
        v106 = (__int64 *)v100;
        v87 = *(unsigned int *)(v100 + 8);
      }
      v88 = v86 - *(_DWORD *)(v85 + 24);
      v70 = *(_DWORD *)(v85 + 12) == 0;
      v112 = v88;
      v89 = 2 * v88;
      if ( v70 )
        v89 = v88;
      v90 = *(_QWORD *)(v85 + 48);
      v91 = v89;
      v117 = v89;
      v92 = *(__int64 **)(v90 + 8LL * v89);
      --*(_DWORD *)(v85 + 16);
      v110 = v92;
      v93 = *(_DWORD *)(v85 + 8);
      LODWORD(v111) = v93 - 1;
      v94 = (__int64 *)(v13 + 16);
      if ( (_DWORD)v86 == v93 - 1 )
        --*(_DWORD *)(v85 + 20);
      if ( v110 == v94 )
      {
        if ( !*(_QWORD *)v85 )
          v93 = v111;
        if ( (unsigned int)v86 >= v93 )
        {
          if ( *v94 != *(_QWORD *)(v85 + 32) )
          {
            *(_QWORD *)(v90 + 8 * v91) = *v94;
            goto LABEL_151;
          }
          *(_QWORD *)(v90 + 8 * v91) = 0LL;
        }
        else
        {
          v95 = (__int64 *)*v94;
          v110 = v95;
          if ( v95 != *(__int64 **)(v85 + 32) )
          {
            v96 = *((_DWORD *)v95 - 2);
            v70 = *(_DWORD *)(v7 + 124) == 0;
            v121 = v96;
            if ( !v70 )
            {
              v121 = *(_DWORD *)(v7 + 136) ^ v96;
              if ( HIBYTE(v121) != ((unsigned __int8)v121 ^ (unsigned __int8)(BYTE1(v121) ^ BYTE2(v121))) )
              {
                RtlpLogHeapFailure(3, v7, (_DWORD)v95 - 16, 0, 0LL, 0LL);
                v88 = v112;
                v95 = v110;
                v91 = v117;
              }
              v85 = (__int64)v106;
            }
            if ( (_DWORD)v116 == (unsigned __int16)v121 )
            {
              *(_QWORD *)(*(_QWORD *)(v85 + 48) + 8 * v91) = v95;
              goto LABEL_151;
            }
          }
          *(_QWORD *)(*(_QWORD *)(v85 + 48) + 8 * v91) = 0LL;
        }
        *(_DWORD *)(*(_QWORD *)(v85 + 40) + 4 * ((unsigned __int64)v88 >> 5)) &= ~(1 << (v88 & 0x1F));
      }
    }
LABEL_151:
    v97 = (__int64 *)v109;
    v98 = v113;
    *(_QWORD *)v109 = v113;
    v98[1] = v97;
    if ( (*(_BYTE *)(v13 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock((PVOID)v7) )
      break;
    RtlpDeCommitFreeBlock(v7);
  }
  if ( (*(_BYTE *)(v13 + 10) & 4) != 0 )
  {
    v102 = 16LL * *(unsigned __int16 *)(v13 + 8) - 32;
    v70 = (*(_BYTE *)(v13 + 10) & 2) == 0;
    v106 = (__int64 *)v102;
    if ( !v70 && v102 > 4 )
    {
      v102 -= 4LL;
      v106 = (__int64 *)v102;
    }
    v110 = (__int64 *)RtlCompareMemoryUlong((PVOID)(v13 + 32), v102, 0xFEEEFEEE);
    if ( v110 != v106 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v13,
        (char *)v110 + v13 + 32);
      RtlpBreakPointHeap();
    }
  }
  a2 = v107;
  *(_BYTE *)(v107 + 10) = 0;
  *(_BYTE *)(a2 + 15) = 0;
  v5 = *(unsigned __int16 *)(v13 + 8) + v126;
  *(_WORD *)(a2 + 8) = v5;
  v99 = v5 ^ *(_WORD *)(v7 + 140);
  v126 = v5;
  *(_WORD *)(a2 + 16 * v5 + 12) = v99;
LABEL_13:
  if ( v5 - 257 <= 0xFDFF )
  {
    RtlpInsertFreeBlock(v7, a2, v5);
    v15 = *(_QWORD *)(v7 + 544) - 16LL * *(_QWORD *)(v7 + 192);
    v16 = (struct _PEB *)(*(_QWORD *)(v7 + 640) >> 4);
    if ( v15 < *(_QWORD *)(v7 + 640) - (_QWORD)v16 )
    {
      v16 = (struct _PEB *)(*(_QWORD *)(v7 + 648) >> 2);
      if ( v15 > *(_QWORD *)(v7 + 648) - (_QWORD)v16 )
      {
        LODWORD(v16) = RtlpCollectFreeBlocks(v7);
        *(_QWORD *)(v7 + 648) = v15;
        *(_QWORD *)(v7 + 640) = v15;
      }
    }
    return (int)v16;
  }
  v4 = 0;
LABEL_22:
  v17 = *(_BYTE *)(v6 + 14);
  if ( v17 )
    v18 = (v6 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v17 << 16) + 0x10000;
  else
    v18 = v7;
  v19 = a2 + 16 * v5;
  v114 = v19;
  if ( *(_BYTE *)(v19 + 15) == 3 )
  {
    v124 = v19 + 16;
    RtlpRemoveUCRBlock(v7);
    v30 = v124;
    v31 = *(_QWORD *)(v124 + 32);
    v32 = *(_QWORD *)(v124 + 40);
    --*(_DWORD *)(v18 + 84);
    v115 = v31;
    *(_DWORD *)(v18 + 80) -= *(_QWORD *)(v124 + 40) >> 12;
    *(_QWORD *)(v7 + 544) += *(_QWORD *)(v124 + 40);
    --*(_DWORD *)(v7 + 572);
    v33 = *(_QWORD *)(v124 + 40);
    v108 = v32;
    if ( v33 >= 0xFF000 )
      *(_QWORD *)(v7 + 552) -= v33;
    v4 = 1;
    a2 = v107;
    v19 = v114;
    v123 = 1;
    v5 += (*(_QWORD *)(v30 + 40) >> 4) + 64LL;
    v126 = v5;
  }
  else
  {
    v108 = 0LL;
  }
  if ( *(_WORD *)(v7 + 140) == *(_WORD *)(a2 + 12) )
  {
    *(_QWORD *)v105 = a2;
    v41 = *(_QWORD **)(v18 + 96);
    v42 = a2;
    while ( (_QWORD *)(v18 + 96) != v41 )
    {
      v43 = v41 - 2;
      v44 = v41[2] + v41[3];
      v109 = (unsigned __int64)(v41 - 2);
      if ( v44 == a2 )
        goto LABEL_66;
      v41 = (_QWORD *)*v41;
    }
    v43 = 0LL;
    v109 = 0LL;
LABEL_66:
    if ( v127 && !v43 )
    {
      v4 = v123;
      goto LABEL_27;
    }
    v45 = RtlpHeapErrorHandlerThreshold;
    if ( RtlpHeapErrorHandlerThreshold >= 1 && !v43 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("(UCRBlock != NULL)");
      RtlpHeapHandleError(1LL);
      v42 = *(_QWORD *)v105;
      v45 = RtlpHeapErrorHandlerThreshold;
      a2 = v107;
      v5 = v126;
    }
    v46 = v123;
    v47 = 16 * v5;
    v111 = 16 * v5;
    if ( v123 )
    {
      v48 = a2 + v47;
      v106 = (__int64 *)v48;
    }
    else
    {
      v106 = (__int64 *)(v47 + a2);
      v48 = v47 + a2 - 32;
      v46 = 0;
    }
    *(_QWORD *)v104 = (v48 & 0xFFFFFFFFFFFFF000uLL) - v42;
    if ( *(_QWORD *)v104 )
    {
      if ( (int)RtlpSecMemFreeVirtualMemory(v43, v105, v104, 0x4000LL) >= 0 )
      {
        v49 = 2147353472LL;
        if ( RtlGetCurrentServiceSessionId() )
          v50 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v50 = 2147353472LL;
        if ( *(_BYTE *)v50 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapDecommit(v7, *(_QWORD *)v105, *(_QWORD *)v104, 5LL);
        ++*(_DWORD *)(v7 + 580);
        v51 = *(_QWORD *)(v109 + 40);
        if ( v51 >= 0xFF000 )
          *(_QWORD *)(v7 + 552) -= v51;
        RtlpRemoveUCRBlock(v7);
        v52 = (__int64 *)v109;
        *(_QWORD *)(v109 + 40) += *(_QWORD *)v104;
        RtlpInsertUCRBlock(v7, v52);
        *(_DWORD *)(v18 + 80) += *(_QWORD *)v104 >> 12;
        *(_QWORD *)(v7 + 544) -= *(_QWORD *)v104;
        v53 = *(_QWORD *)(v109 + 40);
        if ( v53 >= 0xFF000 )
          *(_QWORD *)(v7 + 552) += v53;
        if ( !v123 )
        {
          v54 = (_BYTE *)(*(_QWORD *)v105 + *(_QWORD *)v104);
          *(_WORD *)(*(_QWORD *)v105 + *(_QWORD *)v104 + 12LL) = *(_WORD *)(v7 + 140);
          if ( v106 == (__int64 *)(*(_QWORD *)v104 + *(_QWORD *)v105) )
          {
            if ( *(_DWORD *)(v7 + 124) )
            {
              v54[11] = v54[8] ^ v54[9] ^ v54[10];
              *((_DWORD *)v54 + 2) ^= *(_DWORD *)(v7 + 136);
            }
          }
          else
          {
            v55 = v111;
            v54[15] = 0;
            v54[10] = 0;
            v56 = (unsigned __int64)(v55 - *(_QWORD *)v104) >> 4;
            v37 = RtlpHeapErrorHandlerThreshold < 1;
            *((_WORD *)v54 + 4) = v56;
            if ( !v37 && (unsigned __int16)v56 <= 1u )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("((LONG)FreeEntry->Size > 1)");
              RtlpHeapHandleError(1LL);
            }
            v54[11] = 0;
            v57 = *(_QWORD *)(v18 + 40);
            if ( v57 == v18 )
            {
              LOBYTE(v58) = 0;
            }
            else
            {
              v58 = ((unsigned __int64)&v54[-v18] >> 16) + 1;
              v114 = v58;
              if ( (unsigned __int64)&v54[-v18] >> 16 > 0xFC )
              {
                RtlpLogHeapFailure(3, v57, (_DWORD)v54, v18, 0LL, 0LL);
                LOBYTE(v58) = v114;
              }
            }
            v59 = *((unsigned __int16 *)v54 + 4);
            v54[14] = v58;
            RtlpInsertFreeBlock(v7, v54, v59);
          }
          v49 = 2147353472LL;
        }
        if ( RtlGetCurrentServiceSessionId() )
          v60 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v60 = 2147353472LL;
        if ( *(_BYTE *)v60 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v49 = (__int64)NtCurrentPeb()->SharedData + 550;
          RtlpLogHeapContractEvent(
            v7,
            v105[0],
            v104[0],
            16 * *(_QWORD *)(v7 + 192),
            v123,
            v108,
            (HANDLE)*(unsigned __int8 *)v49);
        }
        LODWORD(v16) = RtlGetCurrentServiceSessionId();
        v61 = 2147353482LL;
        if ( (_DWORD)v16 )
        {
          v16 = NtCurrentPeb();
          v62 = (__int64)v16->SharedData + 560;
        }
        else
        {
          v62 = 2147353482LL;
        }
        if ( *(_BYTE *)v62 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v61 = (__int64)NtCurrentPeb()->SharedData + 560;
          LODWORD(v16) = RtlpLogHeapContractEvent(
                           v7,
                           v105[0],
                           v104[0],
                           16 * (unsigned int)*(_QWORD *)(v7 + 192),
                           v123,
                           v108,
                           (HANDLE)*(unsigned __int8 *)v61);
        }
        return (int)v16;
      }
LABEL_207:
      ++*(_DWORD *)(v7 + 596);
      if ( !v123 )
      {
LABEL_254:
        a2 = v107;
LABEL_61:
        a3 = v5;
        goto LABEL_19;
      }
      RtlpCreateUCREntry(v7, v18, v115 - 48, v108, v107, (__int64)&v126);
LABEL_253:
      v5 = v126;
      goto LABEL_254;
    }
    if ( v45 < 1 || !v46 )
      goto LABEL_61;
    if ( NtCurrentPeb()->Ldr )
      goto LABEL_250;
    goto LABEL_251;
  }
LABEL_27:
  v20 = (a2 + 4159) & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)v105 = v20;
  if ( v20 == a2 + 80 )
  {
    v20 += 4096LL;
    *(_QWORD *)v105 = v20;
  }
  v109 = 16 * v5;
  v106 = (__int64 *)(a2 + 16 * v5);
  v21 = (__int64)(v106 - 4);
  if ( v4 )
    v21 = a2 + 16 * v5;
  v22 = v21 & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)v104 = v22;
  if ( v22 < v20 )
  {
    if ( RtlpHeapErrorHandlerThreshold < 1 || !v4 )
      goto LABEL_61;
    if ( NtCurrentPeb()->Ldr )
    {
LABEL_250:
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
LABEL_252:
      DbgPrint("(!TrailingUCR)");
      RtlpHeapHandleError(1LL);
      goto LABEL_253;
    }
LABEL_251:
    DbgPrint("HEAP: ");
    goto LABEL_252;
  }
  v23 = v22 - v20;
  *(_QWORD *)v104 = v23;
  if ( !v127 && *(_BYTE *)(v19 + 15) != 3 && (!v23 || v23 < *(_QWORD *)(v7 + 176)) )
    goto LABEL_61;
  if ( !v23 )
    goto LABEL_42;
  ++*(_DWORD *)(v7 + 580);
  if ( (int)RtlpSecMemFreeVirtualMemory(-4096LL, v105, v104, 0x4000LL) < 0 )
    goto LABEL_207;
  if ( RtlGetCurrentServiceSessionId() )
    v24 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v24 = 2147353472LL;
  if ( *(_BYTE *)v24 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapDecommit(v7, *(_QWORD *)v105, *(_QWORD *)v104, 6LL);
  v4 = v123;
  a2 = v107;
  v23 = *(_QWORD *)v104;
  v20 = *(_QWORD *)v105;
LABEL_42:
  if ( !v4 )
  {
    v34 = (_BYTE *)(v23 + v20);
    *(_WORD *)(v23 + v20 + 12) = *(_WORD *)(v7 + 140);
    LODWORD(v23) = v104[0];
    LODWORD(v20) = v105[0];
    if ( v106 == (__int64 *)(*(_QWORD *)v104 + *(_QWORD *)v105) )
    {
      if ( !*(_DWORD *)(v7 + 124) )
        goto LABEL_43;
      v34[11] = v34[8] ^ v34[9] ^ v34[10];
      *((_DWORD *)v34 + 2) ^= *(_DWORD *)(v7 + 136);
    }
    else
    {
      v35 = (__int64 *)v109;
      v34[15] = 0;
      v34[10] = 0;
      v36 = ((unsigned __int64)v35 + a2 - *(_QWORD *)v105 - *(_QWORD *)v104) >> 4;
      v37 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v34 + 4) = v36;
      if ( !v37 && (unsigned __int16)v36 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("(LONG)FreeEntry->Size > 1");
        RtlpHeapHandleError(1LL);
      }
      v34[11] = 0;
      v38 = *(_QWORD *)(v18 + 40);
      if ( v38 == v18 )
      {
        LOBYTE(v39) = 0;
      }
      else
      {
        v39 = ((unsigned __int64)&v34[-v18] >> 16) + 1;
        v125 = v39;
        if ( (unsigned __int64)&v34[-v18] >> 16 > 0xFC )
        {
          RtlpLogHeapFailure(3, v38, (_DWORD)v34, v18, 0LL, 0LL);
          LOBYTE(v39) = v125;
        }
      }
      v40 = *((unsigned __int16 *)v34 + 4);
      v34[14] = v39;
      RtlpInsertFreeBlock(v7, v34, v40);
    }
    LODWORD(v23) = v104[0];
    LODWORD(v20) = v105[0];
  }
LABEL_43:
  v25 = v107;
  RtlpCreateUCREntry(v7, v18, v20 - 48, v23, v107, (__int64)&v118);
  RtlpInsertFreeBlock(v7, v25, v118);
  v26 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    v27 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v27 = 2147353472LL;
  if ( *(_BYTE *)v27 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v26 = (__int64)NtCurrentPeb()->SharedData + 550;
    RtlpLogHeapContractEvent(v7, v105[0], v104[0], 16 * *(_QWORD *)(v7 + 192), 0, 0LL, (HANDLE)*(unsigned __int8 *)v26);
  }
  LODWORD(v16) = RtlGetCurrentServiceSessionId();
  v28 = 2147353482LL;
  if ( (_DWORD)v16 )
  {
    v16 = NtCurrentPeb();
    v29 = (__int64)v16->SharedData + 560;
  }
  else
  {
    v29 = 2147353482LL;
  }
  if ( *(_BYTE *)v29 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v28 = (__int64)NtCurrentPeb()->SharedData + 560;
    LODWORD(v16) = RtlpLogHeapContractEvent(
                     v7,
                     v105[0],
                     v104[0],
                     16 * *(_DWORD *)(v7 + 192),
                     0,
                     0LL,
                     (HANDLE)*(unsigned __int8 *)v28);
  }
  return (int)v16;
}
