/*
 * XREFs of IsDwmApiPortRegistered @ 0x1C009C110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 IsDwmApiPortRegistered()
{
  return g_pDwmApiPort != 0LL;
}
