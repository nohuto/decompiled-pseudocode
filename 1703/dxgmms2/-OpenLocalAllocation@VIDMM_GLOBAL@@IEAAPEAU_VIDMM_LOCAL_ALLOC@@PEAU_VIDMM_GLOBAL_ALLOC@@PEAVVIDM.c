/*
 * XREFs of ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C005BAD4
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C005F450 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001964 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0055AEC (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0055CCC (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0056B54 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0056C04 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C005EE20 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C0095458 (-TransferAllocationDecommit@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@.c)
 */

struct _VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::OpenLocalAllocation(
        struct VIDMM_PROCESS **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_PROCESS *a3,
        unsigned __int64 a4,
        unsigned __int8 *a5)
{
  struct VIDMM_PROCESS *v6; // rbp
  VIDMM_GLOBAL *v8; // r14
  struct VIDMM_PROCESS *v9; // rsi
  struct VIDMM_PROCESS *i; // rax
  PVOID v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  struct VIDMM_PROCESS *v14; // rax
  struct _VIDMM_LOCAL_ALLOC *v16; // r8
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  enum _LOCK_OPERATION v29; // [rsp+28h] [rbp-90h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  v6 = a3;
  v8 = (VIDMM_GLOBAL *)this;
  if ( !a3 )
    v6 = this[5040];
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( !v6 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v20 + 24) = 11320LL;
    goto LABEL_37;
  }
  v9 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
  if ( *(struct VIDMM_PROCESS **)v9 != v9 && (**((_DWORD **)a2 + 65) & 0x20000000) == 0 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v20 + 24) = 11331LL;
LABEL_37:
    WdLogEvent5_WdAssertion(v20);
    return 0LL;
  }
  for ( i = *(struct VIDMM_PROCESS **)v9; i != v9; i = *(struct VIDMM_PROCESS **)i )
  {
    v13 = (__int64)i - 56;
    if ( *((struct VIDMM_PROCESS **)i - 6) == v6 )
    {
      v17 = *(_BYTE *)(v13 + 32);
      if ( (v17 & 2) != 0 )
      {
        *(_BYTE *)(v13 + 32) = v17 & 0xFD;
        v21 = WdLogNewEntry5_WdEvent(this, a2);
        *(_QWORD *)(v21 + 24) = v13;
        WdLogEvent5_WdEvent(v21);
        v22 = *((_QWORD *)a2 + 13);
        if ( !v22 || (*(_BYTE *)(v22 + 32) & 2) != 0 )
        {
          v23 = *((_QWORD *)a2 + 17);
          *((_QWORD *)a2 + 13) = v13;
          if ( v23 )
            VidMmRecordAlloc(v8, (__int64)a2, v13, v23, *((_QWORD *)a2 + 2), 0);
        }
      }
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v13;
LABEL_13:
      ++*(_DWORD *)(v13 + 36);
      if ( (**((_DWORD **)a2 + 65) & 0x20000000) == 0 )
      {
        *((_QWORD *)a2 + 13) = v13;
        return (struct _VIDMM_LOCAL_ALLOC *)v13;
      }
      v16 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
      if ( v16 && (*((_DWORD *)a2 + 21) & 4) == 0 )
      {
LABEL_18:
        *a5 = 1;
        return (struct _VIDMM_LOCAL_ALLOC *)v13;
      }
      if ( (*((_BYTE *)a2 + 92) & 3) == 3 )
        VIDMM_GLOBAL::TransferAllocationDecommit((VIDMM_GLOBAL *)this, a2, v16, (struct _VIDMM_LOCAL_ALLOC *)v13);
      *(_QWORD *)(v13 + 8) = v6;
      if ( !*((_QWORD *)a2 + 13) )
      {
LABEL_26:
        if ( (*((_DWORD *)a2 + 21) & 4) != 0 )
        {
          v19 = *((_QWORD *)a2 + 17);
          if ( v19 )
            VidMmRecordAlloc(v8, (__int64)a2, v13, v19, *((_QWORD *)a2 + 2), 0);
        }
        *((_DWORD *)a2 + 21) &= ~4u;
        *((_QWORD *)a2 + 13) = v13;
        goto LABEL_18;
      }
      *(_QWORD *)v13 = a2;
      if ( *((int *)a2 + 87) <= 0 )
      {
LABEL_32:
        v18 = *((_QWORD *)a2 + 13);
        if ( (*(_BYTE *)(v18 + 32) & 2) == 0 )
        {
          KeStackAttachProcess(**(PRKPROCESS **)(v18 + 8), &ApcState);
          VIDMM_GLOBAL::CloseOneAllocation(
            v8,
            (struct VIDMM_ALLOC *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 40LL) - 40LL),
            0LL,
            0,
            0,
            0LL);
          KeUnstackDetachProcess(&ApcState);
        }
        goto LABEL_26;
      }
      if ( (int)VIDMM_GLOBAL::ProbeAndLockAllocation(
                  (VIDMM_GLOBAL *)this,
                  (struct _VIDMM_LOCAL_ALLOC *)v13,
                  a2,
                  0LL,
                  *((_QWORD *)a2 + 1),
                  v29,
                  *((struct VIDMM_SEGMENT **)a2 + 17),
                  0) >= 0 )
      {
        VIDMM_GLOBAL::UnlockAllocation(v8, *((struct _VIDMM_LOCAL_ALLOC **)a2 + 13), 0LL, *((_QWORD *)a2 + 1), 0, 0);
        goto LABEL_32;
      }
      _InterlockedIncrement(&dword_1C003C554);
      v26 = WdLogNewEntry5_WdLowResource(v25);
      *(_QWORD *)(v26 + 24) = a2;
      *(_QWORD *)(v26 + 32) = *((_QWORD *)a2 + 1);
      WdLogEvent5_WdLowResource(v26);
      goto LABEL_48;
    }
  }
  v11 = operator new[](0x68uLL, 0x32306956u, PagedPool);
  v13 = (__int64)v11;
  if ( !v11 )
  {
    _InterlockedIncrement(&dword_1C003C560);
    v24 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v24 + 24) = 11392LL;
    WdLogEvent5_WdLowResource(v24);
    return 0LL;
  }
  memset(v11, 0, 0x68uLL);
  *(_QWORD *)v13 = a2;
  *(_QWORD *)(v13 + 8) = v6;
  *(_QWORD *)(v13 + 48) = v13 + 40;
  *(_QWORD *)(v13 + 40) = v13 + 40;
  v14 = (struct VIDMM_PROCESS *)(v13 + 56);
  ++*((_DWORD *)a2 + 78);
  this = (struct VIDMM_PROCESS **)*((_QWORD *)a2 + 38);
  if ( *this != v9 )
    __fastfail(3u);
  *(_QWORD *)v14 = v9;
  *(_QWORD *)(v13 + 64) = this;
  *this = v14;
  *((_QWORD *)a2 + 38) = v14;
  if ( (*((_DWORD *)a2 + 23) & 1) == 0 || (int)VIDMM_GLOBAL::CommitLocalBackingStore(v8, (void **)v13, a4) >= 0 )
    goto LABEL_13;
LABEL_48:
  VIDMM_GLOBAL::UncommitLocalBackingStore((VIDMM_GLOBAL *)this, (struct _VIDMM_LOCAL_ALLOC *)v13, 1);
  --*((_DWORD *)a2 + 78);
  v27 = *(_QWORD *)(v13 + 56);
  v28 = *(_QWORD **)(v13 + 64);
  if ( *(_QWORD *)(v27 + 8) != v13 + 56 || *v28 != v13 + 56 )
    __fastfail(3u);
  *v28 = v27;
  *(_QWORD *)(v27 + 8) = v28;
  operator delete((void *)v13);
  return 0LL;
}
