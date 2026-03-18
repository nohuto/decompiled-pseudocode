/*
 * XREFs of PnpStopDeviceSubtree @ 0x1406AA080
 * Callers:
 *     PnpRebalance @ 0x1406A9D3C (PnpRebalance.c)
 *     PnpStopDeviceSubtree @ 0x1406AA080 (PnpStopDeviceSubtree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400810C0 (PipSetDevNodeState.c)
 *     IopQueryReconfiguration @ 0x1406A7BEC (IopQueryReconfiguration.c)
 *     PnpStopDeviceSubtree @ 0x1406AA080 (PnpStopDeviceSubtree.c)
 */

__int64 __fastcall PnpStopDeviceSubtree(__int64 a1)
{
  _QWORD *i; // rbx
  __int64 result; // rax

  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
    result = PnpStopDeviceSubtree(i);
  if ( *(_DWORD *)(a1 + 300) == 777 )
  {
    IopQueryReconfiguration(4, *(struct _DEVICE_OBJECT **)(a1 + 32));
    return PipSetDevNodeState(a1, 778);
  }
  return result;
}
