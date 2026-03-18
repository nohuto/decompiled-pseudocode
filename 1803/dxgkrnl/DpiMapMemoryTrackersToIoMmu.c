/*
 * XREFs of DpiMapMemoryTrackersToIoMmu @ 0x1C0040780
 * Callers:
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C015998C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C0040538 (DpiGetIoMmuContextFromDevice.c)
 *     DpiMapMemoryTrackerToIoMmu @ 0x1C00406E8 (DpiMapMemoryTrackerToIoMmu.c)
 */

__int64 __fastcall DpiMapMemoryTrackersToIoMmu(__int64 a1)
{
  __int64 v1; // rsi
  __int64 IoMmuContextFromDevice; // rbx
  _QWORD *v3; // rdi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax

  LODWORD(v1) = 0;
  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(IoMmuContextFromDevice + 16);
  v3 = *(_QWORD **)IoMmuContextFromDevice;
  *(_QWORD *)(IoMmuContextFromDevice + 72) = KeGetCurrentThread();
  while ( v3 != (_QWORD *)IoMmuContextFromDevice )
  {
    v4 = DpiMapMemoryTrackerToIoMmu(IoMmuContextFromDevice, (__int64)v3);
    v1 = v4;
    if ( v4 < 0 )
    {
      v8 = WdLogNewEntry5_WdWarning(v6, v5, v7);
      *(_QWORD *)(v8 + 24) = v1;
      WdLogEvent5_WdWarning(v8);
      break;
    }
    v3 = (_QWORD *)*v3;
  }
  *(_QWORD *)(IoMmuContextFromDevice + 72) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(IoMmuContextFromDevice + 16);
  return (unsigned int)v1;
}
