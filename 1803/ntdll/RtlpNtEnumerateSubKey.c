/*
 * XREFs of RtlpNtEnumerateSubKey @ 0x1800802B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     ZwEnumerateKey @ 0x18009B100 (ZwEnumerateKey.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall RtlpNtEnumerateSubKey(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 Heap; // rbx
  unsigned int v7; // edi
  int v8; // edi
  unsigned int v9; // eax
  void *v10; // rcx
  __int16 v12; // [rsp+68h] [rbp+10h] BYREF

  Heap = 0LL;
  v7 = 0;
  if ( *(_WORD *)(a2 + 2) )
  {
    v7 = *(unsigned __int16 *)(a2 + 2) + 16;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    if ( !Heap )
      return 3221225495LL;
  }
  v8 = ZwEnumerateKey(a1, a3, 0LL, Heap, v7, &v12);
  if ( v8 >= 0 && Heap )
  {
    v9 = *(_DWORD *)(Heap + 12);
    if ( *(unsigned __int16 *)(a2 + 2) < v9 )
    {
      v8 = -2147483643;
    }
    else
    {
      v10 = *(void **)(a2 + 8);
      *(_WORD *)a2 = v9;
      memmove(v10, (const void *)(Heap + 16), (unsigned __int16)v9);
    }
  }
  if ( v8 == -2147483643 )
    *(_WORD *)a2 = v12 - 16;
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)v8;
}
