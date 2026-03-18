/*
 * XREFs of PopConsoleSessionActiveInput @ 0x140527168
 * Callers:
 *     PopSessionInputChange @ 0x140526C44 (PopSessionInputChange.c)
 *     PopSessionConnected @ 0x140612E30 (PopSessionConnected.c)
 *     PopLazySensorActiveInput @ 0x14076D98C (PopLazySensorActiveInput.c)
 * Callees:
 *     PopUpdateTimeouts @ 0x1405265A0 (PopUpdateTimeouts.c)
 *     PopRemoteSessionActiveInput @ 0x1405270DC (PopRemoteSessionActiveInput.c)
 */

__int64 __fastcall PopConsoleSessionActiveInput(unsigned int a1, __int64 a2, int *a3)
{
  int v4; // edi
  int v6; // ebx
  __int64 result; // rax
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v4 = a2;
  v9 = 0LL;
  PopRemoteSessionActiveInput(a1, a2, a3);
  v6 = *a3;
  LODWORD(v8) = a3[1];
  LODWORD(v9) = v6;
  byte_1403A7B84 = v6 != 0;
  dword_1403A7B78 = v4;
  PopUpdateTimeouts(a1, (unsigned int *)&v8, (unsigned int *)&v9);
  result = (unsigned int)v8;
  *a3 = v6;
  a3[1] = result;
  return result;
}
