/*
 * XREFs of sub_18004F96C @ 0x18004F96C
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x18004F7D0 (RtlpIsQualifiedLanguage.c)
 *     sub_1800E78E0 @ 0x1800E78E0 (sub_1800E78E0.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18004F9D8 @ 0x18004F9D8 (sub_18004F9D8.c)
 */

__int64 __fastcall sub_18004F96C(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  unsigned int v4; // r9d
  __int64 Heap; // rax

  v1 = 0;
  if ( a1 )
  {
    v3 = sub_18004F9D8(42LL, 8LL);
    if ( v3 )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, v4, v3);
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
