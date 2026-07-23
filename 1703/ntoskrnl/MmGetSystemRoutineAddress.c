/*
 * XREFs of MmGetSystemRoutineAddress @ 0x1404C0520
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     MiMarkKernelCfgTarget @ 0x14017D2BC (MiMarkKernelCfgTarget.c)
 *     RtlFindExportedRoutineByName @ 0x1404C05B0 (RtlFindExportedRoutineByName.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404C1180 (RtlUnicodeStringToAnsiString.c)
 *     RtlFreeAnsiString @ 0x1404ED8E0 (RtlFreeAnsiString.c)
 */

PVOID __stdcall MmGetSystemRoutineAddress(PUNICODE_STRING SystemRoutineName)
{
  const UNICODE_STRING *i; // rdx
  PVOID ExportedRoutineByName; // rbx
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  for ( i = SystemRoutineName; RtlUnicodeStringToAnsiString(&DestinationString, i, 1u) < 0; i = SystemRoutineName )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  ExportedRoutineByName = RtlFindExportedRoutineByName(PsNtosImageBase, DestinationString.Buffer);
  if ( !ExportedRoutineByName )
    ExportedRoutineByName = RtlFindExportedRoutineByName(PsHalImageBase, DestinationString.Buffer);
  RtlFreeAnsiString(&DestinationString);
  if ( ExportedRoutineByName && (int)MiMarkKernelCfgTarget() < 0 )
    return 0LL;
  else
    return ExportedRoutineByName;
}
