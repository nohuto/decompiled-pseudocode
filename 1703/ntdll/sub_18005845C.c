/*
 * XREFs of sub_18005845C @ 0x18005845C
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x1800582C0 (RtlpIsQualifiedLanguage.c)
 *     sub_18008A338 @ 0x18008A338 (sub_18008A338.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_1800584C8 @ 0x1800584C8 (sub_1800584C8.c)
 */

__int64 __fastcall sub_18005845C(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  unsigned int v4; // r9d
  __int64 Heap; // rax

  v1 = 0;
  if ( a1 )
  {
    v3 = sub_1800584C8(42LL, 8LL);
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
