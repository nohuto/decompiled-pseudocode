/*
 * XREFs of ?DxgkEngResetPointer@@YAXXZ @ 0x1C00C92E0
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
