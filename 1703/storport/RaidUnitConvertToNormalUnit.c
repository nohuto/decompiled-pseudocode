/*
 * XREFs of RaidUnitConvertToNormalUnit @ 0x1C0013650
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C005ED90 (RaUnitStartDeviceIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C0064ED8 (RaUnitCancelStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterInsertUnit @ 0x1C001547C (RaidAdapterInsertUnit.c)
 *     RaidAdapterRemoveZombieUnit @ 0x1C002CF2C (RaidAdapterRemoveZombieUnit.c)
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
