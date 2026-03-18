/*
 * XREFs of MiInitializeCacheFlushing @ 0x14089D23C
 * Callers:
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140051CE0 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiFinalizePageAttribute @ 0x140056268 (MiFinalizePageAttribute.c)
 *     MiFlushCacheForAttributeChange @ 0x1400CF57C (MiFlushCacheForAttributeChange.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 *     KeInvalidateAllCaches @ 0x14016D5F0 (KeInvalidateAllCaches.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 MiInitializeCacheFlushing()
{
  __int64 result; // rax
  ULONG_PTR v1; // r15
  unsigned __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // r9
  __int64 v5; // r12
  __int64 v6; // r13
  unsigned __int64 v7; // rdi
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  __int64 v12; // r14
  unsigned int v13; // eax
  SIZE_T v14; // r15
  PVOID PoolWithTag; // rdi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  signed __int32 v18[18]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 CurrentIrql; // [rsp+50h] [rbp+8h]

  result = MiGetPage((__int64)&MiSystemPartition, 0, 0);
  v1 = result;
  if ( result != -1 )
  {
    v2 = 0LL;
    v3 = 48 * result - 0x58000000000LL;
    MiFinalizePageAttribute(v3, 1LL, 0);
    CurrentIrql = KeGetCurrentIrql();
    v5 = 2LL;
    __writecr8(2uLL);
    v6 = 4LL;
    do
    {
      MiZeroPhysicalPage(v1, 1, 0, v4);
      MiLockPageAtDpcInline(v3);
      *(_BYTE *)(v3 + 34) &= 0x3Fu;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v7 = __rdtsc();
      _InterlockedOr(v18, 0);
      MiFlushCacheForAttributeChange(v1, 1LL, 0, v8);
      _InterlockedOr(v18, 0);
      v9 = __rdtsc();
      MiLockPageAtDpcInline(v3);
      LOBYTE(v10) = *(_BYTE *)(v3 + 34) & 0x3F | 0x40;
      *(_BYTE *)(v3 + 34) = v10;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushEntireTbDueToAttributeChange(v10);
      v2 += v9 - v7;
      --v6;
    }
    while ( v6 );
    v11 = v2 >> 2;
    v12 = 0LL;
    if ( v11 )
    {
      v13 = dword_1403CB6C0;
      if ( !dword_1403CB6C0 )
        v13 = 256;
      v14 = 3 * (v13 >> 2);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x20206D4Du);
      if ( PoolWithTag )
      {
        do
        {
          memset(PoolWithTag, 0, v14);
          v16 = __rdtsc();
          _InterlockedOr(v18, 0);
          ++dword_1403CB6F8;
          KeInvalidateAllCaches();
          _InterlockedOr(v18, 0);
          v17 = __rdtsc();
          _InterlockedOr(v18, 0);
          v12 += (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) - v16;
          --v5;
        }
        while ( v5 );
        ExFreePoolWithTag(PoolWithTag, 0);
        dword_1403CB700 = (v12 & 0xFFFFFFFFFFFFFFFEuLL) / v11;
      }
    }
    __writecr8(CurrentIrql);
    return MiReleaseFreshPage(v3);
  }
  return result;
}
