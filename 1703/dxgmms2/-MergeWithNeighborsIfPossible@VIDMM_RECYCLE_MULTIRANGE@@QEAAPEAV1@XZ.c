/*
 * XREFs of ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C00670E0
 * Callers:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00660D0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0064838 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064948 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0065AD0 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00665D0 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0067AC0 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0068720 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(
        PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rax
  PSLIST_ENTRY v2; // rbx
  struct _SLIST_ENTRY *v3; // r14
  unsigned int v4; // ebp
  _QWORD *v5; // rcx
  struct _SLIST_ENTRY *v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r15
  struct _SLIST_ENTRY *v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _SLIST_ENTRY *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _SLIST_ENTRY *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  struct _SLIST_ENTRY *v25; // rcx
  __int64 v26; // rax
  void *v27; // rcx
  struct _SLIST_ENTRY *v28; // r12
  struct _SLIST_ENTRY *v29; // r13
  __int64 v30; // rbx
  __int64 v31; // rbx
  void *v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  CCHAR LeastSignificantBit; // al
  unsigned int v41; // r12d
  void *v42; // rcx
  __int64 v43; // r13
  __int64 v44; // r15
  __int64 v45; // r15
  struct _SLIST_ENTRY *v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rdi
  void *v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rbx
  __int64 v52; // rdi
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 (__fastcall *v56)(__int64, __int64, __int64, __int64); // rax
  __int64 v57; // r8
  __int64 v58; // rcx
  struct _SLIST_ENTRY *v59; // rdi
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 (__fastcall *v63)(__int64, __int64, __int64, __int64); // rax
  __int64 v64; // r8
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // [rsp+70h] [rbp+8h]
  __int64 v68; // [rsp+70h] [rbp+8h]
  __int64 v69; // [rsp+78h] [rbp+10h]
  struct _SLIST_ENTRY *v70; // [rsp+78h] [rbp+10h]
  __int64 v71; // [rsp+80h] [rbp+18h]

  Next = ListEntry[4].Next;
  v2 = ListEntry;
  v3 = ListEntry[5].Next;
  v4 = *((_DWORD *)&ListEntry[13].Next + 2);
  v5 = 0LL;
  v6 = Next[8].Next;
  if ( v6 != (struct _SLIST_ENTRY *)(*((_QWORD *)&Next[4].Next + 1) + 72LL) )
    v5 = &v6[-8].Next + 1;
  v7 = 0LL;
  if ( v5 )
  {
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        v7 = v5[18];
      }
      else if ( v4 == 2 )
      {
        v7 = v5[19];
      }
      else
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4 - 1, v6);
        v53[3] = 270LL;
        v53[4] = 52LL;
        v53[5] = 10LL;
        v53[6] = 0LL;
        v53[7] = 0LL;
        WdLogEvent5_WdCriticalError(v53);
      }
    }
    else
    {
      v7 = v5[17];
    }
  }
  v8 = *((_QWORD *)&v2[4].Next + 1);
  v9 = 0LL;
  v10 = *(_QWORD *)(v8 + 120);
  v11 = *(_QWORD *)(v8 + 72) + 72LL;
  if ( v10 != v11 )
    v9 = (_QWORD *)(v10 - 120);
  v12 = 0LL;
  if ( v9 )
  {
    v11 = *((unsigned int *)&v2[13].Next + 2);
    if ( (_DWORD)v11 )
    {
      v11 = (unsigned int)(v11 - 1);
      if ( (_DWORD)v11 )
      {
        if ( (_DWORD)v11 == 1 )
        {
          v12 = v9[19];
        }
        else
        {
          v54 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10, v9);
          v54[3] = 270LL;
          v54[4] = 52LL;
          v54[5] = 10LL;
          v54[6] = 0LL;
          v54[7] = 0LL;
          WdLogEvent5_WdCriticalError(v54);
        }
      }
      else
      {
        v12 = v9[18];
      }
    }
    else
    {
      v12 = v9[17];
    }
  }
  if ( v7 )
  {
    if ( v12 )
    {
      v41 = *((_DWORD *)&v2[5].Next + 2);
      v70 = *(struct _SLIST_ENTRY **)(v7 + 64);
      v71 = *(_QWORD *)(v12 + 72);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)v2[5].Next[2].Next, v41, v7);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)v2[5].Next[2].Next, v41, (__int64)v2);
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)v2[5].Next[2].Next, v41, v12);
      v42 = *(void **)(v7 + 96);
      v43 = *(_QWORD *)(v7 + 32);
      v68 = *(_QWORD *)(v12 + 40);
      v44 = *((_QWORD *)&v3[2].Next->Next + 1);
      if ( v42 )
      {
        ExFreePoolWithTag(v42, 0);
        *(_QWORD *)(v7 + 96) = 0LL;
      }
      --*(_QWORD *)(*(_QWORD *)(v7 + 80) + 8LL);
      v45 = *(_QWORD *)(v44 + 1176);
      ++*(_DWORD *)(v45 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v45) >= *(_WORD *)(v45 + 16) )
      {
        ++*(_DWORD *)(v45 + 32);
        (*(void (__fastcall **)(__int64, __int64))(v45 + 56))(v7, v45);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v45, (PSLIST_ENTRY)v7);
      }
      v46 = v2[6].Next;
      v47 = *((_QWORD *)&v3[2].Next->Next + 1);
      if ( v46 )
      {
        ExFreePoolWithTag(v46, 0);
        v2[6].Next = 0LL;
      }
      --*((_QWORD *)&v2[5].Next->Next + 1);
      v48 = *(_QWORD *)(v47 + 1176);
      ++*(_DWORD *)(v48 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v48) >= *(_WORD *)(v48 + 16) )
      {
        ++*(_DWORD *)(v48 + 32);
        (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v48 + 56))(v2, v48);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v48, v2);
      }
      v49 = *(void **)(v12 + 96);
      v50 = *((_QWORD *)&v3[2].Next->Next + 1);
      if ( v49 )
      {
        ExFreePoolWithTag(v49, 0);
        *(_QWORD *)(v12 + 96) = 0LL;
      }
      --*(_QWORD *)(*(_QWORD *)(v12 + 80) + 8LL);
      v51 = *(_QWORD *)(v50 + 1176);
      ++*(_DWORD *)(v51 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v51) >= *(_WORD *)(v51 + 16) )
      {
        ++*(_DWORD *)(v51 + 32);
        (*(void (__fastcall **)(__int64, __int64))(v51 + 56))(v12, v51);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v51, (PSLIST_ENTRY)v12);
      }
      v52 = *(_QWORD *)(*((_QWORD *)&v3[2].Next->Next + 1) + 1176LL);
      ++*(_DWORD *)(v52 + 20);
      v2 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v52);
      if ( v2
        || (v55 = *(unsigned int *)(v52 + 44),
            v56 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v52 + 48),
            v57 = *(unsigned int *)(v52 + 40),
            v58 = *(unsigned int *)(v52 + 36),
            ++*(_DWORD *)(v52 + 24),
            (v2 = (PSLIST_ENTRY)v56(v58, v55, v57, v52)) != 0LL) )
      {
        VIDMM_RECYCLE_MULTIRANGE::Init(v2, v4, v3, v43, v68);
      }
      v2[4].Next = v70;
      *((_QWORD *)&v2[4].Next + 1) = v71;
      VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v2);
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(&v3[2].Next->Next, v41, (__int64)v2);
      if ( v3->Next == (struct _SLIST_ENTRY *)1 && !v4 )
      {
        v59 = v2[4].Next;
        if ( !LODWORD(v59[4].Next) )
          goto LABEL_87;
      }
      return (struct VIDMM_RECYCLE_MULTIRANGE *)v2;
    }
    v12 = (__int64)v2;
  }
  else
  {
    if ( !v12 )
      return (struct VIDMM_RECYCLE_MULTIRANGE *)v2;
    v7 = (__int64)v2;
  }
  v13 = *((int *)&v2[5].Next + 2);
  v14 = v2[5].Next[2].Next;
  v15 = WdLogNewEntry5_WdEvent(v11, v10);
  *(_QWORD *)(v15 + 24) = v7;
  *(_QWORD *)(v15 + 32) = v13;
  WdLogEvent5_WdEvent(v15);
  switch ( (_DWORD)v13 )
  {
    case 0:
      v18 = v14 + 3;
      goto LABEL_22;
    case 1:
      v18 = (struct _SLIST_ENTRY *)((char *)v14 + 56);
      goto LABEL_22;
    case 2:
      v18 = v14 + 4;
LABEL_22:
      RtlAvlRemoveNode(v18, v7);
      goto LABEL_23;
  }
  v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v13 - 1), v16, v17);
  v60[3] = 270LL;
  v60[4] = 52LL;
  v60[5] = 16LL;
  v60[6] = v13;
  v60[7] = 0LL;
  WdLogEvent5_WdCriticalError(v60);
LABEL_23:
  *(_DWORD *)(v7 + 88) = 3;
  v21 = v2[5].Next[2].Next;
  v22 = WdLogNewEntry5_WdEvent(v20, v19);
  *(_QWORD *)(v22 + 24) = v12;
  *(_QWORD *)(v22 + 32) = v13;
  WdLogEvent5_WdEvent(v22);
  switch ( (_DWORD)v13 )
  {
    case 0:
      v25 = v21 + 3;
      goto LABEL_27;
    case 1:
      v25 = (struct _SLIST_ENTRY *)((char *)v21 + 56);
      goto LABEL_27;
    case 2:
      v25 = v21 + 4;
LABEL_27:
      RtlAvlRemoveNode(v25, v12);
      goto LABEL_28;
  }
  v61 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v13 - 1), v23, v24);
  v61[3] = 270LL;
  v61[4] = 52LL;
  v61[5] = 16LL;
  v61[6] = v13;
  v61[7] = 0LL;
  WdLogEvent5_WdCriticalError(v61);
LABEL_28:
  v26 = *(_QWORD *)(v12 + 40);
  *(_DWORD *)(v12 + 88) = 3;
  v27 = *(void **)(v7 + 96);
  v28 = *(struct _SLIST_ENTRY **)(v7 + 32);
  v29 = *(struct _SLIST_ENTRY **)(v7 + 64);
  v67 = v26;
  v69 = *(_QWORD *)(v12 + 72);
  v30 = *((_QWORD *)&v3[2].Next->Next + 1);
  if ( v27 )
  {
    ExFreePoolWithTag(v27, 0);
    *(_QWORD *)(v7 + 96) = 0LL;
  }
  --*(_QWORD *)(*(_QWORD *)(v7 + 80) + 8LL);
  v31 = *(_QWORD *)(v30 + 1176);
  ++*(_DWORD *)(v31 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v31) >= *(_WORD *)(v31 + 16) )
  {
    ++*(_DWORD *)(v31 + 32);
    (*(void (__fastcall **)(__int64, __int64))(v31 + 56))(v7, v31);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v31, (PSLIST_ENTRY)v7);
  }
  v32 = *(void **)(v12 + 96);
  v33 = *((_QWORD *)&v3[2].Next->Next + 1);
  if ( v32 )
  {
    ExFreePoolWithTag(v32, 0);
    *(_QWORD *)(v12 + 96) = 0LL;
  }
  --*(_QWORD *)(*(_QWORD *)(v12 + 80) + 8LL);
  v34 = *(_QWORD *)(v33 + 1176);
  ++*(_DWORD *)(v34 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v34) >= *(_WORD *)(v34 + 16) )
  {
    ++*(_DWORD *)(v34 + 32);
    (*(void (__fastcall **)(__int64, __int64))(v34 + 56))(v12, v34);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v34, (PSLIST_ENTRY)v12);
  }
  v35 = *(_QWORD *)(*((_QWORD *)&v3[2].Next->Next + 1) + 1176LL);
  ++*(_DWORD *)(v35 + 20);
  v2 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v35);
  if ( v2
    || (v62 = *(unsigned int *)(v35 + 44),
        v63 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v35 + 48),
        v64 = *(unsigned int *)(v35 + 40),
        v65 = *(unsigned int *)(v35 + 36),
        ++*(_DWORD *)(v35 + 24),
        (v2 = (PSLIST_ENTRY)v63(v65, v62, v64, v35)) != 0LL) )
  {
    v38 = WdLogNewEntry5_WdEvent(v37, v36);
    *(_QWORD *)(v38 + 24) = v2;
    WdLogEvent5_WdEvent(v38);
    v2[2].Next = v28;
    *((_QWORD *)&v2[2].Next + 1) = v67;
    *((_DWORD *)&v2[1].Next + 2) = 1;
    v2[4].Next = 0LL;
    *((_QWORD *)&v2[4].Next + 1) = 0LL;
    v2[5].Next = v3;
    v2[3].Next = v28;
    *((_DWORD *)&v2[13].Next + 2) = v4;
    LOWORD(v2[8].Next) = 0;
    ++*((_QWORD *)&v3->Next + 1);
    LeastSignificantBit = RtlFindLeastSignificantBit((ULONGLONG)v2[2].Next);
    if ( LeastSignificantBit < 0 )
      *((_QWORD *)&v2[3].Next + 1) = 0LL;
    else
      *((_QWORD *)&v2[3].Next + 1) = 1LL << LeastSignificantBit;
    *((_QWORD *)&v2[5].Next + 1) = 3LL;
    v2[6].Next = 0LL;
    *((_QWORD *)&v2[6].Next + 1) = 0LL;
    v2[7].Next = 0LL;
    *((_QWORD *)&v2[7].Next + 1) = 0LL;
    BYTE2(v2[8].Next) = 0;
    *((_QWORD *)&v2[8].Next + 1) = 0LL;
    v2[9].Next = 0LL;
    v2[12].Next = 0LL;
    *((_WORD *)&v2[9].Next + 4) = 0;
    v2[10].Next = 0LL;
    *((_QWORD *)&v2[10].Next + 1) = 0LL;
    *((_QWORD *)&v2[11].Next + 1) = 0LL;
    v2[11].Next = 0LL;
    *((_QWORD *)&v2[12].Next + 1) = 0LL;
    v2[13].Next = 0LL;
  }
  *((_QWORD *)&v2[4].Next + 1) = v69;
  v2[4].Next = v29;
  VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)v2);
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(&v3[2].Next->Next, (unsigned int)v13, (__int64)v2);
  if ( v3->Next == (struct _SLIST_ENTRY *)1 && !v4 )
  {
    v59 = v2[4].Next;
    if ( !LODWORD(v59[4].Next) )
    {
LABEL_87:
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree((__int64)v3[2].Next, 2LL, (__int64)v2);
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)&v3[2].Next->Next + 1), v2);
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(*((VIDMM_RECYCLE_HEAP_MGR **)&v3[2].Next->Next + 1), v59, v66);
    }
  }
  return (struct VIDMM_RECYCLE_MULTIRANGE *)v2;
}
