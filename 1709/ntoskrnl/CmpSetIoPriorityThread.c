/*
 * XREFs of CmpSetIoPriorityThread @ 0x140130D3C
 * Callers:
 *     CmpDoFileWrite @ 0x1404E0284 (CmpDoFileWrite.c)
 *     CmpDoSystemCacheWrite @ 0x140694D44 (CmpDoSystemCacheWrite.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x140021850 (PsSetIoPriorityThread.c)
 */

__int64 __fastcall CmpSetIoPriorityThread(__int64 a1, unsigned int a2)
{
  return PsSetIoPriorityThread(a1, a2);
}
