/*
 * XREFs of RaidUnitProcessSetDevicePowerIrp @ 0x1C000E75C
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000DA0C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C000E0E8 (RaidUnitSetDevicePowerIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0006A0C (RaidIsUnitControlSupported.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000E868 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C000EBF8 (RaidUnitSendPowerToMiniport.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x1C002C028 (WPP_SF_D.c)
 *     WPP_SF_qq @ 0x1C002C280 (WPP_SF_qq.c)
 *     McTemplateK0qcccpqcqqqq @ 0x1C0034494 (McTemplateK0qcccpqcqqqq.c)
 */

__int64 __fastcall RaidUnitProcessSetDevicePowerIrp(__int64 Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  int v5; // r14d
  unsigned int LowPart; // esi
  unsigned int v7; // eax
  _QWORD v9[2]; // [rsp+70h] [rbp-48h] BYREF

  v9[0] = 0LL;
  v9[1] = 0LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 52LL, &WPP_39b6f691d58430155b1312f31604fba7_Traceguids, Context, Irp);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = *(_DWORD *)(Context + 196);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, v9);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      McTemplateK0qcccpqcqqqq(
        Irp->Tail.Overlay.CurrentStackLocation,
        CurrentStackLocation->MinorFunction,
        (unsigned int)v9,
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 88),
        *(_BYTE *)(Context + 89),
        *(_BYTE *)(Context + 90),
        (char)Irp,
        CurrentStackLocation->MinorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter,
        v5,
        LowPart,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength);
  }
  if ( LowPart == 4 )
    *(_DWORD *)(Context + 584) = 0;
  if ( RaidIsUnitControlSupported(Context, 3) )
  {
    v7 = RaidUnitSendPowerToMiniport(Context, Irp);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 53LL, &WPP_39b6f691d58430155b1312f31604fba7_Traceguids, v7);
    }
  }
  RaidUnitProcessSetDevicePowerIrpComplete((PVOID)Context, Irp);
  return 0LL;
}
