/*
 * XREFs of DxgkEngAcquireStableVisRgn @ 0x1C024FF40
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

void __fastcall DxgkEngAcquireStableVisRgn(HDC a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  UserEnterUserCritSecShared();
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  DCOBJ::DCOBJ((DCOBJ *)v2, a1);
  if ( v2[0]
    && ((v3 = *(_QWORD *)(v2[0] + 48LL), (*(_DWORD *)(*(_QWORD *)(v2[0] + 80LL) + 8LL) & 0x4000) != 0)
     || (*(_DWORD *)(v2[0] + 36LL) & 0x8200) == 0x8200)
    && PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v3) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
  }
  else
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v2);
}
