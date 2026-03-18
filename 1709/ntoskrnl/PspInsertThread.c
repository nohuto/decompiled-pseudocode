/*
 * XREFs of PspInsertThread @ 0x1404D54CC
 * Callers:
 *     PspCreateThread @ 0x140492B18 (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     PspCreatePicoThread @ 0x14071A240 (PspCreatePicoThread.c)
 * Callees:
 *     MmDeleteKernelStack @ 0x140029590 (MmDeleteKernelStack.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ObReferenceObjectExWithTag @ 0x14008AAD0 (ObReferenceObjectExWithTag.c)
 *     KeReadyThread @ 0x1400A6844 (KeReadyThread.c)
 *     KeStartThread @ 0x1400A6890 (KeStartThread.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeForceResumeThread @ 0x1400AA148 (KeForceResumeThread.c)
 *     KeRequestTerminationThread @ 0x1400AB560 (KeRequestTerminationThread.c)
 *     KeSuspendThread @ 0x1400AC2F8 (KeSuspendThread.c)
 *     PsIsSystemThread @ 0x140123E60 (PsIsSystemThread.c)
 *     KeRaiseUserException @ 0x1402049C0 (KeRaiseUserException.c)
 *     PoEnergyContextStart @ 0x1404589DC (PoEnergyContextStart.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     PspCallProcessNotifyRoutines @ 0x1404D265C (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1404D28E0 (PspCallThreadNotifyRoutines.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     PspCreateObjectHandle @ 0x1404D5D14 (PspCreateObjectHandle.c)
 *     EtwTraceProcess @ 0x1404DBA5C (EtwTraceProcess.c)
 *     MmDeleteTeb @ 0x14056A768 (MmDeleteTeb.c)
 *     SeCreateAccessStateEx @ 0x14057ECE0 (SeCreateAccessStateEx.c)
 *     PspDeleteUserStack @ 0x1405979E8 (PspDeleteUserStack.c)
 *     KeSetUmsThreadKernelLock @ 0x1406D8B44 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x1406D8C0C (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x1406D8C7C (KeUpdateUmsThreadState.c)
 *     PspAssignProcessToJobList @ 0x14071874C (PspAssignProcessToJobList.c)
 *     PspCreateSecureThread @ 0x1407187FC (PspCreateSecureThread.c)
 *     EtwTraceThread @ 0x14074619C (EtwTraceThread.c)
 */

__int64 __fastcall PspInsertThread(
        _QWORD *Object,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        _DWORD *a4,
        ACCESS_MASK a5,
        _BYTE *a6,
        __int64 a7,
        __int64 a8,
        PACCESS_STATE AccessState,
        PVOID *a10,
        _OWORD *a11)
{
  unsigned int v13; // edi
  unsigned int *v14; // r12
  __int64 v15; // r15
  _QWORD *v16; // r13
  __int64 v17; // rbx
  __int64 v18; // rdx
  _DWORD *v19; // r13
  int SecureThread; // ecx
  __int64 v21; // r8
  __int64 v22; // rdx
  unsigned int v24; // eax
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  char v27; // r12
  int v28; // edx
  signed int inserted; // r15d
  __int64 v30; // r8
  _BYTE *v31; // rbx
  __int64 v32; // rdx
  int v33; // r12d
  __int64 v34; // rdx
  KPROCESSOR_MODE v35; // dl
  _QWORD *v36; // [rsp+48h] [rbp-70h]
  __int64 v37; // [rsp+50h] [rbp-68h]
  _KPROCESS *Process; // [rsp+60h] [rbp-58h]

  v13 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v37 = Object[30];
  v14 = 0LL;
  v15 = 0LL;
  if ( a7 )
  {
    v16 = *(_QWORD **)(a7 + 24);
    v14 = (unsigned int *)((a7 + 252) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x4000) != 0));
    v15 = (a7 + 320) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x1000) != 0);
  }
  else
  {
    v16 = 0LL;
  }
  v36 = v16;
  if ( (*a4 & 0x20) == 0 )
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 728, 0LL);
  v17 = *(_QWORD *)(BugCheckParameter1 + 944);
  if ( v17 )
  {
    if ( !PsIsSystemThread((PETHREAD)Object) )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(v17 + 56), 1u);
      v13 = 1;
      if ( v15 )
      {
        if ( (*(_DWORD *)(v17 + 848) & 0x10) != 0 )
        {
          v18 = *(_QWORD *)(v17 + 8LL * *(unsigned __int16 *)(v15 + 8) + 624);
          if ( !v18 || (v18 & *(_QWORD *)v15) != *(_QWORD *)v15 )
            v13 = 5;
        }
      }
    }
  }
  if ( v13 >= 4 || (*(_DWORD *)(BugCheckParameter1 + 772) & 0x4000008) != 0x4000000 )
  {
    v19 = a4;
LABEL_20:
    SecureThread = -1073741823;
    goto LABEL_21;
  }
  v19 = a4;
  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000000) != 0
    && (*((_DWORD *)Object + 29) & 0x400) == 0
    && (*a4 & 2) == 0 )
  {
    goto LABEL_20;
  }
  SecureThread = 0;
LABEL_21:
  if ( SecureThread < 0 )
    goto LABEL_25;
  if ( (*(_BYTE *)(BugCheckParameter1 + 720) & 1) != 0 )
    SecureThread = PspCreateSecureThread(Object);
  if ( SecureThread < 0 )
  {
LABEL_25:
    if ( (v13 & 1) != 0 )
      ExReleaseResourceLite((PERESOURCE)(v17 + 56));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 728));
    KeAbPostRelease(BugCheckParameter1 + 728);
    if ( (_InterlockedExchangeAdd64(Object + 216, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(Object + 216);
    KeAbPostRelease((ULONG_PTR)(Object + 216));
    MmDeleteKernelStack(Object[7], 2LL, v21);
    Object[5] = 0LL;
    if ( a6 )
    {
      if ( v37 )
        MmDeleteTeb(BugCheckParameter1);
      if ( *a6 )
        PspDeleteUserStack(BugCheckParameter1, v22, a3, a6);
    }
    return (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000008) != 0 ? -1073741558 : -1073741823;
  }
  KeStartThread((__int64)Object, (unsigned __int64 *)v15, v14);
  if ( (v13 & 1) != 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(v17 + 56));
    v13 &= ~1u;
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000000) != 0 && (*v19 & 2) != 0 )
    *((_DWORD *)Object + 437) |= 0x40u;
  v24 = (((*(_DWORD *)(BugCheckParameter1 + 772) >> 27) & 7) << 9) | Object[218] & 0xFFFFF1FF;
  *((_DWORD *)Object + 436) = v24;
  *((_DWORD *)Object + 436) ^= (*(_DWORD *)(BugCheckParameter1 + 768) ^ v24) & 0x7000;
  if ( ++*(_DWORD *)(BugCheckParameter1 + 1176) > *(_DWORD *)(BugCheckParameter1 + 1704) )
    *(_DWORD *)(BugCheckParameter1 + 1704) = *(_DWORD *)(BugCheckParameter1 + 1176);
  if ( *(_DWORD *)(BugCheckParameter1 + 1176) == 1 )
  {
    v13 |= 2u;
  }
  else if ( *(_DWORD *)(BugCheckParameter1 + 1176) == 2 && (*(_DWORD *)(BugCheckParameter1 + 768) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 768), 0xFu);
  }
  ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1712, 0LL);
  v25 = Object + 213;
  v26 = *(_QWORD **)(BugCheckParameter1 + 1168);
  if ( *v26 != BugCheckParameter1 + 1160 )
    __fastfail(3u);
  *v25 = BugCheckParameter1 + 1160;
  Object[214] = v26;
  *v26 = v25;
  *(_QWORD *)(BugCheckParameter1 + 1168) = v25;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1712), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 1712));
  KeAbPostRelease(BugCheckParameter1 + 1712);
  if ( *(_QWORD *)(BugCheckParameter1 + 712) )
    _interlockedbittestandset((volatile signed __int32 *)Object, 0x19u);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 728));
  KeAbPostRelease(BugCheckParameter1 + 728);
  ObReferenceObjectExWithTag((__int64)Object, 2);
  *((_DWORD *)Object + 476) = 1;
  if ( (*v19 & 1) != 0 )
  {
    KeSuspendThread((__int64)Object);
    if ( (Object[218] & 1) != 0 )
      KeForceResumeThread((__int64)Object);
  }
  v27 = 0;
  if ( !BYTE4(AccessState[2].SecurityDescriptor) || (*a4 & 0x10) != 0 )
  {
    v28 = BugCheckParameter1;
    v27 = 1;
  }
  else
  {
    v28 = (int)Process;
  }
  inserted = SeCreateAccessStateEx(0, v28, (_DWORD)AccessState, (int)AccessState + 160, a5, (__int64)PsThreadType + 76);
  if ( inserted < 0 )
  {
    ObfDereferenceObject(Object);
    goto LABEL_76;
  }
  inserted = ObInsertObjectEx(Object, AccessState, a5, 0, v27, 0LL, 0LL);
  if ( inserted >= 0 )
  {
    ObfDereferenceObject(Object);
    if ( v36 )
      *v36 = v37;
    if ( a11 )
      *a11 = *(_OWORD *)(Object + 199);
  }
  if ( inserted < 0 )
  {
    SepDeleteAccessState((__int64)AccessState);
    SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
LABEL_76:
    if ( (_InterlockedExchangeAdd64(Object + 216, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(Object + 216);
    KeAbPostRelease((ULONG_PTR)(Object + 216));
    if ( (*a4 & 1) != 0 )
      KeForceResumeThread((__int64)Object);
    v31 = a6;
    if ( a6 && *a6 )
      PspDeleteUserStack(BugCheckParameter1, v32, a3, a6);
    goto LABEL_83;
  }
  _InterlockedOr((volatile signed __int32 *)Object + 436, 2u);
  if ( (_InterlockedExchangeAdd64(Object + 216, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(Object + 216);
  KeAbPostRelease((ULONG_PTR)(Object + 216));
  v31 = a6;
LABEL_83:
  v33 = 0;
  if ( (v13 & 2) != 0 )
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess(BugCheckParameter1);
    if ( *(_QWORD *)(BugCheckParameter1 + 1856) )
      PoEnergyContextStart(BugCheckParameter1);
    if ( (*(_DWORD *)(BugCheckParameter1 + 1740) & 1) == 0 || *(_QWORD *)(BugCheckParameter1 + 1808) )
      v33 = PspCallProcessNotifyRoutines((_QWORD *)BugCheckParameter1, a7, 1);
  }
  if ( (PerfGlobalGroupMask & 2) != 0 )
  {
    LOBYTE(v30) = 1;
    EtwTraceThread(Object, a3, v30);
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 1740) & 1) == 0 || *(_QWORD *)(BugCheckParameter1 + 1808) )
    PspCallThreadNotifyRoutines(Object, 1u, 0);
  if ( inserted < 0 )
    goto LABEL_121;
  if ( v33 < 0 )
    inserted = v33;
  else
    inserted = PspCreateObjectHandle(Object, AccessState, PsThreadType);
  SepDeleteAccessState((__int64)AccessState);
  SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
  if ( inserted < 0 )
    goto LABEL_113;
  if ( a7 )
  {
    v34 = *(_QWORD *)(a7 + 392);
    if ( v34 )
      inserted = PspAssignProcessToJobList(BugCheckParameter1, v34, *(unsigned int *)(a7 + 404));
  }
  if ( inserted < 0 )
  {
    v35 = ((__int64)AccessState[2].SecurityDescriptor & 0x200) == 0
       && (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0;
    ObCloseHandle(AccessState[2].AuxData, v35);
    if ( v31 && (*v31 & 1) != 0 )
      KeRaiseUserException(inserted);
LABEL_113:
    if ( !_interlockedbittestandset((volatile signed __int32 *)Object + 436, 0) )
      v13 |= 8u;
    if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
    {
      if ( (*a4 & 1) != 0 )
        KeForceResumeThread((__int64)Object);
    }
    else
    {
      if ( v13 >= 8 )
        *((_DWORD *)Object + 448) = inserted;
      KeRequestTerminationThread((__int64)Object);
    }
    goto LABEL_121;
  }
  *a10 = AccessState[2].AuxData;
LABEL_121:
  if ( (*((_BYTE *)Object + 3) & 0x40) != 0 && inserted < 0 )
  {
    KeSetUmsThreadKernelLock(*(_QWORD *)Object[62], 0LL);
    KeUpdateUmsThreadState(*(_QWORD *)Object[62], 2LL, 0LL);
    ObfDereferenceObject(*(PVOID *)(Object[62] + 16LL));
    KeUnInitializeUmsThread(Object);
  }
  KeReadyThread((__int64)Object);
  return (unsigned int)inserted;
}
