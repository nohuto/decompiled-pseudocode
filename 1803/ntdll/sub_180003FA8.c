/*
 * XREFs of sub_180003FA8 @ 0x180003FA8
 * Callers:
 *     sub_18000469C @ 0x18000469C (sub_18000469C.c)
 *     sub_180106ED0 @ 0x180106ED0 (sub_180106ED0.c)
 *     sub_180107460 @ 0x180107460 (sub_180107460.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x18009AC80 (ZwSetEvent.c)
 */

__int64 __fastcall sub_180003FA8(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 332) |= a2;
  ZwSetEvent(*(HANDLE *)(a1 + 128), 0LL);
  ZwWaitForSingleObject(*(HANDLE *)(a1 + 136), 0, 0LL);
  result = *(unsigned int *)(a1 + 40);
  *(_DWORD *)(a1 + 332) &= ~a2;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}
