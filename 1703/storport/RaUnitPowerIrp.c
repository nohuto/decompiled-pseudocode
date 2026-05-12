/*
 * XREFs of RaUnitPowerIrp @ 0x1C000E39C
 * Callers:
 *     RaDriverPowerIrp @ 0x1C0011A80 (RaDriverPowerIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x1C0005080 (RaUnitAcquireRemoveLock.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00054E4 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaidUnitSetPowerIrp @ 0x1C000E478 (RaidUnitSetPowerIrp.c)
 *     WPP_SF_qq @ 0x1C0030534 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0030584 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C00305E4 (WPP_SF_qqDD.c)
 */

__int64 __fastcall RaUnitPowerIrp(struct _KEVENT *Context, PIRP Irp)
{
  signed int v4; // eax
  int MinorFunction; // ebp
  PDEVICE_OBJECT v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // esi
  unsigned int v10; // r8d

  v4 = RaUnitAcquireRemoveLock((__int64)Context);
  if ( v4 < 0 )
  {
    Irp->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(Irp, 0, v4);
  }
  else
  {
    MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        44LL,
        &WPP_e84d6fd860f635d2c40ebca745df63f2_Traceguids,
        Context,
        Irp,
        MinorFunction);
      v6 = WPP_GLOBAL_Control;
    }
    if ( MinorFunction == 2 )
    {
      v7 = RaidUnitSetPowerIrp(Context, Irp);
    }
    else
    {
      if ( MinorFunction == 3 )
      {
        if ( v6 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v6->Timer) & 4) != 0 && BYTE1(v6->Timer) >= 4u )
          WPP_SF_qq(v6->AttachedDevice, 46LL, &WPP_e84d6fd860f635d2c40ebca745df63f2_Traceguids, Context, Irp);
        v10 = 0;
      }
      else
      {
        v10 = -1073741637;
      }
      v7 = RaidCompleteRequestEx(Irp, 0, v10);
    }
    v8 = v7;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqDD(
        WPP_GLOBAL_Control->AttachedDevice,
        45LL,
        &WPP_e84d6fd860f635d2c40ebca745df63f2_Traceguids,
        Context,
        Irp,
        MinorFunction,
        v7);
    }
    RaUnitReleaseRemoveLock(Context);
    return v8;
  }
}
