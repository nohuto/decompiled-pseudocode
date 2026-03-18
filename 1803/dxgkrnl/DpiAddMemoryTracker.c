/*
 * XREFs of DpiAddMemoryTracker @ 0x1C0040490
 * Callers:
 *     ?DxgkAllocateMdlMemoryTracker@@YAJQEAXPEAU_MDL@@W4DXG_DRIVER_MEMORY_TRACKER_TYPE@@PEAPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z @ 0x1C002E5DC (-DxgkAllocateMdlMemoryTracker@@YAJQEAXPEAU_MDL@@W4DXG_DRIVER_MEMORY_TRACKER_TYPE@@PEAPEAUDXG_DRI.c)
 *     DxgkAllocateContiguousMemoryCB @ 0x1C002E9E0 (DxgkAllocateContiguousMemoryCB.c)
 *     ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KPEAPEAU_MDL@@@Z @ 0x1C014D698 (-PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KPEAPEAU_MDL@@@Z.c)
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C0040538 (DpiGetIoMmuContextFromDevice.c)
 *     DpiMapMemoryTrackerToIoMmu @ 0x1C00406E8 (DpiMapMemoryTrackerToIoMmu.c)
 */

__int64 __fastcall DpiAddMemoryTracker(__int64 a1, __int64 *a2)
{
  __int64 IoMmuContextFromDevice; // rbx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 **v9; // rcx
  __int64 v10; // rax

  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice();
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(IoMmuContextFromDevice + 16);
  *(_QWORD *)(IoMmuContextFromDevice + 72) = KeGetCurrentThread();
  v4 = DpiMapMemoryTrackerToIoMmu(IoMmuContextFromDevice, a2);
  v8 = v4;
  if ( v4 < 0 )
  {
    v10 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v10 + 24) = v8;
    WdLogEvent5_WdWarning(v10);
  }
  else
  {
    v9 = *(__int64 ***)(IoMmuContextFromDevice + 8);
    if ( *v9 != (__int64 *)IoMmuContextFromDevice )
      __fastfail(3u);
    *a2 = IoMmuContextFromDevice;
    a2[1] = (__int64)v9;
    *v9 = a2;
    *(_QWORD *)(IoMmuContextFromDevice + 8) = a2;
  }
  *(_QWORD *)(IoMmuContextFromDevice + 72) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(IoMmuContextFromDevice + 16);
  return (unsigned int)v8;
}
