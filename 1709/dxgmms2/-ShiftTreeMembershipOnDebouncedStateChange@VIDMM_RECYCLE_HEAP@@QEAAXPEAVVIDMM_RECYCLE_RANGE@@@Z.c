/*
 * XREFs of ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069870
 * Callers:
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C006C8E4 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C006C9B4 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C006CAB0 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C00682EC (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0069F8C (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C006A010 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1C006A70C (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006CEB8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00A6138 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00A6AE8 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r9
  void *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rbx
  PSLIST_ENTRY v14; // r8
  struct VIDMM_RECYCLE_RANGE *NextRange; // r13
  __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // r10
  PSLIST_ENTRY Multirange; // r15
  int v20; // eax
  int v21; // eax
  __int64 v22; // [rsp+68h] [rbp+10h]

  if ( *((_DWORD *)a2 + 16) == 4 )
  {
    v4 = *((_QWORD *)a2 + 19);
    v6 = 0;
    v5 = ((unsigned int)(**(_DWORD **)(*((_QWORD *)a2 + 9) + 32LL) - 3) <= 3) + 1;
  }
  else if ( *((_DWORD *)a2 + 16) == 5 )
  {
    v4 = *((_QWORD *)a2 + 18);
    v5 = 2;
    v6 = 1;
  }
  else
  {
    v4 = v22;
    v6 = v22;
    v5 = v22;
  }
  if ( !v4 )
  {
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, v6, a2);
    VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v5, a2);
    return;
  }
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, v6, v4);
  v7 = *(_QWORD *)(v4 + 32);
  v8 = *((_QWORD *)a2 + 4);
  v9 = *(_QWORD *)(v4 + 40);
  v10 = *((_QWORD *)a2 + 5);
  if ( v7 < v8 )
  {
    if ( v9 > v10 )
    {
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(a2);
      v16 = *(_QWORD *)(v4 + 72);
      Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                     *((_QWORD *)this + 1),
                     *(_DWORD *)(v4 + 216),
                     *((_QWORD *)a2 + 9),
                     v17,
                     v18);
      Multirange[4].Next = (struct _SLIST_ENTRY *)NextRange;
      *((_QWORD *)&Multirange[4].Next + 1) = v16;
      VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((VIDMM_RECYCLE_MULTIRANGE *)v4, *(_QWORD *)(v4 + 32), *((_QWORD *)a2 + 4));
      while ( 1 )
      {
        v20 = *((_DWORD *)&Multirange[13].Next + 2);
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 == 1 )
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
      VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v6, v4);
      v14 = Multirange;
      goto LABEL_23;
    }
LABEL_19:
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((VIDMM_RECYCLE_MULTIRANGE *)v4, v7, v8);
    if ( *((_DWORD *)a2 + 16) == 4 )
    {
      *((_QWORD *)a2 + 19) = 0LL;
    }
    else if ( *((_DWORD *)a2 + 16) == 5 )
    {
      *((_QWORD *)a2 + 18) = 0LL;
    }
    v14 = (PSLIST_ENTRY)v4;
LABEL_23:
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v6, v14);
    return;
  }
  if ( v9 > v10 )
  {
    v8 = *(_QWORD *)(v4 + 40);
    v7 = *((_QWORD *)a2 + 5);
    goto LABEL_19;
  }
  v11 = *(void **)(v4 + 96);
  v12 = *((_QWORD *)this + 1);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *(_QWORD *)(v4 + 96) = 0LL;
  }
  --*(_QWORD *)(*(_QWORD *)(v4 + 80) + 8LL);
  v13 = *(_QWORD *)(v12 + 1176);
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
