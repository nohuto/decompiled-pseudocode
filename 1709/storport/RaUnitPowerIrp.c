/*
 * XREFs of RaUnitPowerIrp @ 0x1C000E690
 * Callers:
 *     RaDriverPowerIrp @ 0x1C0010AC0 (RaDriverPowerIrp.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0005880 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C00058A4 (RaUnitAcquireRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidUnitSetPowerIrp @ 0x1C000E774 (RaidUnitSetPowerIrp.c)
 *     WPP_SF_qq @ 0x1C0030BAC (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0030BFC (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C0030C5C (WPP_SF_qqDD.c)
 */

__int64 __fastcall RaUnitPowerIrp(PVOID Context, PIRP Irp)
{
  signed int v4; // eax
  int MinorFunction; // ebp
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned int v9; // r8d

  v4 = RaUnitAcquireRemoveLock((__int64)Context);
  if ( v4 < 0 )
  {
    Irp->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(Irp, 0, v4);
  }
  else
  {
    MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        44LL,
        &WPP_0c5c8aed4ecb3cf637873a43b49c0b60_Traceguids,
        Context,
        Irp,
        MinorFunction);
    }
    if ( MinorFunction == 2 )
    {
      v6 = RaidUnitSetPowerIrp(Context, Irp);
    }
    else
    {
      if ( MinorFunction == 3 )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            46LL,
            &WPP_0c5c8aed4ecb3cf637873a43b49c0b60_Traceguids,
            Context,
            Irp);
        }
        v9 = 0;
      }
      else
      {
        v9 = -1073741637;
      }
      v6 = RaidCompleteRequestEx(Irp, 0, v9);
    }
    v7 = v6;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqDD(
        WPP_GLOBAL_Control->AttachedDevice,
        45LL,
        &WPP_0c5c8aed4ecb3cf637873a43b49c0b60_Traceguids,
        Context,
        Irp,
        MinorFunction,
        v6);
    }
    RaUnitReleaseRemoveLock((__int64)Context);
    return v7;
  }
}
