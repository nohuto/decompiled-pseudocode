/*
 * XREFs of NtMITUninitMinuserThread @ 0x1C00E7060
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     ProtectHandle @ 0x1C0074204 (ProtectHandle.c)
 */

__int64 __fastcall NtMITUninitMinuserThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rdi
  __int64 *DomainLockRef; // rbx
  int v13; // edx
  __int64 ThreadWin32Thread; // rbx
  int v15; // eax
  void *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  tagObjLock *v22; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v8, v7, v9, v10);
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v22);
  v11 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v11[2];
      v11[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v11);
      RIMLockExclusive((__int64)DomainLockRef);
      v11 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v22);
  RIMLockExclusive((__int64)&gInputLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v15 = *(_DWORD *)(ThreadWin32Thread + 1184);
  if ( (v15 & 0x1000000) != 0 )
  {
    v16 = *(void **)(ThreadWin32Thread + 696);
    *(_DWORD *)(ThreadWin32Thread + 1184) = v15 & 0xFEFFFFFF;
    ProtectHandle(v16, v13, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
    ObfDereferenceObject(*(PVOID *)(ThreadWin32Thread + 704));
    *(_QWORD *)(ThreadWin32Thread + 704) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 696) = 0LL;
    v4 = 1;
  }
  qword_1C01936E0 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  return v4;
}
