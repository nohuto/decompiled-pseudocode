/*
 * XREFs of SeMinTcbLowering @ 0x140857FD8
 * Callers:
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     <none>
 */

_BOOL8 SeMinTcbLowering()
{
  return (SeCiDebugOptions & 4) != 0 || !KdpBootedNodebug && (SeCiDebugOptions & 2) != 0;
}
