/*
 * XREFs of PopMonitorProcessBrightnessAction @ 0x1406D00AC
 * Callers:
 *     PopMonitorProcessLoop @ 0x1405D3174 (PopMonitorProcessLoop.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x14007210C (PopUmpoSendPowerMessage.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopSetPowerSettingValue @ 0x1404C1D4C (PopSetPowerSettingValue.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C72B8 (PopSetPowerSettingValueAcDc.c)
 */

_UNKNOWN **__fastcall PopMonitorProcessBrightnessAction(int a1, int a2)
{
  _UNKNOWN **result; // rax
  int v4; // ecx
  _DWORD Src[22]; // [rsp+30h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  int v7; // [rsp+98h] [rbp+10h] BYREF

  result = &retaddr;
  v7 = a2;
  if ( !a1 )
    return (_UNKNOWN **)PopSetPowerSettingValue(
                          &GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS,
                          0xFFFFFFFF,
                          dword_14034BB2C,
                          4u,
                          &v7);
  v4 = a1 - 2;
  if ( v4 )
  {
    if ( v4 == 1 )
      return (_UNKNOWN **)PopSetPowerSettingValueAcDc(&GUID_VIDEO_CURRENT_MONITOR_BRIGHTNESS, 4u, &v7);
  }
  else
  {
    memset(Src, 0, 0x48uLL);
    Src[0] = 11;
    Src[2] = a2;
    return (_UNKNOWN **)PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
  }
  return result;
}
