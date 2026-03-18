/*
 * XREFs of ObpLookupDirectoryEntry @ 0x14059F384
 * Callers:
 *     ObInitSystem @ 0x1407FE634 (ObInitSystem.c)
 * Callees:
 *     ObpLookupDirectoryEntryEx @ 0x1404F72C0 (ObpLookupDirectoryEntryEx.c)
 */

__int64 __fastcall ObpLookupDirectoryEntry(void *a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  return ObpLookupDirectoryEntryEx(a1, a2, a3, 0, 0, a4);
}
