/*
 * XREFs of RaidAdapterPowerUpDeviceCompletion @ 0x1C000F1A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000DA0C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidPowerPassToMiniPort @ 0x1C000F2D8 (RaidPowerPassToMiniPort.c)
 *     RaidIsAdapterControlSupported @ 0x1C0014F3C (RaidIsAdapterControlSupported.c)
 *     WPP_SF_qq @ 0x1C002C280 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C002C2D0 (WPP_SF_qqD.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0034EEC (RaidAdapterSendPowerToMiniport.c)
 */

__int64 __fastcall RaidAdapterPowerUpDeviceCompletion(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  int Status; // r8d
  int v6; // eax

  v2 = *(_QWORD *)(a1 + 64);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 29LL, &WPP_39b6f691d58430155b1312f31604fba7_Traceguids, v2, a2);
  }
  if ( a2->PendingReturned )
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  Status = a2->IoStatus.Status;
  if ( Status < 0 )
    goto LABEL_18;
  if ( (unsigned int)RaidIsAdapterControlSupported(v2, 6LL) )
  {
    RaidAdapterSendPowerToMiniport(v2, a2);
LABEL_20:
    RaidAdapterPowerUpDeviceCompletionLastStep(a2, v2);
    return 3221225494LL;
  }
  v6 = RaidPowerPassToMiniPort(a1, a2, RaidAdapterDevicePowerUpSrbComplete);
  Status = v6;
  if ( v6 < 0 )
  {
LABEL_18:
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        30LL,
        &WPP_39b6f691d58430155b1312f31604fba7_Traceguids,
        v2,
        a2,
        Status);
    }
    goto LABEL_20;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 31LL, &WPP_39b6f691d58430155b1312f31604fba7_Traceguids, v2, a2, v6);
  }
  return 3221225494LL;
}
