/*
 * XREFs of ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C00F6430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 */

void __fastcall RIMOnTTMDeviceClose(__int64 a1)
{
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x10u,
    (__int64)&WPP_6f93d23ab5493b07c801fc1105033033_Traceguids,
    a1);
  ObfDereferenceObject(*(PVOID *)(a1 + 32));
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x11u,
    (__int64)&WPP_6f93d23ab5493b07c801fc1105033033_Traceguids);
}
