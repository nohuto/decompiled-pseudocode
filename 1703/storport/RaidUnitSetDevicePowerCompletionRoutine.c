/*
 * XREFs of RaidUnitSetDevicePowerCompletionRoutine @ 0x1C000F390
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00054E4 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001D990 (RaidAdapterPoFxIdleComponent.c)
 *     WPP_SF_qq @ 0x1C0030534 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0030584 (WPP_SF_qqD.c)
 */

void __fastcall RaidUnitSetDevicePowerCompletionRoutine(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  struct _KEVENT *DeviceExtension; // rbx
  __int64 v7; // rcx
  int v8; // esi
  char v9; // al

  DeviceExtension = (struct _KEVENT *)DeviceObject->DeviceExtension;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      55LL,
      &WPP_e84d6fd860f635d2c40ebca745df63f2_Traceguids,
      DeviceExtension,
      Context);
  }
  v7 = *(_QWORD *)&DeviceExtension[1].Header.Lock;
  if ( *(_QWORD *)(v7 + 5088) )
  {
    v9 = BYTE1(DeviceExtension[6].Header.WaitListHead.Flink);
    if ( (v9 & 8) != 0 )
    {
      BYTE1(DeviceExtension[6].Header.WaitListHead.Flink) = v9 & 0xF7;
      RaidAdapterPoFxIdleComponent(v7, 0LL, 0LL);
    }
  }
  BYTE1(DeviceExtension[6].Header.WaitListHead.Flink) &= ~1u;
  v8 = RaidCompleteRequestEx(Context, 0, IoStatus->Status);
  RaUnitReleaseRemoveLock(DeviceExtension);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      56LL,
      &WPP_e84d6fd860f635d2c40ebca745df63f2_Traceguids,
      DeviceExtension,
      Context,
      v8);
  }
}
