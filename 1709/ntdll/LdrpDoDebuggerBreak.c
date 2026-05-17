/*
 * XREFs of LdrpDoDebuggerBreak @ 0x1800D2B9C
 * Callers:
 *     _LdrpInitialize @ 0x180078E70 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A0560 (ZwQueryInformationThread.c)
 */

__int64 LdrpDoDebuggerBreak()
{
  __int64 result; // rax
  char v1; // [rsp+40h] [rbp+8h]

  result = ZwQueryInformationThread();
  if ( (int)result >= 0 && !v1 )
    __debugbreak();
  return result;
}
