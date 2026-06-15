/*
 * XREFs of s_pbmRegisterAppClosureNotification @ 0x1800A2450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall s_pbmRegisterAppClosureNotification(__int64 a1)
{
  if ( (unsigned int)IsPbmRegisterAppClosureNotificationSupported() )
    return PbmRegisterAppClosureNotification(a1);
  else
    return 0LL;
}
