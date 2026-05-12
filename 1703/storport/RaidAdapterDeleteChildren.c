/*
 * XREFs of RaidAdapterDeleteChildren @ 0x1C002C060
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C006421C (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     RaidAdapterRemoveNormalChildren @ 0x1C002CD74 (RaidAdapterRemoveNormalChildren.c)
 */

__int64 __fastcall RaidAdapterDeleteChildren(__int64 a1)
{
  RaidAdapterRemoveNormalChildren(a1, RaUnitAdapterRemove);
  return RaidAdapterRemoveZombieChildren(a1, RaUnitAdapterRemove);
}
