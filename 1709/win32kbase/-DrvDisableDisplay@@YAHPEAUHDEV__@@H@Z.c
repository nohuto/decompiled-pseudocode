/*
 * XREFs of ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0060708
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C005DFCC (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C0094ED4 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C00F5DD8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C003CEA8 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C003CF60 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     GreSuspendDirectDraw @ 0x1C0067770 (GreSuspendDirectDraw.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDisableDisplay(HSEMAPHORE *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 (__fastcall *v5)(_QWORD, _QWORD); // rax
  unsigned int v6; // ebx
  struct _ERESOURCE *v7; // rcx
  struct _ERESOURCE *v8; // rcx
  PERESOURCE v9; // rcx
  __int64 v10; // rax
  HSEMAPHORE v12; // rax
  int v13; // edx
  int v14; // ecx
  HSEMAPHORE v15; // rdx
  __int64 v16; // r10
  HSEMAPHORE *v17; // [rsp+60h] [rbp-38h] BYREF
  int v18; // [rsp+68h] [rbp-30h]
  _DWORD v19[4]; // [rsp+70h] [rbp-28h] BYREF

  v2 = (int)a2;
  v17 = a1;
  v4 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v4 + 24) = a1;
  *(_QWORD *)(v4 + 32) = v2;
  WdLogEvent5_WdEvent(v4);
  v18 = 0;
  GreSuspendDirectDraw((HDEV)a1);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore(ghsemGreLock);
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
      v12 = a1[321];
      v13 = *((_DWORD *)v12 + 15);
      v14 = *((_DWORD *)v12 + 14);
      v19[0] = 0;
      v19[1] = 0;
      v19[2] = v14;
      v19[3] = v13;
      if ( (int)IsEngBitBltSupported() >= 0 )
      {
        v15 = a1[321];
        v16 = (unsigned __int64)(v15 + 6) & -(__int64)(v15 != 0LL);
        if ( ((_DWORD)v15[28] & 1) != 0 )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*((_QWORD *)v15 + 6) + 2848LL))(
            v16,
            0LL,
            0LL,
            0LL,
            0LL,
            v19,
            0LL,
            0LL,
            0LL,
            0LL,
            0);
        else
          ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EngBitBlt)(
            v16,
            0LL,
            0LL,
            0LL,
            0LL,
            v19,
            0LL,
            0LL,
            0LL,
            0LL,
            0);
      }
    }
  }
  PDEVOBJ::vSync(
    (PDEVOBJ *)&v17,
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
    PDEVOBJ::bDisabled((PDEVOBJ *)&v17, 1);
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", a1[5]);
  v7 = (struct _ERESOURCE *)a1[5];
  if ( v7 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v7);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", a1[6]);
  v8 = (struct _ERESOURCE *)a1[6];
  if ( v8 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v8);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  v9 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  if ( !v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  v10 = WdLogNewEntry5_WdTrace(v9);
  *(_QWORD *)(v10 + 24) = (int)v6;
  WdLogEvent5_WdTrace(v10);
  return v6;
}
