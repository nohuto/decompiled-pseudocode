/*
 * XREFs of MiInitializeCacheFlushing @ 0x140829A64
 * Callers:
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140028064 (MiFinalizePageAttribute.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiZeroPhysicalPage @ 0x140075D00 (MiZeroPhysicalPage.c)
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400ED79C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiFlushCacheForAttributeChange @ 0x1400ED7F4 (MiFlushCacheForAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x140137470 (KeInvalidateAllCaches.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 MiInitializeCacheFlushing()
{
  __int64 result; // rax
  struct _KPRCB *v1; // r15
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
  v1 = (struct _KPRCB *)result;
  if ( result != -1 )
  {
    v2 = 0LL;
    v3 = 48 * result - 0x58000000000LL;
    MiFinalizePageAttribute(v3, 1LL, 0);
    CurrentIrql = KeGetCurrentIrql();
    v4 = 2LL;
    __writecr8(2uLL);
    v5 = 4LL;
    do
    {
      MiZeroPhysicalPage((ULONG_PTR)v1, 1, 0);
      MiLockPageAtDpcInline(v3);
      *(_BYTE *)(v3 + 34) &= 0x3Fu;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v6 = __rdtsc();
      _InterlockedOr(v18, 0);
      MiFlushCacheForAttributeChange(v1, 1LL, 0LL);
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
      v13 = dword_140388528;
      if ( !dword_140388528 )
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
          ++dword_140388558;
          KeInvalidateAllCaches();
          _InterlockedOr(v18, 0);
          v17 = __rdtsc();
          _InterlockedOr(v18, 0);
          v12 += (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) - v16;
          --v4;
        }
        while ( v4 );
        ExFreePoolWithTag(PoolWithTag, 0);
        dword_140388560 = (v12 & 0xFFFFFFFFFFFFFFFEuLL) / v11;
      }
    }
    __writecr8(CurrentIrql);
    return MiReleaseFreshPage(v3);
  }
  return result;
}
