/*
 * XREFs of sub_180004C58 @ 0x180004C58
 * Callers:
 *     sub_1800051E4 @ 0x1800051E4 (sub_1800051E4.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 */

__int64 __fastcall sub_180004C58(__int64 a1, unsigned int *a2)
{
  PVOID Heap; // rax
  void *v5; // r8
  _QWORD *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // r8d
  unsigned int i; // edx

  if ( !qword_18015A420 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x400uLL);
    v5 = Heap;
    if ( !Heap )
      return 1450LL;
    v6 = Heap;
    v7 = 64LL;
    do
    {
      *v6 = 1LL;
      v6 += 2;
      --v7;
    }
    while ( v7 );
    if ( _InterlockedCompareExchange64(&qword_18015A420, (signed __int64)v5, 0LL) )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  v8 = (*(_DWORD *)(a1 + 64) & 0x20000) != 0 ? 64 : 8;
  for ( i = (*(_DWORD *)(a1 + 64) & 0x20000) != 0 ? 8 : 0; i < v8; ++i )
  {
    _InterlockedIncrement((volatile signed __int32 *)(qword_18015A420 + 16LL * i + 8));
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(qword_18015A420 + 16LL * i), 3LL, 1LL) == 1 )
    {
      *a2 = i;
      return 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16LL * i + 8));
  }
  return 1450LL;
}
