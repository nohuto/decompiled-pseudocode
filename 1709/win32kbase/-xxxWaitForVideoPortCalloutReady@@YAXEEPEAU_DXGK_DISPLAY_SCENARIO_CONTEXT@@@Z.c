/*
 * XREFs of ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DD0D0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00DD4C8 (VideoPortCalloutThread.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 *     McTemplateK0tt @ 0x1C00E49FC (McTemplateK0tt.c)
 */

void __fastcall xxxWaitForVideoPortCalloutReady(
        __int64 a1,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  char v5; // bp
  char v6; // si
  ULONG v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rdi
  __int64 *DomainLockRef; // rbx
  tagObjLock *v20; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object[3]; // [rsp+48h] [rbp-40h] BYREF

  v5 = a2;
  v6 = a1;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0tt(a1, a2, a3, (unsigned __int8)a1, (unsigned __int8)a2);
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = 0;
      if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
      {
        v7 = 1;
        Object[0] = gpevtVideoportCallout;
      }
      if ( gfMonitorPowerInProgress )
      {
        a1 = v7++;
        Object[a1] = gpevtMonitorPowerWaiter;
      }
      if ( v6 && (int)IsxxxSetCsrssThreadDesktopSupported() >= 0 && !grpdeskRitInput )
      {
        a1 = v7++;
        Object[a1] = (PVOID)gpevtRitReadyForCallOut;
      }
      if ( !v7 )
        break;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, a2, (__int64)a3, a4);
      KeWaitForMultipleObjects(v7, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
      v6 = 0;
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v8, v10, v11);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v13 = EnterCritAvoidingDitHitTestHazard(0, 1);
      EtwTraceAcquiredExclusiveUserCrit(v15, v14, v16, v17);
      gptiCurrent = v13;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v20);
      v18 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        DomainLockRef = GetDomainLockRef(8);
        do
        {
          gpducstulHead = v18[2];
          v18[2] = 0LL;
          tagObjLock::UnLock((tagObjLock *)DomainLockRef);
          HMUnlockObject(*v18);
          RIMLockExclusive((__int64)DomainLockRef);
          v18 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
      }
      tagObjLock::UnLock(v20);
    }
    if ( !v5 || gbGDIOn || (int)IsPowerOnGdiSupported() < 0 )
      break;
    PowerOnGdi(a3, 1LL, 3LL);
  }
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0(a1, &StopWaitForVideoPortCalloutReady, &W32kControlGuid);
}
