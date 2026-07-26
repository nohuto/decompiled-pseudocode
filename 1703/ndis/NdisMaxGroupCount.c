/*
 * XREFs of NdisMaxGroupCount @ 0x1C0052150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
USHORT NdisMaxGroupCount(void)
{
  return KeQueryMaximumGroupCount();
}
