/*
 * XREFs of rimFakePnpRemoveComplete @ 0x1C010F3C4
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C0018DA0 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     rimOnPnpRemoveComplete @ 0x1C000BEE8 (rimOnPnpRemoveComplete.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C000BFC8 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimFakePnpRemoveComplete(__int64 a1, __int64 a2)
{
  int v4; // ebx
  int v5; // edi
  int v6; // ebx
  __int64 v7; // rdx

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x1Au,
    (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids);
  v4 = *(_DWORD *)(a2 + 184);
  v5 = -__CFSHR__(*(_DWORD *)(a2 + 200), 6);
  *(_DWORD *)(a2 + 184) = v4 | 8;
  rimOnPnpRemoveComplete(a1, a2);
  v6 = (*(_DWORD *)(a2 + 184) ^ v4) & 0x200;
  *(_DWORD *)(a2 + 200) ^= (*(_DWORD *)(a2 + 200) ^ (32 * v5)) & 0x20;
  *(_DWORD *)(a2 + 184) ^= v6;
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v7,
    0x13u,
    0x1Bu,
    (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
    a1,
    a2,
    0);
  return 0LL;
}
