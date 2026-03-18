/*
 * XREFs of PopConsoleSessionPassiveInput @ 0x1405847B8
 * Callers:
 *     PopSessionInputChange @ 0x140526C44 (PopSessionInputChange.c)
 * Callees:
 *     PopUpdateTimeouts @ 0x1405265A0 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x140526758 (PopSetSessionUserStatus.c)
 *     PopGetLockConsoleTimeout @ 0x140527148 (PopGetLockConsoleTimeout.c)
 */

char __fastcall PopConsoleSessionPassiveInput(unsigned int a1, int a2, _DWORD *a3)
{
  int v6; // eax
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF
  int v9; // [rsp+44h] [rbp+1Ch]
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = 256;
  v8 = 0;
  v10 = 0LL;
  byte_1403A7B84 = 0;
  PopGetLockConsoleTimeout(a1);
  dword_1403A7B78 = a2;
  PopSetSessionUserStatus(a1, 2u);
  v6 = qword_1403A7B6C;
  *a3 = 0;
  LODWORD(v10) = v6;
  a3[1] = v6;
  return PopUpdateTimeouts(a1, (unsigned int *)&v10, &v8);
}
