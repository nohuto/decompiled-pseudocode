/*
 * XREFs of RaUnitRemoveDeviceIrp @ 0x1C003A840
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0004E20 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaidUnitReenablePendingTimer @ 0x1C000E0CC (RaidUnitReenablePendingTimer.c)
 *     WPP_SF_qq @ 0x1C0030534 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0030584 (WPP_SF_qqD.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C00355B8 (RaUnitDeregisterFromIdleDetection.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C003A164 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C003A298 (RaUnitDisableDeviceIrp.c)
 */

__int64 __fastcall RaUnitRemoveDeviceIrp(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT v4; // rcx
  unsigned int v6; // esi
  int v7; // [rsp+28h] [rbp-10h]

  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xDu,
      (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids,
      a1,
      a2);
    v4 = WPP_GLOBAL_Control;
  }
  if ( *(_DWORD *)(a1 + 40) == 6 )
  {
    if ( v4 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v4->Timer) & 2) != 0 && BYTE1(v4->Timer) >= 4u )
      WPP_SF_qq((__int64)v4->AttachedDevice, 0xEu, (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids, a1, a2);
    return RaidCompleteRequestEx(a2, 0, 0xC000000E);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 152) & 0x20) == 0 )
      RaUnitDeregisterFromIdleDetection(a1);
    if ( (*(_BYTE *)(a1 + 152) & 4) != 0 )
    {
      v6 = RaUnitDisableDeviceIrp(a1, a2);
      RaidUnitReenablePendingTimer(a1, 0);
    }
    else
    {
      v6 = RaUnitDeleteDeviceIrp(a1, a2);
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v7 = v6;
      WPP_SF_qqD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xFu,
        (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids,
        a1,
        a2,
        v7);
    }
    return v6;
  }
}
