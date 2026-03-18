/*
 * XREFs of PopSetDevicesSystemState @ 0x140472178
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PopGracefulShutdown @ 0x140485D40 (PopGracefulShutdown.c)
 * Callees:
 *     PoBroadcastSystemState @ 0x140472204 (PoBroadcastSystemState.c)
 */

__int64 PopSetDevicesSystemState()
{
  int v0; // eax
  _DWORD v2[2]; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v3; // [rsp+28h] [rbp-18h]
  unsigned __int64 v4; // [rsp+30h] [rbp-10h]
  char v5; // [rsp+38h] [rbp-8h]
  char v6; // [rsp+39h] [rbp-7h]
  __int16 v7; // [rsp+3Ah] [rbp-6h]

  v3 = 0LL;
  v4 = 0LL;
  v6 = byte_1403AA07D;
  v5 = byte_1403AA062;
  v7 = (unsigned __int8)byte_1403AA07C;
  v2[0] = dword_1403AA08C;
  v2[1] = dword_1403AA088;
  v0 = dword_1403AA080;
  if ( (dword_1403AA06C & 8) != 0 )
    v0 = 6;
  v3 = __PAIR64__(dword_1403AA084, v0);
  v4 = __PAIR64__(dword_1403AA06C, qword_1403AA064);
  return PoBroadcastSystemState(v2);
}
