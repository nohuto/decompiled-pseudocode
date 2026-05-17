/*
 * XREFs of RtlAllocateAndInitializeSidEx @ 0x18008E030
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 */

__int64 __fastcall RtlAllocateAndInitializeSidEx(__int64 a1, unsigned __int8 a2, _DWORD *a3, __int64 *a4)
{
  __int64 v8; // rsi
  __int64 Heap; // rax
  __int64 v10; // rdx

  if ( a2 > 0xFu )
    return 3221225485LL;
  v8 = a2;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015B268 + 1310720, 4LL * a2 + 8);
  if ( !Heap )
    return 3221225495LL;
  *(_BYTE *)Heap = 1;
  *(_DWORD *)(Heap + 2) = *(_DWORD *)a1;
  *(_WORD *)(Heap + 6) = *(_WORD *)(a1 + 4);
  *(_BYTE *)(Heap + 1) = a2;
  if ( a2 )
  {
    v10 = Heap - (_QWORD)a3;
    do
    {
      *(_DWORD *)((char *)a3 + v10 + 8) = *a3;
      ++a3;
      --v8;
    }
    while ( v8 );
  }
  *a4 = Heap;
  return 0LL;
}
