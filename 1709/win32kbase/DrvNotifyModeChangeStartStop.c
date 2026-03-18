/*
 * XREFs of DrvNotifyModeChangeStartStop @ 0x1C00680E8
 * Callers:
 *     ApplyPathsModality @ 0x1C0067D1C (ApplyPathsModality.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003CD58 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C003CF60 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     hdevEnumerate @ 0x1C00684D0 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C0068620 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C0068660 (GreUnlockDisplayDevice.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0073530 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall DrvNotifyModeChangeStartStop(char a1)
{
  __int64 i; // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  int v6; // eax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  EngAcquireSemaphore(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
  for ( i = 0LL; ; i = v4 )
  {
    v3 = hdevEnumerate(i);
    v4 = v3;
    if ( !v3 )
      break;
    v7 = v3;
    v6 = *(_DWORD *)(v3 + 32);
    if ( (v6 & 1) != 0 && (v6 & 0x400) == 0 && (v6 & 0x20000) == 0 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v7) )
    {
      GreLockDisplayDevice(v4);
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v7,
        (struct _SURFOBJ *)((*(_QWORD *)(v4 + 2568) + 24LL) & -(__int64)(*(_QWORD *)(v4 + 2568) != 0LL)),
        0LL,
        a1 != 0 ? 30 : 18);
      GreUnlockDisplayDevice(v4);
    }
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
  result = EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion();
  }
  return result;
}
