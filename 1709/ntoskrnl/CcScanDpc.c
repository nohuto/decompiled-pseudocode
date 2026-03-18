/*
 * XREFs of CcScanDpc @ 0x140125F20
 * Callers:
 *     <none>
 * Callees:
 *     CcNotifyWriteBehindInternal @ 0x140125F3C (CcNotifyWriteBehindInternal.c)
 */

__int64 __fastcall CcScanDpc(__int64 a1, __int64 a2)
{
  return CcNotifyWriteBehindInternal(a2, 4LL);
}
