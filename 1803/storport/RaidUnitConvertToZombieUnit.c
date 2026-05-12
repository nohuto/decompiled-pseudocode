/*
 * XREFs of RaidUnitConvertToZombieUnit @ 0x1C0015C8C
 * Callers:
 *     RaUnitSurpriseRemovalIrp @ 0x1C005FD60 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterRemoveUnit @ 0x1C0013708 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertZombieUnit @ 0x1C0015CC4 (RaidAdapterInsertZombieUnit.c)
 */

__int64 __fastcall RaidUnitConvertToZombieUnit(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 152) & 0x20) == 0 )
  {
    RaidAdapterRemoveUnit(*(_QWORD *)(a1 + 24), a1);
    return RaidAdapterInsertZombieUnit(*(_QWORD *)(a1 + 24), a1);
  }
  return result;
}
