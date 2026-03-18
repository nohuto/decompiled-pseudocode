/*
 * XREFs of DbgPrintRIM @ 0x1C000E2A4
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C000D844 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C000DB5C (RIMCreateHidDesc.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0108964 (RIMIDECreatePointerDeviceInfo.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C0110D78 (rimExtractDigitizerPageButtonUsages.c)
 * Callees:
 *     <none>
 */

ULONG DbgPrintRIM(PCCH Format, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x70u, 1u, Format, va);
}
