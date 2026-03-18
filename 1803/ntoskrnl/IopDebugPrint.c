/*
 * XREFs of IopDebugPrint @ 0x14023B4A8
 * Callers:
 *     PnpCollectOpenHandles @ 0x140732438 (PnpCollectOpenHandles.c)
 *     PnpCollectOpenHandlesCallBack @ 0x1407324E0 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140077340 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 IopDebugPrint(ULONG Level, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  vDbgPrintExWithPrefixInternal("NTOSPNP:", 0x20u, Level, a2, va, 1);
  return Level;
}
