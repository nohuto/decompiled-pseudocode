/*
 * XREFs of MiExpandSystemCache @ 0x140126CDC
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400A9C20 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     InsertTailListPte @ 0x1400ABE6C (InsertTailListPte.c)
 *     MiMakeZeroedPageTables @ 0x140127F0C (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x1401282A4 (MiObtainSystemVa.c)
 *     MiSetSystemCacheReverseMap @ 0x140212660 (MiSetSystemCacheReverseMap.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14021EE3C (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiExpandSystemCache(__int64 a1)
{
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v4; // rsi
  unsigned __int64 *v5; // rcx
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned __int64)qword_14036C2C8 <= 0x4000000 )
    return 0LL;
  PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x180uLL, 0x6353694Du);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  v5 = PoolWithTag + 4;
  v6 = 8LL;
  v7 = (unsigned __int64)(*(_WORD *)a1 & 0x3FF) << 6;
  v8 = 8LL;
  do
  {
    v9 = *v5;
    *(v5 - 2) = 0LL;
    *v5 = v7 | v9 & 0xFFFFFFFFFFFF003FuLL;
    v5 += 6;
    --v8;
  }
  while ( v8 );
  v10 = MiObtainSystemVa(1LL, 8LL);
  if ( !v10 )
  {
    ExFreePoolWithTag(v4, 0);
    return 0LL;
  }
  v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !(unsigned int)MiMakeZeroedPageTables(v11, v11 + 4088, 0LL, 8LL) )
  {
    ExFreePoolWithTag(v4, 0);
    MiReturnSystemVa(v10, v10 + 0x200000, 8, 0LL);
    return 0LL;
  }
  v15 = MI_READ_PTE_LOCK_FREE((((v11 << 25 >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL);
  *(_BYTE *)(MI_GET_PFN_FROM_PTE(&v15, v12, v13, v14) + 39) = 0;
  MiSetSystemCacheReverseMap(v10, v4);
  do
  {
    InsertTailListPte((__int64 *)(a1 + 1640));
    v11 += 512LL;
    --v6;
  }
  while ( v6 );
  return v11;
}
