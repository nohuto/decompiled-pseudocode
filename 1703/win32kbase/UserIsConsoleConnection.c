/*
 * XREFs of UserIsConsoleConnection @ 0x1C0092620
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00A25FC (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

_BOOL8 UserIsConsoleConnection()
{
  return gProtocolType == 0;
}
