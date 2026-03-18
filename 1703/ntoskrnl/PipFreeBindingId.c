/*
 * XREFs of PipFreeBindingId @ 0x1406930E4
 * Callers:
 *     PipDeleteBindingId @ 0x140692F48 (PipDeleteBindingId.c)
 *     PipDeleteBindingIds @ 0x140692FD4 (PipDeleteBindingIds.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *a1)
{
  RtlFreeUnicodeString(a1 + 1);
  ExFreePoolWithTag(a1, 0x53706E50u);
}
