/*
 * XREFs of RaUnitRemoveDeviceIrp @ 0x1C003C584
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0005620 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     WPP_SF_qq @ 0x1C0030BAC (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0030BFC (WPP_SF_qqD.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0037270 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitReenablePendingTimer @ 0x1C0038424 (RaidUnitReenablePendingTimer.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C003BEB4 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C003BFE8 (RaUnitDisableDeviceIrp.c)
 */

__int64 __fastcall RaUnitRemoveDeviceIrp(__int64 a1, IRP *a2)
{
  unsigned int v5; // esi
  int v6; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xDu,
      (__int64)&WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
      a1,
      a2);
  }
  if ( *(_DWORD *)(a1 + 40) == 6 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xEu,
        (__int64)&WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
        a1,
        a2);
    }
    return RaidCompleteRequestEx(a2, 0, 0xC000000E);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 152) & 0x20) == 0 )
      RaUnitDeregisterFromIdleDetection(a1);
    if ( (*(_BYTE *)(a1 + 152) & 4) != 0 )
    {
      v5 = RaUnitDisableDeviceIrp(a1, a2);
      RaidUnitReenablePendingTimer(a1, 0);
    }
    else
    {
      v5 = RaUnitDeleteDeviceIrp(a1, a2);
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v6 = v5;
      WPP_SF_qqD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xFu,
        (__int64)&WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
        a1,
        a2,
        v6);
    }
    return v5;
  }
}
