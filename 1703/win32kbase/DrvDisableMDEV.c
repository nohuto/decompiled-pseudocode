/*
 * XREFs of DrvDisableMDEV @ 0x1C0098680
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     SafeDisableMDEV @ 0x1C009BED0 (SafeDisableMDEV.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0038824 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     GreSuspendDirectDraw @ 0x1C005AC10 (GreSuspendDirectDraw.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00988E0 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 */

__int64 __fastcall DrvDisableMDEV(HDEV *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  HDEV v7; // rbx
  int v8; // eax
  __int64 v9; // rsi
  struct _ERESOURCE *v10; // rcx
  struct _ERESOURCE *v11; // rcx
  PERESOURCE v12; // rcx
  __int64 v13; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  HDEV v20; // [rsp+30h] [rbp+8h] BYREF

  v4 = (int)a2;
  v6 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdEvent(v6);
  v7 = *a1;
  v20 = *a1;
  if ( (_DWORD)v4 )
    GreSuspendDirectDraw(v7, 0);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore(*((HSEMAPHORE *)v7 + 6));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemPointer()", *((_QWORD *)v7 + 6), 4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
  EngAcquireSemaphore(*((HSEMAPHORE *)v7 + 5));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemDevLock()", *((_QWORD *)v7 + 5), 11);
  v8 = DrvDisableMDEVChildren((struct _MDEV *)a1, v4, a3);
  v9 = v8;
  if ( v8 && (_DWORD)v4 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&v20, 1);
  EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemDevLock()");
  v10 = (struct _ERESOURCE *)*((_QWORD *)v7 + 5);
  if ( v10 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v10);
    PsLeavePriorityRegion(v15);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT");
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion(v16);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite");
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v17);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemPointer()");
  v11 = (struct _ERESOURCE *)*((_QWORD *)v7 + 6);
  if ( v11 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v11);
    PsLeavePriorityRegion(v18);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange");
  v12 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v19);
  }
  if ( !(_DWORD)v9 && (_DWORD)v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  v13 = WdLogNewEntry5_WdTrace(v12);
  *(_QWORD *)(v13 + 24) = v9;
  WdLogEvent5_WdTrace(v13);
  return (unsigned int)v9;
}
