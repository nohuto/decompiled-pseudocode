/*
 * XREFs of rimFakePnpRemoveComplete @ 0x1C0110934
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C0050100 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     rimOnPnpRemoveComplete @ 0x1C0094A7C (rimOnPnpRemoveComplete.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0094B5C (WPP_RECORDER_SF_qqD.c)
 */

__int64 __fastcall rimFakePnpRemoveComplete(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v4; // ebx
  int v5; // edi
  int v6; // edi
  __int64 v7; // rdx

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    26,
    (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids);
  v4 = -__CFSHR__(*(_DWORD *)(v2 + 200), 6);
  v5 = -__CFSHR__(*(_DWORD *)(v2 + 184), 10);
  *(_DWORD *)(v2 + 184) |= 8u;
  rimOnPnpRemoveComplete(a1, v2);
  v6 = *(_DWORD *)(v2 + 184) ^ (v5 << 9);
  *(_DWORD *)(v2 + 200) ^= (*(_DWORD *)(v2 + 200) ^ (32 * v4)) & 0x20;
  *(_DWORD *)(v2 + 184) ^= v6 & 0x200;
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v7,
    0x13u,
    0x1Bu,
    (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
    a1,
    v2,
    0);
  return 0LL;
}
