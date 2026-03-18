/*
 * XREFs of RtlFreeAnsiString @ 0x1404DBD90
 * Callers:
 *     EtwpWriteProcessEvent @ 0x1404DBBF8 (EtwpWriteProcessEvent.c)
 *     MmGetSystemRoutineAddress @ 0x1404DE7F0 (MmGetSystemRoutineAddress.c)
 *     MiLoadUserSymbols @ 0x1405EF47C (MiLoadUserSymbols.c)
 *     KsepGetModuleInfoByName @ 0x1406DB66C (KsepGetModuleInfoByName.c)
 *     EtwpTraceProcessRundown @ 0x14074EF74 (EtwpTraceProcessRundown.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x1407B61E0 (ViThunkAdjustExportAddressIfHooked.c)
 * Callees:
 *     ExFreePool @ 0x1402B3E80 (ExFreePool.c)
 */

void __stdcall RtlFreeAnsiString(PANSI_STRING AnsiString)
{
  char *Buffer; // rcx

  Buffer = AnsiString->Buffer;
  if ( Buffer )
  {
    ExFreePool(Buffer);
    *(_QWORD *)&AnsiString->Length = 0LL;
    AnsiString->Buffer = 0LL;
  }
}
