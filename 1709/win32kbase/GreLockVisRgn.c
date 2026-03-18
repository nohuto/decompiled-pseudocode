/*
 * XREFs of GreLockVisRgn @ 0x1C003E280
 * Callers:
 *     xxxUserProcessCallout @ 0x1C003ADD0 (xxxUserProcessCallout.c)
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 *     NtUserGetDC @ 0x1C0048830 (NtUserGetDC.c)
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     DestroyCacheDC @ 0x1C0057280 (DestroyCacheDC.c)
 *     UserGetMonitorDC @ 0x1C005A800 (UserGetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C005C4E0 (xxxEnumDisplayMonitors.c)
 *     DestroyMonitorDCs @ 0x1C0062620 (DestroyMonitorDCs.c)
 *     GreSuspendDirectDraw @ 0x1C0067770 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0067978 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00683A8 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     DestroyCacheDCEntries @ 0x1C007C05C (DestroyCacheDCEntries.c)
 *     DelayedDestroyCacheDC @ 0x1C008B178 (DelayedDestroyCacheDC.c)
 *     InitUserScreen @ 0x1C00926DC (InitUserScreen.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C00FC1C0 (GreLockVisRgnSharedOrExclusive.c)
 * Callees:
 *     McTemplateK0pqz @ 0x1C00FD6C8 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C00FD780 (McTemplateK0pz.c)
 */

__int64 __fastcall GreLockVisRgn(__int64 a1, int a2, int a3)
{
  int v3; // ecx
  __int64 result; // rax
  struct _ERESOURCE *v5; // rbx
  struct _ERESOURCE *v6; // rbx

  v3 = (int)ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    result = ExEnterPriorityRegionAndAcquireResourceShared();
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = McTemplateK0pz(
                 v3,
                 (unsigned int)&LockAcquireShared,
                 a3,
                 (_DWORD)ghsemDynamicModeChange,
                 (__int64)L"ghsemDynamicModeChange");
  }
  v5 = (struct _ERESOURCE *)ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion();
    result = (__int64)ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = McTemplateK0pqz(v3, a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  }
  v6 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion();
    result = (__int64)ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pqz(v3, a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  }
  return result;
}
