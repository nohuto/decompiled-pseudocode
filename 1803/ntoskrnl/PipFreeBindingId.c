/*
 * XREFs of PipFreeBindingId @ 0x14064F8BC
 * Callers:
 *     PipDeleteBindingIds @ 0x14064F878 (PipDeleteBindingIds.c)
 *     PipDeleteBindingId @ 0x140723AA4 (PipDeleteBindingId.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeAnsiString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
