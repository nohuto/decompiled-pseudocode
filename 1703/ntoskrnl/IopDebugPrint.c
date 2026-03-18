/*
 * XREFs of IopDebugPrint @ 0x1401F89EC
 * Callers:
 *     PnpCollectOpenHandles @ 0x1406A0430 (PnpCollectOpenHandles.c)
 *     PnpCollectOpenHandlesCallBack @ 0x1406A04D0 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1400690F0 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 IopDebugPrint(ULONG Level, const char *a2, ...)
{
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  vDbgPrintExWithPrefixInternal("NTOSPNP:", 0x20u, Level, a2, va, 1);
  return Level;
}
