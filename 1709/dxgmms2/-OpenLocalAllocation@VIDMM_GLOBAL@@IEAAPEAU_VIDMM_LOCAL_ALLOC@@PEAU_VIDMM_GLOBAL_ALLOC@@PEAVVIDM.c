/*
 * XREFs of ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C005EEF8
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00622B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001B34 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0058648 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C00588C4 (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C005990C (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00599E0 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0061B40 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C009D5F4 (-TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@.c)
 */

struct _VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::OpenLocalAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_PROCESS *a3,
        unsigned __int64 a4,
        unsigned __int8 *a5)
{
  struct VIDMM_PROCESS *v6; // rbp
  _QWORD *v9; // rsi
  VIDMM_GLOBAL *v10; // rcx
  _QWORD *i; // rax
  PVOID v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // rax
  struct _VIDMM_LOCAL_ALLOC *v18; // r8
  __int64 v19; // r8
  __int64 v20; // rax
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  enum _LOCK_OPERATION v35; // [rsp+28h] [rbp-90h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  v6 = a3;
  if ( !a3 )
    v6 = (struct VIDMM_PROCESS *)*((_QWORD *)this + 5040);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( !v6 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v24 + 24) = 11788LL;
    goto LABEL_42;
  }
  v9 = (_QWORD *)((char *)a2 + 296);
  if ( (_QWORD *)*v9 != v9 && (**((_DWORD **)a2 + 63) & 0x20000000) == 0 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v24 + 24) = 11798LL;
    goto LABEL_42;
  }
  v10 = (VIDMM_GLOBAL *)(**((_DWORD **)a2 + 63) & 0x20000010);
  if ( (_DWORD)v10 != 536870928 || (v25 = *((_QWORD *)a2 + 13)) == 0 || *(struct VIDMM_PROCESS **)(v25 + 8) == v6 )
  {
    for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
    {
      v15 = (__int64)(i - 7);
      if ( (struct VIDMM_PROCESS *)*(i - 6) == v6 )
      {
        v21 = *(_BYTE *)(v15 + 32);
        if ( (v21 & 2) != 0 )
        {
          *(_BYTE *)(v15 + 32) = v21 & 0xFD;
          v26 = WdLogNewEntry5_WdEvent(v10, a2);
          *(_QWORD *)(v26 + 24) = v15;
          WdLogEvent5_WdEvent(v26);
          v27 = *((_QWORD *)a2 + 13);
          if ( !v27 || (*(_BYTE *)(v27 + 32) & 2) != 0 )
          {
            v28 = *((_QWORD *)a2 + 17);
            *((_QWORD *)a2 + 13) = v15;
            if ( v28 )
              VidMmRecordAlloc(this, (__int64)a2, v15, v28, *((_QWORD *)a2 + 2), 0);
          }
        }
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v10) + 24) = v15;
        goto LABEL_14;
      }
    }
    v12 = operator new[](0x68uLL, 0x32306956u, PagedPool);
    v15 = (__int64)v12;
    if ( !v12 )
    {
      _InterlockedIncrement(&dword_1C0040570);
      v29 = WdLogNewEntry5_WdLowResource(v14, v13);
      *(_QWORD *)(v29 + 24) = 11879LL;
      WdLogEvent5_WdLowResource(v29);
      return 0LL;
    }
    memset(v12, 0, 0x68uLL);
    *(_QWORD *)v15 = a2;
    *(_QWORD *)(v15 + 8) = v6;
    *(_QWORD *)(v15 + 48) = v15 + 40;
    *(_QWORD *)(v15 + 40) = v15 + 40;
    v16 = (_QWORD *)(v15 + 56);
    ++*((_DWORD *)a2 + 78);
    v10 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 38);
    if ( *(_QWORD **)v10 != v9 )
      __fastfail(3u);
    *v16 = v9;
    *(_QWORD *)(v15 + 64) = v10;
    *(_QWORD *)v10 = v16;
    *((_QWORD *)a2 + 38) = v16;
    if ( (*((_DWORD *)a2 + 23) & 1) == 0
      || (int)VIDMM_GLOBAL::CommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)v15, a4) >= 0 )
    {
LABEL_14:
      ++*(_DWORD *)(v15 + 36);
      if ( (**((_DWORD **)a2 + 63) & 0x20000000) == 0 )
      {
        *((_QWORD *)a2 + 13) = v15;
LABEL_16:
        if ( *((_DWORD *)a2 + 32) )
        {
          v19 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL))
                          + 48LL)
              + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
          v20 = *((_QWORD *)a2 + 2);
          if ( (*(_DWORD *)(*((_QWORD *)a2 + 17) + 80LL) & 0x1001) != 0 )
            *(_QWORD *)(v19 + 240) += v20;
          else
            *(_QWORD *)(v19 + 232) += v20;
        }
        return (struct _VIDMM_LOCAL_ALLOC *)v15;
      }
      v18 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
      if ( v18 && (*((_DWORD *)a2 + 21) & 4) == 0 )
      {
LABEL_24:
        *a5 = 1;
        goto LABEL_16;
      }
      if ( (*((_BYTE *)a2 + 92) & 3) == 3 )
        VIDMM_GLOBAL::TransferAllocationDecommit(v10, a2, v18, (struct _VIDMM_LOCAL_ALLOC *)v15);
      *(_QWORD *)(v15 + 8) = v6;
      if ( !*((_QWORD *)a2 + 13) )
      {
LABEL_22:
        if ( (*((_DWORD *)a2 + 21) & 4) != 0 )
        {
          v23 = *((_QWORD *)a2 + 17);
          if ( v23 )
            VidMmRecordAlloc(this, (__int64)a2, v15, v23, *((_QWORD *)a2 + 2), 0);
        }
        *((_DWORD *)a2 + 21) &= ~4u;
        *((_QWORD *)a2 + 13) = v15;
        goto LABEL_24;
      }
      *(_QWORD *)v15 = a2;
      if ( *((int *)a2 + 87) <= 0 )
      {
LABEL_37:
        v22 = *((_QWORD *)a2 + 13);
        if ( (*(_BYTE *)(v22 + 32) & 2) == 0 )
        {
          KeStackAttachProcess(**(PRKPROCESS **)(v22 + 8), &ApcState);
          VIDMM_GLOBAL::CloseOneAllocation(
            this,
            (struct VIDMM_ALLOC *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 40LL) - 40LL),
            0LL,
            0,
            0,
            0LL);
          KeUnstackDetachProcess(&ApcState);
        }
        goto LABEL_22;
      }
      if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                  v10,
                  (struct _VIDMM_LOCAL_ALLOC *)v15,
                  a2,
                  0LL,
                  *((_QWORD *)a2 + 1),
                  v35,
                  *((struct VIDMM_SEGMENT **)a2 + 17),
                  0) >= 0 )
      {
        VIDMM_GLOBAL::UnlockAllocation(this, *((struct _VIDMM_LOCAL_ALLOC **)a2 + 13), 0LL, *((_QWORD *)a2 + 1), 0, 0);
        goto LABEL_37;
      }
      _InterlockedIncrement(&dword_1C0040564);
      v32 = WdLogNewEntry5_WdLowResource(v31, v30);
      *(_QWORD *)(v32 + 24) = a2;
      *(_QWORD *)(v32 + 32) = *((_QWORD *)a2 + 1);
      WdLogEvent5_WdLowResource(v32);
    }
    VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)v15, 1);
    --*((_DWORD *)a2 + 78);
    v33 = *(_QWORD *)(v15 + 56);
    if ( *(_QWORD *)(v33 + 8) != v15 + 56 || (v34 = *(_QWORD **)(v15 + 64), *v34 != v15 + 56) )
      __fastfail(3u);
    *v34 = v33;
    *(_QWORD *)(v33 + 8) = v34;
    operator delete((void *)v15);
    return 0LL;
  }
  if ( v6 == *((struct VIDMM_PROCESS **)this + 5040) )
    return 0LL;
  v24 = WdLogNewEntry5_WdAssertion(v10, a2);
  *(_QWORD *)(v24 + 24) = 11817LL;
LABEL_42:
  WdLogEvent5_WdAssertion(v24);
  return 0LL;
}
