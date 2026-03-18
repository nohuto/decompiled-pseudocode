/*
 * XREFs of ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C005EFF0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00988E0 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00F4DB8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00F836C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0038824 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C00388C0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     GreSuspendDirectDraw @ 0x1C005AC10 (GreSuspendDirectDraw.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDisableDisplay(HSEMAPHORE *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 (__fastcall *v5)(_QWORD, _QWORD); // rax
  unsigned int v6; // ebx
  struct _ERESOURCE *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  PERESOURCE v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  HSEMAPHORE v19; // rax
  int v20; // edx
  int v21; // ecx
  HSEMAPHORE v22; // rdx
  __int64 v23; // r10
  HSEMAPHORE *v24; // [rsp+60h] [rbp-28h] BYREF
  _DWORD v25[4]; // [rsp+68h] [rbp-20h] BYREF

  v2 = (int)a2;
  v24 = a1;
  v4 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v4 + 24) = a1;
  *(_QWORD *)(v4 + 32) = v2;
  WdLogEvent5_WdEvent(v4);
  GreSuspendDirectDraw((HDEV)a1, 0);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
  EngAcquireSemaphore(a1[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", a1[6], 4LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
  EngAcquireSemaphore(a1[5]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", a1[5], 11LL);
  if ( (_DWORD)v2 )
  {
    if ( ((_DWORD)a1[4] & 0x400) == 0 )
    {
      v19 = a1[321];
      v20 = *((_DWORD *)v19 + 15);
      v21 = *((_DWORD *)v19 + 14);
      v25[0] = 0;
      v25[1] = 0;
      v25[2] = v21;
      v25[3] = v20;
      if ( (int)IsEngBitBltSupported() >= 0 )
      {
        v22 = a1[321];
        v23 = (unsigned __int64)(v22 + 6) & -(__int64)(v22 != 0LL);
        if ( ((_DWORD)v22[28] & 1) != 0 )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*((_QWORD *)v22 + 6) + 2848LL))(
            v23,
            0LL,
            0LL,
            0LL,
            0LL,
            v25,
            0LL,
            0LL,
            0LL,
            0LL,
            0);
        else
          ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EngBitBlt)(
            v23,
            0LL,
            0LL,
            0LL,
            0LL,
            v25,
            0LL,
            0LL,
            0LL,
            0LL,
            0);
      }
    }
  }
  PDEVOBJ::vSync(
    (PDEVOBJ *)&v24,
    (struct _SURFOBJ *)((unsigned __int64)(a1[321] + 6) & ((unsigned __int128)-(__int128)(unsigned __int64)a1[321] >> 64)),
    0LL,
    0);
  if ( (int)IsDwmDestroyDeviceSpecificResourcesSupported() >= 0 )
    DwmDestroyDeviceSpecificResources(a1);
  if ( gProtocolType == -1 )
    *((_DWORD *)a1 + 658) = 4;
  v5 = (__int64 (__fastcall *)(_QWORD, _QWORD))a1[343];
  if ( v5 )
    v6 = v5(a1[227], 0LL);
  else
    v6 = 0;
  *((_DWORD *)a1 + 658) = 0;
  if ( v6 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&v24, 1);
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", a1[5]);
  v7 = (struct _ERESOURCE *)a1[5];
  if ( v7 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    PsLeavePriorityRegion(v8);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion(v9);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v10);
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", a1[6]);
  v11 = (struct _ERESOURCE *)a1[6];
  if ( v11 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v11);
    PsLeavePriorityRegion(v12);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v13);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    PsLeavePriorityRegion(v14);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  v15 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v16);
  }
  if ( !v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  v17 = WdLogNewEntry5_WdTrace(v15);
  *(_QWORD *)(v17 + 24) = (int)v6;
  WdLogEvent5_WdTrace(v17);
  return v6;
}
