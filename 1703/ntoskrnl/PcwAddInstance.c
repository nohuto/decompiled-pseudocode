/*
 * XREFs of PcwAddInstance @ 0x140548F20
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x1404F65F0 (ExProcessorCounterSetCallback.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x1406859F0 (FsRtlAddDiskIOCounterInstance.c)
 *     FsRtlDiskIOCounterSetCallback @ 0x140685AC0 (FsRtlDiskIOCounterSetCallback.c)
 *     KiSynchCounterSetCallback @ 0x1406AC760 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1406AC870 (KiSynchNumaCounterSetCallback.c)
 *     PoThermalCounterSetCallback @ 0x1406CBA30 (PoThermalCounterSetCallback.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140749D60 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x140117418 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140117428 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExpPcwDisabledStatus @ 0x14071F180 (ExpPcwDisabledStatus.c)
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
