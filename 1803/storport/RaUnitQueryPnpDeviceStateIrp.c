/*
 * XREFs of RaUnitQueryPnpDeviceStateIrp @ 0x1C005EA44
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00077A0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitQueryPnpDeviceStateIrp(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 684) || *(_DWORD *)(a1 + 688) || *(_DWORD *)(a1 + 692) )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  if ( (**(_BYTE **)(a1 + 96) & 0x1F) == 0x14 && !BYTE3(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
    *(_DWORD *)(a2 + 56) |= 2u;
  return RaidCompleteRequestEx((PIRP)a2, 0, 0);
}
