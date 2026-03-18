/*
 * XREFs of MiExpandSystemCache @ 0x1400F52C8
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400A3510 (MiObtainSystemCacheView.c)
 * Callees:
 *     InsertTailListPte @ 0x1400A477C (InsertTailListPte.c)
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x1400F61D8 (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     MiSetSystemCacheReverseMap @ 0x14021A0FC (MiSetSystemCacheReverseMap.c)
 *     MiZeroSystemCacheViewCount @ 0x14021A164 (MiZeroSystemCacheViewCount.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiExpandSystemCache(__int64 a1)
{
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v3; // rsi
  unsigned __int64 *v4; // rcx
  __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  __int64 v11; // rbx

  if ( (unsigned __int64)qword_140388608 <= 0x4000000 )
    return 0LL;
  PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x180uLL, 0x6353694Du);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  v4 = PoolWithTag + 4;
  v5 = 8LL;
  v6 = (unsigned __int64)(*(_WORD *)a1 & 0x3FF) << 6;
  v7 = 8LL;
  do
  {
    v8 = *v4;
    *(v4 - 2) = 0LL;
    *v4 = v6 | v8 & 0xFFFFFFFFFFFF003FuLL;
    v4 += 6;
    --v7;
  }
  while ( v7 );
  v9 = MiObtainSystemVa(1LL, 8LL);
  v10 = v9;
  if ( !v9 )
  {
    ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
  v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiMakeZeroedPageTables(v11, v11 + 4088, 0, 8) )
  {
    ExFreePoolWithTag(v3, 0);
    MiReturnSystemVa(v10, v10 + 0x200000, 8LL, 0LL);
    return 0LL;
  }
  MiZeroSystemCacheViewCount(v11 << 25 >> 16);
  MiSetSystemCacheReverseMap(v10, v3);
  do
  {
    InsertTailListPte((__int64 *)(a1 + 1704));
    v11 += 512LL;
    --v5;
  }
  while ( v5 );
  return v11;
}
