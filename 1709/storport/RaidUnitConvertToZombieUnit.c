/*
 * XREFs of RaidUnitConvertToZombieUnit @ 0x1C003E42C
 * Callers:
 *     RaUnitSurpriseRemovalIrp @ 0x1C0068D2C (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterRemoveUnit @ 0x1C0014BE0 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertZombieUnit @ 0x1C002D784 (RaidAdapterInsertZombieUnit.c)
 */

void __fastcall RaidUnitConvertToZombieUnit(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 152) & 0x20) == 0 )
  {
    RaidAdapterRemoveUnit(*(_QWORD *)(a1 + 24), a1);
    RaidAdapterInsertZombieUnit(*(_QWORD *)(a1 + 24), a1);
  }
}
