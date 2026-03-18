/*
 * XREFs of CcScanDpc @ 0x1400C5240
 * Callers:
 *     <none>
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x1400C525C (CcNotifyWriteBehindInternal.c)
 */

__int64 __fastcall CcScanDpc(__int64 a1, __int64 a2)
{
  return CcNotifyWriteBehindInternal(a2, 4LL);
}
