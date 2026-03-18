/*
 * XREFs of MiReturnSystemPtes @ 0x14004A1E8
 * Callers:
 *     MiAttemptCoalesce @ 0x14004A270 (MiAttemptCoalesce.c)
 *     MiReplenishBitMap @ 0x14009E090 (MiReplenishBitMap.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 */

__int64 __fastcall MiReturnSystemPtes(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // r10
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // r8d
  unsigned __int64 v11; // rdx

  v6 = a3;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
  {
    v6 = 16 * a3;
    a2 *= 16LL;
  }
  v7 = *(_QWORD *)(a1 + 16) + 8 * a2;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -a3);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), -a3);
  v7 <<= 25;
  v8 = v7 >> 16;
  v9 = v7 + (v6 << 28);
  v10 = *(_DWORD *)(a1 + 28);
  v11 = v9 >> 16;
  if ( a4 == 1 )
    v10 = 14;
  return MiReturnSystemVa(v8, v11, v10);
}
