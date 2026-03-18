/*
 * XREFs of ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0084BB8
 * Callers:
 *     ?DXGADAPTER_AcquireCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00114E0 (-DXGADAPTER_AcquireCoreSync@@YAXPEAVDXGADAPTER@@W4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00B8910 (DxgkAcquireAdapterCoreSync.c)
 *     ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C0186730 (-DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0083C04 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C0084910 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C0170C3C (-AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::AcquireCoreSync(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  ADAPTER_RENDER *v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax

  v2 = a2;
  if ( DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4, v6);
    v11[3] = 275LL;
    v11[4] = 4LL;
    v11[5] = a1;
    v11[6] = 0LL;
    v11[7] = 0LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  if ( !KeReadStateEvent((PRKEVENT)(a1 + 48)) )
  {
    if ( (_DWORD)v2 == 4 )
      return;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v7, &EventBlockThread, v8, 72);
    KeWaitForSingleObject((PVOID)(a1 + 48), Executive, 0, 0, 0LL);
  }
  switch ( (_DWORD)v2 )
  {
    case 1:
      DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)a1);
      break;
    case 2:
      DXGADAPTER::AcquireCoreResourceExclusive(a1, 2, 1);
      v10 = *(_QWORD *)(a1 + 2312);
      if ( v10 )
        ADAPTER_RENDER::FlushScheduler(v10, 6, 0xFFFFFFFF, 0);
      break;
    case 3:
      DXGADAPTER::AcquireCoreResourceExclusive(a1, 2, 1);
      break;
    case 4:
      DXGADAPTER::AcquireLocksForPowerStateD3transition((DXGADAPTER *)a1);
      break;
    case 6:
      DXGADAPTER::AcquireCoreResourceExclusive(a1, 2, 1);
      *(_BYTE *)(a1 + 181) = 1;
      break;
    default:
      v12 = WdLogNewEntry5_WdError((unsigned int)(v2 - 4));
      *(_QWORD *)(v12 + 24) = v2;
      WdLogEvent5_WdError(v12);
      break;
  }
  v9 = *(ADAPTER_RENDER **)(a1 + 2312);
  if ( v9 )
  {
    if ( (((_DWORD)v2 - 4) & 0xFFFFFFFD) == 0 )
      ADAPTER_RENDER::EnableClockCalibration(v9, 0);
  }
}
