/*
 * XREFs of ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C010BF70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

void __fastcall RIMOnTTMDeviceClose(__int64 a1)
{
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x11u,
    (__int64)&WPP_bde2c2312b7534929182a13e08e71911_Traceguids,
    a1);
  ObfDereferenceObject(*(PVOID *)(a1 + 32));
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x12u,
    (__int64)&WPP_bde2c2312b7534929182a13e08e71911_Traceguids);
}
