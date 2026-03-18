/*
 * XREFs of HUBMISC_StripSymbolicNamePrefix @ 0x1C002AED4
 * Callers:
 *     HUBPDO_GetHubName @ 0x1C001215C (HUBPDO_GetHubName.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C006833C (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C0068F50 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     WMI_AcquireHubName @ 0x1C0074438 (WMI_AcquireHubName.c)
 *     WMI_FireNotification @ 0x1C0075028 (WMI_FireNotification.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall HUBMISC_StripSymbolicNamePrefix(unsigned __int16 *a1, _QWORD *a2)
{
  _WORD *result; // rax
  __int64 v3; // r8

  result = (_WORD *)*((_QWORD *)a1 + 1);
  v3 = *a1;
  if ( result )
  {
    if ( *result == 92 )
    {
      while ( 1 )
      {
        ++result;
        v3 -= 2LL;
        if ( !*result )
          break;
        if ( *result == 92 )
        {
          ++result;
          v3 -= 2LL;
          break;
        }
      }
    }
    *a2 = v3;
  }
  else
  {
    *a2 = 0LL;
  }
  return result;
}
