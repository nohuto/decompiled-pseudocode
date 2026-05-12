/*
 * XREFs of RaidUnitConvertToNormalUnit @ 0x1C0012F10
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C006110C (RaUnitStartDeviceIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C00683EC (RaUnitCancelStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterInsertUnit @ 0x1C00158C8 (RaidAdapterInsertUnit.c)
 *     RaidAdapterRemoveZombieUnit @ 0x1C002DEB8 (RaidAdapterRemoveZombieUnit.c)
 */

__int64 __fastcall RaidUnitConvertToNormalUnit(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 152) & 0x20) != 0 )
  {
    RaidAdapterRemoveZombieUnit(*(_QWORD *)(a1 + 24), a1);
    return RaidAdapterInsertUnit(*(_QWORD *)(a1 + 24), a1);
  }
  return result;
}
