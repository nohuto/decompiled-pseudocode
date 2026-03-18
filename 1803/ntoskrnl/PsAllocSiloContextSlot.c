/*
 * XREFs of PsAllocSiloContextSlot @ 0x1406216D0
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageAllocSlot @ 0x1406217F8 (PspStorageAllocSlot.c)
 */

__int64 __fastcall PsAllocSiloContextSlot(__int64 a1, __int64 a2)
{
  return PspStorageAllocSlot(a2);
}
