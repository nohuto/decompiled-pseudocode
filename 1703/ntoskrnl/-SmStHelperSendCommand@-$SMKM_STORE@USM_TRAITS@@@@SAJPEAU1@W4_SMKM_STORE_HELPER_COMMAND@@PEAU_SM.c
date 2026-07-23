/*
 * XREFs of ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14001F9B4
 * Callers:
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14001E728 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14001F4CC (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14005D994 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x14012F7B0 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 * Callees:
 *     SmKmStoreHelperWaitForCommand @ 0x14001FCB8 (SmKmStoreHelperWaitForCommand.c)
 *     SmKmStoreHelperSendCommand @ 0x14001FD5C (SmKmStoreHelperSendCommand.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140054934 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // r13
  __int64 v8; // r13
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 *v11; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned int v14; // r8d
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int16 v19; // ax
  __int64 v21; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+88h] [rbp+10h]
  int v23; // [rsp+98h] [rbp+20h] BYREF

  v7 = 6200LL;
  if ( (_DWORD)a2 == 4 )
    v7 = 6320LL;
  v8 = a1 + v7;
  v9 = SmKmStoreHelperSendCommand(v8, a2, a3, a4 & 1);
  if ( v9 != -1073741650 )
  {
    if ( (a4 & 2) != 0 )
    {
      v11 = 0LL;
    }
    else
    {
      v10 = -5000000LL;
      if ( *(_BYTE *)(a1 + 5990) <= 1u )
        v10 = -1000000LL;
      v21 = v10;
      if ( (a4 & 8) != 0 )
        v21 = v10 / 4;
      v11 = &v21;
    }
    if ( (*(_BYTE *)(a1 + 5989) & 4) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5992), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 5992);
      v23 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a1 + 5992) == 1 )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      ++CurrentThread->AbAllocationRegionCount;
      v14 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      AbAllocationRegionCount = CurrentThread->AbAllocationRegionCount;
      v15 = !_BitScanReverse((unsigned int *)&v16, v14);
      if ( v15 )
        goto LABEL_34;
      while ( 1 )
      {
        v17 = (__int64)&CurrentThread->LockEntries[v16];
        v14 &= ~(1 << v16);
        if ( (*(_BYTE *)(v17 + 26) & 1) != 0
          && (*(_DWORD *)(v17 + 32) & 1) == 0
          && (*(_QWORD *)(v17 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 5992) & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v17 + 40) == SessionId )
        {
          *(_BYTE *)(v17 + 26) &= ~1u;
          if ( *(_QWORD *)(v17 + 32) )
            break;
        }
        v15 = !_BitScanReverse((unsigned int *)&v16, v14);
        if ( v15 )
          goto LABEL_34;
      }
      if ( !v17 )
      {
LABEL_34:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x8000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 5992, SessionId, 0LL);
      }
      else
      {
        *(_BYTE *)(v17 + 32) |= 2u;
        if ( *(__int64 *)(v17 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v17);
        v23 = 0;
        v23 = *(_DWORD *)(v17 + 88) & 0x1FFFF;
        *(_DWORD *)(v17 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v17 + 25) &= ~1u;
        *(_QWORD *)(v17 + 32) = 0LL;
        v18 = (v17 - (__int64)CurrentThread - 800) / 96;
        if ( AbAllocationRegionCount == 1 )
          CurrentThread->AbEntrySummary |= 1 << v18;
        else
          _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v18);
      }
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(CurrentThread, a1 + 5992, &v23);
      v19 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v19;
      if ( !v19
        && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
    v9 = SmKmStoreHelperWaitForCommand(v8, a3, v11, (a4 >> 2) & 1);
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  }
  return v9;
}
