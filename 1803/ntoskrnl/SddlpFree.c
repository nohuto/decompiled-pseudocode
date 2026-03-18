/*
 * XREFs of SddlpFree @ 0x140797768
 * Callers:
 *     SeConvertStringSidToSid @ 0x1401802F0 (SeConvertStringSidToSid.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
