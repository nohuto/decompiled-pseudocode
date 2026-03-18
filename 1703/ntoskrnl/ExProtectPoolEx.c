/*
 * XREFs of ExProtectPoolEx @ 0x1400A5BE0
 * Callers:
 *     ExProtectPool @ 0x140053018 (ExProtectPool.c)
 *     SmHpBufferProtect @ 0x140059A00 (SmHpBufferProtect.c)
 *     CmpProtectPool @ 0x14007FD38 (CmpProtectPool.c)
 *     HvpSetRangeProtection @ 0x1405151A8 (HvpSetRangeProtection.c)
 * Callees:
 *     MmIsSpecialPoolAddress @ 0x1400A5B4C (MmIsSpecialPoolAddress.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     MmDeterminePoolType @ 0x1400A6B04 (MmDeterminePoolType.c)
 */

__int64 __fastcall ExProtectPoolEx(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v8; // r14
  int v9; // r15d
  KIRQL v10; // r12
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  __int64 v16; // r14
  int v17; // r15d

  if ( (unsigned int)MmIsSpecialPoolAddress(a2) )
  {
    if ( a4 != -1 )
      return MiProtectPool(a2, a3, a4);
    return 0LL;
  }
  if ( ((a2 | a1) & 0xFFF) != 0 || (MmDeterminePoolType(a2) & 0x20) != 0 )
    return 0LL;
  v8 = a2 + a3 - 1;
  v9 = 0;
  v10 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  if ( !PoolBigPageTable )
  {
LABEL_29:
    ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
    __writecr8(v10);
    return 0LL;
  }
  v11 = 24
      * (((int)PoolBigPageTableSize - 1) & ((40543 * (unsigned int)(a1 >> 12)) ^ ((40543
                                                                                 * (unsigned __int64)(unsigned int)(a1 >> 12)) >> 32)));
  v12 = v11 + PoolBigPageTable;
  v13 = PoolBigPageTable + 24 * PoolBigPageTableSize;
  while ( 1 )
  {
    v14 = *(_QWORD *)v12;
    if ( (*(_QWORD *)v12 & 1) == 0 && a2 >= v14 )
    {
      v15 = v14 + *(_QWORD *)(v12 + 16);
      if ( v8 < v15
        && ((*(_DWORD *)(v12 + 16) & 0xFFF) == 0
         || ((v8 + 4095) & 0xFFFFFFFFFFFFF000uLL) < ((v15 + 4095) & 0xFFFFFFFFFFFFF000uLL)) )
      {
        break;
      }
    }
    v12 += 24LL;
    if ( v12 >= v13 )
    {
      if ( v9 == 1 )
        goto LABEL_29;
      v12 = PoolBigPageTable;
      v9 = 1;
      v13 = v11 + PoolBigPageTable;
    }
  }
  v16 = *(_QWORD *)(v12 + 16);
  v17 = *(_DWORD *)(v12 + 12);
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  __writecr8(v10);
  if ( a4 == -1 )
    return v14 == a2 && v16 == a3 && (v16 & 0xFFF) == 0;
  if ( (v16 & 0xFFF) != 0 && ((v17 & 0x4000) == 0 || ((unsigned __int16)v16 & 0xFFFu) > 0x10uLL) )
    return 0LL;
  return MiProtectPool(a2, a3, a4);
}
