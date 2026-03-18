/*
 * XREFs of ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C00742A0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0073B8C (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00752D0 (-UnpinAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0075584 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 *     ?DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z @ 0x1C002071C (-DdiStopCapture@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_STOPCAPTURE@@@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C005C50C (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0060F60 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0074630 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 */

bool __fastcall VIDMM_GLOBAL::UnpinOneAllocation(struct VIDMM_ALLOC **a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rbp
  bool v8; // di
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // rax
  ADAPTER_RENDER *v15; // rcx
  _QWORD v16[12]; // [rsp+20h] [rbp-78h] BYREF
  _DXGKARG_STOPCAPTURE v17; // [rsp+A8h] [rbp+10h] BYREF

  v5 = (int)a3;
  if ( (**(_DWORD **)(**(_QWORD **)a2 + 504LL) & 0x40000000) != 0 )
  {
    v12 = WdLogNewEntry5_WdWarning(a1);
    WdLogEvent5_WdWarning(v12);
    return 0;
  }
  else
  {
    v8 = 1;
    if ( (a3 & 1) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
      v8 = VIDMM_DEVICE::UnreferencePinnedAllocation(*(VIDMM_DEVICE **)(a2 + 8), (struct VIDMM_ALLOC *)a2, a4 != 1);
    }
    if ( (v5 & 2) != 0 && v8 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v13 = WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
        *(_QWORD *)(v13 + 24) = a2;
        *(_QWORD *)(v13 + 32) = v5;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(**(_QWORD **)a2 + 164LL), 0xFFFFFFFF) == 1 )
      {
        v9 = *(_QWORD *)(a2 + 16);
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 48);
          if ( (*(_DWORD *)(v10 + 4) & 0x20) != 0 )
          {
            v17.hAllocation = 0LL;
            v14 = *(void **)(v10 + 16);
            v15 = a1[2];
            v17.hAllocation = v14;
            ADAPTER_RENDER::DdiStopCapture(v15, &v17);
          }
        }
      }
      if ( !(*(_BYTE *)(a2 + 25) & 1 | *(_DWORD *)(a2 + 152)) )
      {
        if ( KeGetCurrentThread() == *((struct _KTHREAD **)*a1 + 1) )
        {
          LOBYTE(a3) = 1;
          VIDMM_GLOBAL::EvictOneAllocation(a1, (struct VIDMM_ALLOC *)a2, a3);
        }
        else
        {
          memset(v16, 0, 0x58uLL);
          LODWORD(v16[0]) = 205;
          v16[2] = a2;
          VIDMM_GLOBAL::QueueSystemCommandAndWait((VIDMM_GLOBAL *)a1, (struct _VIDMM_SYSTEM_COMMAND *)v16, 1);
        }
      }
    }
    return v8;
  }
}
