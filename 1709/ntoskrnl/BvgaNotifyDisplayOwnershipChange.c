/*
 * XREFs of BvgaNotifyDisplayOwnershipChange @ 0x1401F45A0
 * Callers:
 *     <none>
 * Callees:
 *     BgkNotifyDisplayOwnershipChange @ 0x14013EC50 (BgkNotifyDisplayOwnershipChange.c)
 *     BvgaAcquireDisplayOwnership @ 0x1401F4390 (BvgaAcquireDisplayOwnership.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1401F45F0 (BvgaNotifyDisplayOwnershipLost.c)
 */

__int64 __fastcall BvgaNotifyDisplayOwnershipChange(char a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD))
{
  if ( a1 )
  {
    if ( BvgaDisplayState )
      BvgaAcquireDisplayOwnership();
  }
  else if ( BvgaDisplayState != 2 )
  {
    BvgaNotifyDisplayOwnershipLost(0LL);
  }
  BgkNotifyDisplayOwnershipChange(a1, a2);
  return 0LL;
}
