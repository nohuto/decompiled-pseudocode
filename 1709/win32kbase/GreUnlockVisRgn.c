/*
 * XREFs of GreUnlockVisRgn @ 0x1C003FD70
 * Callers:
 *     xxxUserProcessCallout @ 0x1C003ADD0 (xxxUserProcessCallout.c)
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 *     NtUserGetDC @ 0x1C0048830 (NtUserGetDC.c)
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     DestroyCacheDC @ 0x1C0057280 (DestroyCacheDC.c)
 *     ReleaseCacheDC @ 0x1C0057AF0 (ReleaseCacheDC.c)
 *     UserGetMonitorDC @ 0x1C005A800 (UserGetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C005C4E0 (xxxEnumDisplayMonitors.c)
 *     DestroyMonitorDCs @ 0x1C0062620 (DestroyMonitorDCs.c)
 *     GreSuspendDirectDraw @ 0x1C0067770 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0067978 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00683A8 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     DestroyCacheDCEntries @ 0x1C007C05C (DestroyCacheDCEntries.c)
 *     DelayedDestroyCacheDC @ 0x1C008B178 (DelayedDestroyCacheDC.c)
 *     InitUserScreen @ 0x1C00926DC (InitUserScreen.c)
 * Callees:
 *     McTemplateK0pz @ 0x1C00FD780 (McTemplateK0pz.c)
 */

__int64 __fastcall GreUnlockVisRgn(int a1, __int64 a2, int a3)
{
  int v3; // ecx
  __int64 result; // rax
  int v5; // ecx

  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = McTemplateK0pz(a1, (unsigned int)&LockRelease, a3, (_DWORD)ghsemDCVisRgn, (__int64)L"ghsemDCVisRgn");
  }
  v3 = (int)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    result = PsLeavePriorityRegion();
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = McTemplateK0pz(v3, (unsigned int)&LockRelease, a3, (_DWORD)ghsemGreLock, (__int64)L"ghsemGreLock");
  }
  v5 = (int)ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    result = PsLeavePriorityRegion();
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = McTemplateK0pz(
                 v5,
                 (unsigned int)&LockRelease,
                 a3,
                 (_DWORD)ghsemDynamicModeChange,
                 (__int64)L"ghsemDynamicModeChange");
  }
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion();
  }
  return result;
}
