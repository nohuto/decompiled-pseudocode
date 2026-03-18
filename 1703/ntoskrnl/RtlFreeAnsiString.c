/*
 * XREFs of RtlFreeAnsiString @ 0x1404ED8E0
 * Callers:
 *     EtwpTraceProcessRundown @ 0x1404B06C4 (EtwpTraceProcessRundown.c)
 *     MmGetSystemRoutineAddress @ 0x1404C0520 (MmGetSystemRoutineAddress.c)
 *     EtwpWriteProcessEvent @ 0x1404ED768 (EtwpWriteProcessEvent.c)
 *     MiLoadUserSymbols @ 0x1405D4CB0 (MiLoadUserSymbols.c)
 *     KsepGetModuleInfoByName @ 0x1406B003C (KsepGetModuleInfoByName.c)
 *     ViThunkAdjustExportAddressIfHooked @ 0x140774424 (ViThunkAdjustExportAddressIfHooked.c)
 * Callees:
 *     ExFreePool @ 0x140286A00 (ExFreePool.c)
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
