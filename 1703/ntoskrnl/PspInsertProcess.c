/*
 * XREFs of PspInsertProcess @ 0x14049CB2C
 * Callers:
 *     PspCreateProcess @ 0x14045D9C0 (PspCreateProcess.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x1405D991C (PsCreateMinimalProcess.c)
 * Callees:
 *     PsGetProcessImageFileName @ 0x14002BD00 (PsGetProcessImageFileName.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     PspUnlockProcessListExclusive @ 0x140064018 (PspUnlockProcessListExclusive.c)
 *     RtlInitAnsiString @ 0x1400852C0 (RtlInitAnsiString.c)
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     SeCreateAccessStateEx @ 0x140443DD0 (SeCreateAccessStateEx.c)
 *     PspValidateJobAffinityState @ 0x14044F1FC (PspValidateJobAffinityState.c)
 *     RtlPrefixUnicodeString @ 0x140484490 (RtlPrefixUnicodeString.c)
 *     DbgkCopyProcessDebugPort @ 0x14049CDD4 (DbgkCopyProcessDebugPort.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14049DB70 (SeAuditingWithTokenForSubcategory.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     PspImplicitAssignProcessToJob @ 0x140546C9C (PspImplicitAssignProcessToJob.c)
 *     SeAuditProcessCreation @ 0x1405AC188 (SeAuditProcessCreation.c)
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
  _KPROCESS *Process; // r13
  PVOID v12; // r14
  int inserted; // esi
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  char v16; // r14
  struct _KPROCESS *v17; // rdx
  struct _ACCESS_STATE *v18; // rbp
  __int64 v19; // rcx
  NTSTATUS v21; // eax
  const CHAR *ProcessImageFileName; // rax
  struct _KTHREAD *v23; // rax
  _STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-48h] BYREF
  char v26; // [rsp+A0h] [rbp+8h]
  PVOID v27; // [rsp+A8h] [rbp+10h] BYREF
  ACCESS_MASK v28; // [rsp+B0h] [rbp+18h]
  int v29; // [rsp+B8h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  *(_DWORD *)(*((_QWORD *)Object + 131) + 40LL) = *((_DWORD *)Object + 184);
  v12 = 0LL;
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(133LL, 0LL) )
    SeAuditProcessCreation((PEPROCESS)Object);
  if ( !a2
    || !*(_QWORD *)(a2 + 944)
    || (inserted = PspImplicitAssignProcessToJob(*(PVOID *)(a2 + 944), (ULONG_PTR)Object), inserted >= 0) )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
    v14 = (_QWORD *)qword_140348FA8;
    v15 = Object + 744;
    if ( *(__int64 **)qword_140348FA8 != &PsActiveProcessHead )
      __fastfail(3u);
    *((_QWORD *)Object + 94) = qword_140348FA8;
    *v15 = &PsActiveProcessHead;
    *v14 = v15;
    qword_140348FA8 = (__int64)(Object + 744);
    *((_QWORD *)Object + 231) = ++PspProcessSequenceNumber;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    if ( (Process[1].DirectoryTableBase & 0x800000000LL) != 0 )
    {
      inserted = -1073741558;
    }
    else if ( !Handle
           || (v21 = ObReferenceObjectByHandle(
                       Handle,
                       2u,
                       DbgkDebugObjectType,
                       KeGetCurrentThread()->PreviousMode,
                       &v27,
                       0LL),
               v12 = v27,
               inserted = v21,
               v21 >= 0) )
    {
      inserted = DbgkCopyProcessDebugPort((ULONG_PTR)Object);
      if ( v12 )
        ObfDereferenceObject(v12);
      if ( inserted >= 0 )
      {
        if ( v26 && (v29 & 2) != 0 )
          _InterlockedOr((volatile signed __int32 *)Object + 193, 2u);
        v16 = 0;
        if ( !a2 || (v17 = PsInitialSystemProcess, (PEPROCESS)a2 != PsInitialSystemProcess) )
        {
          if ( (a6 & 2) != 0 )
          {
            v17 = (struct _KPROCESS *)Object;
            v16 = 1;
          }
          else
          {
            v17 = Process;
          }
        }
        v18 = AccessState;
        inserted = SeCreateAccessStateEx(
                     0LL,
                     v17,
                     AccessState,
                     &AccessState[1].OperationID,
                     v28,
                     (GENERIC_MAPPING *)((char *)PsProcessType + 76));
        if ( inserted >= 0 )
        {
          ObfReferenceObjectWithTag(Object, 0x72437350u);
          inserted = ObInsertObjectEx(Object, v18, v16, 0LL, 0LL);
          if ( inserted >= 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x72437350u);
            v19 = *((_QWORD *)Object + 118);
            if ( !v19 )
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
                    v23 = KeGetCurrentThread();
                    --v23->SpecialApcDisable;
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
            inserted = PspValidateJobAffinityState(v19, (__int64)Object);
            if ( inserted >= 0 )
              goto LABEL_21;
          }
          SepDeleteAccessState((__int64)v18);
          SeReleaseSubjectContext(&v18->SubjectSecurityContext);
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
