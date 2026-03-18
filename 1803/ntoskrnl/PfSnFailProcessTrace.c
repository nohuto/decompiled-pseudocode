/*
 * XREFs of PfSnFailProcessTrace @ 0x1405C45A4
 * Callers:
 *     PfSnLogHelper @ 0x140539004 (PfSnLogHelper.c)
 *     PfSnVolumeKeyQuery @ 0x140539080 (PfSnVolumeKeyQuery.c)
 *     PfSnLogStreamDelete @ 0x140582CE4 (PfSnLogStreamDelete.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x14048C130 (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}
