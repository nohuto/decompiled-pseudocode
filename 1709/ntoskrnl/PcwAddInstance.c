/*
 * XREFs of PcwAddInstance @ 0x140573600
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x1404875F0 (ExProcessorCounterSetCallback.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x1406B0DFC (FsRtlAddDiskIOCounterInstance.c)
 *     FsRtlDiskIOCounterSetCallback @ 0x1406B0ED0 (FsRtlDiskIOCounterSetCallback.c)
 *     KiSynchCounterSetCallback @ 0x1406D7A50 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1406D7B60 (KiSynchNumaCounterSetCallback.c)
 *     PoThermalCounterSetCallback @ 0x1406FFA40 (PoThermalCounterSetCallback.c)
 *     EtwpEventTracingCounterSetCallback @ 0x14078C4C0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14011BED8 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14011BEF0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExpPcwDisabledStatus @ 0x14075EFE8 (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwAddInstance(PPCW_BUFFER Buffer, PCUNICODE_STRING Name, ULONG Id, ULONG Count, PPCW_DATA Data)
{
  unsigned __int64 ExtensionTable; // rax
  NTSTATUS v10; // ebx

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  if ( !ExtensionTable )
    return ExpPcwDisabledStatus();
  v10 = (*(__int64 (__fastcall **)(PPCW_BUFFER, PCUNICODE_STRING, _QWORD, _QWORD, PPCW_DATA))(ExtensionTable + 32))(
          Buffer,
          Name,
          Id,
          Count,
          Data);
  ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  return v10;
}
