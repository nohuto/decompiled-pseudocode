/*
 * XREFs of DeviceRequestPowerUp @ 0x1C0013798
 * Callers:
 *     PinAddPinToList @ 0x1C0002038 (PinAddPinToList.c)
 *     IncrementActivePinCount @ 0x1C0014A70 (IncrementActivePinCount.c)
 *     PropertySetFeatureValue @ 0x1C0018690 (PropertySetFeatureValue.c)
 *     PropertySetBoolean @ 0x1C0018760 (PropertySetBoolean.c)
 *     PropertySetDbLevel @ 0x1C0018A40 (PropertySetDbLevel.c)
 *     PropertyGetSetMuxSource @ 0x1C0019460 (PropertyGetSetMuxSource.c)
 *     PropertySetMixerLevels @ 0x1C0019850 (PropertySetMixerLevels.c)
 *     PropertyGetSetChannelConfiguration @ 0x1C0019B20 (PropertyGetSetChannelConfiguration.c)
 *     PropertySetTopologyNodeEnable @ 0x1C0019D50 (PropertySetTopologyNodeEnable.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00014D0 (WPP_RECORDER_SF_qq.c)
 */

NTSTATUS __fastcall DeviceRequestPowerUp(PIRP *Irp, __int64 a2, __int64 a3, __int64 a4)
{
  PIRP v4; // rdi
  _DWORD *UserApcRoutine; // rax
  int Context; // [rsp+20h] [rbp-28h]

  v4 = Irp[2];
  UserApcRoutine = v4[2].Overlay.AsynchronousParameters.UserApcRoutine;
  if ( UserApcRoutine )
    *UserApcRoutine = 0;
  WPP_RECORDER_SF_qq((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, Context);
  return PoRequestPowerIrp(
           (PDEVICE_OBJECT)Irp[4],
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)PowerIrpComplete,
           v4,
           0LL);
}
