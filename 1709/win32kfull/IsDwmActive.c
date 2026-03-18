/*
 * XREFs of IsDwmActive @ 0x1C0091F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 IsDwmActive()
{
  return g_pDwmState != 0LL;
}
