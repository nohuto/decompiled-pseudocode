/*
 * XREFs of PipFreeBindingId @ 0x1406BED94
 * Callers:
 *     PipDeleteBindingId @ 0x1406BEBF8 (PipDeleteBindingId.c)
 *     PipDeleteBindingIds @ 0x1406BEC84 (PipDeleteBindingIds.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeUnicodeString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
