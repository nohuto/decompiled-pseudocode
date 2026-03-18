/*
 * XREFs of MiFlushValidPteFromTb @ 0x1400C02DC
 * Callers:
 *     MiTransformValidPteInPlace @ 0x1400C022C (MiTransformValidPteInPlace.c)
 * Callees:
 *     MiGetLeafVa @ 0x14003DF80 (MiGetLeafVa.c)
 *     MiRealVaToFlushType @ 0x1400C0374 (MiRealVaToFlushType.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1400C03C4 (MiInsertRecursiveTbFlushEntries.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1401373A0 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MiFlushValidPteFromTb(unsigned __int64 a1)
{
  unsigned __int64 LeafVa; // rax
  __int64 v2; // r10
  unsigned int v3; // r11d
  char v4; // r9
  int v6; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v7; // [rsp+24h] [rbp-D4h]
  int v8; // [rsp+28h] [rbp-D0h]
  int v9; // [rsp+2Ch] [rbp-CCh]
  __int64 v10; // [rsp+30h] [rbp-C8h]
  __int64 v11; // [rsp+38h] [rbp-C0h]

  v9 = 0;
  LeafVa = MiGetLeafVa(a1);
  v7 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v6 = MiRealVaToFlushType(LeafVa);
  v8 = 20;
  if ( v4 < 0 )
    MiInsertLargeTbFlushEntry(&v6, v3, v2);
  else
    MiInsertRecursiveTbFlushEntries(&v6, v3, v2);
  return MiFlushTbList(&v6);
}
