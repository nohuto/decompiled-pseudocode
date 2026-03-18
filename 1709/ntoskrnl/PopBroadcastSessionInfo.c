/*
 * XREFs of PopBroadcastSessionInfo @ 0x1405E9064
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x140158480 (PopPowerSourceChangeCallback.c)
 *     PopWin32kPowerSettingCallback @ 0x140158540 (PopWin32kPowerSettingCallback.c)
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 *     PopLidSwitchChangeCallback @ 0x1406F7960 (PopLidSwitchChangeCallback.c)
 *     PopSetAwayModeStatus @ 0x1406FD814 (PopSetAwayModeStatus.c)
 *     PopSetWin32kInputTimeout @ 0x14070A0DC (PopSetWin32kInputTimeout.c)
 * Callees:
 *     PopInvokeWin32Callout @ 0x1404E8B38 (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopBroadcastSessionInfo(int a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-38h] BYREF
  char v5; // [rsp+24h] [rbp-34h]
  int v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  result = 0LL;
  if ( PsWin32CalloutsEstablished )
  {
    v4 = a1;
    v6 = a2;
    v7 = a3;
    v5 = 0;
    v8 = 0;
    v9 = 0LL;
    return PopInvokeWin32Callout(5, (__int64)&v4, 2, 0LL);
  }
  return result;
}
