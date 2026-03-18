/*
 * XREFs of _PnpCtxRegSetValue @ 0x140739CC4
 * Callers:
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140822604 (PipMigratePnpState.c)
 * Callees:
 *     <none>
 */

int __fastcall PnpCtxRegSetValue(__int64 a1, void *a2, const WCHAR *a3, ULONG a4, void *a5, ULONG a6)
{
  return RegRtlSetValue(a2, a3, a4, a5, a6);
}
