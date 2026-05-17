/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x1800E7320
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall RtlQueryRegistryValueWithFallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _DWORD *a5,
        void *a6,
        _DWORD *a7)
{
  unsigned int v7; // r9d
  unsigned int v8; // esi
  signed int ValueKey; // ebx
  _DWORD *Heap; // rdi

  v7 = a4 + 16;
  v8 = -1;
  if ( v7 >= 0x10 )
    v8 = v7;
  ValueKey = v7 < 0x10 ? 0xC0000095 : 0;
  if ( v7 >= 0x10 )
  {
    Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
    if ( Heap )
    {
      ValueKey = ZwQueryValueKey();
      if ( ValueKey == -1073741772 )
        ValueKey = ZwQueryValueKey();
      if ( (int)(ValueKey + 0x80000000) < 0 || ValueKey == -2147483643 )
      {
        *a7 = Heap[2];
        if ( a5 )
          *a5 = Heap[1];
        if ( ValueKey >= 0 )
          memmove(a6, Heap + 3, (unsigned int)Heap[2]);
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)ValueKey;
}
