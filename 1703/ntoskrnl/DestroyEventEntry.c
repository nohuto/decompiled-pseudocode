/*
 * XREFs of DestroyEventEntry @ 0x140030DF4
 * Callers:
 *     FlushEventEntryList @ 0x14044C6F0 (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
