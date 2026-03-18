/*
 * XREFs of KeSwapDirectoryTableBase @ 0x14012F060
 * Callers:
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 * Callees:
 *     KeFlushProcessTb @ 0x1400B8188 (KeFlushProcessTb.c)
 *     KeGenericCallDpc @ 0x14012F0C0 (KeGenericCallDpc.c)
 */

__int64 __fastcall KeSwapDirectoryTableBase(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  v6 = a1;
  v5[0] = 0;
  v7 = a3;
  if ( a2 )
  {
    if ( a2 == 1 )
      v3 = *(_QWORD *)(a1 + 632);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 40);
  }
  KeGenericCallDpc(KiSwapDirectoryTableBaseTarget, v5);
  return KeFlushProcessTb(v3);
}
