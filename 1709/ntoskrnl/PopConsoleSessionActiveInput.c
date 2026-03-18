/*
 * XREFs of PopConsoleSessionActiveInput @ 0x14059FB14
 * Callers:
 *     PopSessionInputChange @ 0x14059FC48 (PopSessionInputChange.c)
 *     PopSessionConnected @ 0x1405ED7F0 (PopSessionConnected.c)
 *     PopLazySensorActiveInput @ 0x140709D98 (PopLazySensorActiveInput.c)
 * Callees:
 *     PopRemoteSessionActiveInput @ 0x14059FB8C (PopRemoteSessionActiveInput.c)
 *     PopUpdateTimeouts @ 0x1405A0278 (PopUpdateTimeouts.c)
 */

__int64 __fastcall PopConsoleSessionActiveInput(unsigned int a1, int a2, int *a3)
{
  int v6; // ebx
  int v7; // edi
  __int64 result; // rax
  int v9; // [rsp+50h] [rbp+18h] BYREF
  int v10; // [rsp+54h] [rbp+1Ch]
  int v11; // [rsp+58h] [rbp+20h] BYREF
  int v12; // [rsp+5Ch] [rbp+24h]

  v12 = 0;
  v10 = 0;
  PopRemoteSessionActiveInput();
  v6 = *a3;
  v11 = a3[1];
  v7 = v11;
  v9 = v6;
  byte_1403644E4 = v6 != 0;
  dword_1403644D8 = a2;
  result = PopUpdateTimeouts(a1, &v11, &v9);
  *a3 = v6;
  a3[1] = v7;
  return result;
}
