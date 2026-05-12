/*
 * XREFs of RaidUnitProcessSetDevicePowerIrp @ 0x1C000EA70
 * Callers:
 *     RaidUnitSetDevicePowerIrp @ 0x1C000E97C (RaidUnitSetDevicePowerIrp.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0010460 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000EB58 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidIsUnitControlSupported @ 0x1C001666C (RaidIsUnitControlSupported.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0030BAC (WPP_SF_qq.c)
 *     WPP_SF_D @ 0x1C0030E98 (WPP_SF_D.c)
 *     McTemplateK0qcccpqcqqqq @ 0x1C0036D58 (McTemplateK0qcccpqcqqqq.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C00387D4 (RaidUnitSendPowerToMiniport.c)
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
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 52LL, &WPP_0c5c8aed4ecb3cf637873a43b49c0b60_Traceguids, Context, Irp);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = *((_DWORD *)Context + 49);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, v9);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      McTemplateK0qcccpqcqqqq(
        Irp->Tail.Overlay.CurrentStackLocation,
        CurrentStackLocation->MinorFunction,
        (unsigned int)v9,
        *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
        Context[88],
        Context[89],
        Context[90],
        (char)Irp,
        CurrentStackLocation->MinorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter,
        v5,
        LowPart,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength);
  }
  if ( LowPart == 4 )
    *((_DWORD *)Context + 146) = 0;
  if ( (unsigned __int8)RaidIsUnitControlSupported(Context, 3LL) )
  {
    v8 = RaidUnitSendPowerToMiniport(Context, Irp);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 53LL, &WPP_0c5c8aed4ecb3cf637873a43b49c0b60_Traceguids, v8);
    }
  }
  RaidUnitProcessSetDevicePowerIrpComplete(Context, Irp);
  return 0LL;
}
