/*
 * XREFs of zzzEndDeferWinEventNotify @ 0x1C006F614
 * Callers:
 *     xxxCapture @ 0x1C0046908 (xxxCapture.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00471BC (zzzEnableDwmPointerSupport.c)
 *     NtUserSetImeOwnerWindow @ 0x1C0056750 (NtUserSetImeOwnerWindow.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C006C6B0 (xxxScrollWindowEx.c)
 *     xxxCreateCaret @ 0x1C0084868 (xxxCreateCaret.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     zzzReattachThreads @ 0x1C00CA9AC (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00CADA4 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00CB554 (zzzLockWindowUpdate2.c)
 *     xxxCreateDesktopEx @ 0x1C00D9EA0 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C00DB1AC (xxxCreateWindowStation.c)
 *     xxxDwmStopRedirection @ 0x1C00E3780 (xxxDwmStopRedirection.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E662C (zzzUpdateWindowsAfterModeChange.c)
 *     EditionEndDeferWinEventNotify @ 0x1C0112280 (EditionEndDeferWinEventNotify.c)
 *     zzzCancelJournalling @ 0x1C011A924 (zzzCancelJournalling.c)
 *     zzzShowCursor @ 0x1C011E824 (zzzShowCursor.c)
 *     xxxAddShadow @ 0x1C012AC08 (xxxAddShadow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C012B000 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxHardErrorControl @ 0x1C020DE0C (xxxHardErrorControl.c)
 * Callees:
 *     xxxProcessNotifyWinEvent @ 0x1C006DA90 (xxxProcessNotifyWinEvent.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

// write access to const memory has been detected, the output may be wrong!
void zzzEndDeferWinEventNotify()
{
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rbx
  unsigned int v2; // eax
  tagObjLock *v3; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rsi
  unsigned int v11; // eax
  tagObjLock *v12; // rbp
  tagObjLock *v13; // r14
  unsigned int v14; // eax
  unsigned int v15; // eax
  tagObjLock *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int CurrentThreadId; // r15d
  struct tagNOTIFY **i; // rcx
  int v21; // edx
  __int64 v22; // rdx
  unsigned int v23; // eax

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
  tagObjLock::LockExclusive(DomainLockRef);
  if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
  {
    v2 = DLT_WINEVENT::getDLT();
    v3 = (tagObjLock *)GetDomainLockRef(v2);
    tagObjLock::UnLock(v3);
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v6, v5, v7, v8) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v10 = *ThreadWin32Thread;
        if ( *ThreadWin32Thread )
        {
          v11 = DLT_THREADINFO::getDLT();
          v12 = (tagObjLock *)GetDomainLockRef(v11);
          v13 = (tagObjLock *)(v10 + 368);
          v14 = DLT_THREADINFO::getDLT();
          ptiSetDomainLockBit(v14);
          tagObjLock::LockShared(v12);
          tagObjLock::LockExclusive((tagObjLock *)(v10 + 368));
          v15 = DLT_WINEVENT::getDLT();
          v16 = (tagObjLock *)GetDomainLockRef(v15);
          tagObjLock::LockExclusive(v16);
          CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
LABEL_7:
          for ( i = gpPendingNotifies; i; i = (struct tagNOTIFY **)*i )
          {
            v21 = *((_DWORD *)i + 12);
            if ( (v21 & 2) != 0 && *((_DWORD *)i + 10) == CurrentThreadId )
            {
              v22 = v21 & 0xFFFFFFFD;
              *((_DWORD *)i + 12) = v22;
              xxxProcessNotifyWinEvent((__int64)i, v22, v17, v18);
              goto LABEL_7;
            }
          }
          tagObjLock::UnLock(v16);
          v23 = DLT_THREADINFO::getDLT();
          ptiUnSetDomainLockBit(v23);
          tagObjLock::UnLock(v13);
          tagObjLock::UnLock(v12);
        }
      }
    }
    tagObjLock::LockExclusive(v3);
  }
  tagObjLock::UnLock(DomainLockRef);
}
