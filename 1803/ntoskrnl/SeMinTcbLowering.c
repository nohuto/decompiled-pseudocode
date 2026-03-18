/*
 * XREFs of SeMinTcbLowering @ 0x1408C9F84
 * Callers:
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     <none>
 */

_BOOL8 SeMinTcbLowering()
{
  return (SeCiDebugOptions & 4) != 0 || !KdpBootedNodebug && (SeCiDebugOptions & 2) != 0;
}
