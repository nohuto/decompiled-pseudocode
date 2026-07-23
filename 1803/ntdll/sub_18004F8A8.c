/*
 * XREFs of sub_18004F8A8 @ 0x18004F8A8
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x18004F7D0 (RtlpIsQualifiedLanguage.c)
 *     sub_1800E78E0 @ 0x1800E78E0 (sub_1800E78E0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_18004F8A8(PVOID BaseAddress)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  else
    return (unsigned int)-1073741811;
  return v1;
}
