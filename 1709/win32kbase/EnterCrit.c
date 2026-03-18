/*
 * XREFs of EnterCrit @ 0x1C003BF20
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C0073750 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 */

struct tagTHREADINFO *__fastcall EnterCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  int v5; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rdi
  struct tagTHREADINFO **v8; // rax
  PVOID CurrentProcess; // rax
  __int64 *v10; // rsi
  tagObjLock *DomainLockRef; // rbx

  v4 = a2;
  v5 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v8 )
      v7 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( v5 || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v4 && v7 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v7 == gptiRit )
        break;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemRITBlockedOnDITWaiters, UserRequest, 0, 0, 0LL);
    }
    else
    {
      if ( gbDITInHitTest != 1 || v7 == gptiRit )
        break;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&gDomainTlLock, 0LL);
  v10 = (__int64 *)gpducstulHead;
  qword_1C0191110 = (__int64)KeGetCurrentThread();
  if ( gpducstulHead )
  {
    DomainLockRef = (tagObjLock *)GetDomainLockRef(8LL);
    do
    {
      gpducstulHead = v10[2];
      v10[2] = 0LL;
      tagObjLock::UnLock(DomainLockRef);
      HMUnlockObject(*v10);
      RIMLockExclusive((__int64)DomainLockRef);
      v10 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  if ( (struct _KTHREAD *)qword_1C0191110 == KeGetCurrentThread() )
  {
    qword_1C0191110 = 0LL;
    ExReleasePushLockExclusiveEx(&gDomainTlLock, 0LL);
  }
  else
  {
    _InterlockedDecrement(&dword_1C0191118);
    ExReleasePushLockSharedEx(&gDomainTlLock, 0LL);
  }
  KeLeaveCriticalRegion();
  return v7;
}
