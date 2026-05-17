/*
 * XREFs of sub_1800D6F48 @ 0x1800D6F48
 * Callers:
 *     sub_180079D70 @ 0x180079D70 (sub_180079D70.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A57A0 (ZwQueryInformationThread.c)
 */

__int64 sub_1800D6F48()
{
  __int64 result; // rax
  char v1; // [rsp+40h] [rbp+8h]

  result = ZwQueryInformationThread();
  if ( (int)result >= 0 && !v1 )
    __debugbreak();
  return result;
}
