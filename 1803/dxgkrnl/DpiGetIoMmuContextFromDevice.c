/*
 * XREFs of DpiGetIoMmuContextFromDevice @ 0x1C0040538
 * Callers:
 *     DpiAddMemoryTracker @ 0x1C0040490 (DpiAddMemoryTracker.c)
 *     DpiMapMemoryTrackersToIoMmu @ 0x1C0040780 (DpiMapMemoryTrackersToIoMmu.c)
 *     DpiRemoveMemoryTracker @ 0x1C0040818 (DpiRemoveMemoryTracker.c)
 *     ?MapHardwareReservedRangesToIoMmu@DXGADAPTER@@QEAAJXZ @ 0x1C014D5DC (-MapHardwareReservedRangesToIoMmu@DXGADAPTER@@QEAAJXZ.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C015998C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 *     DpiMapIommuContiguous @ 0x1C01EFA90 (DpiMapIommuContiguous.c)
 *     DpiMapIommuIdentityRange @ 0x1C01EFAD0 (DpiMapIommuIdentityRange.c)
 *     DpiUnmapIommuContiguous @ 0x1C01F0370 (DpiUnmapIommuContiguous.c)
 *     DpiUnmapIommuIdentityRange @ 0x1C01F03B0 (DpiUnmapIommuIdentityRange.c)
 *     DpiCreateIoMmuDomain @ 0x1C0201EE4 (DpiCreateIoMmuDomain.c)
 *     DpiDeleteIoMmuDomain @ 0x1C0201F60 (DpiDeleteIoMmuDomain.c)
 *     DpiDetachIoMmuDomain @ 0x1C0201FC4 (DpiDetachIoMmuDomain.c)
 * Callees:
 *     DpiGetFdoFromDevice @ 0x1C000B964 (DpiGetFdoFromDevice.c)
 */

__int64 __fastcall DpiGetIoMmuContextFromDevice(__int64 a1)
{
  __int64 v1; // rcx
  __int64 FdoFromDevice; // rbx
  __int64 v3; // rax

  FdoFromDevice = DpiGetFdoFromDevice(a1);
  if ( !FdoFromDevice )
  {
    v3 = WdLogNewEntry5_WdAssertion(v1);
    *(_QWORD *)(v3 + 24) = 69LL;
    WdLogEvent5_WdAssertion(v3);
  }
  return FdoFromDevice + 5304;
}
