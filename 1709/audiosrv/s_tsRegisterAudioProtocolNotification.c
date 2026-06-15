/*
 * XREFs of s_tsRegisterAudioProtocolNotification @ 0x180031210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall s_tsRegisterAudioProtocolNotification(__int64 a1, __int64 a2)
{
  if ( (unsigned int)IsTSRegisterAudioProtocolNotificationSupported() )
    return TS_RegisterAudioProtocolNotification(a1, a2);
  else
    return 1LL;
}
