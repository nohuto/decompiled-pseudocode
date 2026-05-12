/*
 * XREFs of RaidUnitProcessSetDevicePowerIrp @ 0x1C000E778
 * Callers:
 *     RaidUnitSetDevicePowerIrp @ 0x1C000E684 (RaidUnitSetDevicePowerIrp.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011770 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000E860 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidIsUnitControlSupported @ 0x1C0016E04 (RaidIsUnitControlSupported.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0030534 (WPP_SF_qq.c)
 *     WPP_SF_D @ 0x1C00307A4 (WPP_SF_D.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C0036954 (RaidUnitSendPowerToMiniport.c)
 *     Template_qcccpqcqqqq @ 0x1C0038118 (Template_qcccpqcqqqq.c)
 */

__int64 __fastcall RaidUnitProcessSetDevicePowerIrp(char *Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  int v5; // r14d
  unsigned int LowPart; // esi
  unsigned int v8; // eax
  _QWORD v9[2]; // [rsp+70h] [rbp-48h] BYREF

  v9[0] = 0LL;
  v9[1] = 0LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 52LL, &WPP_e84d6fd860f635d2c40ebca745df63f2_Traceguids, Context, Irp);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = *((_DWORD *)Context + 49);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, v9);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      Template_qcccpqcqqqq(
        Irp->Tail.Overlay.CurrentStackLocation,
        CurrentStackLocation->MinorFunction,
        (unsigned int)v9,
        *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
        Context[88],
        Context[89],
        Context[90],
        (char)Irp,
        CurrentStackLocation->MinorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.QueryFile.FileInformationClass,
        v5,
        LowPart,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength);
  }
  if ( LowPart == 4 )
    *((_DWORD *)Context + 138) = 0;
  if ( (unsigned __int8)RaidIsUnitControlSupported(Context, 3LL) )
  {
    v8 = RaidUnitSendPowerToMiniport(Context, Irp);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 53LL, &WPP_e84d6fd860f635d2c40ebca745df63f2_Traceguids, v8);
    }
  }
  RaidUnitProcessSetDevicePowerIrpComplete(Context, Irp);
  return 0LL;
}
