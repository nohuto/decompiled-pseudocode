/*
 * XREFs of PsAllocSiloContextSlot @ 0x14059F3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsAllocSiloContextSlot(__int64 a1, __int64 a2)
{
  return PspStorageAllocSlot(a2);
}
