/*
 * XREFs of ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C0151278
 * Callers:
 *     NtCompositionInputThread @ 0x1C0151810 (NtCompositionInputThread.c)
 * Callees:
 *     rimConvertUserToKernelEventHandle @ 0x1C000A104 (rimConvertUserToKernelEventHandle.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C01511E8 (-CleanupDwmInputThread@CInputManager@@IEAAXXZ.c)
 */

__int64 __fastcall CInputManager::DwmInputThread(
        CInputManager *this,
        void *a2,
        void *a3,
        int (*a4)(struct tagDITCALLBACKSTRUCT *),
        int a5)
{
  CInputManager *v5; // rsi
  int v8; // edi
  struct _KTHREAD *v9; // rax
  HANDLE v10; // rax
  HANDLE v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // r14
  __int64 *DomainLockRef; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  HANDLE v29; // [rsp+20h] [rbp-10h] BYREF
  tagObjLock *v30; // [rsp+28h] [rbp-8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+20h] BYREF

  v5 = g_pInputManager;
  Handle = 0LL;
  v29 = 0LL;
  v8 = rimConvertUserToKernelEventHandle(a2, &Handle);
  if ( v8 >= 0 )
  {
    v8 = rimConvertUserToKernelEventHandle(a3, &v29);
    if ( v8 >= 0 )
    {
      v9 = (struct _KTHREAD *)_InterlockedCompareExchange64(
                                (volatile signed __int64 *)v5 + 1,
                                (signed __int64)KeGetCurrentThread(),
                                0LL);
      if ( !v9 || v9 == KeGetCurrentThread() )
      {
        v10 = Handle;
        Handle = 0LL;
        *((_QWORD *)v5 + 2) = v10;
        v11 = v29;
        v29 = 0LL;
        *((_QWORD *)v5 + 3) = v11;
        *((_QWORD *)v5 + 4) = *(_QWORD *)v5;
        *((_DWORD *)v5 + 17) = a5;
        *((_QWORD *)v5 + 5) = a4;
        v8 = UserActivateDwmInputProcessing((char *)v5 + 16);
        if ( v8 >= 0 )
          v8 = UserProcessDwmInput((char *)v5 + 16);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v13, v12, v14, v15);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v17 = EnterCritAvoidingDitHitTestHazard(0, 1);
        EtwTraceAcquiredExclusiveUserCrit(v19, v18, v20, v21);
        gptiCurrent = v17;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v30);
        v22 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          DomainLockRef = GetDomainLockRef(8);
          do
          {
            gpducstulHead = v22[2];
            v22[2] = 0LL;
            tagObjLock::UnLock((tagObjLock *)DomainLockRef);
            HMUnlockObject(*v22);
            RIMLockExclusive((__int64)DomainLockRef);
            v22 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
        }
        tagObjLock::UnLock(v30);
        CInputManager::CleanupDwmInputThread(v5);
        UserSessionSwitchLeaveCrit(v25, v24, v26, v27);
      }
      else
      {
        v8 = -2147483631;
      }
      if ( Handle )
        ZwClose(Handle);
      if ( v29 )
        ZwClose(v29);
    }
  }
  return (unsigned int)v8;
}
