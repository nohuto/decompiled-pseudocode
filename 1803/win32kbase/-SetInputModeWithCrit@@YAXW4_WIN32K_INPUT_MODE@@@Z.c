/*
 * XREFs of ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00A2BD4
 * Callers:
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00A2A74 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     PowerConnectionEvent @ 0x1C00A456C (PowerConnectionEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     RIMSendLatencyMgtRequest @ 0x1C00F19F0 (RIMSendLatencyMgtRequest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

NTSTATUS __fastcall SetInputModeWithCrit(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _DWORD InputBuffer[2]; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-20h]

  v2 = a1;
  if ( !gSystemIsAoAc )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  InputBuffer[1] = 0;
  InputBuffer[0] = 28;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      RIMSendLatencyMgtRequest(1LL);
      *(_DWORD *)gpsi |= 0x2000u;
      dword_1C01A3094 = 1;
      *(_DWORD *)gpsi &= ~0x4000u;
      dword_1C01A3098 = 0;
      v5 = 1;
    }
    else
    {
      *(_DWORD *)gpsi &= ~0x2000u;
      dword_1C01A3094 = 0;
      *(_DWORD *)gpsi |= 0x4000u;
      dword_1C01A3098 = 1;
      v5 = 2;
    }
  }
  else
  {
    *(_DWORD *)gpsi &= ~0x4000u;
    dword_1C01A3098 = 0;
    *(_DWORD *)gpsi &= ~0x2000u;
    dword_1C01A3094 = 0;
    if ( (int)IsWakeRITForConfigSwitchSupported() >= 0 )
      WakeRITForConfigSwitch();
    v5 = 0;
  }
  return ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0xCu, 0LL, 0);
}
