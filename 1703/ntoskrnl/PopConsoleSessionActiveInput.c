/*
 * XREFs of PopConsoleSessionActiveInput @ 0x14042028C
 * Callers:
 *     PopSessionInputChange @ 0x14041FE64 (PopSessionInputChange.c)
 *     PopSessionConnected @ 0x14057D654 (PopSessionConnected.c)
 *     PopLazySensorActiveInput @ 0x1406D4648 (PopLazySensorActiveInput.c)
 * Callees:
 *     PopUpdateTimeouts @ 0x140420304 (PopUpdateTimeouts.c)
 *     PopRemoteSessionActiveInput @ 0x140420578 (PopRemoteSessionActiveInput.c)
 */

__int64 __fastcall PopConsoleSessionActiveInput(__int64 a1, __int64 a2, int *a3)
{
  int v4; // esi
  unsigned int v5; // ebp
  int v6; // ebx
  int v7; // edi
  __int64 result; // rax
  int v9; // [rsp+50h] [rbp+18h] BYREF
  int v10; // [rsp+54h] [rbp+1Ch]
  int v11; // [rsp+58h] [rbp+20h] BYREF
  int v12; // [rsp+5Ch] [rbp+24h]

  v12 = 0;
  v4 = a2;
  v10 = 0;
  v5 = a1;
  PopRemoteSessionActiveInput(a1, a2, a3);
  v6 = *a3;
  v11 = a3[1];
  v7 = v11;
  v9 = v6;
  byte_140349EA4 = v6 != 0;
  dword_140349E98 = v4;
  result = PopUpdateTimeouts(v5, &v11, &v9);
  *a3 = v6;
  a3[1] = v7;
  return result;
}
