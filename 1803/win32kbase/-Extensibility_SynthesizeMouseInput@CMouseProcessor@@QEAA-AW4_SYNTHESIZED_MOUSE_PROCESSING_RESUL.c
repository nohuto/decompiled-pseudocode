/*
 * XREFs of ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0134314
 * Callers:
 *     SynthesizeMouseInputData @ 0x1C012EA00 (SynthesizeMouseInputData.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0039698 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C003A424 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C003A5C4 (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     UpconvertTime @ 0x1C0068DB0 (UpconvertTime.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::Extensibility_SynthesizeMouseInput(
        CMouseProcessor *a1,
        __int64 a2,
        char a3,
        _QWORD *a4)
{
  CInputThread *v4; // rdi
  bool v9; // bl
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edx
  int v13; // ecx
  __int16 v14; // ax
  __int16 v15; // ax
  __int16 v16; // dx
  bool v17; // zf
  __int16 v18; // ax
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  unsigned int v23; // edi
  unsigned int v24; // ecx
  tagObjLock *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v30; // rbx
  struct tagTHREADINFO **v31; // rax
  __int64 v32; // rcx
  PVOID CurrentProcess; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v43; // rdx
  __int64 *v44; // rdi
  tagObjLock *v46[2]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v47; // [rsp+48h] [rbp-59h] BYREF
  __int64 v48; // [rsp+50h] [rbp-51h]
  __int64 v49; // [rsp+58h] [rbp-49h]
  __int128 v50; // [rsp+68h] [rbp-39h] BYREF
  struct tagPOINT v51; // [rsp+78h] [rbp-29h] BYREF

  v4 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  v9 = CInputThread::_CalledOnInputThread(v4);
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( !v9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  if ( (dword_1C01AA548 & 1) == 0 )
    dword_1C01AA548 |= 1u;
  v12 = *(_DWORD *)(a2 + 32);
  v47 = 0LL;
  v13 = 256;
  v48 = 0LL;
  v49 = 0LL;
  if ( v12 || *(_DWORD *)(a2 + 36) )
  {
    v14 = *(_WORD *)(a2 + 24) & 3;
    HIDWORD(v48) = v12;
    WORD1(v47) = v14;
    LODWORD(v49) = *(_DWORD *)(a2 + 36);
    if ( (a3 & 4) != 0 )
      v13 = 258;
  }
  else
  {
    v13 = 264;
  }
  v15 = *(_WORD *)(a2 + 26) & 0xFFF;
  v16 = *(_WORD *)(a2 + 28);
  WORD2(v47) = v15;
  if ( v16 )
  {
    v17 = (v15 & 0xC00) == 0;
    v18 = HIWORD(v47);
    if ( !v17 )
      v18 = v16;
    HIWORD(v47) = v18;
  }
  v19 = v13 | 0x800;
  if ( (a3 & 2) == 0 )
    v19 = v13;
  v20 = v19 | 0x200;
  if ( (a3 & 8) != 0 )
    v20 = v19;
  v21 = v20 | 0x400;
  if ( (a3 & 1) == 0 )
    v21 = v20;
  v22 = v21 | 0x2000;
  if ( (a3 & 0x20) == 0 )
    v22 = v21;
  v23 = v22 | 0x20000;
  if ( (a3 & 0x80) == 0 )
    v23 = v22;
  if ( (a3 & 0x10) != 0 )
    v23 = v23 & 0xFFFFFFF3 | 4;
  v24 = *(_DWORD *)(a2 + 8);
  v25 = *(tagObjLock **)(a2 + 16);
  v46[1] = *(tagObjLock **)a2;
  LODWORD(v46[0]) = 1;
  v50 = *(_OWORD *)v46;
  v46[0] = (tagObjLock *)UpconvertTime(v24);
  v46[1] = v25;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v51, (__int64)&v47, v46, v23 | 0x40, &v50, a4);
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v51, 0LL);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v27, v26, v28);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v30 = 0LL;
  while ( 1 )
  {
    v31 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v31 )
      v30 = *v31;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v32);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v35) == gpepCSRSS && v30 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v30 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v35, v34, v36);
  gptiCurrent = v30;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)v46);
  while ( 1 )
  {
    v44 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v39 = *v44;
    v44[2] = 0LL;
    if ( !*(_DWORD *)(v39 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37);
    DomainLockRef = GetDomainLockRef(8LL, v37);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v44);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v43);
  }
  tagObjLock::UnLock(v46[0]);
  return (unsigned int)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult((__int64)&v51, 2LL) + 1;
}
