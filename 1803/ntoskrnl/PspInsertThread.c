/*
 * XREFs of PspInsertThread @ 0x1404B7C74
 * Callers:
 *     PspCreateThread @ 0x1404B98F8 (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x1404F200C (NtCreateUserProcess.c)
 *     PspCreatePicoThread @ 0x14077DCF0 (PspCreatePicoThread.c)
 * Callees:
 *     KeReadyThread @ 0x14003FBA0 (KeReadyThread.c)
 *     KeStartThread @ 0x14003FBEC (KeStartThread.c)
 *     KeForceResumeThread @ 0x140041924 (KeForceResumeThread.c)
 *     KeRequestTerminationThread @ 0x140043C6C (KeRequestTerminationThread.c)
 *     KeSuspendThread @ 0x14004584C (KeSuspendThread.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectExWithTag @ 0x1400EB030 (ObReferenceObjectExWithTag.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     MmDeleteKernelStack @ 0x140130270 (MmDeleteKernelStack.c)
 *     KeRaiseUserException @ 0x1402421A0 (KeRaiseUserException.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     PspCallProcessNotifyRoutines @ 0x1404B655C (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1404B67E0 (PspCallThreadNotifyRoutines.c)
 *     PspCreateObjectHandle @ 0x1404B84AC (PspCreateObjectHandle.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     EtwTraceProcess @ 0x1404F846C (EtwTraceProcess.c)
 *     EtwTraceThread @ 0x1404FD384 (EtwTraceThread.c)
 *     PspChangeProcessExecutionState @ 0x140532AF8 (PspChangeProcessExecutionState.c)
 *     PoEnergyContextStart @ 0x1405597BC (PoEnergyContextStart.c)
 *     SeCreateAccessStateEx @ 0x1405626A0 (SeCreateAccessStateEx.c)
 *     MmDeleteTeb @ 0x140562BFC (MmDeleteTeb.c)
 *     PspDeleteUserStack @ 0x140580B4C (PspDeleteUserStack.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     KeSetUmsThreadKernelLock @ 0x140742C20 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x140742CE8 (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x140742D5C (KeUpdateUmsThreadState.c)
 *     PspAssignProcessToJobList @ 0x14077C73C (PspAssignProcessToJobList.c)
 *     PspCreateSecureThread @ 0x14077C7EC (PspCreateSecureThread.c)
 */

__int64 __fastcall PspInsertThread(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        int a5,
        _BYTE *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10,
        _OWORD *a11)
{
  ULONG_PTR v12; // rsi
  unsigned int *v14; // r15
  __int64 v15; // r14
  __int64 v16; // r8
  _QWORD *v17; // r12
  __int64 v18; // rbx
  int SecureThread; // ecx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  unsigned int v25; // edx
  unsigned int v26; // ecx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rcx
  _QWORD *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // r12d
  int v35; // edx
  signed int AccessState; // r14d
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  volatile signed __int64 *v40; // r12
  __int64 v41; // r8
  _BYTE *v42; // rbx
  _DWORD *v43; // r13
  __int64 v44; // rdx
  int v45; // r12d
  __int64 v46; // rdx
  __int64 v47; // rdx
  KPROCESSOR_MODE v48; // dl
  char v49; // [rsp+40h] [rbp-78h]
  _QWORD *v50; // [rsp+48h] [rbp-70h]
  __int64 v51; // [rsp+50h] [rbp-68h]
  _KPROCESS *Process; // [rsp+60h] [rbp-58h]

  v12 = a2;
  v49 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v51 = *(_QWORD *)(BugCheckParameter2 + 240);
  v14 = 0LL;
  v15 = 0LL;
  v16 = a7;
  if ( a7 )
  {
    v17 = *(_QWORD **)(a7 + 24);
    v14 = (unsigned int *)((a7 + 252) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x4000) != 0));
    a2 = -(*(_DWORD *)(a7 + 4) & 0x1000);
    v15 = (a7 + 320) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x1000) != 0);
  }
  else
  {
    v17 = 0LL;
  }
  v50 = v17;
  if ( (*a4 & 0x20) == 0 )
    ExAcquirePushLockExclusiveEx(v12 + 728, 0LL);
  v18 = *(_QWORD *)(v12 + 944);
  if ( v18 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) == 0 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(v18 + 56), 1u);
      v49 = 1;
      if ( v15 )
      {
        if ( (*(_DWORD *)(v18 + 848) & 0x10) != 0 )
        {
          v16 = *(_QWORD *)(v18 + 8LL * *(unsigned __int16 *)(v15 + 8) + 624);
          if ( !v16 || (a2 = *(_QWORD *)v15, (v16 & *(_QWORD *)v15) != *(_QWORD *)v15) )
            v49 = 5;
        }
      }
    }
  }
  if ( (v49 & 4) == 0
    && (*(_DWORD *)(v12 + 772) & 0x4000008) == 0x4000000
    && ((*(_DWORD *)(v12 + 772) & 0x40000000) == 0
     || (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) != 0
     || (*a4 & 2) != 0) )
  {
    SecureThread = 0;
  }
  else
  {
    SecureThread = -1073741823;
  }
  if ( SecureThread < 0 )
    goto LABEL_24;
  if ( (*(_BYTE *)(v12 + 720) & 1) != 0 )
    SecureThread = PspCreateSecureThread((PVOID)BugCheckParameter2);
  if ( SecureThread < 0 )
  {
LABEL_24:
    if ( (v49 & 1) != 0 )
      ExReleaseResourceLite((PERESOURCE)(v18 + 56));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 728), a2, v16, (__int64)a4);
    KeAbPostRelease(v12 + 728);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 1728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 1728), v20, v21, v22);
    KeAbPostRelease(BugCheckParameter2 + 1728);
    MmDeleteKernelStack(*(_QWORD *)(BugCheckParameter2 + 56), 2);
    *(_QWORD *)(BugCheckParameter2 + 40) = 0LL;
    if ( a6 )
    {
      if ( v51 )
        MmDeleteTeb(v12);
      if ( *a6 )
        PspDeleteUserStack(v12, v23, a3, a6);
    }
    return (*(_DWORD *)(v12 + 772) & 0x40000008) != 0 ? -1073741558 : -1073741823;
  }
  KeStartThread(BugCheckParameter2, (unsigned __int64 *)v15, v14);
  if ( (v49 & 1) != 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(v18 + 56));
    v49 &= ~1u;
  }
  v25 = *(_DWORD *)(v12 + 772);
  if ( (v25 & 0x40000000) != 0 && (*a4 & 2) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 1748) |= 0x40u;
    v25 = *(_DWORD *)(v12 + 772);
  }
  v26 = (((v25 >> 27) & 7) << 9) | *(_DWORD *)(BugCheckParameter2 + 1744) & 0xFFFFF1FF;
  *(_DWORD *)(BugCheckParameter2 + 1744) = v26;
  *(_DWORD *)(BugCheckParameter2 + 1744) = v26 ^ (*(_DWORD *)(v12 + 768) ^ v26) & 0x7000;
  if ( ++*(_DWORD *)(v12 + 1176) > *(_DWORD *)(v12 + 1704) )
    *(_DWORD *)(v12 + 1704) = *(_DWORD *)(v12 + 1176);
  if ( *(_DWORD *)(v12 + 1176) == 1 )
  {
    v49 |= 2u;
  }
  else if ( *(_DWORD *)(v12 + 1176) == 2 && (*(_DWORD *)(v12 + 768) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v12 + 768), 0xFu);
  }
  ExAcquirePushLockExclusiveEx(v12 + 1712, 0LL);
  v29 = (_QWORD *)(BugCheckParameter2 + 1704);
  v30 = *(_QWORD **)(v12 + 1168);
  if ( *v30 != v12 + 1160 )
    __fastfail(3u);
  *v29 = v12 + 1160;
  *(_QWORD *)(BugCheckParameter2 + 1712) = v30;
  *v30 = v29;
  *(_QWORD *)(v12 + 1168) = v29;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 1712), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 1712), (__int64)v30, v27, v28);
  KeAbPostRelease(v12 + 1712);
  if ( *(_QWORD *)(v12 + 712) )
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 0x19u);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 728), v31, v32, v33);
  KeAbPostRelease(v12 + 728);
  if ( (*a4 & 0x40) != 0 )
    PspChangeProcessExecutionState((PEPROCESS)v12);
  ObReferenceObjectExWithTag(BugCheckParameter2, 2);
  *(_DWORD *)(BugCheckParameter2 + 1904) = 1;
  if ( (*a4 & 1) != 0 )
  {
    KeSuspendThread(BugCheckParameter2);
    if ( (*(_DWORD *)(BugCheckParameter2 + 1744) & 1) != 0 )
      KeForceResumeThread(BugCheckParameter2);
  }
  v34 = 0;
  if ( !*(_BYTE *)(a9 + 388) || (*a4 & 0x10) != 0 )
  {
    v35 = v12;
    v34 = 1;
  }
  else
  {
    v35 = (int)Process;
  }
  AccessState = SeCreateAccessStateEx(0, v35, a9, (int)a9 + 160, a5, (__int64)PsThreadType + 76);
  if ( AccessState < 0 )
  {
    ObfDereferenceObject((PVOID)BugCheckParameter2);
  }
  else
  {
    AccessState = ObInsertObjectEx((PVOID)BugCheckParameter2, v34, 0LL, 0LL);
    if ( AccessState >= 0 )
    {
      ObfDereferenceObject((PVOID)BugCheckParameter2);
      if ( v50 )
        *v50 = v51;
      if ( a11 )
        *a11 = *(_OWORD *)(BugCheckParameter2 + 1592);
    }
    if ( AccessState < 0 )
    {
      SepDeleteAccessState(a9);
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a9 + 32));
    }
  }
  v40 = (volatile signed __int64 *)(BugCheckParameter2 + 1728);
  if ( AccessState < 0 )
  {
    if ( (_InterlockedExchangeAdd64(v40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 1728), v37, v38, v39);
    KeAbPostRelease(BugCheckParameter2 + 1728);
    v43 = a4;
    if ( (*a4 & 1) != 0 )
      KeForceResumeThread(BugCheckParameter2);
    v42 = a6;
    if ( a6 && *a6 )
      PspDeleteUserStack(v12, v44, a3, a6);
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 1744), 2u);
    if ( (_InterlockedExchangeAdd64(v40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 1728), v37, v38, v39);
    KeAbPostRelease(BugCheckParameter2 + 1728);
    v42 = a6;
    v43 = a4;
  }
  v45 = 0;
  if ( (v49 & 2) != 0 )
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess((PEPROCESS)v12);
    if ( *(_QWORD *)(v12 + 1856) )
      PoEnergyContextStart(v12);
    if ( (*(_DWORD *)(v12 + 1740) & 1) == 0 || *(_QWORD *)(v12 + 1808) )
      v45 = PspCallProcessNotifyRoutines((_QWORD *)v12, a7, 1);
  }
  if ( (PerfGlobalGroupMask & 2) != 0 )
  {
    LOBYTE(v41) = 1;
    EtwTraceThread(BugCheckParameter2, a3, v41);
  }
  if ( (*(_DWORD *)(v12 + 1740) & 1) == 0 || *(_QWORD *)(v12 + 1808) )
    PspCallThreadNotifyRoutines((_QWORD *)BugCheckParameter2, 1u, 0);
  if ( AccessState >= 0 )
  {
    if ( v45 < 0 )
      AccessState = v45;
    else
      AccessState = PspCreateObjectHandle(BugCheckParameter2, a9, PsThreadType);
    SepDeleteAccessState(a9);
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a9 + 32));
    if ( AccessState >= 0 )
    {
      if ( a7 )
      {
        v47 = *(_QWORD *)(a7 + 392);
        if ( v47 )
          AccessState = PspAssignProcessToJobList(v12, v47, *(unsigned int *)(a7 + 404));
      }
      if ( AccessState >= 0 )
      {
        *a10 = *(_QWORD *)(a9 + 392);
        goto LABEL_123;
      }
      v48 = (*(_DWORD *)(a9 + 384) & 0x200) == 0 && (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0;
      ObCloseHandle(*(HANDLE *)(a9 + 392), v48);
      if ( v42 && (*v42 & 1) != 0 )
        KeRaiseUserException(AccessState);
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter2 + 1744), 0) )
      v49 |= 8u;
    if ( (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) != 0 )
    {
      if ( (*v43 & 1) != 0 )
        KeForceResumeThread(BugCheckParameter2);
    }
    else
    {
      if ( (v49 & 8) != 0 )
        *(_DWORD *)(BugCheckParameter2 + 1792) = AccessState;
      KeRequestTerminationThread(BugCheckParameter2, v46);
    }
  }
LABEL_123:
  if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0x40) != 0 && AccessState < 0 )
  {
    KeSetUmsThreadKernelLock(**(_QWORD **)(BugCheckParameter2 + 496), 0LL);
    KeUpdateUmsThreadState(**(_QWORD **)(BugCheckParameter2 + 496), 2LL, 0LL);
    ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(BugCheckParameter2 + 496) + 16LL));
    KeUnInitializeUmsThread(BugCheckParameter2);
  }
  KeReadyThread(BugCheckParameter2);
  return (unsigned int)AccessState;
}
