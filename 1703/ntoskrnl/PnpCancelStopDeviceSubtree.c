/*
 * XREFs of PnpCancelStopDeviceSubtree @ 0x1406A9900
 * Callers:
 *     PnpCancelStopDeviceSubtree @ 0x1406A9900 (PnpCancelStopDeviceSubtree.c)
 *     PnpRebalance @ 0x1406A9D3C (PnpRebalance.c)
 * Callees:
 *     PnpCancelStopDeviceNode @ 0x1406A9870 (PnpCancelStopDeviceNode.c)
 *     PnpCancelStopDeviceSubtree @ 0x1406A9900 (PnpCancelStopDeviceSubtree.c)
 */

void __fastcall PnpCancelStopDeviceSubtree(ULONG_PTR a1)
{
  _QWORD *i; // rbx

  PnpCancelStopDeviceNode(a1);
  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
    PnpCancelStopDeviceSubtree(i);
}
