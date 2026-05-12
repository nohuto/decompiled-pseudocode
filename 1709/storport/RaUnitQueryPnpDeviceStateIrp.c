/*
 * XREFs of RaUnitQueryPnpDeviceStateIrp @ 0x1C0061844
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0005620 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitQueryPnpDeviceStateIrp(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 684) || *(_DWORD *)(a1 + 688) || *(_DWORD *)(a1 + 692) )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  if ( (**(_BYTE **)(a1 + 96) & 0x1F) == 0x14 && !IsSMREnabled )
    *(_DWORD *)(a2 + 56) |= 2u;
  return RaidCompleteRequestEx((PIRP)a2, 0, 0);
}
