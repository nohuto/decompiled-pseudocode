/*
 * XREFs of ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0070738
 * Callers:
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00717D0 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C00718B4 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0071A10 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C006D7A4 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1C006E9E4 (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0070330 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0070D80 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0071E9C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00AD54C (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00ADFD4 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  __int64 v4; // rsi
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r9
  void *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rbx
  int v14; // edx
  __int64 v15; // r8
  struct VIDMM_RECYCLE_RANGE *NextRange; // r13
  __int64 v17; // rbx
  __int64 v18; // r9
  __int64 v19; // r10
  PSLIST_ENTRY Multirange; // r15
  int v21; // eax
  int v22; // eax
  __int64 v23; // [rsp+68h] [rbp+10h]

  if ( *((_DWORD *)a2 + 16) == 4 )
  {
    v5 = 0;
    v4 = *((_QWORD *)a2 + 19);
    v14 = **(_DWORD **)(*((_QWORD *)a2 + 9) + 32LL);
    if ( (unsigned int)(v14 - 3) <= 3 )
      goto LABEL_4;
    v6 = 1;
    if ( (unsigned int)(v14 - 9) <= 1 )
      goto LABEL_4;
  }
  else
  {
    if ( *((_DWORD *)a2 + 16) == 5 )
    {
      v4 = *((_QWORD *)a2 + 18);
      v5 = 1;
LABEL_4:
      v6 = 2;
      goto LABEL_5;
    }
    v4 = v23;
    v5 = v23;
    v6 = v23;
  }
LABEL_5:
  if ( !v4 )
  {
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, v5, a2);
    VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v6, a2);
    return;
  }
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, v5, v4);
  v7 = *(_QWORD *)(v4 + 32);
  v8 = *((_QWORD *)a2 + 4);
  v9 = *(_QWORD *)(v4 + 40);
  v10 = *((_QWORD *)a2 + 5);
  if ( v7 < v8 )
  {
    if ( v9 > v10 )
    {
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(a2);
      v17 = *(_QWORD *)(v4 + 72);
      Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                     *((_QWORD *)this + 1),
                     *(_DWORD *)(v4 + 216),
                     *((_QWORD *)a2 + 9),
                     v18,
                     v19);
      Multirange[4].Next = (struct _SLIST_ENTRY *)NextRange;
      *((_QWORD *)&Multirange[4].Next + 1) = v17;
      VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((VIDMM_RECYCLE_MULTIRANGE *)v4, *(_QWORD *)(v4 + 32), *((_QWORD *)a2 + 4));
      while ( 1 )
      {
        v21 = *((_DWORD *)&Multirange[13].Next + 2);
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            if ( v22 == 1 )
              *((_QWORD *)NextRange + 19) = Multirange;
          }
          else
          {
            *((_QWORD *)NextRange + 18) = Multirange;
          }
        }
        else
        {
          *((_QWORD *)NextRange + 17) = Multirange;
        }
        if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)&Multirange[4].Next + 1) )
          break;
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
      if ( *((_DWORD *)a2 + 16) == 4 )
      {
        *((_QWORD *)a2 + 19) = 0LL;
      }
      else if ( *((_DWORD *)a2 + 16) == 5 )
      {
        *((_QWORD *)a2 + 18) = 0LL;
      }
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v5, v4);
      v15 = (__int64)Multirange;
      goto LABEL_26;
    }
LABEL_22:
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((VIDMM_RECYCLE_MULTIRANGE *)v4, v7, v8);
    if ( *((_DWORD *)a2 + 16) == 4 )
    {
      *((_QWORD *)a2 + 19) = 0LL;
    }
    else if ( *((_DWORD *)a2 + 16) == 5 )
    {
      *((_QWORD *)a2 + 18) = 0LL;
    }
    v15 = v4;
LABEL_26:
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v5, v15);
    return;
  }
  if ( v9 > v10 )
  {
    v8 = *(_QWORD *)(v4 + 40);
    v7 = *((_QWORD *)a2 + 5);
    goto LABEL_22;
  }
  v11 = *(void **)(v4 + 96);
  v12 = *((_QWORD *)this + 1);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *(_QWORD *)(v4 + 96) = 0LL;
  }
  --*(_QWORD *)(*(_QWORD *)(v4 + 80) + 8LL);
  v13 = *(_QWORD *)(v12 + 1320);
  ++*(_DWORD *)(v13 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v13) < *(_WORD *)(v13 + 16) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v13, (PSLIST_ENTRY)v4);
  }
  else
  {
    ++*(_DWORD *)(v13 + 32);
    (*(void (__fastcall **)(__int64, __int64))(v13 + 56))(v4, v13);
  }
  if ( *((_DWORD *)a2 + 16) == 4 )
  {
    *((_QWORD *)a2 + 19) = 0LL;
  }
  else if ( *((_DWORD *)a2 + 16) == 5 )
  {
    *((_QWORD *)a2 + 18) = 0LL;
  }
}
