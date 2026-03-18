/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C0071504
 * Callers:
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C006F4E8 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006FEE0 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C00AE508 (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p @ 0x1C0023F00 (McTemplateK0p.c)
 *     McTemplateK0pppppppqq @ 0x1C0025C20 (McTemplateK0pppppppqq.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006D9EC (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C006DA8C (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C0071410 (-Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00AD54C (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00ADFD4 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::SplitAt(VIDMM_RECYCLE_RANGE *this, __int64 a2, bool *a3)
{
  bool v4; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  bool v8; // si
  __int64 v9; // rax
  bool v10; // bp
  __int64 v11; // rax
  bool v12; // r15
  unsigned int v13; // r12d
  __int64 v14; // r13
  PSLIST_ENTRY v15; // rdi
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64, __int64, __int64, __int64); // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  char *v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdx
  signed __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // [rsp+50h] [rbp-68h]
  __int64 v36; // [rsp+58h] [rbp-60h]
  struct VIDMM_RECYCLE_BLOCK *v37; // [rsp+60h] [rbp-58h]
  unsigned __int64 v38; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v41; // [rsp+D8h] [rbp+20h]

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
  v38 = *((_QWORD *)this + 5);
  v41 = a2 + *((_QWORD *)this + 4);
  v37 = (struct VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 9);
  v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v37 + 4) + 8LL) + 1312LL);
  ++*(_DWORD *)(v14 + 20);
  v15 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v14);
  if ( v15
    || (v16 = *(unsigned int *)(v14 + 44),
        v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v14 + 48),
        v18 = *(unsigned int *)(v14 + 40),
        v19 = *(unsigned int *)(v14 + 36),
        ++*(_DWORD *)(v14 + 24),
        (v15 = (PSLIST_ENTRY)v17(v19, v16, v18, v14)) != 0LL) )
  {
    VIDMM_RECYCLE_RANGE::Init((VIDMM_RECYCLE_RANGE *)v15, v37, v41, v38);
    LODWORD(v15[4].Next) = *((_DWORD *)this + 16);
    LODWORD(v15[5].Next) = *((_DWORD *)this + 20);
    *((_DWORD *)&v15[5].Next + 3) = *((_DWORD *)this + 23);
    *((_QWORD *)this + 5) = *((_QWORD *)this + 4) + a2;
    v23 = (char *)this + 120;
    v24 = *((_QWORD *)this + 15);
    *(_QWORD *)(v24 + 8) = (char *)v15 + 120;
    *((_QWORD *)this + 15) = (char *)v15 + 120;
    v15[8].Next = (struct _SLIST_ENTRY *)((char *)this + 120);
    *((_QWORD *)&v15[7].Next + 1) = v24;
    *((_QWORD *)&v15[8].Next + 1) = *((_QWORD *)this + 17);
    v15[9].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 18);
    *((_QWORD *)&v15[9].Next + 1) = *((_QWORD *)this + 19);
    v15[10].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 20);
    HIDWORD(v15[5].Next) = *((_DWORD *)this + 21);
    if ( v4 )
      *(_QWORD *)(*((_QWORD *)this + 17) + 72LL) = v15;
    if ( v8 )
      *(_QWORD *)(*((_QWORD *)this + 18) + 72LL) = v15;
    if ( v10 )
      *(_QWORD *)(*((_QWORD *)this + 19) + 72LL) = v15;
    if ( v12 )
      *(_QWORD *)(*((_QWORD *)this + 20) + 72LL) = v15;
    v25 = *((_DWORD *)this + 16);
    if ( v25 < 3 )
      goto LABEL_25;
    if ( v25 > 4 )
    {
      if ( v25 != 5 )
      {
LABEL_25:
        if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        {
          McTemplateK0p((__int64)v23, &EventRecycleRangeDestroy, v22, this);
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          {
            v31 = *((_QWORD *)this + 9);
            McTemplateK0pppppppqq(
              *(_QWORD *)(v31 + 32),
              v31,
              v30,
              **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v31 + 32) + 8LL) + 8LL),
              this,
              v31,
              *(_QWORD *)(v31 + 56),
              *(_QWORD *)(v31 + 32),
              *((_QWORD *)this + 4),
              *((_QWORD *)this + 5),
              **(_DWORD **)(v31 + 32),
              *((_DWORD *)this + 16));
            if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            {
              v33 = *((_QWORD *)this + 9);
              v34 = *(_QWORD *)(v33 + 32);
              LODWORD(v36) = v15[4].Next;
              LODWORD(v35) = *(_DWORD *)v34;
              McTemplateK0pppppppqq(
                v34,
                v33,
                v32,
                **(_QWORD **)(*(_QWORD *)(v34 + 8) + 8LL),
                v15,
                v33,
                *(_QWORD *)(v33 + 56),
                v34,
                v15[2].Next,
                *((_QWORD *)&v15[2].Next + 1),
                v35,
                v36);
            }
          }
        }
        return;
      }
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v15);
      v23 = (char *)v15[2].Next - *((_QWORD *)&v15[2].Next + 1);
      v27 = _InterlockedExchangeAdd64(
              &VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit,
              (unsigned __int64)v23);
    }
    else
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v15);
      v23 = (char *)v15[2].Next - *((_QWORD *)&v15[2].Next + 1);
      v27 = _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, (unsigned __int64)v23);
    }
    if ( (__int64)&v23[v27] < 0 && g_IsInternalRelease )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v26, v22);
      v29[3] = 270LL;
      v29[4] = 9LL;
      v29[5] = 0LL;
      v29[6] = 0LL;
      v29[7] = 0LL;
      WdLogEvent5_WdCriticalError(v29);
    }
    goto LABEL_25;
  }
  v28 = WdLogNewEntry5_WdWarning(v21, v20);
  *(_QWORD *)(v28 + 24) = this;
  *(_QWORD *)(v28 + 32) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL) + 8LL);
  WdLogEvent5_WdWarning(v28);
  if ( v13 != 3 )
    VIDMM_RECYCLE_HEAP::AddRangeToTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v13, this);
  *a3 = 0;
}
