/*
 * XREFs of sub_18010DFF0 @ 0x18010DFF0
 * Callers:
 *     sub_18010C1E0 @ 0x18010C1E0 (sub_18010C1E0.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_18010E088 @ 0x18010E088 (sub_18010E088.c)
 */

_DWORD *__fastcall sub_18010DFF0(__int64 a1, unsigned int a2, int a3)
{
  _DWORD *result; // rax
  __int64 Heap; // rax
  _DWORD *v8; // rbx

  if ( !a1 )
  {
    RtlSetLastWin32Error(0x57u);
    return 0LL;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 64LL);
  v8 = (_DWORD *)Heap;
  if ( !Heap )
    return 0LL;
  if ( !(unsigned int)sub_18010E088(Heap, a1, a2) )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v8);
    return 0LL;
  }
  result = v8;
  *v8 = a3 & 0xFFFFFFFB;
  return result;
}
