/*
 * XREFs of xxxUserProcessCallout @ 0x1C0050600
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     GreUnlockVisRgn @ 0x1C0037960 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0037BE0 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x1C0044760 (DestroyCacheDC.c)
 *     xxxInitProcessInfo @ 0x1C005038C (xxxInitProcessInfo.c)
 *     DestroyProcessInfo @ 0x1C00509D8 (DestroyProcessInfo.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C0051614 (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 *     CloseMITPortAndEndpoints @ 0x1C0066CB8 (CloseMITPortAndEndpoints.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall xxxUserProcessCallout(struct tagPROCESSINFO *a1, PEPROCESS *a2, __int64 a3)
{
  int v5; // r15d
  int inited; // edi
  PACCESS_TOKEN v7; // r14
  int v8; // r15d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r13
  int v14; // ecx
  int v15; // r8d
  LARGE_INTEGER v16; // r12
  __int64 ProcessJob; // rax
  __int64 v18; // r14
  struct _ERESOURCE *JobLock; // rax
  struct _ERESOURCE *v20; // rax
  LARGE_INTEGER *v21; // rbx
  struct tagTHREADINFO *v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r14
  int v27; // ecx
  LARGE_INTEGER v28; // rdi
  int v29; // r8d
  BOOL v30; // r14d
  int v31; // r8d
  int v33; // ecx
  char *i; // rax
  int v35; // r8d
  CCursorClip *v36; // rcx
  __int64 *v37; // rdi
  __int64 v38; // rsi
  struct tagTHREADINFO *v39; // [rsp+30h] [rbp-20h]
  __int64 v40; // [rsp+38h] [rbp-18h] BYREF
  int v41; // [rsp+40h] [rbp-10h]
  struct tagPROCESSINFO *v42; // [rsp+48h] [rbp-8h]
  unsigned int v43; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v44; // [rsp+A0h] [rbp+50h] BYREF
  int v45; // [rsp+A8h] [rbp+58h] BYREF

  if ( a2 )
  {
    v5 = *((_DWORD *)a1 + 3);
    inited = 1073741851;
    v44 = 0;
    v7 = 0LL;
    v43 = 0;
    v8 = v5 & 0x8000;
    if ( !v8 )
    {
      v7 = PsReferencePrimaryToken(*a2);
      if ( v7 )
        inited = UserProcessImmersiveType(
                   (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)a2,
                   v7,
                   (enum _PROCESS_IMMERSIVE_TYPE *)&v44,
                   &v43,
                   &v45);
      else
        inited = -1073741700;
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v39 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v13 = PsGetCurrentThreadWin32Thread(v11, v10, v12);
    if ( v13 )
    {
      v16 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v14) = byte_1C0186D98 - 1;
        Template_xqx(
          v14,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v15,
          v16.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
      if ( v16.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v15,
          0,
          1000 * v16.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v13 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v39;
    gbValidateHandleForIL = 1;
    if ( !v8 && inited >= 0 )
      inited = xxxInitProcessInfo(a1, v7, v44, v43, v45);
    if ( v7 )
      PsDereferencePrimaryToken(v7);
    if ( inited < 0 )
      DestroyProcessInfo(a1);
    UserSessionSwitchLeaveCrit();
    if ( !inited )
    {
      ProcessJob = PsGetProcessJob(*(_QWORD *)a1);
      v18 = ProcessJob;
      if ( ProcessJob )
      {
        if ( (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob) )
        {
          JobLock = (struct _ERESOURCE *)PsGetJobLock(v18);
          ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
          v40 = v18;
          v41 = 1;
          v42 = a1;
          UserJobCallout(&v40);
          v20 = (struct _ERESOURCE *)PsGetJobLock(v18);
          ExReleaseResourceAndLeaveCriticalRegion(v20);
        }
      }
    }
  }
  else
  {
    v21 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, 0LL, a3);
    if ( v21 )
      v21[1] = KeQueryPerformanceCounter(0LL);
    v22 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v26 = PsGetCurrentThreadWin32Thread(v24, v23, v25);
    if ( v26 )
    {
      v28 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v26 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v27) = byte_1C0186D98 - 1;
        Template_xqx(
          v27,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v29,
          v28.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
      if ( v28.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v29,
          0,
          1000 * v28.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v26 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v22;
    gbValidateHandleForIL = 1;
    v30 = gpepCSRSS && *(PVOID *)a1 == gpepCSRSS;
    if ( *(_QWORD *)a1 && PsGetProcessJob(*(_QWORD *)a1) && (int)IsRemoveProcessFromJobSupported() >= 0 )
      RemoveProcessFromJob(a1);
    if ( (unsigned int)DestroyProcessInfo(a1) )
    {
      v33 = giheLast;
      for ( i = (char *)qword_1C0189E38 + 32 * (unsigned int)giheLast; i > qword_1C0189E38 && !i[24]; i -= 32 )
        giheLast = --v33;
      GreLockVisRgn(*((_QWORD *)gpDispInfo + 4), (int)qword_1C0189E38, v31);
      v36 = gpDispInfo;
      v37 = (__int64 *)((char *)gpDispInfo + 16);
      v38 = *((_QWORD *)gpDispInfo + 2);
      if ( v38 )
      {
        do
        {
          if ( (*(_DWORD *)(v38 + 64) & 0x400000) != 0 )
            DestroyCacheDC(v37, *(_QWORD *)(v38 + 8), v35);
          if ( v38 == *v37 )
            v37 = (__int64 *)v38;
          v38 = *v37;
        }
        while ( *v37 );
        v36 = gpDispInfo;
      }
      GreUnlockVisRgn(*((_QWORD *)v36 + 4));
      if ( (int)IsGreHidePointerSupported() >= 0 )
        GreHidePointer(0LL);
    }
    if ( v30 )
    {
      CloseMITPortAndEndpoints(1LL);
      if ( (int)IsvCleanupRimClientSupported() >= 0 )
        vCleanupRimClient(0xFFFFFFFFLL);
    }
    inited = 0;
    UserSessionSwitchLeaveCrit();
  }
  return (unsigned int)inited;
}
