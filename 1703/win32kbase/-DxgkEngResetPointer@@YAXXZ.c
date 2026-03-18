/*
 * XREFs of ?DxgkEngResetPointer@@YAXXZ @ 0x1C00F0520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void DxgkEngResetPointer(void)
{
  if ( (int)IsUserResetPointerSupported() >= 0 )
    UserResetPointer();
}
