/*
 * XREFs of sub_180058398 @ 0x180058398
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x1800582C0 (RtlpIsQualifiedLanguage.c)
 *     sub_18008A338 @ 0x18008A338 (sub_18008A338.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_180058398(PVOID BaseAddress)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  else
    return (unsigned int)-1073741811;
  return v1;
}
