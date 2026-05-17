/*
 * XREFs of RtlpCreateTraverseNodes @ 0x18001BFDC
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x18001BE40 (RtlpIsQualifiedLanguage.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EB470 (LdrpMergeParentBaseLanguagesToList.c)
 * Callees:
 *     LdrpCalcAllocSize @ 0x18001C10C (LdrpCalcAllocSize.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlpCreateTraverseNodes(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  unsigned int v4; // r9d
  __int64 Heap; // rax

  v1 = 0;
  if ( a1 )
  {
    v3 = LdrpCalcAllocSize(42LL, 8LL);
    if ( v3 )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, v4, v3);
      if ( Heap )
        *a1 = Heap;
      else
        return (unsigned int)-1073741801;
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
