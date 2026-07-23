/*
 * XREFs of PspInsertProcess @ 0x140539300
 * Callers:
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x140599DF0 (PspCreateProcess.c)
 *     PsCreateMinimalProcess @ 0x140719A94 (PsCreateMinimalProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlInitAnsiString @ 0x1400AE570 (RtlInitAnsiString.c)
 *     PspUnlockProcessListExclusive @ 0x1400E4CB4 (PspUnlockProcessListExclusive.c)
 *     PsGetProcessImageFileName @ 0x140124270 (PsGetProcessImageFileName.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 *     PspValidateJobAffinityState @ 0x14050CB68 (PspValidateJobAffinityState.c)
 *     PspImplicitAssignProcessToJob @ 0x14050CBD0 (PspImplicitAssignProcessToJob.c)
 *     RtlPrefixUnicodeString @ 0x1405223F0 (RtlPrefixUnicodeString.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14053A2B0 (SeAuditingWithTokenForSubcategory.c)
 *     DbgkCopyProcessDebugPort @ 0x14053A2F4 (DbgkCopyProcessDebugPort.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     SeCreateAccessStateEx @ 0x14057ECE0 (SeCreateAccessStateEx.c)
 *     SeAuditProcessCreation @ 0x1405A71B4 (SeAuditProcessCreation.c)
 */

__int64 __fastcall PspInsertProcess(
        char *Object,
        __int64 a2,
        ACCESS_MASK a3,
        int a4,
        HANDLE Handle,
        char a6,
        __int64 a7,
        PACCESS_STATE AccessState)
{
  struct _KTHREAD *CurrentThread; // r15
  __int16 v11; // si
  _KPROCESS *Process; // r13
  PVOID v13; // r14
  int inserted; // esi
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  char v17; // r14
  int v18; // edx
  PACCESS_STATE v19; // rbp
  ACCESS_MASK v20; // r13d
  __int64 v21; // rcx
  NTSTATUS v23; // eax
  const CHAR *ProcessImageFileName; // rax
  struct _KTHREAD *v25; // rax
  _STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-48h] BYREF
  char v28; // [rsp+A0h] [rbp+8h]
  PVOID v29; // [rsp+A8h] [rbp+10h] BYREF
  ACCESS_MASK v30; // [rsp+B0h] [rbp+18h]
  int v31; // [rsp+B8h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  CurrentThread = KeGetCurrentThread();
  v11 = a4;
  Process = CurrentThread->ApcState.Process;
  *(_DWORD *)(*((_QWORD *)Object + 131) + 40LL) = *((_DWORD *)Object + 184);
  v13 = 0LL;
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(133LL, 0LL) )
    SeAuditProcessCreation((ULONG_PTR)Object);
  if ( !a2
    || !*(_QWORD *)(a2 + 944)
    || (inserted = PspImplicitAssignProcessToJob(*(char **)(a2 + 944), (ULONG_PTR)Object, v11), inserted >= 0) )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
    v15 = (_QWORD *)qword_140362B28;
    v16 = Object + 744;
    if ( *(__int64 **)qword_140362B28 != &PsActiveProcessHead )
      __fastfail(3u);
    *((_QWORD *)Object + 94) = qword_140362B28;
    *v16 = &PsActiveProcessHead;
    *v15 = v16;
    qword_140362B28 = (__int64)(Object + 744);
    *((_QWORD *)Object + 234) = ++PspProcessSequenceNumber;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    if ( (Process[1].DirectoryTableBase & 0x800000000LL) != 0 )
    {
      inserted = -1073741558;
    }
    else if ( !Handle
           || (v23 = ObReferenceObjectByHandle(
                       Handle,
                       2u,
                       DbgkDebugObjectType,
                       KeGetCurrentThread()->PreviousMode,
                       &v29,
                       0LL),
               v13 = v29,
               inserted = v23,
               v23 >= 0) )
    {
      inserted = DbgkCopyProcessDebugPort((ULONG_PTR)Object);
      if ( v13 )
        ObfDereferenceObject(v13);
      if ( inserted >= 0 )
      {
        if ( v28 && (v31 & 2) != 0 )
          _InterlockedOr((volatile signed __int32 *)Object + 193, 2u);
        v17 = 0;
        if ( !a2 || (v18 = (int)PsInitialSystemProcess, (PEPROCESS)a2 != PsInitialSystemProcess) )
        {
          if ( (a6 & 2) != 0 )
          {
            v18 = (int)Object;
            v17 = 1;
          }
          else
          {
            v18 = (int)Process;
          }
        }
        v19 = AccessState;
        v20 = v30;
        inserted = SeCreateAccessStateEx(
                     0,
                     v18,
                     (_DWORD)AccessState,
                     (int)AccessState + 160,
                     v30,
                     (__int64)PsProcessType + 76);
        if ( inserted >= 0 )
        {
          ObfReferenceObjectWithTag(Object, 0x72437350u);
          inserted = ObInsertObjectEx(Object, v19, v20, 0, v17, 0LL, 0LL);
          if ( inserted >= 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x72437350u);
            v21 = *((_QWORD *)Object + 118);
            if ( !v21 )
            {
              _InterlockedOr((volatile signed __int32 *)Object + 193, 0x4000000u);
LABEL_21:
              if ( (ObpTraceFlags & 0x20) != 0 )
              {
                ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName((__int64)Object);
                RtlInitAnsiString(&DestinationString, ProcessImageFileName);
                if ( DestinationString.Length )
                {
                  if ( RtlAnsiStringToUnicodeString(&String1, &DestinationString, 1u) >= 0 )
                  {
                    v25 = KeGetCurrentThread();
                    --v25->SpecialApcDisable;
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
                    if ( (ObpTraceFlags & 0x20) != 0 && RtlPrefixUnicodeString(&String1, ObpTraceProcessName, 1u) )
                      _InterlockedOr((volatile signed __int32 *)Object + 192, 0x200u);
                    if ( (_InterlockedExchangeAdd64(
                            (volatile signed __int64 *)&ObpStackTraceLock,
                            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
                    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
                    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
                    RtlFreeUnicodeString(&String1);
                  }
                }
              }
              if ( (a6 & 1) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)Object + 91);
                KeAbPostRelease((ULONG_PTR)(Object + 728));
                KeLeaveCriticalRegionThread((__int64)CurrentThread);
              }
              return 0LL;
            }
            inserted = PspValidateJobAffinityState(v21, (__int64)Object);
            if ( inserted >= 0 )
              goto LABEL_21;
          }
          SepDeleteAccessState((__int64)v19);
          SeReleaseSubjectContext(&v19->SubjectSecurityContext);
        }
      }
    }
  }
  if ( (a6 & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)Object + 91);
    KeAbPostRelease((ULONG_PTR)(Object + 728));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return (unsigned int)inserted;
}
