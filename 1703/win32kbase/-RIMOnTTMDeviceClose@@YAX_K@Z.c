/*
 * XREFs of ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C010CFA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 */

void __fastcall RIMOnTTMDeviceClose(__int64 a1)
{
  int v2; // edx

  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x11u,
    (__int64)&WPP_bde2c2312b7534929182a13e08e71911_Traceguids,
    a1);
  ObfDereferenceObject(*(PVOID *)(a1 + 32));
  LOBYTE(v2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    19,
    18,
    (__int64)&WPP_bde2c2312b7534929182a13e08e71911_Traceguids);
}
