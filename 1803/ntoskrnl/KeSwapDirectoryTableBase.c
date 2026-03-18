/*
 * XREFs of KeSwapDirectoryTableBase @ 0x140144C48
 * Callers:
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140004B40 (KeGenericCallDpc.c)
 *     KeFlushProcessTb @ 0x140070738 (KeFlushProcessTb.c)
 */

__int64 __fastcall KeSwapDirectoryTableBase(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  _BYTE v5[4]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+24h] [rbp-24h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v7 = a1;
  v5[0] = 0;
  v6 = a2;
  v8 = a3;
  if ( a2 )
  {
    if ( a2 == 1 )
      v3 = *(_QWORD *)(a1 + 632);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 40);
  }
  KeGenericCallDpc((__int64)KiSwapDirectoryTableBaseTarget, (__int64)v5);
  return KeFlushProcessTb(v3);
}
