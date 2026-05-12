/*
 * XREFs of RaidUnitSetPowerIrp @ 0x1C000DE04
 * Callers:
 *     RaUnitPowerIrp @ 0x1C000DD20 (RaUnitPowerIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C000DF8C (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C000E0E8 (RaidUnitSetDevicePowerIrp.c)
 *     WPP_SF_qq @ 0x1C002C280 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C002C2D0 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C002C330 (WPP_SF_qqDD.c)
 */

__int64 __fastcall RaidUnitSetPowerIrp(PVOID Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int Options; // r14d
  unsigned int v6; // eax
  unsigned int v7; // esi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart <= 6 )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        48LL,
        &WPP_39b6f691d58430155b1312f31604fba7_Traceguids,
        Context,
        Irp,
        Options);
    }
    if ( Options )
    {
      if ( Options != 1 )
      {
        v7 = -1073741823;
        goto LABEL_8;
      }
      v6 = RaidUnitSetDevicePowerIrp(Context, Irp);
    }
    else
    {
      v6 = RaidUnitSetSystemPowerIrp(Context, Irp);
    }
    v7 = v6;
LABEL_8:
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqDD(
        WPP_GLOBAL_Control->AttachedDevice,
        49LL,
        &WPP_39b6f691d58430155b1312f31604fba7_Traceguids,
        Context,
        Irp,
        Options,
        v7);
    }
    return v7;
  }
  v7 = RaidCompleteRequestEx(Irp, 0, 0);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 47LL, &WPP_39b6f691d58430155b1312f31604fba7_Traceguids, Context, Irp);
  }
  return v7;
}
