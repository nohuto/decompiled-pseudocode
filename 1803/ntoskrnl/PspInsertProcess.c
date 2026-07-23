/*
 * XREFs of PspInsertProcess @ 0x1404EABB0
 * Callers:
 *     NtCreateUserProcess @ 0x1404F200C (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x1405E9350 (PspCreateProcess.c)
 *     PsCreateMinimalProcess @ 0x14062C5DC (PsCreateMinimalProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PspUnlockProcessListExclusive @ 0x14006A068 (PspUnlockProcessListExclusive.c)
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     PsGetProcessImageFileName @ 0x1400C1120 (PsGetProcessImageFileName.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     DbgkCopyProcessDebugPort @ 0x1404EAE58 (DbgkCopyProcessDebugPort.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1404ECCC0 (SeAuditingWithTokenForSubcategory.c)
 *     RtlPrefixUnicodeString @ 0x1405059D0 (RtlPrefixUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     PspImplicitAssignProcessToJob @ 0x140531810 (PspImplicitAssignProcessToJob.c)
 *     SeCreateAccessStateEx @ 0x1405626A0 (SeCreateAccessStateEx.c)
 *     PspValidateJobAffinityState @ 0x140579080 (PspValidateJobAffinityState.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeAuditProcessCreation @ 0x1406414B8 (SeAuditProcessCreation.c)
 */

__int64 __fastcall PspInsertProcess(
        char *Object,
        struct _KPROCESS *a2,
        unsigned int a3,
        unsigned int a4,
        HANDLE Handle,
        char a6,
        __int64 a7,
        struct _ACCESS_STATE *a8)
{
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r13
  PVOID v13; // r14
  __int64 v14; // rdx
  int AccessState; // esi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  char v22; // r14
  int v23; // edx
  struct _ACCESS_STATE *v24; // rbp
  unsigned int v25; // r13d
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  NTSTATUS v31; // eax
  const CHAR *ProcessImageFileName; // rax
  struct _KTHREAD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  _STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-48h] BYREF
  char v39; // [rsp+A0h] [rbp+8h]
  PVOID v40; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v41; // [rsp+B0h] [rbp+18h]
  unsigned int v42; // [rsp+B8h] [rbp+20h]

  v42 = a4;
  v41 = a3;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  *(_DWORD *)(*((_QWORD *)Object + 131) + 40LL) = *((_DWORD *)Object + 184);
  v13 = 0LL;
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(133LL, 0LL) )
    SeAuditProcessCreation((ULONG_PTR)Object);
  if ( !a2
    || !a2[1].Affinity.Bitmap[16]
    || (AccessState = PspImplicitAssignProcessToJob(a2[1].Affinity.Bitmap[16], Object, a4), AccessState >= 0) )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
    v20 = (_QWORD *)qword_1403A62C8;
    v21 = Object + 744;
    if ( *(__int64 **)qword_1403A62C8 != &PsActiveProcessHead )
      __fastfail(3u);
    *((_QWORD *)Object + 94) = qword_1403A62C8;
    *v21 = &PsActiveProcessHead;
    *v20 = v21;
    qword_1403A62C8 = (__int64)(Object + 744);
    *((_QWORD *)Object + 234) = ++PspProcessSequenceNumber;
    PspUnlockProcessListExclusive((__int64)CurrentThread, (__int64)&PsActiveProcessHead, v18, v19);
    if ( (Process[1].DirectoryTableBase & 0x800000000LL) != 0 )
    {
      AccessState = -1073741558;
    }
    else if ( !Handle
           || (v31 = ObReferenceObjectByHandle(
                       Handle,
                       2u,
                       DbgkDebugObjectType,
                       KeGetCurrentThread()->PreviousMode,
                       &v40,
                       0LL),
               v13 = v40,
               AccessState = v31,
               v31 >= 0) )
    {
      AccessState = DbgkCopyProcessDebugPort((ULONG_PTR)Object);
      if ( v13 )
        ObfDereferenceObject(v13);
      if ( AccessState >= 0 )
      {
        if ( v39 && (v42 & 2) != 0 )
          _InterlockedOr((volatile signed __int32 *)Object + 193, 2u);
        v22 = 0;
        if ( !a2 || (v23 = (int)PsInitialSystemProcess, a2 != PsInitialSystemProcess) )
        {
          if ( (a6 & 2) != 0 )
          {
            v23 = (int)Object;
            v22 = 1;
          }
          else
          {
            v23 = (int)Process;
          }
        }
        v24 = a8;
        v25 = v41;
        AccessState = SeCreateAccessStateEx(0, v23, (_DWORD)a8, (int)a8 + 160, v41, (__int64)PsProcessType + 76);
        if ( AccessState >= 0 )
        {
          ObfReferenceObjectWithTag(Object, 0x72437350u);
          AccessState = ObInsertObjectEx(Object, v24, v25, 0, v22, 0LL, 0LL);
          if ( AccessState >= 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x72437350u);
            v29 = *((_QWORD *)Object + 118);
            if ( !v29 )
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
                    v33 = KeGetCurrentThread();
                    --v33->SpecialApcDisable;
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
                    if ( (ObpTraceFlags & 0x20) != 0 && RtlPrefixUnicodeString(&String1, ObpTraceProcessName, 1u) )
                      _InterlockedOr((volatile signed __int32 *)Object + 192, 0x200u);
                    if ( (_InterlockedExchangeAdd64(
                            (volatile signed __int64 *)&ObpStackTraceLock,
                            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock, v34, v35, v36);
                    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
                    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
                    RtlFreeAnsiString(&String1);
                  }
                }
              }
              if ( (a6 & 1) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)Object + 91, v26, v27, v28);
                KeAbPostRelease((ULONG_PTR)(Object + 728));
                KeLeaveCriticalRegionThread((__int64)CurrentThread);
              }
              return 0LL;
            }
            AccessState = PspValidateJobAffinityState(v29, Object);
            if ( AccessState >= 0 )
              goto LABEL_21;
          }
          SepDeleteAccessState((__int64)v24);
          SeReleaseSubjectContext(&v24->SubjectSecurityContext);
        }
      }
    }
  }
  if ( (a6 & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)Object + 91, v14, v16, v17);
    KeAbPostRelease((ULONG_PTR)(Object + 728));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return (unsigned int)AccessState;
}
