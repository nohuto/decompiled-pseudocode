/*
 * XREFs of BgkSetDisplayOwnership @ 0x14013EC30
 * Callers:
 *     <none>
 * Callees:
 *     BgkNotifyDisplayOwnershipChange @ 0x14013EC50 (BgkNotifyDisplayOwnershipChange.c)
 */

__int64 __fastcall BgkSetDisplayOwnership(__int64 a1)
{
  return BgkNotifyDisplayOwnershipChange(a1, 0LL);
}
