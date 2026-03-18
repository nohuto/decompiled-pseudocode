/*
 * XREFs of MmGetSystemRoutineAddress @ 0x1404DE7F0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     MiMarkKernelCfgTarget @ 0x1400AF120 (MiMarkKernelCfgTarget.c)
 *     RtlFreeAnsiString @ 0x1404DBD90 (RtlFreeAnsiString.c)
 *     RtlFindExportedRoutineByName @ 0x1404DC270 (RtlFindExportedRoutineByName.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404DF110 (RtlUnicodeStringToAnsiString.c)
 */

PVOID __stdcall MmGetSystemRoutineAddress(PUNICODE_STRING SystemRoutineName)
{
  const UNICODE_STRING *i; // rdx
  char *ExportedRoutineByName; // rbx
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  for ( i = SystemRoutineName; RtlUnicodeStringToAnsiString(&DestinationString, i, 1u) < 0; i = SystemRoutineName )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  ExportedRoutineByName = RtlFindExportedRoutineByName((char *)PsNtosImageBase, DestinationString.Buffer);
  if ( !ExportedRoutineByName )
    ExportedRoutineByName = RtlFindExportedRoutineByName((char *)PsHalImageBase, DestinationString.Buffer);
  RtlFreeAnsiString(&DestinationString);
  if ( ExportedRoutineByName && (int)MiMarkKernelCfgTarget() < 0 )
    return 0LL;
  else
    return ExportedRoutineByName;
}
