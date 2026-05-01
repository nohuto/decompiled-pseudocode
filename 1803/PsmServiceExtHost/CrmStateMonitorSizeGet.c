/*
 * XREFs of CrmStateMonitorSizeGet @ 0x180039A80
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x180039818 (CrmRegisterToStateMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorSizeGet(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 > 10 )
  {
    if ( a1 == 11 )
      return 72LL;
    if ( a1 >= 16 )
      return result;
    return 80LL;
  }
  if ( a1 != 10 )
  {
    if ( a1 < 0 )
      return result;
    if ( a1 > 1 )
    {
      if ( a1 <= 7 )
        return 72LL;
      if ( a1 != 8 )
        return 64LL;
    }
    return 80LL;
  }
  return 72LL;
}
