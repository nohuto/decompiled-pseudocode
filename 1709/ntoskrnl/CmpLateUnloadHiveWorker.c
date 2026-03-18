/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x1404E67A0
 * Callers:
 *     <none>
 * Callees:
 *     CmpDecrementAppHiveUnloadCount @ 0x140015C74 (CmpDecrementAppHiveUnloadCount.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     CmpTryToRundownHive @ 0x1400AFAE0 (CmpTryToRundownHive.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     CmpCompleteUnloadKey @ 0x14046FBB4 (CmpCompleteUnloadKey.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404E3B40 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1404E3B7C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1404E3C0C (LOCK_HIVE_LOAD.c)
 */

__int64 __fastcall CmpLateUnloadHiveWorker(PVOID P)
{
  _DWORD *v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v4; // r9
  bool v5; // zf
  char v6; // al
  __int64 v7; // rdx
  ULONG_PTR v8; // rbx
  __int64 result; // rax
  char v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 2;
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1375, 1u) & 0x7F) + 1376) = 22;
  v2 = (_DWORD *)*((_QWORD *)P + 513);
  if ( (*((_DWORD *)P + 36) & 0x40) != 0 )
  {
    *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1375, 1u) & 0x7F) + 1376) = 23;
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
    {
      v5 = *((_BYTE *)P + 4112) == 0;
      v10 = 1;
      if ( v5 )
      {
        *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1375, 1u) & 0x7F) + 1376) = 25;
        goto LABEL_8;
      }
      if ( (*((_DWORD *)P + 1340) & 0x20) != 0 )
        ++CmpActiveAppHiveUnloadCount;
      v6 = CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)P, v2, &v10, v4);
      *((_QWORD *)P + 515) = 0LL;
      if ( v6 )
      {
        v8 = *((_QWORD *)P + 513);
        *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1375, 1u) & 0x7F) + 1376) = 30;
        CmpCompleteUnloadKey(v8, v7, &v11);
        CmpLockRegistry();
        CmpDereferenceKeyControlBlock(v8);
LABEL_8:
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD();
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1374, 0xFFFFFFFF) == 1 )
          CmpDeleteHive((PERESOURCE *)P);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        return (__int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      if ( (*((_DWORD *)P + 1340) & 0x20) != 0 )
        CmpDecrementAppHiveUnloadCount();
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      if ( v10 )
      {
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
    }
    else
    {
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      *((_DWORD *)P + (_InterlockedExchangeAdd((volatile signed __int32 *)P + 1375, 1u) & 0x7F) + 1376) = 24;
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
    }
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)P + 1374);
  if ( !(_DWORD)result )
    return CmpDeleteHive((PERESOURCE *)P);
  return result;
}
