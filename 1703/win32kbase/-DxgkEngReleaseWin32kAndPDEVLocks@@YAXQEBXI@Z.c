/*
 * XREFs of ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C005B880
 * Callers:
 *     <none>
 * Callees:
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C00388C0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     hdevEnumerate @ 0x1C005BFB0 (hdevEnumerate.c)
 *     GreUnlockDisplayDevice @ 0x1C005C230 (GreUnlockDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DxgkEngReleaseWin32kAndPDEVLocks(const void *a1, unsigned int a2)
{
  PDEV *i; // rcx
  __int64 v5; // rax
  PDEV *v6; // rbx
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = v6 )
  {
    v5 = hdevEnumerate(i);
    v6 = (PDEV *)v5;
    if ( !v5 )
      break;
    v7 = (*(_DWORD *)(v5 + 32) & 0x20400) == 0;
    v13 = v5;
    if ( v7 )
    {
      v8 = *(_QWORD *)(v5 + 2592);
      if ( *(const void **)(v8 + 256) == a1 && *(_DWORD *)(v8 + 272) < a2 )
      {
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v13,
          (struct _SURFOBJ *)((*((_QWORD *)v6 + 321) + 24LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)v6
                                                                                              + 321) >> 64)),
          0LL,
          2u);
        GreUnlockDisplayDevice(v6);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    PsLeavePriorityRegion(v9);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v10);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    PsLeavePriorityRegion(v11);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v12);
  }
  UserSessionSwitchLeaveCrit();
}
