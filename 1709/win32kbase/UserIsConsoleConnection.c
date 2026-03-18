/*
 * XREFs of UserIsConsoleConnection @ 0x1C009BC80
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00ABC7C (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

_BOOL8 UserIsConsoleConnection()
{
  return gProtocolType == 0;
}
