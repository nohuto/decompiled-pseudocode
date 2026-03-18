/*
 * XREFs of PopConsoleSessionPassiveInput @ 0x14059FBC8
 * Callers:
 *     PopSessionInputChange @ 0x14059FC48 (PopSessionInputChange.c)
 * Callees:
 *     PopSetSessionUserStatus @ 0x14059FF2C (PopSetSessionUserStatus.c)
 *     PopUpdateTimeouts @ 0x1405A0278 (PopUpdateTimeouts.c)
 *     PopGetLockConsoleTimeout @ 0x1405A0558 (PopGetLockConsoleTimeout.c)
 */

__int64 __fastcall PopConsoleSessionPassiveInput(unsigned int a1, int a2, _DWORD *a3)
{
  int v6; // eax
  int v8; // [rsp+40h] [rbp+18h] BYREF
  int v9; // [rsp+44h] [rbp+1Ch]
  int v10; // [rsp+48h] [rbp+20h] BYREF
  int v11; // [rsp+4Ch] [rbp+24h]

  v8 = 0;
  v9 = 256;
  v11 = 0;
  byte_1403644E4 = 0;
  PopGetLockConsoleTimeout();
  dword_1403644D8 = a2;
  PopSetSessionUserStatus(a1, 2LL);
  v6 = qword_1403644CC;
  *a3 = 0;
  v10 = v6;
  a3[1] = v6;
  return PopUpdateTimeouts(a1, &v10, &v8);
}
