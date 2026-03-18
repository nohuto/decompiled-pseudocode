/*
 * XREFs of DrvEnableMDEV @ 0x1C005B3E4
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     SafeEnableMDEV @ 0x1C009BE80 (SafeEnableMDEV.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0038824 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     DrvDxgkDisplayOnOff @ 0x1C0091950 (DrvDxgkDisplayOnOff.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C009BB08 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvEnableMDEV(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r15
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rbp
  HDEV v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // edx
  struct _ERESOURCE *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct _ERESOURCE *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  void (__fastcall *v22)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  unsigned int v23; // ecx
  __int64 *v24; // rsi
  _QWORD *v25; // rdi
  void (__fastcall *v26)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r10
  __int64 v27; // rax
  __int64 v28; // [rsp+30h] [rbp-38h] BYREF
  __int64 i; // [rsp+70h] [rbp+8h] BYREF
  __int64 v30; // [rsp+88h] [rbp+20h] BYREF

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
  v30 = v12;
  if ( (*(_DWORD *)(v12 + 24) & 0x800) != 0 )
  {
    v22 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v9 + 2880);
    if ( v22 )
      v22(*(_QWORD *)(v9 + 1816), &v30, 0LL, 0LL, *(_DWORD *)(v12 + 28));
    else
      v6 = 0;
  }
  else
  {
    v13 = *((_DWORD *)a1 + 5);
    if ( v13 > 1 )
    {
      v23 = 0;
      v24 = a1 + 4;
      while ( 1 )
      {
        v25 = (_QWORD *)*v24;
        if ( (*(_DWORD *)(*v24 + 2188) & 0x100) != 0 )
          break;
        ++v23;
        v24 += 5;
        if ( v23 >= v13 )
          goto LABEL_9;
      }
      v26 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v25[223];
      v27 = v25[228];
      v28 = v27;
      if ( v26 )
        v26(*(_QWORD *)(v25[2] + 1816LL), &v28, 0LL, 0LL, *(_DWORD *)(v27 + 28));
      else
        v6 = 0;
      if ( (int)IsDrvRealizeHalftonePaletteSupported() >= 0 )
        DrvRealizeHalftonePaletteWrap(v25, 1LL);
    }
  }
LABEL_9:
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemDevLock()", *(_QWORD *)(v9 + 40));
  v14 = *(struct _ERESOURCE **)(v9 + 40);
  if ( v14 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v14);
    PsLeavePriorityRegion(v15);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion(v16);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v17);
  }
  EtwTraceGreLockReleaseSemaphore(L"poParent.hsemPointer()", *(_QWORD *)(v9 + 48));
  v18 = *(struct _ERESOURCE **)(v9 + 48);
  if ( v18 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v18);
    PsLeavePriorityRegion(v19);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v20);
  }
  if ( (_DWORD)v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  return v6;
}
