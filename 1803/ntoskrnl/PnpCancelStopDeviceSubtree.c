/*
 * XREFs of PnpCancelStopDeviceSubtree @ 0x14073DF48
 * Callers:
 *     PnpCancelStopDeviceSubtree @ 0x14073DF48 (PnpCancelStopDeviceSubtree.c)
 *     PnpRebalance @ 0x14073E380 (PnpRebalance.c)
 * Callees:
 *     PnpCancelStopDeviceNode @ 0x14073DEB8 (PnpCancelStopDeviceNode.c)
 *     PnpCancelStopDeviceSubtree @ 0x14073DF48 (PnpCancelStopDeviceSubtree.c)
 */

void __fastcall PnpCancelStopDeviceSubtree(ULONG_PTR a1)
{
  _QWORD *i; // rbx

  PnpCancelStopDeviceNode(a1);
  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
    PnpCancelStopDeviceSubtree(i);
}
