/*
 * XREFs of ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C0067BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C003CF60 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     hdevEnumerate @ 0x1C00684D0 (hdevEnumerate.c)
 *     GreUnlockDisplayDevice @ 0x1C0068660 (GreUnlockDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DxgkEngReleaseWin32kAndPDEVLocks(const void *a1, unsigned int a2)
{
  __int64 i; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  PERESOURCE v12; // rcx
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = v6 )
  {
    v5 = hdevEnumerate(i);
    v6 = v5;
    if ( !v5 )
      break;
    v13 = v5;
    v7 = *(_DWORD *)(v5 + 32);
    if ( (v7 & 0x400) == 0 && (v7 & 0x20000) == 0 )
    {
      v8 = *(_QWORD *)(v6 + 2592);
      if ( *(const void **)(v8 + 256) == a1 && *(_DWORD *)(v8 + 272) < a2 )
      {
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v13,
          (struct _SURFOBJ *)((*(_QWORD *)(v6 + 2568) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v6 + 2568) >> 64)),
          0LL,
          2u);
        GreUnlockDisplayDevice(v6);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDwmState);
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
  v12 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  UserSessionSwitchLeaveCrit((__int64)v12, v9, v10, v11);
}
