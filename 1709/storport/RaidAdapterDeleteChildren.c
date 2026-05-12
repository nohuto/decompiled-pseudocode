/*
 * XREFs of RaidAdapterDeleteChildren @ 0x1C002CED0
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0067760 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     RaidAdapterRemoveNormalChildren @ 0x1C002DCF4 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterRemoveZombieChildren @ 0x1C002DE00 (RaidAdapterRemoveZombieChildren.c)
 */

__int64 __fastcall RaidAdapterDeleteChildren(__int64 a1)
{
  RaidAdapterRemoveNormalChildren(a1, RaUnitAdapterRemove);
  return RaidAdapterRemoveZombieChildren(a1, RaUnitAdapterRemove);
}
