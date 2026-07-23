/*
 * XREFs of sub_180050DC4 @ 0x180050DC4
 * Callers:
 *     sub_180050C68 @ 0x180050C68 (sub_180050C68.c)
 *     sub_180051190 @ 0x180051190 (sub_180051190.c)
 *     sub_180104D80 @ 0x180104D80 (sub_180104D80.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1800A54C0 (ZwSetEvent.c)
 */

__int64 __fastcall sub_180050DC4(__int64 a1, int a2)
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
