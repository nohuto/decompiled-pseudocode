/*
 * XREFs of DeviceRequestPowerUp @ 0x1C0017B84
 * Callers:
 *     PinAddPinToList @ 0x1C00020D8 (PinAddPinToList.c)
 *     IncrementActivePinCount @ 0x1C0018EB0 (IncrementActivePinCount.c)
 *     PropertySetFeatureValue @ 0x1C001CA30 (PropertySetFeatureValue.c)
 *     PropertySetBoolean @ 0x1C001CB00 (PropertySetBoolean.c)
 *     PropertySetDbLevel @ 0x1C001CDE0 (PropertySetDbLevel.c)
 *     PropertyGetSetMuxSource @ 0x1C001D810 (PropertyGetSetMuxSource.c)
 *     PropertySetMixerLevels @ 0x1C001DC00 (PropertySetMixerLevels.c)
 *     PropertyGetSetChannelConfiguration @ 0x1C001DED0 (PropertyGetSetChannelConfiguration.c)
 *     PropertySetTopologyNodeEnable @ 0x1C001E100 (PropertySetTopologyNodeEnable.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0001650 (WPP_RECORDER_SF_qq.c)
 */

NTSTATUS __fastcall DeviceRequestPowerUp(PIRP *Irp, __int64 a2, __int64 a3, __int64 a4)
{
  PIRP v4; // rdi
  _DWORD *UserApcContext; // rax
  int Context; // [rsp+20h] [rbp-28h]

  v4 = Irp[2];
  UserApcContext = v4[2].Overlay.AsynchronousParameters.UserApcContext;
  if ( UserApcContext )
    *UserApcContext = 0;
  WPP_RECORDER_SF_qq((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4, Context);
  return PoRequestPowerIrp(
           (PDEVICE_OBJECT)Irp[4],
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)PowerIrpComplete,
           v4,
           0LL);
}
