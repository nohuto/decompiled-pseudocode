/*
 * XREFs of PsAllocSiloContextSlot @ 0x1405C75D0
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageAllocSlot @ 0x1405C76F8 (PspStorageAllocSlot.c)
 */

__int64 __fastcall PsAllocSiloContextSlot(__int64 a1, __int64 a2)
{
  return PspStorageAllocSlot(a2);
}
