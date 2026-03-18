/*
 * XREFs of PopPrintUserActivityPresence @ 0x1405A04F4
 * Callers:
 *     PopSetSessionUserStatus @ 0x14059FF2C (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1405A000C (PopEvaluateGlobalUserStatus.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall PopPrintUserActivityPresence(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return L"PowerUserPresent";
  v1 = a1 - 1;
  if ( !v1 )
    return L"PowerUserNotPresent";
  if ( v1 == 1 )
    return L"PowerUserInactive";
  return L"Invalid";
}
