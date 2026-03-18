/*
 * XREFs of DestroyEventEntry @ 0x140084430
 * Callers:
 *     FlushEventEntryList @ 0x14052D9E0 (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
