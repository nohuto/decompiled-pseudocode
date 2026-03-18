/*
 * XREFs of DwmSyncFlushAndWaitForBatch @ 0x1C00FB5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmSyncFlushAndWaitForBatch(__int64 a1)
{
  return DwmSyncFlushForceRenderAndWaitForBatch(a1, 0LL);
}
