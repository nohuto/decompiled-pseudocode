/*
 * XREFs of ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14026864C
 * Callers:
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140267D88 (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402689F0 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x1402690C8 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x14026BCFC (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 * Callees:
 *     SmKmStoreHelperSendCommand @ 0x1400049B4 (SmKmStoreHelperSendCommand.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140006F34 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140273AB4 (SmKmStoreHelperWaitForCommand.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // r13
  __int64 v8; // r13
  unsigned int v9; // ebx
  __int64 *v10; // r15
  __int64 v11; // rax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned int v14; // r8d
  bool v15; // zf
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  _KLOCK_ENTRY *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int8 v24; // [rsp+88h] [rbp+10h]
  int v25; // [rsp+98h] [rbp+20h] BYREF

  v7 = 6352LL;
  if ( a2 != 4 )
    v7 = 6232LL;
  v8 = a1 + v7;
  v9 = SmKmStoreHelperSendCommand(v8, a2, a3, a4 & 1);
  if ( v9 != -1073741650 )
  {
    if ( (a4 & 2) != 0 )
    {
      v10 = 0LL;
    }
    else
    {
      v11 = -5000000LL;
      if ( *(_BYTE *)(a1 + 6022) <= 1u )
        v11 = -1000000LL;
      v23 = v11;
      if ( (a4 & 8) != 0 )
        v23 = v11 / 4;
      v10 = &v23;
    }
    if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 6024));
      v25 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a1 + 6024) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v24 = ++CurrentThread->AbAllocationRegionCount;
      v14 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v15 = !_BitScanReverse((unsigned int *)&v16, v14);
        if ( v15 )
          break;
        v17 = 1 << v16;
        v18 = v16;
        v19 = &CurrentThread->LockEntries[v18];
        v14 &= ~v17;
        if ( (v19->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v19->LockState.0 & 1) == 0
          && (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
          && v19->LockState.SessionId == SessionId )
        {
          v19->AcquiredByte &= ~1u;
          if ( v19->LockState.0 )
          {
            if ( v19 )
            {
              v19->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v19->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v18].TreeNode);
              v25 = 0;
              v25 = v19->BoostBitmap.AllFields & 0x1FFFF;
              v19->BoostBitmap.AllFields &= 0xFFFE0000;
              v19->ThreadLocalFlags &= ~1u;
              v19->LockState.0 = 0LL;
              v20 = ((char *)v19 - (char *)CurrentThread - 800) / 96;
              if ( v24 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v20;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v20);
              goto LABEL_30;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 6024, SessionId, 0LL);
LABEL_30:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a1 + 6024, (unsigned int *)&v25);
      v15 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v15
        && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v21);
      }
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
    v9 = SmKmStoreHelperWaitForCommand(v8, a3, v10, (a4 >> 2) & 1);
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  }
  return v9;
}
