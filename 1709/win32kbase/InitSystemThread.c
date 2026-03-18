/*
 * XREFs of InitSystemThread @ 0x1C007D230
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00DD4C8 (VideoPortCalloutThread.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     InitClientInfo @ 0x1C007D3D8 (InitClientInfo.c)
 *     ClearAppStarting @ 0x1C007D570 (ClearAppStarting.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall InitSystemThread(const void **a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rsi
  __int64 ThreadWin32Thread; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *DomainLockRef; // rbx
  tagObjLock *v24; // [rsp+38h] [rbp+10h] BYREF

  PsGetThreadProcess(KeGetCurrentThread());
  v6 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3, v2, v4, v5);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v10, v9, v11, v12);
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v24);
  v13 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v13[2];
      v13[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v13);
      RIMLockExclusive((__int64)DomainLockRef);
      v13 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v24);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v15 = Win32AllocPoolWithQuota(240LL, 0x69637355u);
  *(_QWORD *)(ThreadWin32Thread + 456) = v15;
  if ( v15 )
  {
    *(_DWORD *)(ThreadWin32Thread + 464) = *(_DWORD *)(ThreadWin32Thread + 464) & 0xFFFFFFF3 | 4;
    if ( (unsigned int)InitClientInfo(ThreadWin32Thread) )
    {
      if ( a1 )
      {
        v20 = *(_QWORD *)(ThreadWin32Thread + 472);
        if ( v20 )
          Win32FreePool(v20);
        v21 = Win32AllocPoolWithQuota(*(unsigned __int16 *)a1 + 18LL, 0x78747355u);
        *(_QWORD *)(ThreadWin32Thread + 472) = v21;
        if ( v21 )
        {
          *(_QWORD *)(v21 + 8) = v21 + 16;
          memmove(*(void **)(*(_QWORD *)(ThreadWin32Thread + 472) + 8LL), a1[1], *(unsigned __int16 *)a1);
          v16 = (unsigned __int64)*(unsigned __int16 *)a1 >> 1;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 8LL) + 2 * v16) = 0;
          *(_WORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 2LL) = *(_WORD *)a1 + 2;
          **(_WORD **)(ThreadWin32Thread + 472) = *(_WORD *)a1;
        }
      }
      v17 = *(_QWORD *)(ThreadWin32Thread + 400);
      if ( v17 )
      {
        v16 = *(unsigned int *)(v17 + 12);
        if ( (v16 & 0x40) != 0 )
          ClearAppStarting();
      }
    }
    else
    {
      v6 = -1073741823;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v6;
}
