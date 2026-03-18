/*
 * XREFs of GreLockVisRgn @ 0x1C0037BE0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0026E90 (xxxEnumDisplayMonitors.c)
 *     UserGetMonitorDC @ 0x1C0028978 (UserGetMonitorDC.c)
 *     NtUserGetDC @ 0x1C00373A0 (NtUserGetDC.c)
 *     DelayedDestroyCacheDC @ 0x1C00378A0 (DelayedDestroyCacheDC.c)
 *     DestroyCacheDC @ 0x1C0044760 (DestroyCacheDC.c)
 *     xxxUserProcessCallout @ 0x1C0050600 (xxxUserProcessCallout.c)
 *     GreSuspendDirectDraw @ 0x1C005AC10 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C005AE14 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C005BBF0 (GreLockVisRgnSharedOrExclusive.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C005BE80 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     InitUserScreen @ 0x1C00631F8 (InitUserScreen.c)
 *     DestroyMonitorDCs @ 0x1C0074180 (DestroyMonitorDCs.c)
 *     DestroyCacheDCEntries @ 0x1C007B04C (DestroyCacheDCEntries.c)
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 * Callees:
 *     Template_pqz @ 0x1C00FD124 (Template_pqz.c)
 *     Template_pz @ 0x1C00FD1E8 (Template_pz.c)
 */

__int64 __fastcall GreLockVisRgn(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  struct _ERESOURCE *v4; // rbx
  struct _ERESOURCE *v5; // rbx

  if ( ghsemDynamicModeChange )
    result = ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = Template_pz(a1, &LockAcquireShared);
  }
  v4 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(a1);
    result = (__int64)ExEnterCriticalRegionAndAcquireResourceExclusive(v4);
    LODWORD(v4) = (_DWORD)ghsemGreLock;
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = Template_pqz(a1, a2, a3, (_DWORD)v4, 2, (__int64)L"ghsemGreLock");
  }
  v5 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(a1);
    result = (__int64)ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
    LODWORD(v5) = (_DWORD)ghsemDCVisRgn;
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return Template_pqz(a1, a2, a3, (_DWORD)v5, 3, (__int64)L"ghsemDCVisRgn");
  }
  return result;
}
