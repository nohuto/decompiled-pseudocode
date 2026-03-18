/*
 * XREFs of RtlpHpLargeAllocationDestroy @ 0x14029E758
 * Callers:
 *     RtlpHpHeapDestroy @ 0x140295244 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x140294BD4 (RtlpHpFreeVA.c)
 *     RtlpHpMetadataFree @ 0x140295D08 (RtlpHpMetadataFree.c)
 */

__int64 __fastcall RtlpHpLargeAllocationDestroy(__int64 a1, __int128 *a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = ((v4 >> 12) + ((v4 >> 1) & 1)) << 12;
  v9 = *a2;
  v10 = (1LL << ((unsigned __int8)v4 >> 2))
      - (((1LL << ((unsigned __int8)v4 >> 2)) - 1) & (v5 + (1LL << ((unsigned __int8)v4 >> 2)) - 1))
      + v5
      - 1;
  RtlpHpFreeVA(&v11, (unsigned __int64 *)&v10, 0x8000LL, &v9);
  v9 = *a2;
  return RtlpHpMetadataFree(a1, &v9, v6, v7);
}
