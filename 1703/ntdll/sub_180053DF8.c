/*
 * XREFs of sub_180053DF8 @ 0x180053DF8
 * Callers:
 *     sub_180051D04 @ 0x180051D04 (sub_180051D04.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 */

__int64 __fastcall sub_180053DF8(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // r8d
  unsigned int i; // edx
  PVOID Heap; // rax
  void *v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rax

  if ( !qword_1801593C0 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x400uLL);
    v8 = Heap;
    if ( !Heap )
      return 1450LL;
    v9 = Heap;
    v10 = 64LL;
    do
    {
      *v9 = 1LL;
      v9 += 2;
      --v10;
    }
    while ( v10 );
    if ( _InterlockedCompareExchange64(&qword_1801593C0, (signed __int64)v8, 0LL) )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  }
  v4 = (*(_DWORD *)(a1 + 64) & 0x20000) != 0 ? 64 : 8;
  for ( i = (*(_DWORD *)(a1 + 64) & 0x20000) != 0 ? 8 : 0; i < v4; ++i )
  {
    _InterlockedIncrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * i + 8));
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(qword_1801593C0 + 16LL * i), 3LL, 1LL) == 1 )
    {
      *a2 = i;
      return 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * i + 8));
  }
  return 1450LL;
}
