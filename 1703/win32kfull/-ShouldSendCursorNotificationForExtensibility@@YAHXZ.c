/*
 * XREFs of ?ShouldSendCursorNotificationForExtensibility@@YAHXZ @ 0x1C0111BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ShouldSendCursorNotificationForExtensibility(void)
{
  return (unsigned __int8)IsMouseInterceptEnabled();
}
