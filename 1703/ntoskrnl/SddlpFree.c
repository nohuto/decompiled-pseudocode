/*
 * XREFs of SddlpFree @ 0x1406FC4D0
 * Callers:
 *     SeConvertStringSidToSid @ 0x140162440 (SeConvertStringSidToSid.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
