/*
 * XREFs of VideoPortCallout @ 0x1C00A6C50
 * Callers:
 *     <none>
 * Callees:
 *     CreateKernelEvent @ 0x1C0008540 (CreateKernelEvent.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     InitCreateSystemThreadsMsg @ 0x1C0099C20 (InitCreateSystemThreadsMsg.c)
 *     CSTRemove @ 0x1C00A6D60 (CSTRemove.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void *__fastcall VideoPortCallout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *result; // rax
  int v6; // edi
  int SystemThreadsMsg; // ebx
  LARGE_INTEGER *v8; // rbx
  struct tagTHREADINFO *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rdi
  __int64 *DomainLockRef; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // rbx
  tagObjLock *v32; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C0h]
  _BYTE v35[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v36; // [rsp+54h] [rbp-ACh]

  result = 0LL;
  v33 = 0LL;
  Object = 0LL;
  if ( !gbVideoInitialized )
  {
    v6 = -1073741823;
LABEL_3:
    SystemThreadsMsg = (int)v32;
    goto LABEL_4;
  }
  v33 = a1;
  result = CreateKernelEvent(SynchronizationEvent, 0);
  Object = result;
  if ( !result )
  {
    v6 = -1073741801;
    goto LABEL_3;
  }
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v20 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v22, v21, v23, v24);
  gptiCurrent = v20;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v32);
  v25 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v25[2];
      v25[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v25);
      RIMLockExclusive((__int64)DomainLockRef);
      v25 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v32);
  if ( CsrApiPort )
  {
    SystemThreadsMsg = InitCreateSystemThreadsMsg((__int64)v35, 4u, (__int64)&v33);
    if ( SystemThreadsMsg )
    {
      v36 |= 3u;
      v6 = LpcRequestPort(CsrApiPort, v35);
    }
    else
    {
      v6 = -1073741801;
    }
  }
  else
  {
    SystemThreadsMsg = (int)v32;
    v6 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v28, v27, v29, v30);
  if ( v6 >= 0 )
  {
    KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0LL);
    v6 = *(_DWORD *)(a1 + 24);
    goto LABEL_9;
  }
  result = Object;
LABEL_4:
  if ( !SystemThreadsMsg )
    goto LABEL_10;
  v8 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( v8 )
    v8[1] = KeQueryPerformanceCounter(0LL);
  v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v11, v10, v12, v13);
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v32);
  v14 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    v31 = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v14[2];
      v14[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)v31);
      HMUnlockObject(*v14);
      RIMLockExclusive((__int64)v31);
      v14 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v32);
  CSTRemove(4LL, &v33);
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
LABEL_9:
  result = Object;
LABEL_10:
  if ( result )
    result = (void *)Win32FreePool((__int64)result);
  *(_DWORD *)(a1 + 24) = v6;
  return result;
}
