/*
 * XREFs of IsDwmApiPortRegistered @ 0x1C00928A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 IsDwmApiPortRegistered()
{
  return g_pDwmApiPort != 0LL;
}
