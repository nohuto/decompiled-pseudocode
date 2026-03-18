/*
 * XREFs of ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C006C62C
 * Callers:
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C006B38C (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006BDF0 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C00A6E5C (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p @ 0x1C00215B4 (McTemplateK0p.c)
 *     McTemplateK0pppppppqq @ 0x1C0023270 (McTemplateK0pppppppqq.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0068534 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00685D4 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C006C530 (-Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00A6138 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00A6AE8 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::SplitAt(VIDMM_RECYCLE_RANGE *this, __int64 a2, bool *a3)
{
  bool v4; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  bool v8; // bp
  __int64 v9; // rax
  bool v10; // r14
  __int64 v11; // rax
  bool v12; // r15
  unsigned int v13; // r13d
  __int64 v14; // rsi
  PSLIST_ENTRY v15; // rdi
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64, __int64, __int64, __int64); // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  signed __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // [rsp+50h] [rbp-68h]
  __int64 v35; // [rsp+58h] [rbp-60h]
  struct VIDMM_RECYCLE_BLOCK *v36; // [rsp+60h] [rbp-58h]
  unsigned __int64 v37; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v40; // [rsp+D8h] [rbp+20h]

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
  v40 = a2 + *((_QWORD *)this + 4);
  v36 = (struct VIDMM_RECYCLE_BLOCK *)*((_QWORD *)this + 9);
  v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v36 + 4) + 8LL) + 1168LL);
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
    VIDMM_RECYCLE_RANGE::Init((VIDMM_RECYCLE_RANGE *)v15, v36, v40, v37);
    LODWORD(v15[4].Next) = *((_DWORD *)this + 16);
    LODWORD(v15[5].Next) = *((_DWORD *)this + 20);
    *((_DWORD *)&v15[5].Next + 3) = *((_DWORD *)this + 23);
    *((_QWORD *)this + 5) = *((_QWORD *)this + 4) + a2;
    v23 = (unsigned __int64)this + 120;
    v22 = *((_QWORD *)this + 15);
    *(_QWORD *)(v22 + 8) = (char *)v15 + 120;
    *((_QWORD *)this + 15) = (char *)v15 + 120;
    v15[8].Next = (struct _SLIST_ENTRY *)((char *)this + 120);
    LOBYTE(v23) = BYTE4(v15[5].Next);
    *((_QWORD *)&v15[7].Next + 1) = v22;
    *((_QWORD *)&v15[8].Next + 1) = *((_QWORD *)this + 17);
    v15[9].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 18);
    *((_QWORD *)&v15[9].Next + 1) = *((_QWORD *)this + 19);
    v15[10].Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 20);
    BYTE4(v15[5].Next) ^= (*((_BYTE *)this + 84) ^ v23) & 1;
    LOBYTE(v23) = BYTE4(v15[5].Next) ^ (*((_BYTE *)this + 84) ^ BYTE4(v15[5].Next)) & 2;
    BYTE4(v15[5].Next) = v23;
    if ( v4 )
      *(_QWORD *)(*((_QWORD *)this + 17) + 72LL) = v15;
    if ( v8 )
      *(_QWORD *)(*((_QWORD *)this + 18) + 72LL) = v15;
    if ( v10 )
      *(_QWORD *)(*((_QWORD *)this + 19) + 72LL) = v15;
    if ( v12 )
      *(_QWORD *)(*((_QWORD *)this + 20) + 72LL) = v15;
    v24 = *((_DWORD *)this + 16);
    if ( v24 < 3 )
      goto LABEL_22;
    if ( v24 <= 4 )
    {
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v15);
      v23 = (unsigned __int64)v15[2].Next - *((_QWORD *)&v15[2].Next + 1);
      v26 = _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedUnlock, v23);
    }
    else
    {
      if ( v24 != 5 )
      {
LABEL_22:
        if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        {
          McTemplateK0p(v23, &EventRecycleRangeDestroy, v21, this);
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          {
            v30 = *((_QWORD *)this + 9);
            McTemplateK0pppppppqq(
              *(_QWORD *)(v30 + 32),
              v30,
              v29,
              **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v30 + 32) + 8LL) + 8LL),
              this,
              v30,
              *(_QWORD *)(v30 + 56),
              *(_QWORD *)(v30 + 32),
              *((_QWORD *)this + 4),
              *((_QWORD *)this + 5),
              **(_DWORD **)(v30 + 32),
              *((_DWORD *)this + 16));
            if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            {
              v32 = *((_QWORD *)this + 9);
              v33 = *(_QWORD *)(v32 + 32);
              LODWORD(v35) = v15[4].Next;
              LODWORD(v34) = *(_DWORD *)v33;
              McTemplateK0pppppppqq(
                v33,
                v32,
                v31,
                **(_QWORD **)(*(_QWORD *)(v33 + 8) + 8LL),
                v15,
                v32,
                *(_QWORD *)(v32 + 56),
                v33,
                v15[2].Next,
                *((_QWORD *)&v15[2].Next + 1),
                v34,
                v35);
            }
          }
        }
        return;
      }
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(
        *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL),
        (struct VIDMM_RECYCLE_RANGE *)v15);
      v23 = (unsigned __int64)v15[2].Next - *((_QWORD *)&v15[2].Next + 1);
      v26 = _InterlockedExchangeAdd64(&VIDMM_RECYCLE_HEAP_MGR::_GlobalOutstandingDebouncedDecommit, v23);
    }
    if ( (__int64)(v23 + v26) < 0 && g_IsInternalRelease )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v25, v21);
      v28[3] = 270LL;
      v28[4] = 9LL;
      v28[5] = 0LL;
      v28[6] = 0LL;
      v28[7] = 0LL;
      WdLogEvent5_WdCriticalError(v28);
    }
    goto LABEL_22;
  }
  v27 = WdLogNewEntry5_WdWarning(v20);
  *(_QWORD *)(v27 + 24) = this;
  *(_QWORD *)(v27 + 32) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL) + 8LL);
  WdLogEvent5_WdWarning(v27);
  if ( v13 != 3 )
    VIDMM_RECYCLE_HEAP::AddRangeToTree(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL), v13, this);
  *a3 = 0;
}
