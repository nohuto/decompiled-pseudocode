/*
 * XREFs of DestroyEventEntry @ 0x1400B4B44
 * Callers:
 *     FlushEventEntryList @ 0x1404F0950 (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
