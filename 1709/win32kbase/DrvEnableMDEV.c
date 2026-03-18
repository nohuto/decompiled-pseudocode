/*
 * XREFs of DrvEnableMDEV @ 0x1C0060B04
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     SafeEnableMDEV @ 0x1C00A5EC0 (SafeEnableMDEV.c)
 * Callees:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C003CEA8 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     DrvDxgkDisplayOnOff @ 0x1C0094F90 (DrvDxgkDisplayOnOff.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00A5B48 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvEnableMDEV(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r15
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rsi
  HDEV v11; // rbp
  __int64 v12; // rax
  unsigned int v13; // r8d
  struct _ERESOURCE *v14; // rcx
  struct _ERESOURCE *v15; // rcx
  void (__fastcall *v17)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  unsigned int v18; // edx
  __int64 *v19; // rcx
  _QWORD *v20; // rdi
  void (__fastcall *v21)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  __int64 v22; // rax
  __int64 v23; // [rsp+30h] [rbp-38h] BYREF
  __int64 i; // [rsp+70h] [rbp+8h] BYREF
  __int64 v25; // [rsp+88h] [rbp+20h] BYREF

  v4 = (int)a2;
  v6 = 1;
  v7 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v7 + 24) = a1;
  *(_QWORD *)(v7 + 32) = v4;
  WdLogEvent5_WdEvent(v7);
  v9 = *a1;
  v10 = 0LL;
  for ( i = *a1; (unsigned int)v10 < *((_DWORD *)a1 + 5); v10 = (unsigned int)(v10 + 1) )
  {
    v11 = (HDEV)a1[5 * v10 + 4];
    if ( (_DWORD)v4 )
    {
      LOBYTE(v8) = 1;
      DrvDxgkDisplayOnOff(a1[5 * v10 + 4], v8, a3);
      DrvEnableDisplay(v11);
    }
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 48));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemPointer()", *(_QWORD *)(v9 + 48), 4LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 40));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 40), 11LL);
  if ( (_DWORD)v4 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&i, 0);
  v12 = *(_QWORD *)(v9 + 1824);
  v25 = v12;
  if ( (*(_DWORD *)(v12 + 24) & 0x800) != 0 )
  {
    v17 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v9 + 2880);
    if ( v17 )
      v17(*(_QWORD *)(v9 + 1816), &v25, 0LL, 0LL, *(_DWORD *)(v12 + 28));
    else
      v6 = 0;
  }
  else
  {
    v13 = *((_DWORD *)a1 + 5);
    if ( v13 > 1 )
    {
      v18 = 0;
      v19 = a1 + 4;
      while ( 1 )
      {
        v20 = (_QWORD *)*v19;
        if ( (*(_DWORD *)(*v19 + 2188) & 0x100) != 0 )
          break;
        ++v18;
        v19 += 5;
        if ( v18 >= v13 )
          goto LABEL_9;
      }
      v21 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v20[223];
      v22 = v20[228];
      v23 = v22;
      if ( v21 )
        v21(*(_QWORD *)(v20[2] + 1816LL), &v23, 0LL, 0LL, *(_DWORD *)(v22 + 28));
      else
        v6 = 0;
      if ( (int)IsDrvRealizeHalftonePaletteSupported() >= 0 )
        DrvRealizeHalftonePaletteWrap(v20, 1LL);
    }
  }
LABEL_9:
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 40));
  v14 = *(struct _ERESOURCE **)(v9 + 40);
  if ( v14 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v14);
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
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemPointer()", *(_QWORD *)(v9 + 48));
  v15 = *(struct _ERESOURCE **)(v9 + 48);
  if ( v15 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v15);
    PsLeavePriorityRegion();
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  if ( (_DWORD)v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  return v6;
}
