/*
 * XREFs of GreRemoveDisplayDriverRealizations @ 0x1C0043D84
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C0044214 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreRemoveDisplayDriverRealizations(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    GreAcquireSemaphore(ghsemEnableEUDC);
    GreAcquireSemaphore(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
    GreAcquireSemaphore(ghsemDCVisRgn);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
    GreAcquireSemaphore(*(_QWORD *)(a1 + 48));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", *(_QWORD *)(a1 + 48), 4LL);
    GreAcquireSemaphore(ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
    GreAcquireSemaphore(ghsemHT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
    GreAcquireSemaphore(*(_QWORD *)(a1 + 40));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(a1 + 40), 11LL);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    GreAcquireSemaphore(ghsemPalette);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 13LL);
    GreAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    GreAcquireSemaphore(ghsemRFONTList);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 15LL);
    GreAcquireHmgrSemaphore();
    bDynamicProcessAllDriverRealizations(a1, 0LL, 1LL);
    GreReleaseHmgrSemaphore();
    EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList", ghsemRFONTList);
    GreReleaseSemaphoreInternal(ghsemRFONTList);
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
    EtwTraceGreLockReleaseSemaphore(L"ghsemPalette", ghsemPalette);
    GreReleaseSemaphoreInternal(ghsemPalette);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *(_QWORD *)(a1 + 40));
    GreReleaseSemaphoreInternal(*(_QWORD *)(a1 + 40));
    EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
    GreReleaseSemaphoreInternal(ghsemHT);
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
    EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", *(_QWORD *)(a1 + 48));
    GreReleaseSemaphoreInternal(*(_QWORD *)(a1 + 48));
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    EtwTraceGreLockReleaseSemaphore(L"ghsemEnableEUDC", ghsemEnableEUDC);
    return GreReleaseSemaphoreInternal(ghsemEnableEUDC);
  }
  return result;
}
