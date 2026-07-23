/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140099EC4
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14009A8E0 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x14052AEB8 (SmProcessCreateRequest.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140091184 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmAcquireReleaseCharges @ 0x140097750 (SmAcquireReleaseCharges.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x140097C88 (SmKmStoreHelperCheckWaitCommand.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140099DC4 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x140099E74 (SmKmStoreHelperCleanup.c)
 *     SmFpCleanup @ 0x14009AD84 (SmFpCleanup.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PspQueueApcSpecialApc @ 0x14052A140 (PspQueueApcSpecialApc.c)
 *     SmKmFileInfoCleanup @ 0x14079D204 (SmKmFileInfoCleanup.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1)
{
  void *v2; // rcx
  char v3; // al
  _KPROCESS *v4; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *v9; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v11; // r15
  unsigned int v12; // r8d
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  _KLOCK_ENTRY *v17; // rsi
  __int64 v18; // rdx
  char v19; // al
  char v20; // cl
  void *v21; // rdi
  void *v22; // rcx
  __int64 result; // rax
  _QWORD *v24; // rdi
  _DWORD v25[2]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v26[48]; // [rsp+38h] [rbp-60h] BYREF

  *(_BYTE *)(a1 + 6021) |= 1u;
  v2 = *(void **)(a1 + 6200);
  if ( v2 )
  {
    KeSetEvent((PRKEVENT)(a1 + 6152), 0, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 6200), Executive, 0, 0, 0LL);
    v2 = *(void **)(a1 + 6200);
  }
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  SmKmStoreHelperCheckWaitCommand(a1 + 6232, 1);
  v3 = *(_BYTE *)(a1 + 6021);
  if ( (v3 & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 6472) )
    {
      KeSetEvent((PRKEVENT)(a1 + 6480), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 6472), Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 6472), 0x746C6644u);
      v3 = *(_BYTE *)(a1 + 6021);
    }
    if ( (v3 & 4) != 0 )
    {
      v4 = *(_KPROCESS **)(a1 + 6568);
      if ( v4 )
      {
        KiStackAttachProcess(v4, 0, (__int64)v26);
        v3 = *(_BYTE *)(a1 + 6021);
      }
      if ( (v3 & 4) != 0 && *(_QWORD *)(a1 + 6552) )
      {
        v24 = *(_QWORD **)(a1 + 6552);
        if ( *v24 )
          PspQueueApcSpecialApc();
        ExFreePoolWithTag(v24, 0);
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
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 6024), v6, v7, v8);
    v25[0] = 0;
    v9 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 6024) == 1 )
      SessionId = MmGetSessionIdEx(v9->ApcState.Process);
    else
      SessionId = -1;
    --v9->SpecialApcDisable;
    v11 = ++v9->AbAllocationRegionCount;
    v12 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v13 = !_BitScanReverse((unsigned int *)&v14, v12);
      v25[1] = v14;
      if ( v13 )
        break;
      v15 = 1 << v14;
      v16 = v14;
      v17 = &v9->LockEntries[v16];
      v12 &= ~v15;
      if ( (v17->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v17->LockState.0 & 1) == 0
        && (*(_QWORD *)&v17->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 6024) & 0x7FFFFFFFFFFFFFFCLL)
        && v17->LockState.SessionId == SessionId )
      {
        v17->AcquiredByte &= ~1u;
        if ( v17->LockState.0 )
        {
          if ( v17 )
          {
            v17->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v17->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v9->LockEntries[v16].TreeNode);
            v25[0] = 0;
            v25[0] = v17->BoostBitmap.AllFields & 0x1FFFF;
            v17->BoostBitmap.AllFields &= 0xFFFE0000;
            v17->ThreadLocalFlags &= ~1u;
            v17->LockState.0 = 0LL;
            v18 = ((char *)v17 - (char *)v9 - 800) / 96;
            if ( v11 == 1 )
              v9->AbEntrySummary |= 1 << v18;
            else
              _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v18);
            goto LABEL_30;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v9, a1 + 6024, SessionId, 0LL);
LABEL_30:
    --v9->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(v9, a1 + 6024, v25);
    v13 = v9->SpecialApcDisable++ == -1;
    if ( v13 && ($005F0E83B22994B61E86C72E0CE43C71 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  v19 = *(_BYTE *)(a1 + 6021);
  if ( (v19 & 4) != 0 && *(_QWORD *)(a1 + 6568) )
  {
    KiUnstackDetachProcess((__int64)v26, 0LL);
    v19 = *(_BYTE *)(a1 + 6021);
  }
  v20 = *(_BYTE *)(a1 + 6020);
  if ( v20 )
  {
    if ( v20 == 1 )
      SmKmFileInfoCleanup(a1 + 6216);
  }
  else
  {
    v21 = *(void **)(a1 + 6216);
    if ( (v19 & 4) != 0 )
    {
      v22 = *(void **)(a1 + 6224);
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
      SmKmStoreHelperCleanup((PVOID *)(a1 + 6232));
      SmKmStoreHelperCleanup((PVOID *)(a1 + 6352));
    }
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
  }
  result = SmFpCleanup(a1 + 6592);
  if ( (*(_BYTE *)(a1 + 6021) & 0x10) != 0 )
    return SmAcquireReleaseCharges(*(unsigned int *)(a1 + 6208), 1, 1);
  return result;
}
