/*
 * XREFs of sub_180071FB8 @ 0x180071FB8
 * Callers:
 *     RtlCreateAtomTable @ 0x180071FB0 (RtlCreateAtomTable.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlInitializeHandleTable @ 0x1800833B0 (RtlInitializeHandleTable.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180071FB8(unsigned int a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v5; // ebp
  __int64 v6; // rsi
  _DWORD *Heap; // rax
  _DWORD *v8; // rdi

  v3 = 0;
  if ( *a3 )
    return v3;
  v5 = 37;
  if ( a1 > 1 )
    v5 = a1;
  if ( is_mul_ok(0x18uLL, (unsigned int)(v5 - 1)) )
  {
    v6 = -1LL;
    if ( 24 * (unsigned __int64)(unsigned int)(v5 - 1) + 80 >= 24 * (unsigned __int64)(unsigned int)(v5 - 1) )
      v6 = 24LL * (unsigned int)(v5 - 1) + 80;
    v3 = 24 * (unsigned __int64)(unsigned int)(v5 - 1) + 80 < 24 * (unsigned __int64)(unsigned int)(v5 - 1)
       ? 0xC0000095
       : 0;
    if ( 24 * (unsigned __int64)(unsigned int)(v5 - 1) + 80 >= 24 * (unsigned __int64)(unsigned int)(v5 - 1) )
    {
      Heap = (_DWORD *)RtlAllocateHeap(
                         (__int64)NtCurrentPeb()->ProcessHeap,
                         (0x18 * (unsigned __int128)(unsigned int)(v5 - 1)) >> 64,
                         v6);
      v8 = Heap;
      if ( Heap )
      {
        memset(Heap, 0, v6);
        v8[16] = v5;
        RtlInitializeHandleTable(0x3FFFLL, 2147483664LL, v8 + 4);
        *((_QWORD *)v8 + 1) = 0LL;
        *v8 = 1836020801;
        v8[1] = 1;
        *a3 = v8;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    return v3;
  }
  return 3221225621LL;
}
