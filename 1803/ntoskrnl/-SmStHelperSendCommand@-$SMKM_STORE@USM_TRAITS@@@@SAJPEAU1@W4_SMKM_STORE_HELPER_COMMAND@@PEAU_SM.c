/*
 * XREFs of ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140097874
 * Callers:
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x140095C4C (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140096960 (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140097528 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14009A2D4 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140091184 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140097B68 (SmKmStoreHelperWaitForCommand.c)
 *     SmKmStoreHelperSendCommand @ 0x140097C0C (SmKmStoreHelperSendCommand.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 *v14; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned int v17; // r8d
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rdi
  __int64 v23; // rdx
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int8 v26; // [rsp+88h] [rbp+10h]
  int v27; // [rsp+98h] [rbp+20h] BYREF

  v7 = 6352LL;
  if ( (_DWORD)a2 != 4 )
    v7 = 6232LL;
  v8 = a1 + v7;
  v10 = SmKmStoreHelperSendCommand(v8, a2, a3, a4 & 1);
  if ( v10 != -1073741650 )
  {
    if ( (a4 & 2) != 0 )
    {
      v14 = 0LL;
    }
    else
    {
      v13 = -1000000LL;
      if ( *(_BYTE *)(a1 + 6022) > 1u )
        v13 = -5000000LL;
      v25 = v13;
      if ( (a4 & 8) != 0 )
      {
        v9 = v13 % 4;
        v25 = v13 / 4;
      }
      v14 = &v25;
    }
    if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 6024), v9, v11, v12);
      v27 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a1 + 6024) == 1 )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v26 = ++CurrentThread->AbAllocationRegionCount;
      v17 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v18 = !_BitScanReverse((unsigned int *)&v19, v17);
        if ( v18 )
          break;
        v20 = 1 << v19;
        v21 = v19;
        v22 = &CurrentThread->LockEntries[v21];
        v17 &= ~v20;
        if ( (v22->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v22->LockState.0 & 1) == 0
          && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
          && v22->LockState.SessionId == SessionId )
        {
          v22->AcquiredByte &= ~1u;
          if ( v22->LockState.0 )
          {
            if ( v22 )
            {
              v22->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v22->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v21].TreeNode);
              v27 = 0;
              v27 = v22->BoostBitmap.AllFields & 0x1FFFF;
              v22->BoostBitmap.AllFields &= 0xFFFE0000;
              v22->ThreadLocalFlags &= ~1u;
              v22->LockState.0 = 0LL;
              v23 = ((char *)v22 - (char *)CurrentThread - 800) / 96;
              if ( v26 == 1 )
                CurrentThread->AbEntrySummary |= 1 << v23;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v23);
              goto LABEL_27;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 6024, SessionId, 0LL);
LABEL_27:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(CurrentThread, a1 + 6024, &v27);
      v18 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v18
        && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
    v10 = SmKmStoreHelperWaitForCommand(v8, a3, v14, (a4 >> 2) & 1);
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  }
  return v10;
}
