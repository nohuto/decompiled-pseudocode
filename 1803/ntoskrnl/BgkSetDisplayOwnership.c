/*
 * XREFs of BgkSetDisplayOwnership @ 0x14017C450
 * Callers:
 *     <none>
 * Callees:
 *     BgkNotifyDisplayOwnershipChange @ 0x140164C40 (BgkNotifyDisplayOwnershipChange.c)
 */

__int64 __fastcall BgkSetDisplayOwnership(char a1)
{
  return BgkNotifyDisplayOwnershipChange(a1, 0LL);
}
