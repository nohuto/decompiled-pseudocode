/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C00689B8
 * Callers:
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C00677D8 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006831C (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C009ED9C (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     Template_p @ 0x1C001F4D4 (Template_p.c)
 *     Template_pppppppqq @ 0x1C00211E0 (Template_pppppppqq.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064AF0 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064B90 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C00688C0 (-Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009DE14 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009EA28 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::SplitAt(VIDMM_RECYCLE_RANGE *this, __int64 a2, bool *a3)
{
  bool v4; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  bool v8; // si
  __int64 v9; // rax
  bool v10; // r14
  __int64 v11; // rax
  bool v12; // r12
  unsigned int v13; // r13d
  PSLIST_ENTRY v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  char *v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  signed __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // [rsp+50h] [rbp-58h]
  __int64 v31; // [rsp+58h] [rbp-50h]
  unsigned __int64 v32; // [rsp+60h] [rbp-48h]
  struct VIDMM_RECYCLE_BLOCK *v33; // [rsp+68h] [rbp-40h]
  __int64 v34; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v37; // [rsp+C8h] [rbp+20h]

  v4 = 0;
  *a3 = 1;
  v6 = *((_QWORD *)this + 17);
  if ( v6 )
    v4 = *(_QWORD *)(v6 + 72) == (_QWORD)this;
  v7 = *((_QWORD *)this + 18);
  v8 = 0;
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 72) == (_QWORD)this;
  v9 = *((_QWORD *)this + 19);
  v10 = 0;
  if ( v9 )
    v10 = *(_QWORD *)(v9 + 72) == (_QWORD)this;
  v11 = *((_QWORD *)this + 20);
  v12 = 0;
  if ( v11 )
    v12 = *(_QWORD *)(v11 + 72) == (_QWORD)this;
  v13 = *((_DWORD *)this + 22);
  if ( v13 != 3 )
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v13, this);
  v37 = *((_QWORD *)this + 5);
  v32 = a2 + *((_QWORD *)this + 4);
  v33 = (struct VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 9);
  v34 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v33 + 4) + 8LL) + 1168LL);
  ++*(_DWORD *)(v34 + 20);
  v14 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v34);
  if ( v14
    || (++*(_DWORD *)(v34 + 24),
        (v14 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v34 + 48))(
                               *(unsigned int *)(v34 + 36),
                               *(unsigned int *)(v34 + 44),
                               *(unsigned int *)(v34 + 40),
                               v34)) != 0LL) )
  {
    VIDMM_RECYCLE_RANGE::Init((VIDMM_RECYCLE_RANGE *)v14, v33, v32, v37);
    LODWORD(v14[4].Next) = *((_DWORD *)this + 16);
    LODWORD(v14[5].Next) = *((_DWORD *)this + 20);
    *((_DWORD *)&v14[5].Next + 3) = *((_DWORD *)this + 23);
    *((_QWORD *)this + 5) = *((_QWORD *)this + 4) + a2;
    v18 = (char *)this + 120;
    v19 = *((_QWORD *)this + 15);
    *(_QWORD *)(v19 + 8) = (char *)v14 + 120;
    *((_QWORD *)this + 15) = (char *)v14 + 120;
    v14[8].Next = (struct _SLIST_ENTRY *)((char *)this + 120);
    *((_QWORD *)&v14[7].Next + 1) = v19;
    *((_QWORD *)&v14[8].Next + 1) = *((_QWORD *)this + 17);
    v14[9].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 18);
    *((_QWORD *)&v14[9].Next + 1) = *((_QWORD *)this + 19);
    v14[10].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 20);
    BYTE4(v14[5].Next) = *((_BYTE *)this + 84);
    if ( v4 )
      *(_QWORD *)(*((_QWORD *)this + 17) + 72LL) = v14;
    if ( v8 )
      *(_QWORD *)(*((_QWORD *)this + 18) + 72LL) = v14;
    if ( v10 )
      *(_QWORD *)(*((_QWORD *)this + 19) + 72LL) = v14;
    if ( v12 )
      *(_QWORD *)(*((_QWORD *)this + 20) + 72LL) = v14;
    v20 = *((_DWORD *)this + 16);
    if ( v20 < 3 )
      goto LABEL_22;
    if ( v20 > 4 )
    {
      if ( v20 != 5 )
      {
LABEL_22:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        {
          Template_p((__int64)v18, &EventRecycleRangeDestroy, v17, this);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          {
            v26 = *((_QWORD *)this + 9);
            Template_pppppppqq(
              *(_QWORD *)(v26 + 32),
              v26,
              v25,
              **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v26 + 32) + 8LL) + 8LL),
              this,
              v26,
              *(_QWORD *)(v26 + 56),
              *(_QWORD *)(v26 + 32),
              *((_QWORD *)this + 4),
              *((_QWORD *)this + 5),
              **(_DWORD **)(v26 + 32),
              *((_DWORD *)this + 16));
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            {
              v28 = *((_QWORD *)this + 9);
              v29 = *(_QWORD *)(v28 + 32);
              LODWORD(v31) = v14[4].Next;
              LODWORD(v30) = *(_DWORD *)v29;
              Template_pppppppqq(
                v29,
                v28,
                v27,
                **(_QWORD **)(*(_QWORD *)(v29 + 8) + 8LL),
                v14,
                v28,
                *(_QWORD *)(v28 + 56),
                v29,
                v14[2].Next,
                *((_QWORD *)&v14[2].Next + 1),
                v30,
                v31);
            }
          }
        }
        return;
      }
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v14);
      v18 = (char *)v14[2].Next - *((_QWORD *)&v14[2].Next + 1);
      v22 = _InterlockedExchangeAdd64(
              &VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit,
              (unsigned __int64)v18);
    }
    else
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v14);
      v18 = (char *)v14[2].Next - *((_QWORD *)&v14[2].Next + 1);
      v22 = _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, (unsigned __int64)v18);
    }
    if ( (__int64)&v18[v22] < 0 && g_IsInternalRelease )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v21, v17);
      v24[3] = 270LL;
      v24[4] = 9LL;
      v24[5] = 0LL;
      v24[6] = 0LL;
      v24[7] = 0LL;
      WdLogEvent5_WdCriticalError(v24);
    }
    goto LABEL_22;
  }
  v23 = WdLogNewEntry5_WdWarning(v16, v15);
  *(_QWORD *)(v23 + 24) = this;
  *(_QWORD *)(v23 + 32) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL) + 8LL);
  WdLogEvent5_WdWarning(v23);
  if ( v13 != 3 )
    VIDMM_RECYCLE_HEAP::AddRangeToTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v13, this);
  *a3 = 0;
}
