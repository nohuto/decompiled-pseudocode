/*
 * XREFs of ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C014848C
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C01F11D0 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C009C000 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01564E8 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0159758 (-DisablePinnedHardware@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C019A650 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 */

void __fastcall DXGADAPTER::ApplyCoreSyncAction(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  ADAPTER_DISPLAY *v8; // rcx
  ADAPTER_RENDER *v9; // rcx
  int v10; // ebx
  unsigned int v11; // ebx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+10h]

  v2 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 3558LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( (int)v2 <= 0 )
    goto LABEL_25;
  if ( (int)v2 > 3 )
  {
    if ( (_DWORD)v2 == 4 )
    {
      v6 = *(_QWORD *)(a1 + 2464);
      if ( v6 )
        ADAPTER_RENDER::FlushScheduler(v6, 6, 0xFFFFFFFF, 0);
      return;
    }
LABEL_25:
    v18 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v18 + 24) = v2;
    WdLogEvent5_WdError(v18);
    return;
  }
  v7 = *(_QWORD *)(a1 + 2464);
  if ( v7 )
    ADAPTER_RENDER::FlushScheduler(v7, 8, 0xFFFFFFFF, 0);
  v8 = *(ADAPTER_DISPLAY **)(a1 + 2456);
  if ( v8 )
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(v8, *(struct ADAPTER_RENDER **)(a1 + 2464));
  v9 = *(ADAPTER_RENDER **)(a1 + 2464);
  if ( v9 )
  {
    ADAPTER_RENDER::DisablePinnedHardware(v9);
    if ( (_DWORD)v2 == 3 )
    {
      v10 = 32;
      if ( *(_DWORD *)(a1 + 136) != 1 )
        v10 = 4;
    }
    else
    {
      v10 = 0;
      if ( (_DWORD)v2 == 2 )
        v10 = 2;
    }
    v11 = v10 | 1;
    v20 = v11;
    if ( *(_BYTE *)(a1 + 183) )
    {
      v11 |= 0x40u;
      v20 = v11;
    }
    ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(a1 + 2464), 9, 0xFFFFFFFF, 0);
    v12 = WdLogNewEntry5_WdPower();
    *(_QWORD *)(v12 + 24) = a1;
    *(_QWORD *)(v12 + 32) = *(unsigned __int8 *)(a1 + 2414);
    WdLogEvent5_WdPower(v12);
    ADAPTER_RENDER::PurgeSegments(*(struct _EX_RUNDOWN_REF **)(a1 + 2464), v11, 0LL);
    v13 = (_QWORD *)WdLogNewEntry5_WdPower();
    v13[3] = a1;
    v13[4] = *(unsigned __int8 *)(a1 + 2414);
    v13[5] = 3635LL;
    WdLogEvent5_WdPower(v13);
    if ( DXGADAPTER::IsDxgmms2((DXGADAPTER *)a1) )
    {
      if ( *(_BYTE *)(a1 + 2414) )
      {
        memset(v19, 0, 0x28uLL);
        v19[4] = g_TdrRecoveryInProgress;
        *((_QWORD *)g_TdrRecoveryInProgress + 362) = KeGetCurrentThread();
        TdrResetFromTimeoutWorkItem(v19);
        v14 = WdLogNewEntry5_WdPower();
        *(_QWORD *)(v14 + 24) = a1;
        WdLogEvent5_WdPower(v14);
        ADAPTER_RENDER::PurgeSegments(*(struct _EX_RUNDOWN_REF **)(a1 + 2464), v20, 0LL);
        v15 = (_QWORD *)WdLogNewEntry5_WdPower();
        v15[3] = a1;
        v15[4] = *(unsigned __int8 *)(a1 + 2414);
        v15[5] = 3660LL;
        WdLogEvent5_WdPower(v15);
        if ( *(_BYTE *)(a1 + 2414) )
        {
          v17 = WdLogNewEntry5_WdAssertion(v16);
          *(_QWORD *)(v17 + 24) = 3661LL;
          WdLogEvent5_WdAssertion(v17);
        }
      }
    }
  }
}
