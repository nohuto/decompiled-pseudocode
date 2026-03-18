/*
 * XREFs of MiInitializeCacheFlushing @ 0x140804634
 * Callers:
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14003BC50 (KeInvalidateAllCaches.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140063C1C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiZeroPhysicalPage @ 0x1400A59A0 (MiZeroPhysicalPage.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiFlushCacheForAttributeChange @ 0x140103734 (MiFlushCacheForAttributeChange.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeCacheFlushing()
{
  __int64 result; // rax
  ULONG_PTR v1; // r15
  unsigned __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // r12
  __int64 v5; // r13
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
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
    MiFinalizePageAttribute(v3, 1u, 0);
    CurrentIrql = KeGetCurrentIrql();
    v4 = 2LL;
    __writecr8(2uLL);
    v5 = 4LL;
    do
    {
      MiZeroPhysicalPage(v1, 1, 0);
      MiLockPageAtDpcInline(v3);
      *(_BYTE *)(v3 + 34) &= 0x3Fu;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v6 = __rdtsc();
      _InterlockedOr(v18, 0);
      MiFlushCacheForAttributeChange(v1, 1LL, 0);
      _InterlockedOr(v18, 0);
      v7 = __rdtsc();
      MiLockPageAtDpcInline(v3);
      LOBYTE(v8) = *(_BYTE *)(v3 + 34) & 0x3F | 0x40;
      *(_BYTE *)(v3 + 34) = v8;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushEntireTbDueToAttributeChange(v8, v9, v10);
      v2 += v7 - v6;
      --v5;
    }
    while ( v5 );
    v11 = v2 >> 2;
    v12 = 0LL;
    if ( v11 )
    {
      v13 = dword_14036C1E0;
      if ( !dword_14036C1E0 )
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
          ++dword_14036C20C;
          KeInvalidateAllCaches();
          _InterlockedOr(v18, 0);
          v17 = __rdtsc();
          _InterlockedOr(v18, 0);
          v12 += (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) - v16;
          --v4;
        }
        while ( v4 );
        ExFreePoolWithTag(PoolWithTag, 0);
        dword_14036C214 = (v12 & 0xFFFFFFFFFFFFFFFEuLL) / v11;
      }
    }
    __writecr8(CurrentIrql);
    return MiReleaseFreshPage(v3);
  }
  return result;
}
