/*
 * XREFs of GreLockVisRgnSharedOrExclusive @ 0x1C005BBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C00387B0 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00777D0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreLockVisRgnSharedOrExclusive(__int64 a1)
{
  int v2; // edx
  int v3; // r8d
  PERESOURCE v4; // rdx
  PERESOURCE v5; // rdx
  PERESOURCE v6; // rdx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v8) )
    return GreLockVisRgn(a1, v2, v3);
  v4 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    v4 = ghsemDynamicModeChange;
  }
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", v4);
  v5 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
    v5 = ghsemGreLock;
  }
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", v5);
  v6 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn);
    v6 = ghsemDCVisRgn;
  }
  return EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", v6);
}
