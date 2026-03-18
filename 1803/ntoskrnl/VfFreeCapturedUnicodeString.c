/*
 * XREFs of VfFreeCapturedUnicodeString @ 0x140813AF8
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall VfFreeCapturedUnicodeString(__int64 a1)
{
  if ( *(_WORD *)a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
}
