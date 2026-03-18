/*
 * XREFs of xxxUserProcessCallout @ 0x1C003ADD0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     xxxInitProcessInfo @ 0x1C0024008 (xxxInitProcessInfo.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     GreLockVisRgn @ 0x1C003E280 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C003FD70 (GreUnlockVisRgn.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     DestroyCacheDC @ 0x1C0057280 (DestroyCacheDC.c)
 *     CloseMITPortAndEndpoints @ 0x1C007B2E0 (CloseMITPortAndEndpoints.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C00808DC (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 *     DestroyProcessInfo @ 0x1C009CD88 (DestroyProcessInfo.c)
 */

__int64 __fastcall xxxUserProcessCallout(struct _W32PROCESS *a1, PEPROCESS *a2, __int64 a3, __int64 a4)
{
  int v6; // r12d
  int inited; // edi
  PACCESS_TOKEN v8; // r14
  int v9; // r12d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  __int64 *v12; // r13
  __int64 v13; // rcx
  __int64 ProcessJob; // rax
  __int64 v15; // rbx
  struct _ERESOURCE *JobLock; // rax
  struct _ERESOURCE *v17; // rax
  LARGE_INTEGER *v18; // rbx
  struct tagTHREADINFO *v19; // rbx
  __int64 *v20; // rdi
  int v21; // r14d
  __int64 v22; // rcx
  int v24; // ecx
  char *i; // rax
  _QWORD *v26; // rdi
  _QWORD *j; // rbx
  tagObjLock *DomainLockRef; // rbx
  tagObjLock *v29; // rbx
  tagObjLock *v30; // [rsp+30h] [rbp-30h] BYREF
  tagObjLock *v31; // [rsp+38h] [rbp-28h] BYREF
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  int v33; // [rsp+48h] [rbp-18h]
  struct _W32PROCESS *v34; // [rsp+50h] [rbp-10h]
  unsigned int v35; // [rsp+A8h] [rbp+48h] BYREF
  int v36; // [rsp+B0h] [rbp+50h] BYREF
  int v37; // [rsp+B8h] [rbp+58h] BYREF

  if ( a2 )
  {
    v6 = *((_DWORD *)a1 + 3);
    inited = 1073741851;
    v36 = 0;
    v8 = 0LL;
    v35 = 0;
    v9 = v6 & 0x8000;
    if ( !v9 )
    {
      v8 = PsReferencePrimaryToken(*a2);
      if ( v8 )
        inited = UserProcessImmersiveType(
                   (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)a2,
                   v8,
                   (enum _PROCESS_IMMERSIVE_TYPE *)&v36,
                   &v35,
                   &v37);
      else
        inited = -1073741700;
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v11 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v30);
    v12 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      DomainLockRef = (tagObjLock *)GetDomainLockRef(8LL);
      do
      {
        gpducstulHead = v12[2];
        v12[2] = 0LL;
        tagObjLock::UnLock(DomainLockRef);
        HMUnlockObject(*v12);
        RIMLockExclusive((__int64)DomainLockRef);
        v12 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v30);
    if ( !v9 && inited >= 0 )
      inited = xxxInitProcessInfo(a1, v8, v36, v35, v37);
    if ( v8 )
      PsDereferencePrimaryToken(v8);
    if ( inited < 0 )
      DestroyProcessInfo(a1);
    UserSessionSwitchLeaveCrit(v13);
    if ( !inited )
    {
      ProcessJob = PsGetProcessJob(*(_QWORD *)a1);
      v15 = ProcessJob;
      if ( ProcessJob )
      {
        if ( (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob) )
        {
          JobLock = (struct _ERESOURCE *)PsGetJobLock(v15);
          ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
          v32 = v15;
          v33 = 1;
          v34 = a1;
          UserJobCallout(&v32);
          v17 = (struct _ERESOURCE *)PsGetJobLock(v15);
          ExReleaseResourceAndLeaveCriticalRegion(v17);
        }
      }
    }
  }
  else
  {
    v18 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, 0LL, a3, a4);
    if ( v18 )
      v18[1] = KeQueryPerformanceCounter(0LL);
    v19 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v19;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v31);
    v20 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      v29 = (tagObjLock *)GetDomainLockRef(8LL);
      do
      {
        gpducstulHead = v20[2];
        v20[2] = 0LL;
        tagObjLock::UnLock(v29);
        HMUnlockObject(*v20);
        RIMLockExclusive((__int64)v29);
        v20 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v31);
    if ( !gpepCSRSS || (v21 = 1, *(PVOID *)a1 != gpepCSRSS) )
      v21 = 0;
    if ( *(_QWORD *)a1 && ((__int64 (*)(void))PsGetProcessJob)() && (int)IsRemoveProcessFromJobSupported() >= 0 )
      RemoveProcessFromJob(a1);
    if ( (unsigned int)DestroyProcessInfo(a1) )
    {
      v24 = giheLast;
      for ( i = (char *)qword_1C018E9B8 + 32 * (unsigned int)giheLast; i > qword_1C018E9B8 && !i[24]; i -= 32 )
        giheLast = --v24;
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32));
      v26 = (_QWORD *)(gpDispInfo + 16);
      for ( j = *(_QWORD **)(gpDispInfo + 16); j; j = (_QWORD *)*j )
      {
        if ( (j[8] & 0x400000) != 0 )
          DestroyCacheDC(v26, j[1]);
        if ( j != (_QWORD *)*v26 )
          j = v26;
        v26 = j;
      }
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32));
      if ( (int)IsGreHidePointerSupported() >= 0 )
        GreHidePointer(0LL);
    }
    if ( v21 )
      CloseMITPortAndEndpoints(1LL);
    inited = 0;
    UserSessionSwitchLeaveCrit(v22);
  }
  return (unsigned int)inited;
}
