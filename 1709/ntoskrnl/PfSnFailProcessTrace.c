/*
 * XREFs of PfSnFailProcessTrace @ 0x1406F4650
 * Callers:
 *     PfSnVolumeKeyQuery @ 0x1404470F0 (PfSnVolumeKeyQuery.c)
 *     PfSnLogHelper @ 0x140456164 (PfSnLogHelper.c)
 *     PfSnLogStreamDelete @ 0x14045993C (PfSnLogStreamDelete.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x140455060 (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}
