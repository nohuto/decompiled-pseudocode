/*
 * XREFs of GetPrimaryMonitorRect @ 0x1C0049BEC
 * Callers:
 *     xxxBroadcastDisplaySettingsChange @ 0x1C0049830 (xxxBroadcastDisplaySettingsChange.c)
 *     _GetClientRect @ 0x1C00499C0 (_GetClientRect.c)
 *     xxxSoundSentry @ 0x1C012362C (xxxSoundSentry.c)
 * Callees:
 *     GetMonitorRect @ 0x1C004BA6C (GetMonitorRect.c)
 */

_OWORD *__fastcall GetPrimaryMonitorRect(_OWORD *a1)
{
  __int64 DispInfo; // rax
  __int128 v3; // xmm0
  _OWORD *result; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  DispInfo = GetDispInfo();
  v3 = *(_OWORD *)GetMonitorRect(v5, *(_QWORD *)(DispInfo + 88));
  result = a1;
  *a1 = v3;
  return result;
}
