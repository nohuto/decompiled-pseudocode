/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140004560
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1400041F0 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x140444D8C (SmProcessCreateRequest.c)
 * Callees:
 *     SmKmStoreHelperCleanup @ 0x140004964 (SmKmStoreHelperCleanup.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x140004A1C (SmKmStoreHelperCheckWaitCommand.c)
 *     SmAcquireReleaseCharges @ 0x1400059FC (SmAcquireReleaseCharges.c)
 *     SmFpCleanup @ 0x14000653C (SmFpCleanup.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400067F4 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140006F34 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PspQueueApcSpecialApc @ 0x140453160 (PspQueueApcSpecialApc.c)
 *     SmKmFileInfoCleanup @ 0x14073A200 (SmKmFileInfoCleanup.c)
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
  char v15; // al
  void *v16; // rdi
  void *v17; // rcx
  __int64 result; // rax
  _QWORD *v19; // rdi
  _DWORD v20[2]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v21[48]; // [rsp+38h] [rbp-60h] BYREF

  *(_BYTE *)(a1 + 6021) |= 1u;
  if ( *(_QWORD *)(a1 + 6200) )
  {
    KeSetEvent((PRKEVENT)(a1 + 6152), 0, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 6200), Executive, 0, 0, 0LL);
  }
  v2 = *(void **)(a1 + 6200);
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  SmKmStoreHelperCheckWaitCommand(a1 + 6232, 1LL);
  if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 6472) )
    {
      KeSetEvent((PRKEVENT)(a1 + 6480), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 6472), Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 6472), 0x746C6644u);
    }
    if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 6568);
      if ( v3 )
        KiStackAttachProcess(v3);
      if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 && *(_QWORD *)(a1 + 6552) )
      {
        v19 = *(_QWORD **)(a1 + 6552);
        if ( *v19 )
          PspQueueApcSpecialApc();
        ExFreePoolWithTag(v19, 0);
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  ST_STORE<SM_TRAITS>::StCleanup(a1);
  if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 6024);
    v20[0] = 0;
    v5 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 6024) == 1 )
      SessionId = MmGetSessionIdEx(v5->ApcState.Process);
    else
      SessionId = -1;
    --v5->SpecialApcDisable;
    v7 = ++v5->AbAllocationRegionCount;
    v8 = ((char)v5->AbEntrySummary | (char)v5->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v10, v8);
      v20[1] = v10;
      if ( v9 )
        break;
      v11 = 1 << v10;
      v12 = v10;
      v13 = &v5->LockEntries[v12];
      v8 &= ~v11;
      if ( (v13->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v13->LockState.0 & 1) == 0
        && (*(_QWORD *)&v13->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
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
            v20[0] = 0;
            v20[0] = v13->BoostBitmap.AllFields & 0x1FFFF;
            v13->BoostBitmap.AllFields &= 0xFFFE0000;
            v13->ThreadLocalFlags &= ~1u;
            v13->LockState.0 = 0LL;
            v14 = ((char *)v13 - (char *)v5 - 800) / 96;
            if ( v7 == 1 )
              v5->AbEntrySummary |= 1 << v14;
            else
              _InterlockedOr8((volatile signed __int8 *)&v5->AbOrphanedEntrySummary, 1 << v14);
            goto LABEL_30;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v5->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v5, a1 + 6024, SessionId, 0LL);
LABEL_30:
    --v5->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v5, a1 + 6024, v20);
    v9 = v5->SpecialApcDisable++ == -1;
    if ( v9 && ($B476B70DB57F76B110DA5B9238C3E934 *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 && *(_QWORD *)(a1 + 6568) )
    KiUnstackDetachProcess(v21, 0LL);
  v15 = *(_BYTE *)(a1 + 6020);
  if ( v15 )
  {
    if ( v15 == 1 )
      SmKmFileInfoCleanup(a1 + 6216);
  }
  else
  {
    v16 = *(void **)(a1 + 6216);
    if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
    {
      v17 = *(void **)(a1 + 6224);
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
      SmKmStoreHelperCleanup(a1 + 6232);
      SmKmStoreHelperCleanup(a1 + 6352);
    }
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
  }
  result = SmFpCleanup(a1 + 6592);
  if ( (*(_BYTE *)(a1 + 6021) & 0x10) != 0 )
    return SmAcquireReleaseCharges(*(unsigned int *)(a1 + 6208), 1LL, 1LL);
  return result;
}
