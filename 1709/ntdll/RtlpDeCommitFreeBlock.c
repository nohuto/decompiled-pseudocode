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

struct _PEB *__fastcall RtlpDeCommitFreeBlock(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // r11
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  char *v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  char *v12; // r9
  char *v13; // rdi
  unsigned __int8 v14; // cl
  unsigned __int64 v15; // rdi
  struct _PEB *result; // rax
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rsi
  __int64 v19; // r10
  unsigned __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  char *v38; // r8
  unsigned __int64 v39; // rax
  _BYTE *v40; // rdi
  __int64 *v41; // rax
  unsigned __int64 v42; // rax
  bool v43; // cc
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  _QWORD *v47; // r8
  __int64 v48; // r11
  _QWORD *v49; // rcx
  __int64 v50; // rax
  int v51; // r8d
  char v52; // r9
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdi
  __int64 v58; // rcx
  unsigned __int64 v59; // rcx
  __int64 *v60; // rdx
  __int64 v61; // rdx
  unsigned __int64 v62; // rcx
  _BYTE *v63; // rdi
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rdi
  __int64 v73; // rcx
  _QWORD *v74; // r8
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rcx
  unsigned __int64 v78; // rdx
  unsigned __int64 v79; // rax
  unsigned int v80; // r10d
  bool v81; // zf
  unsigned __int64 v82; // rax
  __int64 v83; // r11
  _QWORD *v84; // rax
  unsigned int v85; // eax
  _QWORD *v86; // r8
  int v87; // edx
  __int64 *v88; // rcx
  __int64 v89; // rax
  __int16 v90; // cx
  __int64 v91; // rax
  char *v92; // r8
  _QWORD *v93; // rcx
  __int64 v94; // rax
  __int64 v95; // r9
  __int64 v96; // rcx
  unsigned __int64 v97; // rdx
  unsigned __int64 v98; // rax
  unsigned int v99; // r9d
  unsigned int v100; // eax
  __int64 v101; // r10
  __int64 v102; // r11
  __int64 *v103; // rax
  unsigned int v104; // eax
  __int64 *v105; // r8
  __int64 *v106; // r8
  int v107; // edx
  __int64 *v108; // rcx
  _QWORD *v109; // rax
  __int16 v110; // cx
  __int64 v111; // rax
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rax
  unsigned __int64 v116; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int64 v117; // [rsp+50h] [rbp-61h] BYREF
  __int64 *v118; // [rsp+58h] [rbp-59h]
  char *v119; // [rsp+60h] [rbp-51h]
  char *v120; // [rsp+68h] [rbp-49h]
  unsigned __int64 v121; // [rsp+70h] [rbp-41h]
  __int64 *v122; // [rsp+78h] [rbp-39h]
  __int64 v123; // [rsp+80h] [rbp-31h]
  unsigned int v124; // [rsp+88h] [rbp-29h]
  _QWORD *v125; // [rsp+90h] [rbp-21h]
  __int64 v126; // [rsp+98h] [rbp-19h] BYREF
  __int64 v127; // [rsp+A0h] [rbp-11h]
  unsigned __int64 v128; // [rsp+A8h] [rbp-9h]
  __int64 v129; // [rsp+B0h] [rbp-1h]
  __int64 v130; // [rsp+B8h] [rbp+7h] BYREF
  int v131; // [rsp+C8h] [rbp+17h]
  int v132; // [rsp+D8h] [rbp+27h]
  int v133; // [rsp+E8h] [rbp+37h]
  char v134[24]; // [rsp+F0h] [rbp+3Fh] BYREF
  char v135; // [rsp+118h] [rbp+67h]
  __int64 v136; // [rsp+118h] [rbp+67h]
  char v137; // [rsp+118h] [rbp+67h]
  unsigned __int64 v138; // [rsp+128h] [rbp+77h] BYREF
  char v139; // [rsp+130h] [rbp+7Fh]

  v139 = a4;
  v138 = a3;
  v127 = 0LL;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v135 = 0;
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
    return (struct _PEB *)RtlpInsertFreeBlock(a1, a2, a3);
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*(_DWORD *)(a1 + 628);
      if ( (unsigned __int8)RtlpGetFreeBlockInsidePageBoundaries(a1, a2, v134, &v126) )
        *(_QWORD *)(v7 + 632) -= v126;
    }
    v119 = (char *)a2;
    goto LABEL_22;
  }
  if ( a3 < *(_QWORD *)(a1 + 176) )
    return (struct _PEB *)RtlpInsertFreeBlock(a1, a2, a3);
  v8 = a3 + *(_QWORD *)(a1 + 192);
  if ( v8 < *(_QWORD *)(a1 + 184) || v8 < *(_QWORD *)(a1 + 544) >> (*(_BYTE *)(a1 + 656) + 4) )
  {
    a2 = v6;
LABEL_19:
    a1 = v7;
    return (struct _PEB *)RtlpInsertFreeBlock(a1, a2, a3);
  }
  v9 = (char *)v6;
  v10 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v6 + 12);
  v119 = (char *)v6;
  v11 = 16 * v10;
  v12 = (char *)(v6 - v11);
  v120 = (char *)(v6 - v11);
  if ( v6 - v11 == v6
    || (((unsigned __int8)v12[10] ^ (unsigned __int8)(*(_BYTE *)(v7 + 138) & (*(_DWORD *)(v7 + 124) >> 20))) & 1) != 0 )
  {
    goto LABEL_8;
  }
  if ( *(_DWORD *)(v7 + 124) )
  {
    *((_DWORD *)v12 + 2) ^= *(_DWORD *)(v7 + 136);
    if ( v12[11] != ((unsigned __int8)v12[8] ^ (unsigned __int8)(v12[9] ^ v12[10])) )
    {
      RtlpAnalyzeHeapFailure(v7, v6 - v11);
      v12 = v120;
    }
  }
  v74 = v12 + 16;
  v75 = *((_QWORD *)v12 + 2);
  v122 = (__int64 *)*((_QWORD *)v12 + 3);
  v129 = v75;
  v76 = *v122;
  if ( *v122 != *(_QWORD *)(v75 + 8) || (_QWORD *)v76 != v74 )
  {
    RtlpLogHeapFailure(12, v7, (_DWORD)v74, *(_QWORD *)(v75 + 8), v76, 0LL);
    goto LABEL_181;
  }
  v77 = *(_QWORD *)(v7 + 312);
  *(_QWORD *)(v7 + 192) -= *((unsigned __int16 *)v12 + 4);
  v118 = (__int64 *)v77;
  if ( v77 )
  {
    v78 = *((unsigned __int16 *)v12 + 4);
    v79 = *(unsigned int *)(v77 + 8);
    v128 = v78;
    while ( v78 >= v79 )
    {
      v91 = *(_QWORD *)v77;
      if ( !*(_QWORD *)v77 )
      {
        LODWORD(v78) = *(_DWORD *)(v77 + 8) - 1;
        break;
      }
      v77 = *(_QWORD *)v77;
      v118 = (__int64 *)v91;
      v79 = *(unsigned int *)(v91 + 8);
    }
    v80 = v78 - *(_DWORD *)(v77 + 24);
    v81 = *(_DWORD *)(v77 + 12) == 0;
    LODWORD(v123) = v80;
    if ( v81 )
      v82 = v80;
    else
      v82 = 2 * v80;
    v83 = *(_QWORD *)(v77 + 48);
    v121 = v82;
    v84 = *(_QWORD **)(v83 + 8 * v82);
    --*(_DWORD *)(v77 + 16);
    v125 = v84;
    v85 = *(_DWORD *)(v77 + 8);
    v124 = v85 - 1;
    v12 = v120;
    if ( (_DWORD)v78 == v85 - 1 )
      --*(_DWORD *)(v77 + 20);
    if ( v125 == v74 )
    {
      if ( !*(_QWORD *)v77 )
        v85 = v124;
      if ( (unsigned int)v78 >= v85 )
      {
        if ( *v74 != *(_QWORD *)(v77 + 32) )
        {
          *(_QWORD *)(v83 + 8 * v121) = *v74;
          goto LABEL_120;
        }
        *(_QWORD *)(v83 + 8 * v121) = 0LL;
      }
      else
      {
        v86 = (_QWORD *)*v74;
        v125 = v86;
        if ( v86 != *(_QWORD **)(v77 + 32) )
        {
          v87 = *((_DWORD *)v86 - 2);
          v131 = v87;
          if ( *(_DWORD *)(v7 + 124) )
          {
            v131 = *(_DWORD *)(v7 + 136) ^ v87;
            if ( HIBYTE(v131) != ((unsigned __int8)v131 ^ (unsigned __int8)(BYTE1(v131) ^ BYTE2(v131))) )
            {
              RtlpLogHeapFailure(3, v7, (_DWORD)v86 - 16, 0, 0LL, 0LL);
              v12 = v120;
              v80 = v123;
              v86 = v125;
            }
            v77 = (__int64)v118;
          }
          v5 = v138;
          if ( (_DWORD)v128 == (unsigned __int16)v131 )
          {
            *(_QWORD *)(*(_QWORD *)(v77 + 48) + 8 * v121) = v86;
            goto LABEL_120;
          }
        }
        *(_QWORD *)(*(_QWORD *)(v77 + 48) + 8 * v121) = 0LL;
      }
      *(_DWORD *)(*(_QWORD *)(v77 + 40) + 4 * ((unsigned __int64)v80 >> 5)) &= ~(1 << (v80 & 0x1F));
    }
  }
LABEL_120:
  v88 = v122;
  v89 = v129;
  *v122 = v129;
  *(_QWORD *)(v89 + 8) = v88;
  if ( (v12[10] & 8) == 0 )
  {
LABEL_121:
    if ( (v12[10] & 4) != 0 )
    {
      v112 = 16LL * *((unsigned __int16 *)v12 + 4) - 32;
      v81 = (v12[10] & 2) == 0;
      v118 = (__int64 *)v112;
      if ( !v81 && v112 > 4 )
      {
        v112 -= 4LL;
        v118 = (__int64 *)v112;
      }
      v122 = (__int64 *)RtlCompareMemoryUlong(v12 + 32, v112, 4277075694LL);
      if ( v122 != v118 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v120, (char *)v122 + (_QWORD)v120 + 32);
        RtlpBreakPointHeap();
        v5 = v138;
      }
      v12 = v120;
    }
    v9 = v12;
    v5 += *((unsigned __int16 *)v12 + 4);
    v12[10] = 0;
    *((_WORD *)v12 + 4) = v5;
    v12[15] = 0;
    v90 = v5 ^ *(_WORD *)(v7 + 140);
    v119 = v12;
    v138 = v5;
    *(_WORD *)&v12[16 * v5 + 12] = v90;
    goto LABEL_8;
  }
  if ( (unsigned __int8)RtlpCommitBlock(v7, v12) )
  {
    v12 = v120;
    goto LABEL_121;
  }
  RtlpDeCommitFreeBlock(v7, v120, *((unsigned __int16 *)v120 + 4), 1LL);
LABEL_181:
  v9 = (char *)v6;
LABEL_8:
  v13 = &v9[16 * v5];
  if ( *(_DWORD *)(v7 + 124) )
  {
    v14 = ((unsigned __int16)(*(_WORD *)(v7 + 136) ^ *((_WORD *)v13 + 4)) >> 8) ^ ((unsigned int)(*(_DWORD *)(v7 + 136) ^ *((_DWORD *)v13 + 2)) >> 16);
    v132 = *(_DWORD *)(v7 + 136) ^ *((_DWORD *)v13 + 2);
    if ( HIBYTE(v132) != ((unsigned __int8)v132 ^ v14) )
      RtlpLogHeapFailure(3, v7, (_DWORD)v13, 0, 0LL, 0LL);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (((unsigned __int8)v13[10] ^ (unsigned __int8)(*(_BYTE *)(v7 + 138) & (*(_DWORD *)(v7 + 124) >> 20))) & 1) != 0 )
      {
        v5 = v138;
        a2 = (__int64)v119;
        goto LABEL_13;
      }
      if ( *(_DWORD *)(v7 + 124) )
      {
        *((_DWORD *)v13 + 2) ^= *(_DWORD *)(v7 + 136);
        if ( v13[11] != ((unsigned __int8)v13[8] ^ (unsigned __int8)(v13[9] ^ v13[10])) )
          RtlpAnalyzeHeapFailure(v7, v13);
      }
      v92 = v13 + 16;
      v93 = (_QWORD *)*((_QWORD *)v13 + 2);
      v121 = *((_QWORD *)v13 + 3);
      v125 = v93;
      v94 = *(_QWORD *)v121;
      v95 = v93[1];
      if ( *(_QWORD *)v121 == v95 && (char *)v94 == v92 )
        break;
      RtlpLogHeapFailure(12, v7, (_DWORD)v92, v95, v94, 0LL);
    }
    v96 = *(_QWORD *)(v7 + 312);
    *(_QWORD *)(v7 + 192) -= *((unsigned __int16 *)v13 + 4);
    v118 = (__int64 *)v96;
    if ( v96 )
    {
      v97 = *((unsigned __int16 *)v13 + 4);
      v98 = *(unsigned int *)(v96 + 8);
      v128 = v97;
      while ( v97 >= v98 )
      {
        v111 = *(_QWORD *)v96;
        if ( !*(_QWORD *)v96 )
        {
          LODWORD(v97) = *(_DWORD *)(v96 + 8) - 1;
          break;
        }
        v96 = *(_QWORD *)v96;
        v118 = (__int64 *)v111;
        v98 = *(unsigned int *)(v111 + 8);
      }
      v99 = v97 - *(_DWORD *)(v96 + 24);
      v81 = *(_DWORD *)(v96 + 12) == 0;
      v124 = v99;
      v100 = 2 * v99;
      if ( v81 )
        v100 = v99;
      v101 = *(_QWORD *)(v96 + 48);
      v102 = v100;
      v129 = v100;
      v103 = *(__int64 **)(v101 + 8LL * v100);
      --*(_DWORD *)(v96 + 16);
      v122 = v103;
      v104 = *(_DWORD *)(v96 + 8);
      LODWORD(v123) = v104 - 1;
      v105 = (__int64 *)(v13 + 16);
      if ( (_DWORD)v97 == v104 - 1 )
        --*(_DWORD *)(v96 + 20);
      if ( v122 == v105 )
      {
        if ( !*(_QWORD *)v96 )
          v104 = v123;
        if ( (unsigned int)v97 >= v104 )
        {
          if ( *v105 != *(_QWORD *)(v96 + 32) )
          {
            *(_QWORD *)(v101 + 8 * v102) = *v105;
            goto LABEL_151;
          }
          *(_QWORD *)(v101 + 8 * v102) = 0LL;
        }
        else
        {
          v106 = (__int64 *)*v105;
          v122 = v106;
          if ( v106 != *(__int64 **)(v96 + 32) )
          {
            v107 = *((_DWORD *)v106 - 2);
            v81 = *(_DWORD *)(v7 + 124) == 0;
            v133 = v107;
            if ( !v81 )
            {
              v133 = *(_DWORD *)(v7 + 136) ^ v107;
              if ( HIBYTE(v133) != ((unsigned __int8)v133 ^ (unsigned __int8)(BYTE1(v133) ^ BYTE2(v133))) )
              {
                RtlpLogHeapFailure(3, v7, (_DWORD)v106 - 16, 0, 0LL, 0LL);
                v99 = v124;
                v106 = v122;
                v102 = v129;
              }
              v96 = (__int64)v118;
            }
            if ( (_DWORD)v128 == (unsigned __int16)v133 )
            {
              *(_QWORD *)(*(_QWORD *)(v96 + 48) + 8 * v102) = v106;
              goto LABEL_151;
            }
          }
          *(_QWORD *)(*(_QWORD *)(v96 + 48) + 8 * v102) = 0LL;
        }
        *(_DWORD *)(*(_QWORD *)(v96 + 40) + 4 * ((unsigned __int64)v99 >> 5)) &= ~(1 << (v99 & 0x1F));
      }
    }
LABEL_151:
    v108 = (__int64 *)v121;
    v109 = v125;
    *(_QWORD *)v121 = v125;
    v109[1] = v108;
    if ( (v13[10] & 8) == 0 || (unsigned __int8)RtlpCommitBlock(v7, v13) )
      break;
    RtlpDeCommitFreeBlock(v7, v13, *((unsigned __int16 *)v13 + 4), 1LL);
  }
  if ( (v13[10] & 4) != 0 )
  {
    v113 = 16LL * *((unsigned __int16 *)v13 + 4) - 32;
    v81 = (v13[10] & 2) == 0;
    v118 = (__int64 *)v113;
    if ( !v81 && v113 > 4 )
    {
      v113 -= 4LL;
      v118 = (__int64 *)v113;
    }
    v122 = (__int64 *)RtlCompareMemoryUlong(v13 + 32, v113, 4277075694LL);
    if ( v122 != v118 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v13, (char *)v122 + (_QWORD)v13 + 32);
      RtlpBreakPointHeap();
    }
  }
  a2 = (__int64)v119;
  v119[10] = 0;
  *(_BYTE *)(a2 + 15) = 0;
  v5 = *((unsigned __int16 *)v13 + 4) + v138;
  *(_WORD *)(a2 + 8) = v5;
  v110 = v5 ^ *(_WORD *)(v7 + 140);
  v138 = v5;
  *(_WORD *)(a2 + 16 * v5 + 12) = v110;
LABEL_13:
  if ( v5 - 257 <= 0xFDFF )
  {
    RtlpInsertFreeBlock(v7, a2, v5);
    v15 = *(_QWORD *)(v7 + 544) - 16LL * *(_QWORD *)(v7 + 192);
    result = (struct _PEB *)(*(_QWORD *)(v7 + 640) >> 4);
    if ( v15 < *(_QWORD *)(v7 + 640) - (_QWORD)result )
    {
      result = (struct _PEB *)(*(_QWORD *)(v7 + 648) >> 2);
      if ( v15 > *(_QWORD *)(v7 + 648) - (_QWORD)result )
      {
        result = (struct _PEB *)RtlpCollectFreeBlocks(v7);
        *(_QWORD *)(v7 + 648) = v15;
        *(_QWORD *)(v7 + 640) = v15;
      }
    }
    return result;
  }
  v4 = 0;
LABEL_22:
  v17 = *(_BYTE *)(v6 + 14);
  if ( v17 )
    v18 = (v6 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v17 << 16) + 0x10000;
  else
    v18 = v7;
  v19 = a2 + 16 * v5;
  v126 = v19;
  if ( *(_BYTE *)(v19 + 15) == 3 )
  {
    v136 = v19 + 16;
    RtlpRemoveUCRBlock(v7);
    v36 = v136;
    v37 = *(_QWORD *)(v136 + 32);
    v38 = *(char **)(v136 + 40);
    --*(_DWORD *)(v18 + 84);
    v127 = v37;
    *(_DWORD *)(v18 + 80) -= *(_QWORD *)(v136 + 40) >> 12;
    *(_QWORD *)(v7 + 544) += *(_QWORD *)(v136 + 40);
    --*(_DWORD *)(v7 + 572);
    v39 = *(_QWORD *)(v136 + 40);
    v120 = v38;
    if ( v39 >= 0xFF000 )
      *(_QWORD *)(v7 + 552) -= v39;
    v4 = 1;
    a2 = (__int64)v119;
    v19 = v126;
    v135 = 1;
    v5 += (*(_QWORD *)(v36 + 40) >> 4) + 64LL;
    v138 = v5;
  }
  else
  {
    v120 = 0LL;
  }
  if ( *(_WORD *)(v7 + 140) == *(_WORD *)(a2 + 12) )
  {
    v117 = a2;
    v47 = *(_QWORD **)(v18 + 96);
    v48 = a2;
    while ( (_QWORD *)(v18 + 96) != v47 )
    {
      v49 = v47 - 2;
      v50 = v47[2] + v47[3];
      v121 = (unsigned __int64)(v47 - 2);
      if ( v50 == a2 )
        goto LABEL_66;
      v47 = (_QWORD *)*v47;
    }
    v49 = 0LL;
    v121 = 0LL;
LABEL_66:
    if ( v139 && !v49 )
    {
      v4 = v135;
      goto LABEL_27;
    }
    v51 = RtlpHeapErrorHandlerThreshold;
    if ( RtlpHeapErrorHandlerThreshold >= 1 && !v49 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("(UCRBlock != NULL)");
      RtlpHeapHandleError(1LL);
      v48 = v117;
      v51 = RtlpHeapErrorHandlerThreshold;
      a2 = (__int64)v119;
      v5 = v138;
    }
    v52 = v135;
    v53 = 16 * v5;
    v123 = 16 * v5;
    if ( v135 )
    {
      v54 = a2 + v53;
      v118 = (__int64 *)v54;
    }
    else
    {
      v118 = (__int64 *)(v53 + a2);
      v54 = v53 + a2 - 32;
      v52 = 0;
    }
    v116 = (v54 & 0xFFFFFFFFFFFFF000uLL) - v48;
    if ( v116 )
    {
      if ( (int)RtlpSecMemFreeVirtualMemory(v49, &v117, &v116, 0x4000LL) >= 0 )
      {
        v57 = 2147353472LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v56, v55) )
          v58 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v58 = 2147353472LL;
        if ( *(_BYTE *)v58 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapDecommit(v7, v117, v116, 5LL);
        ++*(_DWORD *)(v7 + 580);
        v59 = *(_QWORD *)(v121 + 40);
        if ( v59 >= 0xFF000 )
          *(_QWORD *)(v7 + 552) -= v59;
        RtlpRemoveUCRBlock(v7);
        v60 = (__int64 *)v121;
        *(_QWORD *)(v121 + 40) += v116;
        RtlpInsertUCRBlock(v7, v60);
        *(_DWORD *)(v18 + 80) += v116 >> 12;
        *(_QWORD *)(v7 + 544) -= v116;
        v62 = *(_QWORD *)(v121 + 40);
        if ( v62 >= 0xFF000 )
          *(_QWORD *)(v7 + 552) += v62;
        if ( !v135 )
        {
          v63 = (_BYTE *)(v117 + v116);
          *(_WORD *)(v117 + v116 + 12) = *(_WORD *)(v7 + 140);
          v62 = v116 + v117;
          if ( v118 == (__int64 *)(v116 + v117) )
          {
            if ( *(_DWORD *)(v7 + 124) )
            {
              v63[11] = v63[8] ^ v63[9] ^ v63[10];
              *((_DWORD *)v63 + 2) ^= *(_DWORD *)(v7 + 136);
            }
          }
          else
          {
            v64 = v123;
            v63[15] = 0;
            v63[10] = 0;
            v65 = (v64 - v116) >> 4;
            v43 = RtlpHeapErrorHandlerThreshold < 1;
            *((_WORD *)v63 + 4) = v65;
            if ( !v43 && (unsigned __int16)v65 <= 1u )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint("((LONG)FreeEntry->Size > 1)");
              RtlpHeapHandleError(1LL);
            }
            v63[11] = 0;
            v66 = *(_QWORD *)(v18 + 40);
            if ( v66 == v18 )
            {
              LOBYTE(v67) = 0;
            }
            else
            {
              v67 = ((unsigned __int64)&v63[-v18] >> 16) + 1;
              v126 = v67;
              if ( (unsigned __int64)&v63[-v18] >> 16 > 0xFC )
              {
                RtlpLogHeapFailure(3, v66, (_DWORD)v63, v18, 0LL, 0LL);
                LOBYTE(v67) = v126;
              }
            }
            v68 = *((unsigned __int16 *)v63 + 4);
            v63[14] = v67;
            RtlpInsertFreeBlock(v7, v63, v68);
          }
          v57 = 2147353472LL;
        }
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v62, v61) )
          v70 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v70 = 2147353472LL;
        if ( *(_BYTE *)v70 )
        {
          v70 = 1LL;
          if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( (unsigned int)RtlGetCurrentServiceSessionId(1LL, v69) )
              v57 = (__int64)NtCurrentPeb()->SharedData + 550;
            RtlpLogHeapContractEvent(
              v7,
              v117,
              v116,
              16 * *(_QWORD *)(v7 + 192),
              v135,
              (__int64)v120,
              *(unsigned __int8 *)v57);
          }
        }
        result = (struct _PEB *)RtlGetCurrentServiceSessionId(v70, v69);
        v72 = 2147353482LL;
        if ( (_DWORD)result )
        {
          result = NtCurrentPeb();
          v73 = (__int64)result->SharedData + 560;
        }
        else
        {
          v73 = 2147353482LL;
        }
        if ( *(_BYTE *)v73 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v73, v71) )
            v72 = (__int64)NtCurrentPeb()->SharedData + 560;
          return (struct _PEB *)RtlpLogHeapContractEvent(
                                  v7,
                                  v117,
                                  v116,
                                  16 * (unsigned int)*(_QWORD *)(v7 + 192),
                                  v135,
                                  (__int64)v120,
                                  *(unsigned __int8 *)v72);
        }
        return result;
      }
LABEL_207:
      ++*(_DWORD *)(v7 + 596);
      if ( !v135 )
      {
LABEL_254:
        a2 = (__int64)v119;
LABEL_61:
        a3 = v5;
        goto LABEL_19;
      }
      RtlpCreateUCREntry(v7, v18, v127 - 48, (_DWORD)v120, (__int64)v119, (__int64)&v138);
LABEL_253:
      v5 = v138;
      goto LABEL_254;
    }
    if ( v51 < 1 || !v52 )
      goto LABEL_61;
    if ( NtCurrentPeb()->Ldr )
      goto LABEL_250;
    goto LABEL_251;
  }
LABEL_27:
  v20 = (a2 + 4159) & 0xFFFFFFFFFFFFF000uLL;
  v117 = v20;
  if ( v20 == a2 + 80 )
  {
    v20 += 4096LL;
    v117 = v20;
  }
  v121 = 16 * v5;
  v118 = (__int64 *)(a2 + 16 * v5);
  v21 = (__int64)(v118 - 4);
  if ( v4 )
    v21 = a2 + 16 * v5;
  v22 = v21 & 0xFFFFFFFFFFFFF000uLL;
  v116 = v22;
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
  v116 = v23;
  if ( !v139 && *(_BYTE *)(v19 + 15) != 3 && (!v23 || v23 < *(_QWORD *)(v7 + 176)) )
    goto LABEL_61;
  if ( !v23 )
    goto LABEL_42;
  ++*(_DWORD *)(v7 + 580);
  if ( (int)RtlpSecMemFreeVirtualMemory(-4096LL, &v117, &v116, 0x4000LL) < 0 )
    goto LABEL_207;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v25, v24) )
    v26 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v26 = 2147353472LL;
  if ( *(_BYTE *)v26 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapDecommit(v7, v117, v116, 6LL);
  v4 = v135;
  a2 = (__int64)v119;
  v23 = v116;
  v20 = v117;
LABEL_42:
  if ( !v4 )
  {
    v40 = (_BYTE *)(v23 + v20);
    *(_WORD *)(v23 + v20 + 12) = *(_WORD *)(v7 + 140);
    LODWORD(v23) = v116;
    LODWORD(v20) = v117;
    if ( v118 == (__int64 *)(v116 + v117) )
    {
      if ( !*(_DWORD *)(v7 + 124) )
        goto LABEL_43;
      v40[11] = v40[8] ^ v40[9] ^ v40[10];
      *((_DWORD *)v40 + 2) ^= *(_DWORD *)(v7 + 136);
    }
    else
    {
      v41 = (__int64 *)v121;
      v40[15] = 0;
      v40[10] = 0;
      v42 = ((unsigned __int64)v41 + a2 - v117 - v116) >> 4;
      v43 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v40 + 4) = v42;
      if ( !v43 && (unsigned __int16)v42 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("(LONG)FreeEntry->Size > 1");
        RtlpHeapHandleError(1LL);
      }
      v40[11] = 0;
      v44 = *(_QWORD *)(v18 + 40);
      if ( v44 == v18 )
      {
        LOBYTE(v45) = 0;
      }
      else
      {
        v45 = ((unsigned __int64)&v40[-v18] >> 16) + 1;
        v137 = v45;
        if ( (unsigned __int64)&v40[-v18] >> 16 > 0xFC )
        {
          RtlpLogHeapFailure(3, v44, (_DWORD)v40, v18, 0LL, 0LL);
          LOBYTE(v45) = v137;
        }
      }
      v46 = *((unsigned __int16 *)v40 + 4);
      v40[14] = v45;
      RtlpInsertFreeBlock(v7, v40, v46);
    }
    LODWORD(v23) = v116;
    LODWORD(v20) = v117;
  }
LABEL_43:
  v27 = (__int64)v119;
  RtlpCreateUCREntry(v7, v18, v20 - 48, v23, (__int64)v119, (__int64)&v130);
  RtlpInsertFreeBlock(v7, v27, v130);
  v31 = 2147353472LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v29, v28) )
    v32 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v32 = 2147353472LL;
  if ( *(_BYTE *)v32 )
  {
    v32 = 1LL;
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(1LL, v30) )
        v31 = (__int64)NtCurrentPeb()->SharedData + 550;
      RtlpLogHeapContractEvent(v7, v117, v116, 16 * *(_QWORD *)(v7 + 192), 0, 0LL, *(unsigned __int8 *)v31);
    }
  }
  result = (struct _PEB *)RtlGetCurrentServiceSessionId(v32, v30);
  v34 = 2147353482LL;
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v35 = (__int64)result->SharedData + 560;
  }
  else
  {
    v35 = 2147353482LL;
  }
  if ( *(_BYTE *)v35 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v35, v33) )
      v34 = (__int64)NtCurrentPeb()->SharedData + 560;
    return (struct _PEB *)RtlpLogHeapContractEvent(
                            v7,
                            v117,
                            v116,
                            16 * *(_DWORD *)(v7 + 192),
                            0,
                            0LL,
                            *(unsigned __int8 *)v34);
  }
  return result;
}
