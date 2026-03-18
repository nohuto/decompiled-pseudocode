/*
 * XREFs of ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0102064
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0121B80 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0102554 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C010271C (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C0102788 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C01A79D0 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 */

void __fastcall DXGADAPTER::ApplyCoreSyncAction(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  ADAPTER_DISPLAY *v6; // rcx
  ADAPTER_RENDER *v7; // rcx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD P[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v11 + 24) = 3546LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( (int)v2 <= 0 )
    goto LABEL_26;
  if ( (int)v2 <= 3 )
  {
    v5 = *(_QWORD *)(a1 + 2312);
    if ( v5 )
      ADAPTER_RENDER::FlushScheduler(v5, 8, 0xFFFFFFFF, 0);
    v6 = *(ADAPTER_DISPLAY **)(a1 + 2304);
    if ( v6 )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(v6, *(struct ADAPTER_RENDER **)(a1 + 2312));
    v7 = *(ADAPTER_RENDER **)(a1 + 2312);
    if ( v7 )
    {
      ADAPTER_RENDER::DisablePinnedHardware(v7);
      if ( (_DWORD)v2 == 3 )
      {
        v8 = 32;
        if ( *(_DWORD *)(a1 + 136) != 1 )
          v8 = 4;
      }
      else
      {
        v8 = 0;
        if ( (_DWORD)v2 == 2 )
          v8 = 2;
      }
      v9 = v8 | 1;
      v10 = v9 | 0x40;
      if ( !*(_BYTE *)(a1 + 183) )
        v10 = v9;
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(a1 + 2312), 9, 0xFFFFFFFF, 0);
      if ( DXGADAPTER::IsDxgmms2((DXGADAPTER *)a1) )
      {
        if ( *(_BYTE *)(a1 + 2269) )
        {
          memset(P, 0, 0x28uLL);
          P[4] = g_TdrRecoveryInProgress;
          *((_QWORD *)g_TdrRecoveryInProgress + 362) = KeGetCurrentThread();
          TdrResetFromTimeoutWorkItem(P);
        }
      }
      ADAPTER_RENDER::PurgeSegments(*(_QWORD *)(a1 + 2312), v10, 0LL);
    }
    return;
  }
  v4 = 4LL;
  if ( (_DWORD)v2 != 4 )
  {
LABEL_26:
    v13 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v13 + 24) = v2;
    WdLogEvent5_WdError(v13);
    return;
  }
  v12 = *(_QWORD *)(a1 + 2312);
  if ( v12 )
    ADAPTER_RENDER::FlushScheduler(v12, 6, 0xFFFFFFFF, 0);
}
