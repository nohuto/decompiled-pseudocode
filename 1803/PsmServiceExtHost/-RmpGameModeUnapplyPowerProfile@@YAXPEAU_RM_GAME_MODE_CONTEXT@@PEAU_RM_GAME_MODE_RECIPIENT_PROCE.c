/*
 * XREFs of ?RmpGameModeUnapplyPowerProfile@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180058FA0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpSystemEnableDisableGameModePowerProfile@@YAJE@Z @ 0x18006179C (-RmpSystemEnableDisableGameModePowerProfile@@YAJE@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18006C948 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall RmpGameModeUnapplyPowerProfile(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  const struct _TlgProvider_t *v6; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( (int)RmpSystemEnableDisableGameModePowerProfile(0) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgs(v3, v2, v4, v5);
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      TlgWrite(v6, &unk_18007E594, 0LL, 0LL, 2u, &pData);
  }
}
