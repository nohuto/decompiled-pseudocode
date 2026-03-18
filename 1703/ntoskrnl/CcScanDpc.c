/*
 * XREFs of CcScanDpc @ 0x14002FD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CcScanDpc(__int64 a1, __int64 a2)
{
  return CcNotifyWriteBehindInternal(a2, 4LL);
}
