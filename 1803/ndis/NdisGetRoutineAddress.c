/*
 * XREFs of NdisGetRoutineAddress @ 0x1C00C7520
 * Callers:
 *     ndisVerifierGetRoutineAddress @ 0x1C00EFEC0 (ndisVerifierGetRoutineAddress.c)
 * Callees:
 *     FindExportedRoutineByName @ 0x1C00C7574 (FindExportedRoutineByName.c)
 */

PVOID __stdcall NdisGetRoutineAddress(PNDIS_STRING NdisRoutineName)
{
  void *ExportedRoutineByName; // rbx
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlUnicodeStringToAnsiString(&DestinationString, NdisRoutineName, 1u) < 0 )
    return 0LL;
  ExportedRoutineByName = (void *)FindExportedRoutineByName(*((_QWORD *)ndisDriverObject + 3), &DestinationString);
  RtlFreeAnsiString(&DestinationString);
  return ExportedRoutineByName;
}
