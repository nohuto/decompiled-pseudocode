/*
 * XREFs of s_pbmUnregisterAppClosureNotification @ 0x1800A2600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall s_pbmUnregisterAppClosureNotification(__int64 a1)
{
  if ( (unsigned int)IsPbmUnregisterAppClosureNotificationSupported() )
    return PbmUnregisterAppClosureNotification(a1);
  else
    return 0LL;
}
