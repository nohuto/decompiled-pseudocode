/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x1404CC580
 * Callers:
 *     <none>
 * Callees:
 *     CmpDecrementAppHiveUnloadCount @ 0x14007EC20 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpTryToRundownHive @ 0x14007EC54 (CmpTryToRundownHive.c)
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404D8520 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1404D8558 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1404D85E4 (LOCK_HIVE_LOAD.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpLateUnloadHiveWorker(__int64 a1)
{
  __int64 v2; // rcx
  _DWORD *v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v5; // r9
  bool v6; // zf
  char v7; // al
  __int64 v8; // rdx
  ULONG_PTR v9; // rbx
  __int64 v10; // rcx
  __int64 result; // rax
  char v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 2;
  LOCK_HIVE_LOAD(a1);
  LOBYTE(v2) = 1;
  CmpLockRegistryFreezeAware(v2);
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 22;
  v3 = *(_DWORD **)(a1 + 4104);
  if ( (*(_DWORD *)(a1 + 144) & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 23;
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
    {
      v6 = *(_BYTE *)(a1 + 4112) == 0;
      v12 = 1;
      if ( v6 )
      {
        *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 25;
        goto LABEL_8;
      }
      if ( (*(_DWORD *)(a1 + 5360) & 0x20) != 0 )
        ++CmpActiveAppHiveUnloadCount;
      v7 = CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)a1, v3, &v12, v5);
      *(_QWORD *)(a1 + 4120) = 0LL;
      if ( v7 )
      {
        v9 = *(_QWORD *)(a1 + 4104);
        *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 30;
        CmpCompleteUnloadKey(v9, v8, &v13);
        CmpLockRegistry(v10);
        CmpDereferenceKeyControlBlock(v9);
LABEL_8:
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5496), 0xFFFFFFFF) == 1 )
          CmpDeleteHive(a1);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
      if ( (*(_DWORD *)(a1 + 5360) & 0x20) != 0 )
        CmpDecrementAppHiveUnloadCount();
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      if ( v12 )
      {
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
    else
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 24;
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
    }
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a1 + 5496));
  if ( !(_DWORD)result )
    return CmpDeleteHive(a1);
  return result;
}
