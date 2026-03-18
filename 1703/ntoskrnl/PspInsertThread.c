/*
 * XREFs of PspInsertThread @ 0x1405408E4
 * Callers:
 *     PspCreateThread @ 0x1405410D4 (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 *     PspCreatePicoThread @ 0x1406E3980 (PspCreatePicoThread.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x1400445F0 (ObReferenceObjectExWithTag.c)
 *     KeSuspendThread @ 0x140072F68 (KeSuspendThread.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     MmDeleteKernelStack @ 0x140110020 (MmDeleteKernelStack.c)
 *     KeForceResumeThread @ 0x140110D6C (KeForceResumeThread.c)
 *     KeReadyThread @ 0x14011216C (KeReadyThread.c)
 *     KeStartThread @ 0x1401121B8 (KeStartThread.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeRequestTerminationThread @ 0x14012008C (KeRequestTerminationThread.c)
 *     KeRaiseUserException @ 0x1401FE6D0 (KeRaiseUserException.c)
 *     SeCreateAccessStateEx @ 0x140443DD0 (SeCreateAccessStateEx.c)
 *     PspDeleteUserStack @ 0x1404595F0 (PspDeleteUserStack.c)
 *     MmDeleteTeb @ 0x140499B6C (MmDeleteTeb.c)
 *     EtwTraceThread @ 0x1404B07F4 (EtwTraceThread.c)
 *     EtwTraceProcess @ 0x1404ED910 (EtwTraceProcess.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     PspCallProcessNotifyRoutines @ 0x1404FA068 (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1404FA280 (PspCallThreadNotifyRoutines.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     PspCreateObjectHandle @ 0x140541060 (PspCreateObjectHandle.c)
 *     KeSetUmsThreadKernelLock @ 0x1406AD700 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x1406AD7C8 (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x1406AD838 (KeUpdateUmsThreadState.c)
 *     PoEnergyContextStart @ 0x1406D0244 (PoEnergyContextStart.c)
 *     PspAssignProcessToJobList @ 0x1406E231C (PspAssignProcessToJobList.c)
 *     PspCreateSecureThread @ 0x1406E23CC (PspCreateSecureThread.c)
 */

__int64 __fastcall PspInsertThread(
        _QWORD *Object,
        PEPROCESS Process,
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
  unsigned int *v14; // r13
  __int64 v15; // r12
  unsigned __int64 v16; // rbx
  int SecureThread; // ecx
  unsigned int v18; // eax
  struct _KPROCESS *v19; // rcx
  PEPROCESS *v20; // rdx
  _DWORD *v21; // rcx
  struct _KPROCESS *v22; // rdx
  signed int inserted; // r12d
  char *v24; // rax
  __int64 v25; // r8
  _BYTE *v26; // rbx
  signed int ObjectHandle; // eax
  __int64 v28; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  char *v32; // rax
  __int64 v33; // rdx
  KPROCESSOR_MODE v34; // al
  char v35; // [rsp+48h] [rbp-70h]
  unsigned __int64 *v36; // [rsp+50h] [rbp-68h]
  unsigned __int64 v37; // [rsp+58h] [rbp-60h]
  struct _KPROCESS *v38; // [rsp+60h] [rbp-58h]
  int v39; // [rsp+C8h] [rbp+10h]

  v13 = 0;
  v38 = KeGetCurrentThread()->ApcState.Process;
  v37 = Object[30];
  v14 = 0LL;
  v15 = 0LL;
  if ( a7 )
  {
    v36 = *(unsigned __int64 **)(a7 + 24);
    v14 = (unsigned int *)((a7 + 252) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x4000) != 0));
    v15 = (a7 + 320) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x1000) != 0);
  }
  else
  {
    v36 = 0LL;
  }
  if ( (*a4 & 0x20) == 0 )
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1], 0LL);
  v16 = Process[1].Affinity.Bitmap[16];
  if ( v16 )
  {
    ExAcquireResourceSharedLite((PERESOURCE)(v16 + 56), 1u);
    if ( v15 )
    {
      if ( (*(_DWORD *)(v16 + 848) & 0x10) != 0 )
      {
        v31 = *(_QWORD *)(v16 + 8LL * *(unsigned __int16 *)(v15 + 8) + 624);
        if ( !v31 || (v31 & *(_QWORD *)v15) != *(_QWORD *)v15 )
          v13 = 2;
      }
    }
  }
  if ( v13 >= 2
    || (HIDWORD(Process[1].DirectoryTableBase) & 0x4000008) != 0x4000000
    || (Process[1].DirectoryTableBase & 0x4000000000000000LL) != 0
    && (*((_DWORD *)Object + 29) & 0x400) == 0
    && (*(_BYTE *)a4 & 2) == 0 )
  {
    SecureThread = -1073741823;
  }
  else
  {
    SecureThread = 0;
  }
  if ( SecureThread >= 0 )
  {
    if ( Process->SecurePid )
      SecureThread = PspCreateSecureThread(Object);
    if ( SecureThread >= 0 )
    {
      KeStartThread((__int64)Object, (unsigned __int64 *)v15, v14);
      if ( v16 )
        ExReleaseResourceLite((PERESOURCE)(v16 + 56));
      if ( (Process[1].DirectoryTableBase & 0x4000000000000000LL) != 0 && (*(_BYTE *)a4 & 2) != 0 )
        *((_DWORD *)Object + 435) |= 0x40u;
      v18 = (((HIDWORD(Process[1].DirectoryTableBase) >> 27) & 7) << 9) | Object[217] & 0xFFFFF1FF;
      *((_DWORD *)Object + 434) = v18;
      *((_DWORD *)Object + 434) ^= (LODWORD(Process[1].DirectoryTableBase) ^ v18) & 0x7000;
      if ( ++Process[1].ThreadSeed[0] > LODWORD(Process[2].ReadyListHead.Flink) )
        LODWORD(Process[2].ReadyListHead.Flink) = Process[1].ThreadSeed[0];
      if ( Process[1].ThreadSeed[0] == 1 )
      {
        v13 |= 1u;
      }
      else if ( Process[1].ThreadSeed[0] == 2 && (Process[1].DirectoryTableBase & 0x8000) == 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0xFu);
      }
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[2].ReadyListHead.Blink, 0LL);
      v19 = (struct _KPROCESS *)(Object + 212);
      v20 = *(PEPROCESS **)&Process[1].0;
      if ( *v20 != (PEPROCESS)&Process[1].ActiveProcessors.Bitmap[19] )
        __fastfail(3u);
      *(_QWORD *)&v19->Header.Lock = (char *)Process + 1160;
      Object[213] = v20;
      *v20 = v19;
      *(_QWORD *)&Process[1].0 = v19;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[2].ReadyListHead.Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&Process[2].ReadyListHead.Blink);
      KeAbPostRelease((ULONG_PTR)&Process[2].ReadyListHead.Blink);
      if ( Process->InstrumentationCallback )
        _interlockedbittestandset((volatile signed __int32 *)Object, 0x19u);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].Header.Lock);
      KeAbPostRelease((ULONG_PTR)&Process[1]);
      ObReferenceObjectExWithTag((__int64)Object, 2);
      *((_DWORD *)Object + 474) = 1;
      v21 = a4;
      if ( (*a4 & 1) != 0 )
      {
        KeSuspendThread((__int64)Object);
        if ( (Object[217] & 1) != 0 )
          KeForceResumeThread((__int64)Object);
        v21 = a4;
      }
      v35 = 0;
      if ( !BYTE4(AccessState[2].SecurityDescriptor) || (*v21 & 0x10) != 0 )
      {
        v22 = Process;
        v35 = 1;
      }
      else
      {
        v22 = v38;
      }
      inserted = SeCreateAccessStateEx(
                   0LL,
                   v22,
                   AccessState,
                   &AccessState[1].OperationID,
                   a5,
                   (GENERIC_MAPPING *)((char *)PsThreadType + 76));
      if ( inserted < 0 )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        inserted = ObInsertObjectEx(Object, AccessState, a5, 0, v35, 0LL, 0LL);
        if ( inserted >= 0 )
        {
          ObfDereferenceObject(Object);
          if ( v36 )
            *v36 = v37;
          if ( a11 )
            *a11 = *(_OWORD *)(Object + 199);
        }
        if ( inserted >= 0 )
        {
          _InterlockedOr((volatile signed __int32 *)Object + 434, 2u);
          v24 = (char *)(Object + 215);
          if ( (_InterlockedExchangeAdd64(Object + 215, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          {
            ExfTryToWakePushLock(Object + 215);
            v24 = (char *)(Object + 215);
          }
          KeAbPostRelease((ULONG_PTR)v24);
          v26 = a6;
          goto LABEL_43;
        }
        SepDeleteAccessState((__int64)AccessState);
        SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
      }
      v32 = (char *)(Object + 215);
      if ( (_InterlockedExchangeAdd64(Object + 215, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(Object + 215);
        v32 = (char *)(Object + 215);
      }
      KeAbPostRelease((ULONG_PTR)v32);
      v33 = (__int64)a4;
      if ( (*a4 & 1) != 0 )
        KeForceResumeThread((__int64)Object);
      v26 = a6;
      if ( a6 && *a6 )
        PspDeleteUserStack(Process, v33, a3, a6);
LABEL_43:
      v39 = 0;
      if ( (v13 & 1) != 0 )
      {
        if ( (PerfGlobalGroupMask & 1) != 0 )
          EtwTraceProcess(Process, 769);
        if ( Process[2].ActiveProcessors.Bitmap[12] )
          PoEnergyContextStart((ULONG_PTR)Process);
        if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 || Process[2].ActiveProcessors.Bitmap[9] )
          v39 = PspCallProcessNotifyRoutines((struct _EX_RUNDOWN_REF *)Process, a7, 1);
      }
      if ( (PerfGlobalGroupMask & 2) != 0 )
      {
        LOBYTE(v25) = 1;
        EtwTraceThread((__int64)Object, a3, v25);
      }
      if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 || Process[2].ActiveProcessors.Bitmap[9] )
        PspCallThreadNotifyRoutines(Object, 1u, 0);
      if ( inserted < 0 )
        goto LABEL_57;
      ObjectHandle = v39;
      if ( v39 >= 0 )
        ObjectHandle = PspCreateObjectHandle(Object, AccessState, PsThreadType);
      inserted = ObjectHandle;
      SepDeleteAccessState((__int64)AccessState);
      SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
      if ( inserted >= 0 )
      {
        if ( a7 )
        {
          v28 = *(_QWORD *)(a7 + 392);
          if ( v28 )
            inserted = PspAssignProcessToJobList(Process, v28, *(unsigned int *)(a7 + 404));
        }
        if ( inserted >= 0 )
        {
          *a10 = AccessState[2].AuxData;
LABEL_57:
          if ( (*((_BYTE *)Object + 3) & 0x40) != 0 && inserted < 0 )
          {
            KeSetUmsThreadKernelLock(*(_QWORD *)Object[62], 0LL);
            KeUpdateUmsThreadState(*(_QWORD *)Object[62], 2LL, 0LL);
            ObfDereferenceObject(*(PVOID *)(Object[62] + 16LL));
            KeUnInitializeUmsThread(Object);
          }
          KeReadyThread((_KTHREAD *)Object);
          return (unsigned int)inserted;
        }
        if ( ((__int64)AccessState[2].SecurityDescriptor & 0x200) != 0 || (v34 = 1, v38 == PsInitialSystemProcess) )
          v34 = 0;
        ObCloseHandle(AccessState[2].AuxData, v34);
        if ( v26 && (*v26 & 1) != 0 )
          KeRaiseUserException(inserted);
      }
      if ( !_interlockedbittestandset((volatile signed __int32 *)Object + 434, 0) )
        v13 |= 4u;
      if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
      {
        if ( (*a4 & 1) != 0 )
          KeForceResumeThread((__int64)Object);
      }
      else
      {
        if ( v13 >= 4 )
          *((_DWORD *)Object + 446) = inserted;
        KeRequestTerminationThread((__int64)Object);
      }
      goto LABEL_57;
    }
  }
  if ( v16 )
    ExReleaseResourceLite((PERESOURCE)(v16 + 56));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].Header.Lock);
  KeAbPostRelease((ULONG_PTR)&Process[1]);
  if ( (_InterlockedExchangeAdd64(Object + 215, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(Object + 215);
  KeAbPostRelease((ULONG_PTR)(Object + 215));
  MmDeleteKernelStack(Object[7], 2);
  Object[5] = 0LL;
  if ( a6 )
  {
    if ( v37 )
      MmDeleteTeb(Process, v37);
    if ( *a6 )
      PspDeleteUserStack(Process, v30, a3, a6);
  }
  return (Process[1].DirectoryTableBase & 0x4000000800000000LL) != 0 ? -1073741558 : -1073741823;
}
