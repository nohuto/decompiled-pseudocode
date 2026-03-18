/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x14054D5D0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     CmpTryToRundownHive @ 0x1400A1F10 (CmpTryToRundownHive.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x1400A20B8 (CmpDecrementAppHiveUnloadCount.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     UNLOCK_HIVE_LOAD @ 0x14049BB10 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x14049BC3C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x14049BCCC (LOCK_HIVE_LOAD.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 *     CmpCompleteUnloadKey @ 0x14054D8E8 (CmpCompleteUnloadKey.c)
 */

__int64 __fastcall CmpLateUnloadHiveWorker(PVOID P)
{
  _DWORD *v2; // rbp
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v4; // bl
  char v5; // r9
  char v6; // al
  ULONG_PTR v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  BOOLEAN v26[4]; // [rsp+20h] [rbp-58h] BYREF
  int v27; // [rsp+24h] [rbp-54h] BYREF
  _BYTE v28[48]; // [rsp+28h] [rbp-50h] BYREF

  v27 = 2;
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1073, 1u) & 0x7F) + 1074) = 22;
  v2 = (_DWORD *)*((_QWORD *)P + 366);
  if ( (*((_DWORD *)P + 40) & 0x40) != 0 )
  {
    *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1073, 1u) & 0x7F) + 1074) = 23;
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD(v15, v14, v16, v17);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v4 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    if ( !v4 )
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v26[0] = v4;
    if ( v4 )
    {
      if ( !*((_BYTE *)P + 2936) )
      {
        *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1073, 1u) & 0x7F) + 1074) = 25;
        goto LABEL_10;
      }
      if ( (*((_DWORD *)P + 1038) & 0x20) != 0 )
        ++CmpActiveAppHiveUnloadCount;
      v6 = CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)P, v2, v26, v5);
      *((_QWORD *)P + 368) = 0LL;
      if ( v6 )
      {
        v7 = *((_QWORD *)P + 366);
        *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1073, 1u) & 0x7F) + 1074) = 30;
        CmpAttachToRegistryProcess((__int64)v28);
        CmpCompleteUnloadKey(v7, v8, &v27);
        KiUnstackDetachProcess((__int64)v28, 0LL);
        CmpLockRegistry();
        CmpDereferenceKeyControlBlock(v7);
LABEL_10:
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD(v10, v9, v11, v12);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1072, 0xFFFFFFFF) == 1 )
          CmpDeleteHive(P);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        return (__int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      if ( (*((_DWORD *)P + 1038) & 0x20) != 0 )
        CmpDecrementAppHiveUnloadCount();
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD(v23, v22, v24, v25);
      if ( v26[0] )
      {
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
    }
    else
    {
      *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1073, 1u) & 0x7F) + 1074) = 24;
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD(v19, v18, v20, v21);
    }
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)P + 1072);
  if ( !(_DWORD)result )
    return CmpDeleteHive(P);
  return result;
}
