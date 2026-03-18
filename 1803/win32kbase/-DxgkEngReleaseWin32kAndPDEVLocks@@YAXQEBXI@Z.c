/*
 * XREFs of ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C00C9190
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0031ED0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     hdevEnumerate @ 0x1C004E820 (hdevEnumerate.c)
 *     GreUnlockDisplayDevice @ 0x1C004EA00 (GreUnlockDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DxgkEngReleaseWin32kAndPDEVLocks(const void *a1, unsigned int a2, int a3)
{
  struct PDEV *i; // rcx
  int v6; // eax
  __int64 v7; // rax
  struct PDEV *v8; // rax
  __int64 v9; // rbx
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rcx
  PERESOURCE v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = (struct PDEV *)v9 )
  {
    v8 = hdevEnumerate(i, a2, a3);
    v9 = (__int64)v8;
    if ( !v8 )
      break;
    v6 = *((_DWORD *)v8 + 10);
    v18 = v9;
    if ( (v6 & 0x400) == 0 && (v6 & 0x20000) == 0 )
    {
      v7 = *(_QWORD *)(v9 + 2568);
      if ( *(const void **)(v7 + 240) == a1 && *(_DWORD *)(v7 + 256) < a2 )
      {
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v18,
          (struct _SURFOBJ *)((*(_QWORD *)(v9 + 2544) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v9 + 2544) >> 64)),
          0LL,
          2u);
        GreUnlockDisplayDevice(v9);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, a3);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    PsLeavePriorityRegion(v11);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, v10);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v13);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (int)ghsemGreLock, v12);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    PsLeavePriorityRegion(v15);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v14);
  v16 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v17);
  }
  UserSessionSwitchLeaveCrit((__int64)v16);
}
