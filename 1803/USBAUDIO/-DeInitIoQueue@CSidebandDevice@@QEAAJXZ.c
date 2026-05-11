/*
 * XREFs of ?DeInitIoQueue@CSidebandDevice@@QEAAJXZ @ 0x1C000727C
 * Callers:
 *     DeInitSideband @ 0x1C0006C2C (DeInitSideband.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010C4 (WPP_RECORDER_SF_d.c)
 *     ?StopIoQueueThread@CSidebandDevice@@AEAAJXZ @ 0x1C00072F0 (-StopIoQueueThread@CSidebandDevice@@AEAAJXZ.c)
 */

__int64 __fastcall CSidebandDevice::DeInitIoQueue(CSidebandDevice *this, __int64 a2)
{
  __int64 v3; // rdx
  int v5; // [rsp+28h] [rbp-10h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    9u,
    0x1Du,
    (__int64)&WPP_b40f9266b8da340d7b072cc037fdecb6_Traceguids);
  LODWORD(this) = CSidebandDevice::StopIoQueueThread(this);
  v5 = (int)this;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v3,
    9u,
    0x1Eu,
    (__int64)&WPP_b40f9266b8da340d7b072cc037fdecb6_Traceguids,
    v5);
  return (unsigned int)this;
}
