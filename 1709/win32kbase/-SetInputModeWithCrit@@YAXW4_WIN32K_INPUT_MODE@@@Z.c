/*
 * XREFs of ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00DC95C
 * Callers:
 *     PowerConnectionEvent @ 0x1C00987FC (PowerConnectionEvent.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00DC88C (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     RIMSendLatencyMgtRequest @ 0x1C00A3920 (RIMSendLatencyMgtRequest.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SetInputModeWithCrit(int a1)
{
  _DWORD InputBuffer[2]; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+38h] [rbp-20h]

  InputBuffer[1] = 0;
  InputBuffer[0] = 28;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      RIMSendLatencyMgtRequest(1);
      *(_DWORD *)gpsi |= 0x2000u;
      dword_1C0190FD4 = 1;
      *(_DWORD *)gpsi &= ~0x4000u;
      dword_1C0190FD8 = 0;
      v3 = 1;
    }
    else
    {
      *(_DWORD *)gpsi &= ~0x2000u;
      dword_1C0190FD4 = 0;
      *(_DWORD *)gpsi |= 0x4000u;
      dword_1C0190FD8 = 1;
      v3 = 2;
    }
  }
  else
  {
    *(_DWORD *)gpsi &= ~0x4000u;
    dword_1C0190FD8 = 0;
    *(_DWORD *)gpsi &= ~0x2000u;
    dword_1C0190FD4 = 0;
    if ( (int)IsWakeRITForConfigSwitchSupported() >= 0 )
      WakeRITForConfigSwitch();
    v3 = 0;
  }
  return ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0xCu, 0LL, 0);
}
