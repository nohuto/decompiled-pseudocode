/*
 * XREFs of ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0084B00
 * Callers:
 *     ?DXGADAPTER_ReleaseCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00114C0 (-DXGADAPTER_ReleaseCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00B87D0 (DxgkReleaseAdapterCoreSync.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C01867E0 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C001F71C (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C00202B8 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0083C04 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0084890 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0102698 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C0172384 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ReleaseCoreSync(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edx
  ADAPTER_RENDER *v8; // rcx
  __int64 v9; // rcx
  ADAPTER_RENDER *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax

  v2 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4, v6);
    v11[3] = 275LL;
    v11[4] = 4LL;
    v11[5] = a1;
    v11[6] = 0LL;
    v11[7] = 0LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  v7 = 7;
  if ( (_DWORD)v2 == 1 )
    goto LABEL_4;
  if ( (_DWORD)v2 == 2 )
    goto LABEL_11;
  if ( (_DWORD)v2 != 3 )
  {
    if ( (_DWORD)v2 != 5 )
    {
      v12 = WdLogNewEntry5_WdError((unsigned int)(v2 - 3));
      *(_QWORD *)(v12 + 24) = v2;
      WdLogEvent5_WdError(v12);
      goto LABEL_7;
    }
    v10 = *(ADAPTER_RENDER **)(a1 + 2312);
    if ( v10 )
    {
      ADAPTER_RENDER::RestoreFromPurgeSegments(v10);
      v7 = 10;
    }
LABEL_11:
    v9 = *(_QWORD *)(a1 + 2312);
    if ( v9 )
      ADAPTER_RENDER::FlushScheduler(v9, v7, 0xFFFFFFFF, 0);
    if ( *(_DWORD *)(a1 + 136) == 1 )
    {
      DXGADAPTER::ReleaseLocksForPowerStateD3transition((DXGADAPTER *)a1);
      *(_DWORD *)(a1 + 136) = 0;
      *(_DWORD *)(a1 + 2788) = 0;
      DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)a1);
      if ( *(_QWORD *)(a1 + 2704) )
        DXGADAPTER::ScheduleAdapterActivityCheck((KSPIN_LOCK *)a1);
    }
  }
LABEL_4:
  if ( *(_BYTE *)(a1 + 181) )
    *(_BYTE *)(a1 + 181) = 0;
  DXGADAPTER::ReleaseCoreResource((PERESOURCE *)a1);
LABEL_7:
  v8 = *(ADAPTER_RENDER **)(a1 + 2312);
  if ( v8 )
    ADAPTER_RENDER::EnableClockCalibration(v8, 1);
}
