/*
 * XREFs of DbgPrintRIM @ 0x1C0055708
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C0054C24 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C0054FD4 (RIMCreateHidDesc.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01098C8 (RIMIDECreatePointerDeviceInfo.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C011228C (rimExtractDigitizerPageButtonUsages.c)
 * Callees:
 *     <none>
 */

ULONG DbgPrintRIM(PCCH Format, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x70u, 1u, Format, va);
}
