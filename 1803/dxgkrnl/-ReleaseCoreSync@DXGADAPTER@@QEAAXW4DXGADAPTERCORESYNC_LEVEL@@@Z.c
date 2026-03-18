/*
 * XREFs of ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00F4FB0
 * Callers:
 *     ?DXGADAPTER_ReleaseCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C002E510 (-DXGADAPTER_ReleaseCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C009F834 (DxgkReleaseAdapterCoreSync.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C016E6B0 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C0026778 (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0027344 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C00A6330 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00F4D30 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C014ED1C (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1C015BCA8 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ReleaseCoreSync(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  int v5; // edx
  ADAPTER_RENDER *v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rax
  ADAPTER_RENDER *v10; // rcx

  v2 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4);
    v8[3] = 275LL;
    v8[4] = 4LL;
    v8[5] = a1;
    v8[6] = 0LL;
    v8[7] = 0LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  v5 = 7;
  if ( (_DWORD)v2 == 1 )
    goto LABEL_4;
  if ( (_DWORD)v2 == 2 )
    goto LABEL_11;
  if ( (_DWORD)v2 != 3 )
  {
    if ( (_DWORD)v2 != 5 )
    {
      v9 = WdLogNewEntry5_WdError((unsigned int)(v2 - 3));
      *(_QWORD *)(v9 + 24) = v2;
      WdLogEvent5_WdError(v9);
      goto LABEL_7;
    }
    v10 = *(ADAPTER_RENDER **)(a1 + 2464);
    if ( v10 )
    {
      ADAPTER_RENDER::RestoreFromPurgeSegments(v10);
      v5 = 10;
    }
LABEL_11:
    v7 = *(_QWORD *)(a1 + 2464);
    if ( v7 )
      ADAPTER_RENDER::FlushScheduler(v7, v5, 0xFFFFFFFF, 0);
    if ( *(_DWORD *)(a1 + 136) == 1 )
    {
      DXGADAPTER::ReleaseLocksForPowerStateD3transition((DXGADAPTER *)a1);
      *(_DWORD *)(a1 + 136) = 0;
      *(_DWORD *)(a1 + 2940) = 0;
      DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)a1);
      if ( *(_QWORD *)(a1 + 2856) )
        DXGADAPTER::ScheduleAdapterActivityCheck((KSPIN_LOCK *)a1);
    }
  }
LABEL_4:
  if ( *(_BYTE *)(a1 + 181) )
    *(_BYTE *)(a1 + 181) = 0;
  DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)a1);
LABEL_7:
  v6 = *(ADAPTER_RENDER **)(a1 + 2464);
  if ( v6 )
    ADAPTER_RENDER::EnableClockCalibration(v6, 1);
}
