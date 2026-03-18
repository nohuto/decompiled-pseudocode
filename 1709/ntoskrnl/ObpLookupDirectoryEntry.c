/*
 * XREFs of ObpLookupDirectoryEntry @ 0x1405C75A4
 * Callers:
 *     ObInitSystem @ 0x140843034 (ObInitSystem.c)
 * Callees:
 *     ObpLookupDirectoryEntryEx @ 0x14056EC10 (ObpLookupDirectoryEntryEx.c)
 */

__int64 __fastcall ObpLookupDirectoryEntry(void *a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  return ObpLookupDirectoryEntryEx(a1, a2, a3, 0LL, 0, a4);
}
