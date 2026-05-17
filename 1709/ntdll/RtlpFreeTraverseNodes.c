/*
 * XREFs of RtlpFreeTraverseNodes @ 0x18001BF18
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x18001BE40 (RtlpIsQualifiedLanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EB470 (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpFreeTraverseNodes(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  else
    return (unsigned int)-1073741811;
  return v1;
}
