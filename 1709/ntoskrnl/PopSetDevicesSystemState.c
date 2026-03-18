/*
 * XREFs of PopSetDevicesSystemState @ 0x14043760C
 * Callers:
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     PoBroadcastSystemState @ 0x140436BFC (PoBroadcastSystemState.c)
 */

__int64 __fastcall PopSetDevicesSystemState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  _DWORD v6[2]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-18h]
  unsigned __int64 v8; // [rsp+30h] [rbp-10h]
  char v9; // [rsp+38h] [rbp-8h]
  char v10; // [rsp+39h] [rbp-7h]
  __int16 v11; // [rsp+3Ah] [rbp-6h]

  v7 = 0LL;
  v8 = 0LL;
  v10 = byte_1403657FD;
  v9 = byte_1403657E2;
  v11 = (unsigned __int8)byte_1403657FC;
  v6[0] = dword_14036580C;
  v6[1] = dword_140365808;
  v4 = dword_140365800;
  if ( (dword_1403657EC & 8) != 0 )
    v4 = 6;
  v7 = __PAIR64__(dword_140365804, v4);
  v8 = __PAIR64__(dword_1403657EC, qword_1403657E4);
  return PoBroadcastSystemState((__int64)v6, 6LL, a3, a4);
}
