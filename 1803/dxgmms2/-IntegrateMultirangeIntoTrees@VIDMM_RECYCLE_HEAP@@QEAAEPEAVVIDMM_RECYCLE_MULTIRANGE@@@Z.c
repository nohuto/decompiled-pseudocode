/*
 * XREFs of ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0070970
 * Callers:
 *     ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006FFE8 (-Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007047C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C006D734 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C006D7A4 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C006EF50 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C006F3E8 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0070210 (-Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0070330 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0071350 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0071E9C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C007ADE4 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00AD54C (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

unsigned __int8 __fastcall VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  struct VIDMM_RECYCLE_RANGE *v2; // rbx
  __int64 *v3; // r14
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r13
  PSLIST_ENTRY v8; // r15
  struct _SLIST_ENTRY *v9; // rax
  struct _SLIST_ENTRY *v10; // rcx
  struct _SLIST_ENTRY *v11; // rcx
  _QWORD *Next_low; // rdx
  struct VIDMM_RECYCLE_RANGE *v13; // rsi
  __int64 *NextRange; // rdi
  VIDMM_RECYCLE_HEAP *v15; // r13
  __int64 v16; // r12
  __int64 v17; // r13
  PSLIST_ENTRY v18; // rsi
  struct _SLIST_ENTRY *v19; // rax
  struct _SLIST_ENTRY *v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rsi
  PSLIST_ENTRY v23; // rdi
  struct _SLIST_ENTRY *v24; // rax
  _QWORD **v25; // rsi
  _QWORD **v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r8
  struct _RTL_BALANCED_NODE *v29; // rbx
  __int64 v30; // rax
  struct _RTL_BALANCED_NODE *v31; // rax
  struct _SLIST_ENTRY *v32; // rcx
  _QWORD *v33; // rsi
  struct _SLIST_ENTRY *v34; // rdi
  __int64 v35; // rdx
  struct _SLIST_ENTRY *v36; // rbx
  __int64 v38; // rdx
  __int64 (__fastcall *v39)(__int64, __int64, __int64, __int64); // rax
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 (__fastcall *v44)(__int64, __int64, __int64, __int64); // rax
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 (__fastcall *v48)(__int64, __int64, __int64, __int64); // rax
  __int64 v49; // r8
  __int64 v50; // rcx
  struct VIDMM_RECYCLE_RANGE *PreviousRange; // r12
  PSLIST_ENTRY Multirange; // rax
  PSLIST_ENTRY v53; // r8
  struct _SLIST_ENTRY *v54; // rax
  struct _SLIST_ENTRY *v55; // r8
  _QWORD *v56; // rax
  _QWORD *v57; // rbx
  _QWORD *v58; // rdx
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  int v60; // ecx
  int v61; // ecx
  __int64 v62; // rdx
  _QWORD *v63; // [rsp+30h] [rbp-38h] BYREF
  struct _SLIST_ENTRY *v64; // [rsp+38h] [rbp-30h]
  _QWORD v65[2]; // [rsp+40h] [rbp-28h] BYREF
  char v66; // [rsp+50h] [rbp-18h]
  __int64 v69; // [rsp+C0h] [rbp+58h]
  __int64 v70; // [rsp+C0h] [rbp+58h]
  __int64 v71; // [rsp+C8h] [rbp+60h]
  __int64 v72; // [rsp+C8h] [rbp+60h]

  v64 = (struct _SLIST_ENTRY *)&v63;
  v63 = &v63;
  v2 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8);
  v3 = (__int64 *)*((_QWORD *)a2 + 9);
  v4 = *((_QWORD *)v2 + 4);
  v5 = v3[5];
  v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 1320LL);
  v7 = *((_QWORD *)v2 + 9);
  ++*(_DWORD *)(v6 + 20);
  v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v6);
  if ( !v8 )
  {
    v47 = *(unsigned int *)(v6 + 44);
    v48 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v6 + 48);
    v49 = *(unsigned int *)(v6 + 40);
    v50 = *(unsigned int *)(v6 + 36);
    ++*(_DWORD *)(v6 + 24);
    v8 = (PSLIST_ENTRY)v48(v50, v47, v49, v6);
    if ( !v8 )
      goto LABEL_34;
  }
  VIDMM_RECYCLE_MULTIRANGE::Init((__int64)v8, 0LL, v7, v4, v5);
  v8[4].Next = (struct _SLIST_ENTRY *)v2;
  *((_QWORD *)&v8[4].Next + 1) = v3;
  v9 = (PSLIST_ENTRY)((char *)v8 + 200);
  *((_DWORD *)&v8[5].Next + 2) = 2;
  v10 = v64;
  if ( v64->Next != (struct _SLIST_ENTRY *)&v63 )
    __fastfail(3u);
  v8[13].Next = v64;
  v9->Next = (struct _SLIST_ENTRY *)&v63;
  v10->Next = v9;
  v64 = (PSLIST_ENTRY)((char *)v8 + 200);
  v11 = *(struct _SLIST_ENTRY **)(*((_QWORD *)a2 + 10) + 32LL);
  Next_low = (_QWORD *)LODWORD(v11->Next);
  if ( (unsigned int)((_DWORD)Next_low - 3) > 3 && (unsigned int)((_DWORD)Next_low - 9) > 1 )
  {
    v13 = v2;
    NextRange = 0LL;
    while ( 1 )
    {
      if ( *((_DWORD *)v13 + 16) )
      {
        v15 = this;
        if ( !NextRange )
          NextRange = (__int64 *)v13;
      }
      else if ( NextRange )
      {
        v15 = this;
        PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v13);
        Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                       *((_QWORD *)this + 1),
                       1u,
                       *((_QWORD *)v2 + 9),
                       NextRange[4],
                       *((_QWORD *)PreviousRange + 5));
        v53 = Multirange;
        if ( !Multirange )
          goto LABEL_51;
        Multirange[4].Next = (struct _SLIST_ENTRY *)NextRange;
        *((_QWORD *)&Multirange[4].Next + 1) = PreviousRange;
        *((_DWORD *)&Multirange[5].Next + 2) = 1;
        while ( 1 )
        {
          NextRange[18] = (__int64)v53;
          if ( NextRange == (__int64 *)PreviousRange )
            break;
          NextRange = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)NextRange);
        }
        v54 = v64;
        v55 = (PSLIST_ENTRY)((char *)v53 + 200);
        if ( v64->Next != (struct _SLIST_ENTRY *)&v63 )
          __fastfail(3u);
        *((_QWORD *)&v55->Next + 1) = v64;
        v11 = (struct _SLIST_ENTRY *)&v63;
        v55->Next = (struct _SLIST_ENTRY *)&v63;
        NextRange = 0LL;
        v54->Next = v55;
        v64 = v55;
      }
      else
      {
        v15 = this;
      }
      if ( v13 == (struct VIDMM_RECYCLE_RANGE *)v3 )
        break;
      v13 = VIDMM_RECYCLE_RANGE::GetNextRange(v13);
    }
    if ( !NextRange )
      goto LABEL_16;
    v16 = v3[5];
    v69 = NextRange[4];
    v71 = *((_QWORD *)v2 + 9);
    v17 = *(_QWORD *)(*((_QWORD *)v15 + 1) + 1320LL);
    ++*(_DWORD *)(v17 + 20);
    v18 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v17);
    if ( v18
      || (v43 = *(unsigned int *)(v17 + 44),
          v44 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v17 + 48),
          v45 = *(unsigned int *)(v17 + 40),
          v46 = *(unsigned int *)(v17 + 36),
          ++*(_DWORD *)(v17 + 24),
          (v18 = (PSLIST_ENTRY)v44(v46, v43, v45, v17)) != 0LL) )
    {
      VIDMM_RECYCLE_MULTIRANGE::Init((__int64)v18, 1LL, v71, v69, v16);
      v18[4].Next = (struct _SLIST_ENTRY *)NextRange;
      *((_QWORD *)&v18[4].Next + 1) = v3;
      *((_DWORD *)&v18[5].Next + 2) = 1;
      while ( 1 )
      {
        NextRange[18] = (__int64)v18;
        if ( NextRange == v3 )
          break;
        NextRange = (__int64 *)VIDMM_RECYCLE_RANGE::GetNextRange((VIDMM_RECYCLE_RANGE *)NextRange);
      }
      v19 = v64;
      v20 = (PSLIST_ENTRY)((char *)v18 + 200);
      if ( v64->Next != (struct _SLIST_ENTRY *)&v63 )
        __fastfail(3u);
      *((_QWORD *)&v20->Next + 1) = v64;
      v11 = (struct _SLIST_ENTRY *)&v63;
      v20->Next = (struct _SLIST_ENTRY *)&v63;
      v19->Next = v20;
      v64 = v20;
      goto LABEL_16;
    }
LABEL_34:
    v15 = this;
LABEL_51:
    v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, Next_low);
    v56[3] = *((_QWORD *)a2 + 10);
    v56[4] = *(_QWORD *)(*((_QWORD *)a2 + 8) + 32LL);
    v56[5] = *(_QWORD *)(*((_QWORD *)a2 + 9) + 40LL);
    v56[6] = **(_QWORD **)(*((_QWORD *)v15 + 1) + 8LL);
    WdLogEvent5_WdWarning(v56);
    v57 = v63;
    while ( v57 != &v63 )
    {
      v58 = v57 - 25;
      v57 = (_QWORD *)*v57;
      *((_DWORD *)v58 + 22) = 3;
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)v15 + 1), (struct _SLIST_ENTRY *)v58);
    }
    for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
    {
      v60 = *((_DWORD *)i + 16);
      *((_QWORD *)i + 17) = 0LL;
      *((_QWORD *)i + 18) = 0LL;
      *((_QWORD *)i + 19) = 0LL;
      *((_QWORD *)i + 20) = 0LL;
      if ( v60 )
      {
        v61 = v60 - 4;
        if ( v61 )
        {
          if ( v61 != 1 )
            goto LABEL_61;
          v62 = 1LL;
        }
        else
        {
          v62 = 0LL;
        }
      }
      else
      {
        v62 = 2LL;
      }
      VIDMM_RECYCLE_HEAP::AddRangeToTree(v15, v62, i);
LABEL_61:
      if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
        return 0;
    }
  }
  while ( 1 )
  {
LABEL_16:
    v15 = this;
    if ( *((_DWORD *)v2 + 16) == 4 )
    {
      v21 = *((_QWORD *)v2 + 5);
      v70 = *((_QWORD *)v2 + 4);
      v72 = *((_QWORD *)v2 + 9);
      v22 = *(_QWORD *)(*((_QWORD *)this + 1) + 1320LL);
      ++*(_DWORD *)(v22 + 20);
      v23 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v22);
      if ( !v23 )
      {
        v38 = *(unsigned int *)(v22 + 44);
        v39 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v22 + 48);
        v40 = *(unsigned int *)(v22 + 40);
        v41 = *(unsigned int *)(v22 + 36);
        ++*(_DWORD *)(v22 + 24);
        v23 = (PSLIST_ENTRY)v39(v41, v38, v40, v22);
        if ( !v23 )
          goto LABEL_51;
      }
      VIDMM_RECYCLE_MULTIRANGE::Init((__int64)v23, 2LL, v72, v70, v21);
      v23[4].Next = (struct _SLIST_ENTRY *)v2;
      *((_QWORD *)&v23[4].Next + 1) = v2;
      v24 = (PSLIST_ENTRY)((char *)v23 + 200);
      *((_QWORD *)v2 + 19) = v23;
      *((_DWORD *)&v23[5].Next + 2) = 0;
      v11 = v64;
      if ( v64->Next != (struct _SLIST_ENTRY *)&v63 )
        __fastfail(3u);
      v23[13].Next = v64;
      Next_low = &v63;
      v24->Next = (struct _SLIST_ENTRY *)&v63;
      v11->Next = v24;
      v64 = (PSLIST_ENTRY)((char *)v23 + 200);
    }
    *((_QWORD *)v2 + 17) = v8;
    *((_QWORD *)v2 + 20) = 0LL;
    if ( v2 == (struct VIDMM_RECYCLE_RANGE *)v3 )
      break;
    v2 = VIDMM_RECYCLE_RANGE::GetNextRange(v2);
  }
  v25 = (_QWORD **)v63;
  *((_DWORD *)v63 - 28) = 3;
  v26 = v25 - 25;
  v27 = WdLogNewEntry5_WdEvent(v11, Next_low);
  *(_QWORD *)(v27 + 24) = v25 - 25;
  *(_QWORD *)(v27 + 32) = 2LL;
  WdLogEvent5_WdEvent(v27);
  LOBYTE(v28) = 0;
  v29 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
  v30 = (__int64)*(v25 - 18);
  v65[0] = (char *)v26[5] - (char *)v26[4];
  v65[1] = v30;
  v66 = 0;
  if ( v29 )
  {
    while ( 1 )
    {
      if ( (int)VidMmCompareForInsertAlignedRange(v65, v29) < 0 )
      {
        v31 = v29->Children[0];
        if ( !v29->Children[0] )
        {
          LOBYTE(v28) = 0;
          break;
        }
      }
      else
      {
        v31 = v29->Children[1];
        if ( !v31 )
        {
          LOBYTE(v28) = 1;
          break;
        }
      }
      v29 = v31;
    }
  }
  RtlAvlInsertNodeEx((char *)this + 64, v29, v28, v25 - 25);
  *((_DWORD *)v26 + 22) = 2;
  v32 = (struct _SLIST_ENTRY *)(v25 - 25);
  v33 = *v25;
  v34 = (struct _SLIST_ENTRY *)VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v32);
  while ( v33 != &v63 )
  {
    v35 = *((unsigned int *)v33 - 28);
    v36 = (struct _SLIST_ENTRY *)(v33 - 25);
    *((_DWORD *)v33 - 28) = 3;
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v35, (__int64)(v33 - 25));
    v33 = (_QWORD *)*v33;
    VIDMM_RECYCLE_MULTIRANGE::MergeWithNeighborsIfPossible(v36);
  }
  return VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v34);
}
