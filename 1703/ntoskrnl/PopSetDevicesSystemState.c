/*
 * XREFs of PopSetDevicesSystemState @ 0x140408D68
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 * Callees:
 *     PoBroadcastSystemState @ 0x140408390 (PoBroadcastSystemState.c)
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
  v10 = byte_14034B19D;
  v9 = byte_14034B182;
  v11 = (unsigned __int8)byte_14034B19C;
  v6[0] = dword_14034B1AC;
  v6[1] = dword_14034B1A8;
  v4 = dword_14034B1A0;
  if ( (dword_14034B18C & 8) != 0 )
    v4 = 6;
  v7 = __PAIR64__(dword_14034B1A4, v4);
  v8 = __PAIR64__(dword_14034B18C, qword_14034B184);
  return PoBroadcastSystemState((__int64)v6, 6LL, a3, a4);
}
