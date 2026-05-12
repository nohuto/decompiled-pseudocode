/*
 * XREFs of RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0010D70
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     WPP_SF_qq @ 0x1C002C280 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C002C2D0 (WPP_SF_qqD.c)
 */

void __fastcall RaidAdapterSetDevicePowerCompletionRoutine(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  void *DeviceExtension; // rbx
  int v7; // esi

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( PowerState.SystemState == PowerSystemWorking )
  {
    *((_BYTE *)DeviceExtension + 108) &= ~1u;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        40LL,
        &WPP_39b6f691d58430155b1312f31604fba7_Traceguids,
        DeviceExtension,
        Context);
    }
    *((_BYTE *)DeviceExtension + 108) &= ~2u;
    v7 = RaidCompleteRequestEx(Context, 0, IoStatus->Status);
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)DeviceExtension + 32));
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        41LL,
        &WPP_39b6f691d58430155b1312f31604fba7_Traceguids,
        DeviceExtension,
        Context,
        v7);
    }
  }
}
