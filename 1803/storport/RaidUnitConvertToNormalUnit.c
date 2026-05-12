/*
 * XREFs of RaidUnitConvertToNormalUnit @ 0x1C0015EA0
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C006013C (RaUnitStartDeviceIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C006667C (RaUnitCancelStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterInsertUnit @ 0x1C0014750 (RaidAdapterInsertUnit.c)
 *     RaidAdapterRemoveZombieUnit @ 0x1C0017928 (RaidAdapterRemoveZombieUnit.c)
 */

void __fastcall RaidUnitConvertToNormalUnit(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 152) & 0x20) != 0 )
  {
    RaidAdapterRemoveZombieUnit(*(_QWORD *)(a1 + 24), a1);
    RaidAdapterInsertUnit(*(_QWORD *)(a1 + 24), a1);
  }
}
