/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14001F550
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14001ECF0 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x140567BBC (SmProcessCreateRequest.c)
 * Callees:
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14001E834 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x14001F964 (SmKmStoreHelperCleanup.c)
 *     SmKmStoreHelperWaitForCommand @ 0x14001FCB8 (SmKmStoreHelperWaitForCommand.c)
 *     SmFpCleanup @ 0x14001FE68 (SmFpCleanup.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140054934 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmAcquireReleaseCharges @ 0x14005DBA8 (SmAcquireReleaseCharges.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspQueueApcSpecialApc @ 0x14044FB60 (PspQueueApcSpecialApc.c)
 *     SmKmFileInfoCleanup @ 0x140701F04 (SmKmFileInfoCleanup.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1)
{
  void *v2; // rcx
  ULONG_PTR v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v7; // r15
  unsigned int v8; // r8d
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  _KLOCK_ENTRY *v13; // rsi
  __int64 v14; // rdx
  __int16 v15; // ax
  char v16; // al
  void *v17; // rdi
  void *v18; // rcx
  __int64 result; // rax
  _QWORD *v20; // rdi
  _DWORD v21[2]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v22[48]; // [rsp+38h] [rbp-60h] BYREF

  *(_BYTE *)(a1 + 5989) |= 1u;
  if ( *(_QWORD *)(a1 + 6168) )
  {
    KeSetEvent((PRKEVENT)(a1 + 6120), 0, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 6168), Executive, 0, 0, 0LL);
  }
  v2 = *(void **)(a1 + 6168);
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  if ( *(_DWORD *)(a1 + 6256) )
    SmKmStoreHelperWaitForCommand(a1 + 6200, 0LL, 0LL, 0LL);
  if ( (*(_BYTE *)(a1 + 5989) & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 6440) )
    {
      KeSetEvent((PRKEVENT)(a1 + 6448), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 6440), Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 6440), 0x746C6644u);
    }
    if ( (*(_BYTE *)(a1 + 5989) & 4) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 6536);
      if ( v3 )
        KiStackAttachProcess(v3);
      if ( (*(_BYTE *)(a1 + 5989) & 4) != 0 && *(_QWORD *)(a1 + 6520) )
      {
        v20 = *(_QWORD **)(a1 + 6520);
        if ( *v20 )
          PspQueueApcSpecialApc(*v20);
        ExFreePoolWithTag(v20, 0);
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  ST_STORE<SM_TRAITS>::StCleanup(a1);
  if ( (*(_BYTE *)(a1 + 5989) & 4) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5992), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 5992);
    v21[0] = 0;
    v5 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 5992) == 1 )
      SessionId = MmGetSessionIdEx(v5->ApcState.Process);
    else
      SessionId = -1;
    --v5->SpecialApcDisable;
    v7 = ++v5->AbAllocationRegionCount;
    v8 = ((char)v5->AbEntrySummary | (char)v5->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v10, v8);
      v21[1] = v10;
      if ( v9 )
        break;
      v11 = 1 << v10;
      v12 = v10;
      v13 = &v5->LockEntries[v12];
      v8 &= ~v11;
      if ( (v13->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v13->LockState.0 & 1) == 0
        && (*(_QWORD *)&v13->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 5992) & 0x7FFFFFFFFFFFFFFCLL)
        && v13->LockState.SessionId == SessionId )
      {
        v13->AcquiredByte &= ~1u;
        if ( v13->LockState.0 )
        {
          if ( v13 )
          {
            v13->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v13->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v5->LockEntries[v12].TreeNode);
            v21[0] = 0;
            v21[0] = v13->BoostBitmap.AllFields & 0x1FFFF;
            v13->BoostBitmap.AllFields &= 0xFFFE0000;
            v13->ThreadLocalFlags &= ~1u;
            v13->LockState.0 = 0LL;
            v14 = ((char *)v13 - (char *)v5 - 800) / 96;
            if ( v7 == 1 )
              v5->AbEntrySummary |= 1 << v14;
            else
              _InterlockedOr8((volatile signed __int8 *)&v5->AbOrphanedEntrySummary, 1 << v14);
            goto LABEL_32;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v5->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v5, a1 + 5992, SessionId, 0LL);
LABEL_32:
    --v5->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v5, a1 + 5992, v21);
    v15 = v5->SpecialApcDisable + 1;
    v5->SpecialApcDisable = v15;
    if ( !v15 && ($69CD3F157F9F39B6F7113F2231989901 *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  if ( (*(_BYTE *)(a1 + 5989) & 4) != 0 && *(_QWORD *)(a1 + 6536) )
    KiUnstackDetachProcess(v22, 0LL);
  v16 = *(_BYTE *)(a1 + 5988);
  if ( v16 )
  {
    if ( v16 == 1 )
      SmKmFileInfoCleanup(a1 + 6184);
  }
  else
  {
    v17 = *(void **)(a1 + 6184);
    if ( (*(_BYTE *)(a1 + 5989) & 4) != 0 )
    {
      v18 = *(void **)(a1 + 6192);
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      SmKmStoreHelperCleanup(a1 + 6200);
      SmKmStoreHelperCleanup(a1 + 6320);
    }
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
  }
  result = SmFpCleanup(a1 + 6560);
  if ( (*(_BYTE *)(a1 + 5989) & 0x10) != 0 )
    return SmAcquireReleaseCharges(*(unsigned int *)(a1 + 6176), 1LL, 1LL);
  return result;
}
