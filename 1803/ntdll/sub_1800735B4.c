/*
 * XREFs of sub_1800735B4 @ 0x1800735B4
 * Callers:
 *     sub_180073218 @ 0x180073218 (sub_180073218.c)
 *     sub_180106B9C @ 0x180106B9C (sub_180106B9C.c)
 * Callees:
 *     ZwDelayExecution @ 0x18009B140 (ZwDelayExecution.c)
 */

__int64 __fastcall sub_1800735B4(__int64 a1)
{
  __int64 result; // rax
  LARGE_INTEGER DelayInterval; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 12);
  DelayInterval.QuadPart = -2500000LL;
  while ( (_DWORD)result )
  {
    ZwDelayExecution(0, &DelayInterval);
    result = *(unsigned int *)(a1 + 12);
  }
  return result;
}
