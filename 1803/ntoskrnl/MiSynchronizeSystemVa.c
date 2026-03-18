/*
 * XREFs of MiSynchronizeSystemVa @ 0x14003F344
 * Callers:
 *     MiLockStealSystemVm @ 0x14003F754 (MiLockStealSystemVm.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiTranslatePageForCopy @ 0x14015B6C0 (MiTranslatePageForCopy.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x140021880 (MiFastLockLeafPageTable.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiFillPteHierarchy @ 0x14003E540 (MiFillPteHierarchy.c)
 *     MiUnlockSystemVa @ 0x14003FA38 (MiUnlockSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiPageTableStillExists @ 0x1400CD1A0 (MiPageTableStillExists.c)
 *     MiGetSystemCacheReverseMap @ 0x1400DDF40 (MiGetSystemCacheReverseMap.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 */

__int64 __fastcall MiSynchronizeSystemVa(__int64 a1, unsigned __int64 a2, int a3, int a4, __int64 a5)
{
  int v5; // esi
  __int64 v9; // rdi
  char v10; // al
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r10
  unsigned __int64 v15; // rbx
  __int64 SystemCacheReverseMap; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 AnyMultiplexedVm; // rax
  __int64 v22; // r9
  __int64 valid; // rax
  __int64 SharedVm; // rbx
  unsigned __int64 v25; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v26[5]; // [rsp+28h] [rbp-50h] BYREF
  int v27; // [rsp+90h] [rbp+18h] BYREF

  v5 = 0;
  if ( !a3 )
    return 0LL;
  v9 = a5;
  *(_DWORD *)(a5 + 16) = 0;
  *(_BYTE *)(v9 + 33) = a4;
  *(_QWORD *)(v9 + 24) = a1;
  if ( a4 )
  {
    SharedVm = MiGetSharedVm(a1);
    v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
  }
  else
  {
    v10 = MiLockWorkingSetShared(a1);
  }
  *(_BYTE *)(v9 + 32) = v10;
  if ( a4 )
  {
    MiFillPteHierarchy(a2, v26);
    if ( (unsigned int)MiPageTableStillExists(v26, &v27) )
    {
      if ( v27 )
      {
        if ( (*(_DWORD *)(v9 + 4) & 4) == 0 )
          goto LABEL_23;
        *(_DWORD *)(v9 + 16) = v27;
      }
LABEL_10:
      if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
        return 1LL;
      if ( *(_DWORD *)(v9 + 48) == 3 )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(0LL);
LABEL_18:
        *(_QWORD *)(v9 + 24) = AnyMultiplexedVm;
        return 1LL;
      }
      SystemCacheReverseMap = MiGetSystemCacheReverseMap(a2, v13);
      if ( SystemCacheReverseMap && *(_QWORD *)(SystemCacheReverseMap + 16) )
      {
        v19 = *(_QWORD *)(MiGetSystemCacheReverseMap(a2, v18) + 24);
        v20 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( (v19 & 1) == 0 )
          v20 = v19;
        AnyMultiplexedVm = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)v20 + 60LL) & 0x3FF)) + 7168LL;
        goto LABEL_18;
      }
    }
  }
  else
  {
    v25 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    if ( (unsigned int)MiFastLockLeafPageTable(a1, a2) )
    {
      MiFillPteHierarchy(a2, v26);
      v11 = v26[v14];
      v12 = v26[(int)v14 - 1];
      v25 = v12;
    }
    v15 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( !v11 )
    {
      valid = MiLockLowestValidPageTable(a1, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v25);
      v12 = v25;
      v11 = valid;
    }
    *(_QWORD *)(v9 + 40) = v11;
    if ( v12 == v15 )
      goto LABEL_10;
    if ( (*(_DWORD *)(v9 + 4) & 4) != 0 && (MI_READ_PTE_LOCK_FREE(v12) & 0x81) == 0x81 )
    {
      do
      {
        v15 = (v22 & (v15 >> 9)) - 0x98000000000LL;
        ++v5;
      }
      while ( v15 != v12 );
      *(_DWORD *)(v9 + 16) = v5;
      return 1LL;
    }
  }
LABEL_23:
  MiUnlockSystemVa(v9);
  return 0LL;
}
