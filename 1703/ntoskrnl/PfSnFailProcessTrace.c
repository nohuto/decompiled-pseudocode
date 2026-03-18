/*
 * XREFs of PfSnFailProcessTrace @ 0x1406C4CD4
 * Callers:
 *     PfSnVolumeKeyQuery @ 0x14043E4E4 (PfSnVolumeKeyQuery.c)
 *     PfSnLogStreamDelete @ 0x14045D1A4 (PfSnLogStreamDelete.c)
 *     PfSnLogHelper @ 0x140497128 (PfSnLogHelper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}
