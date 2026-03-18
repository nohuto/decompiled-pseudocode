/*
 * XREFs of MmGetSystemRoutineAddress @ 0x140519F10
 * Callers:
 *     <none>
 * Callees:
 *     MiMarkKernelCfgTarget @ 0x140073B8C (MiMarkKernelCfgTarget.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140518490 (RtlUnicodeStringToAnsiString.c)
 *     RtlFindExportedRoutineByName @ 0x140519F90 (RtlFindExportedRoutineByName.c)
 */

PVOID __stdcall MmGetSystemRoutineAddress(PUNICODE_STRING SystemRoutineName)
{
  const UNICODE_STRING *i; // rdx
  void *ExportedRoutineByName; // rbx
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  for ( i = SystemRoutineName; RtlUnicodeStringToAnsiString(&DestinationString, i, 1u) < 0; i = SystemRoutineName )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  ExportedRoutineByName = (void *)RtlFindExportedRoutineByName(PsNtosImageBase, DestinationString.Buffer);
  if ( !ExportedRoutineByName )
    ExportedRoutineByName = (void *)RtlFindExportedRoutineByName(PsHalImageBase, DestinationString.Buffer);
  RtlFreeAnsiString((PUNICODE_STRING)&DestinationString);
  if ( ExportedRoutineByName && (int)MiMarkKernelCfgTarget() < 0 )
    return 0LL;
  else
    return ExportedRoutineByName;
}
