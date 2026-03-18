/*
 * XREFs of ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C0104760
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0122680 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0104A14 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C0104A80 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0104CEC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C0192EC0 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 */

void __fastcall DXGADAPTER::ApplyCoreSyncAction(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  ADAPTER_DISPLAY *v9; // rcx
  ADAPTER_RENDER *v10; // rcx
  bool v11; // zf
  int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD P[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v15 + 24) = 3467LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( (int)v2 <= 0 )
    goto LABEL_25;
  if ( (int)v2 <= 3 )
  {
    v8 = *(_QWORD *)(a1 + 2288);
    if ( v8 )
      ADAPTER_RENDER::FlushScheduler(v8, 8, 0xFFFFFFFF, 0);
    v9 = *(ADAPTER_DISPLAY **)(a1 + 2280);
    if ( v9 )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(v9, *(struct ADAPTER_RENDER **)(a1 + 2288));
    v10 = *(ADAPTER_RENDER **)(a1 + 2288);
    if ( v10 )
    {
      ADAPTER_RENDER::DisablePinnedHardware(v10);
      if ( (_DWORD)v2 == 3 )
      {
        v11 = *(_DWORD *)(a1 + 136) == 1;
        v12 = 4;
        v13 = 32;
      }
      else
      {
        v12 = 0;
        v13 = 2;
        v11 = (_DWORD)v2 == 2;
      }
      if ( v11 )
        v12 = v13;
      v14 = v12 | 1;
      if ( *(_BYTE *)(a1 + 184) )
        v14 |= 0x40u;
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(a1 + 2288), 9, 0xFFFFFFFF, 0);
      if ( DXGADAPTER::IsDxgmms2((DXGADAPTER *)a1) )
      {
        if ( *(_BYTE *)(a1 + 2244) )
        {
          memset(P, 0, 0x28uLL);
          P[4] = g_TdrRecoveryInProgress;
          *((_QWORD *)g_TdrRecoveryInProgress + 362) = KeGetCurrentThread();
          TdrResetFromTimeoutWorkItem(P);
        }
      }
      ADAPTER_RENDER::PurgeSegments(*(_QWORD *)(a1 + 2288), v14, 0LL);
    }
    return;
  }
  if ( (_DWORD)v2 != 4 )
  {
LABEL_25:
    v17 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v17 + 24) = v2;
    WdLogEvent5_WdError(v17);
    return;
  }
  v16 = *(_QWORD *)(a1 + 2288);
  if ( v16 )
    ADAPTER_RENDER::FlushScheduler(v16, 6, 0xFFFFFFFF, 0);
}
