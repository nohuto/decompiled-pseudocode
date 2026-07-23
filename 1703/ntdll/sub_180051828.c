/*
 * XREFs of sub_180051828 @ 0x180051828
 * Callers:
 *     sub_1800514A0 @ 0x1800514A0 (sub_1800514A0.c)
 *     sub_18010492C @ 0x18010492C (sub_18010492C.c)
 * Callees:
 *     ZwDelayExecution @ 0x1800A5980 (ZwDelayExecution.c)
 */

__int64 __fastcall sub_180051828(__int64 a1)
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
