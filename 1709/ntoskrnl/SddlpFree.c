/*
 * XREFs of SddlpFree @ 0x140733EC0
 * Callers:
 *     SeConvertStringSidToSid @ 0x140150EB0 (SeConvertStringSidToSid.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
