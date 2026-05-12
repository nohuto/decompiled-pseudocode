/*
 * XREFs of RaidAdapterPowerUpDeviceCompletion @ 0x1C0011690
 * Callers:
 *     <none>
 * Callees:
 *     RaidPowerPassToMiniPort @ 0x1C000EB28 (RaidPowerPassToMiniPort.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011770 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidIsAdapterControlSupported @ 0x1C0012E88 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C001DE68 (RaidAdapterSendPowerToMiniport.c)
 *     WPP_SF_qq @ 0x1C0030534 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0030584 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaidAdapterPowerUpDeviceCompletion(__int64 a1, IRP *a2)
{
  __int64 v2; // rdi
  PDEVICE_OBJECT v5; // rcx
  int Status; // r8d
  int v8; // eax

  v2 = *(_QWORD *)(a1 + 64);
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 29LL, &WPP_e84d6fd860f635d2c40ebca745df63f2_Traceguids, v2, a2);
    v5 = WPP_GLOBAL_Control;
  }
  if ( a2->PendingReturned )
  {
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    v5 = WPP_GLOBAL_Control;
  }
  Status = a2->IoStatus.Status;
  if ( Status < 0 )
    goto LABEL_19;
  if ( (unsigned int)RaidIsAdapterControlSupported(v2, 6LL) )
  {
    RaidAdapterSendPowerToMiniport(v2, a2);
LABEL_8:
    RaidAdapterPowerUpDeviceCompletionLastStep(a2);
    return 3221225494LL;
  }
  v8 = RaidPowerPassToMiniPort(a1, (__int64)a2, (__int64)RaidAdapterDevicePowerUpSrbComplete);
  Status = v8;
  if ( v8 < 0 )
  {
    v5 = WPP_GLOBAL_Control;
LABEL_19:
    if ( v5 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v5->Timer) & 4) != 0 && BYTE1(v5->Timer) >= 4u )
      WPP_SF_qqD(v5->AttachedDevice, 30LL, &WPP_e84d6fd860f635d2c40ebca745df63f2_Traceguids, v2, a2, Status);
    goto LABEL_8;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 31LL, &WPP_e84d6fd860f635d2c40ebca745df63f2_Traceguids, v2, a2, v8);
  }
  return 3221225494LL;
}
