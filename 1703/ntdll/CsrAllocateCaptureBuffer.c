/*
 * XREFs of CsrAllocateCaptureBuffer @ 0x18000B3D0
 * Callers:
 *     sub_18000AEF4 @ 0x18000AEF4 (sub_18000AEF4.c)
 *     CsrCaptureMessageMultiUnicodeStringsInPlace @ 0x18000B1C0 (CsrCaptureMessageMultiUnicodeStringsInPlace.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

_DWORD *__fastcall CsrAllocateCaptureBuffer(unsigned int a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  _DWORD *Heap; // rax
  _DWORD *v5; // rdi
  size_t v6; // rbx

  v2 = a1;
  if ( byte_18015B26C )
    return 0LL;
  if ( a2 >= 0x7FFFFFDC )
    return 0LL;
  if ( a1 > 0xFFFFFFF )
    return 0LL;
  if ( 8 * a1 >= 2147483612 - a2 )
    return 0LL;
  if ( a1 + 1 >= (2147483612 - a2 - 8 * a1) / 3 )
    return 0LL;
  v3 = (11 * a1 + a2 + 35) & 0xFFFFFFFC;
  Heap = RtlAllocateHeap(qword_18015BA90, Flags, v3);
  v5 = Heap;
  if ( !Heap )
    return 0LL;
  Heap[4] = 0;
  v6 = 2 * v2;
  *Heap = v3;
  memset(Heap + 8, 0, v6 * 4);
  *((_QWORD *)v5 + 3) = &v5[v6 + 8];
  return v5;
}
