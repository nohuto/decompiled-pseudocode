/*
 * XREFs of DrvCleanupAndDestroyMDEV @ 0x1C007B17C
 * Callers:
 *     CleanupGDI @ 0x1C00787E8 (CleanupGDI.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037B10 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     MultiUserCleanupDCs @ 0x1C0088B3C (MultiUserCleanupDCs.c)
 *     DrvDestroyMDEV @ 0x1C008DC60 (DrvDestroyMDEV.c)
 */

__int64 __fastcall DrvCleanupAndDestroyMDEV(__int64 a1)
{
  MultiUserCleanupDCs();
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemGreLock", (int)ghsemGreLock, 2);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  DrvDestroyMDEV(a1);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite");
  GreReleaseSemaphoreInternal(ghsemSprite);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock");
  GreReleaseSemaphoreInternal(ghsemGreLock);
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange");
  return GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
}
