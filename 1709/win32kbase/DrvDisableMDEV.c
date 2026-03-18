/*
 * XREFs of DrvDisableMDEV @ 0x1C00A27D0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     SafeDisableMDEV @ 0x1C00A5F10 (SafeDisableMDEV.c)
 * Callees:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C003CEA8 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     GreSuspendDirectDraw @ 0x1C0067770 (GreSuspendDirectDraw.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0094ED4 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 */

__int64 __fastcall DrvDisableMDEV(HSEMAPHORE **a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  HSEMAPHORE *v7; // rbx
  int v8; // eax
  int v9; // r8d
  __int64 v10; // rsi
  int v11; // r8d
  struct _ERESOURCE *v12; // rcx
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  struct _ERESOURCE *v16; // rcx
  PERESOURCE v17; // rcx
  __int64 v18; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  HSEMAPHORE *v25; // [rsp+40h] [rbp+8h] BYREF
  int v26; // [rsp+48h] [rbp+10h]

  v4 = (int)a2;
  v6 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdEvent(v6);
  v7 = *a1;
  v25 = *a1;
  if ( (_DWORD)v4 )
  {
    v26 = 0;
    GreSuspendDirectDraw((HDEV)v7, 0);
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore(v7[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemPointer()", (int)v7[6], 4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
  EngAcquireSemaphore(v7[5]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemDevLock()", (int)v7[5], 11);
  v8 = DrvDisableMDEVChildren(a1, v4, a3);
  v10 = v8;
  if ( v8 && (_DWORD)v4 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&v25, 1);
  EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemDevLock()", (int)v7[5], v9);
  v12 = (struct _ERESOURCE *)v7[5];
  if ( v12 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v12);
    PsLeavePriorityRegion(v20);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (int)ghsemHT, v11);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion(v21);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v13);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v22);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemPointer()", (int)v7[6], v14);
  v16 = (struct _ERESOURCE *)v7[6];
  if ( v16 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v16);
    PsLeavePriorityRegion(v23);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v15);
  v17 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v24);
  }
  if ( !(_DWORD)v10 && (_DWORD)v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  v18 = WdLogNewEntry5_WdTrace(v17);
  *(_QWORD *)(v18 + 24) = v10;
  WdLogEvent5_WdTrace(v18);
  return (unsigned int)v10;
}
