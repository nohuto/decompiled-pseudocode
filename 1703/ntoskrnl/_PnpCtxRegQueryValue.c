/*
 * XREFs of _PnpCtxRegQueryValue @ 0x140739C98
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x140268090 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipMigratePnpState @ 0x140822604 (PipMigratePnpState.c)
 *     PipHardwareConfigExists @ 0x1408334D8 (PipHardwareConfigExists.c)
 *     PipProcessPendingObjects @ 0x140834030 (PipProcessPendingObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  return RegRtlQueryValue(a2, a3, a4, a5, a6);
}
