/*
 * XREFs of PspInitPhase0 @ 0x1408413C0
 * Callers:
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 * Callees:
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     VslGetNestedPageProtectionFlags @ 0x140143BC0 (VslGetNestedPageProtectionFlags.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x140146194 (SeRegisterObjectTypeMandatoryPolicy.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14014B6D0 (KeRegisterBugCheckReasonCallback.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     strcpy_s @ 0x1401647F0 (strcpy_s.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PsIumResumeAfterHibernate @ 0x14024F600 (PsIumResumeAfterHibernate.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExCreateHandleTable @ 0x14045DA4C (ExCreateHandleTable.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x140554950 (PsCreateSystemThread.c)
 *     PspValidateMitigationOptions @ 0x1405805E8 (PspValidateMitigationOptions.c)
 *     PspValidateMitigationAuditOptions @ 0x14058217C (PspValidateMitigationAuditOptions.c)
 *     MmAllocateMappingAddress @ 0x140583480 (MmAllocateMappingAddress.c)
 *     PspCreateProcess @ 0x140599DF0 (PspCreateProcess.c)
 *     RtlRunOnceInitialize @ 0x1405C6200 (RtlRunOnceInitialize.c)
 *     ObCreateObjectType @ 0x1405C6D70 (ObCreateObjectType.c)
 *     PsChangeQuantumTable @ 0x1405E7654 (PsChangeQuantumTable.c)
 *     PspInitializeSiloStructures @ 0x140843AC8 (PspInitializeSiloStructures.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140852E58 (PspInitializeSystemPartitionPhase0.c)
 *     PspInitializeJobStructures @ 0x140855D10 (PspInitializeJobStructures.c)
 */

char __fastcall PspInitPhase0(PVOID StartContext)
{
  char *v1; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  char v6; // cl
  size_t v7; // rbx
  _RTL_RUN_ONCE *v8; // rcx
  _RTL_RUN_ONCE *v9; // rcx
  __int64 v10; // rax
  _RTL_RUN_ONCE *v11; // rcx
  _RTL_RUN_ONCE *v12; // rcx
  __int64 v13; // rax
  _RTL_RUN_ONCE *v14; // rcx
  _RTL_RUN_ONCE *v15; // rcx
  __int64 v16; // rax
  _KPROCESS *Process; // rcx
  char v18; // bl
  char v19; // bl
  __int64 *v20; // rdi
  int v21; // ebx
  HANDLE *v22; // rbx
  NTSTATUS v23; // eax
  PVOID v24; // rcx
  _QWORD *v25; // rcx
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v28[16]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+E8h] [rbp-20h] BYREF
  HANDLE ThreadHandle; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v31; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v32; // [rsp+108h] [rbp+0h] BYREF
  int v33; // [rsp+118h] [rbp+10h]
  char v34; // [rsp+11Ch] [rbp+14h] BYREF
  int v35; // [rsp+120h] [rbp+18h]
  char v36; // [rsp+124h] [rbp+1Ch]
  int v37; // [rsp+128h] [rbp+20h]
  char v38; // [rsp+12Ch] [rbp+24h]
  int v39; // [rsp+130h] [rbp+28h]
  char v40; // [rsp+134h] [rbp+2Ch]
  int v41; // [rsp+138h] [rbp+30h]
  char v42; // [rsp+13Ch] [rbp+34h]
  int v43; // [rsp+140h] [rbp+38h]
  char v44; // [rsp+144h] [rbp+3Ch]

  PspMinimumWorkingSet += 30LL;
  v1 = &v34;
  PspMaximumWorkingSet += 300LL;
  v34 = 1;
  v33 = 0;
  v35 = 2;
  v38 = 1;
  v39 = 1;
  v36 = 3;
  v3 = 6LL;
  v37 = 3;
  v40 = 1;
  v41 = 4;
  v42 = 1;
  v43 = 5;
  v44 = 1;
  PspHardenedMitigationOptionsMap = 0uLL;
  do
  {
    v4 = (unsigned int)(4 * *((_DWORD *)v1 - 1));
    v5 = (unsigned __int8)*v1;
    v6 = (4 * *(v1 - 4)) & 0x3F;
    v1 += 8;
    *((_QWORD *)&PspHardenedMitigationOptionsMap + (v4 >> 6)) = (v5 << v6) | *((_QWORD *)&PspHardenedMitigationOptionsMap
                                                                             + (v4 >> 6)) & ~(3LL << v6);
    --v3;
  }
  while ( v3 );
  if ( (unsigned int)PspSystemMitigationOptionsLength < 0x10 )
    memset(
      (char *)&PspSystemMitigationOptions + (unsigned int)PspSystemMitigationOptionsLength,
      0,
      16LL - (unsigned int)PspSystemMitigationOptionsLength);
  PspSystemMitigationOptionsLength = 16;
  v31 = PspSystemMitigationOptions;
  if ( (int)PspValidateMitigationOptions((__m128i *)&v31, 1) < 0 )
    PspSystemMitigationOptions = 0uLL;
  *(_QWORD *)&PspSystemMitigationOptions = PspSystemMitigationOptions & 0xFFFFFFFFCFFFFFFFuLL;
  v7 = (unsigned int)PspSystemMitigationAuditOptionsLength;
  if ( (unsigned int)PspSystemMitigationAuditOptionsLength < 0x10 )
    memset(
      (char *)&PspSystemMitigationAuditOptions + (unsigned int)PspSystemMitigationAuditOptionsLength,
      0,
      16LL - (unsigned int)PspSystemMitigationAuditOptionsLength);
  v32 = PspSystemMitigationAuditOptions;
  if ( (int)PspValidateMitigationAuditOptions(&v32) < 0 )
    memset(&PspSystemMitigationAuditOptions, 0, v7);
  v8 = &PspCreateThreadNotifyRoutine;
  do
  {
    RtlRunOnceInitialize(v8);
    v8 = v9 + 1;
  }
  while ( v10 != 1 );
  v11 = &PspCreateProcessNotifyRoutine;
  do
  {
    RtlRunOnceInitialize(v11);
    v11 = v12 + 1;
  }
  while ( v13 != 1 );
  v14 = &PspLoadImageNotifyRoutine;
  do
  {
    RtlRunOnceInitialize(v14);
    v14 = v15 + 1;
  }
  while ( v16 != 1 );
  PsChangeQuantumTable(0, PsRawPrioritySeparation);
  PspActiveProcessLock = 0LL;
  qword_140362B28 = (__int64)&PsActiveProcessHead;
  PsActiveProcessHead = (__int64)&PsActiveProcessHead;
  Process = KeGetCurrentThread()->ApcState.Process;
  PsIdleProcess = Process;
  *(_QWORD *)&Process[1].Header.Lock = 0LL;
  ExInitializePushLock((PKSPIN_LOCK)&Process[1].ProfileListHead.Blink);
  *((_DWORD *)PsIdleProcess + 155) = 0;
  memset(v28, 0, 0x78uLL);
  LOWORD(v28[0]) = 120;
  v18 = BYTE2(v28[0]) | 8;
  *(_QWORD *)((char *)&v28[4] + 4) = 512LL;
  RtlInitUnicodeString(&DestinationString, L"Job");
  *(_QWORD *)((char *)v28 + 4) = 2048LL;
  v28[9] = PspJobDelete;
  HIDWORD(v28[5]) = 1568;
  v28[8] = PspJobClose;
  HIDWORD(v28[3]) = 2031679;
  BYTE2(v28[0]) = v18 & 0x7F;
  *(_OWORD *)((char *)&v28[1] + 4) = PspJobMapping;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v28, 0LL, (__int64)&PsJobType) >= 0
    && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsJobType, 1) >= 0 )
  {
    LODWORD(v28[1]) = 176;
    v19 = BYTE2(v28[0]) | 0x42;
    RtlInitUnicodeString(&DestinationString, L"Process");
    HIDWORD(v28[0]) = 32;
    v28[9] = PspProcessDelete;
    v28[5] = 0x84000001000LL;
    v28[7] = PspProcessOpen;
    v28[8] = PspProcessClose;
    HIDWORD(v28[3]) = 0x1FFFFF;
    LODWORD(v28[4]) = 1052672;
    *(_OWORD *)((char *)&v28[1] + 4) = PspProcessMapping;
    BYTE2(v28[0]) = v19 | 0x80;
    if ( (int)ObCreateObjectType(&DestinationString, (__int64)v28, 0LL, (__int64)&PsProcessType) >= 0
      && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsProcessType, 3) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Thread");
      BYTE2(v28[0]) |= 0x80u;
      v28[9] = PspThreadDelete;
      HIDWORD(v28[0]) = 4;
      v28[7] = PspThreadOpen;
      v28[5] = 0x81800000000LL;
      v28[8] = 0LL;
      HIDWORD(v28[3]) = 0x1FFFFF;
      LODWORD(v28[4]) = 1054720;
      *(_OWORD *)((char *)&v28[1] + 4) = PspThreadMapping;
      if ( (int)ObCreateObjectType(&DestinationString, (__int64)v28, 0LL, (__int64)&PsThreadType) >= 0
        && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsThreadType, 3) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Partition");
        memset(v28, 0, 0x78uLL);
        BYTE2(v28[0]) |= 0xCu;
        v28[7] = PspOpenPartitionHandle;
        LOWORD(v28[0]) = 120;
        v28[8] = PspClosePartitionHandle;
        LODWORD(v28[1]) = 16;
        v28[9] = PspDeletePartition;
        HIDWORD(v28[3]) = 2031619;
        HIDWORD(v28[4]) = 512;
        *(_OWORD *)((char *)&v28[1] + 4) = PspPartitionMapping;
        HIDWORD(v28[5]) = 128;
        if ( (int)ObCreateObjectType(&DestinationString, (__int64)v28, 0LL, (__int64)&PsPartitionType) >= 0 )
        {
          memset(v28, 0, 0x78uLL);
          LOWORD(v28[0]) = 120;
          HIDWORD(v28[4]) = 512;
          BYTE2(v28[0]) = BYTE2(v28[0]) & 0x7D | 2;
          v20 = PspMemoryReserveObjectSizes;
          LODWORD(v28[1]) = 176;
          v21 = 0;
          *(_OWORD *)((char *)&v28[1] + 4) = PspMemReserveMapping;
          HIDWORD(v28[3]) = 983043;
          do
          {
            HIDWORD(v28[5]) = *(_DWORD *)v20;
            if ( (int)ObCreateObjectType(
                        (const UNICODE_STRING *)&PspMemoryReserveObjectNames[2 * v21],
                        (__int64)v28,
                        0LL,
                        (__int64)(&PspMemoryReserveObjectTypes + v21)) < 0 )
              return 0;
            ++v21;
            ++v20;
          }
          while ( v21 < 2 );
          RtlInitUnicodeString(&DestinationString, L"ActivityReference");
          memset(v28, 0, 0x78uLL);
          BYTE2(v28[0]) |= 4u;
          LOWORD(v28[0]) = 120;
          *(_QWORD *)((char *)&v28[4] + 4) = 0x800000001LL;
          LODWORD(v28[1]) = 402;
          *(_OWORD *)((char *)&v28[1] + 4) = PspActivityReferenceMapping;
          HIDWORD(v28[3]) = 2031616;
          v28[8] = PspCloseActivityReference;
          if ( (int)ObCreateObjectType(&DestinationString, (__int64)v28, 0LL, (__int64)&PspActivityReferenceObjectType) >= 0 )
          {
            if ( (unsigned __int8)PspInitializeJobStructures() )
            {
              if ( (unsigned __int8)PspInitializeSiloStructures() )
              {
                qword_140359F30 = 0LL;
                qword_140359F28 = (__int64)&PspWorkingSetChangeHead;
                PspWorkingSetChangeHead = (__int64)&PspWorkingSetChangeHead;
                PspAffinityUpdateLock = 0LL;
                *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 5) = (PBOOLEAN)ExCreateHandleTable(0LL, 0LL);
                if ( *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 5) )
                {
                  RtlRunOnceInitialize(&PsWin32CallBack);
                  RtlRunOnceInitialize(&PsWin32NullCallBack);
                  (*(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 5))[44] |= 1u;
                  qword_140362B50 = (__int64)PspReaper;
                  qword_140362B10 = (__int64)PspProcessRundownWorker;
                  PspProcessRundownCacheWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspProcessRundownWorkerSingle;
                  PsReaperListHead = 0LL;
                  qword_140362B58 = 0LL;
                  PsReaperWorkItem = 0LL;
                  qword_140362B18 = 0LL;
                  PspProcessRundownWorkItem = 0LL;
                  PspProcessRundownCacheWorkItem.Parameter = 0LL;
                  PspProcessRundownCacheWorkItem.List.Flink = 0LL;
                  PspBootAccessToken = (PVOID)(*((_QWORD *)PsIdleProcess + 107) & 0xFFFFFFFFFFFFFFF0uLL);
                  if ( (int)PspInitializeSystemPartitionPhase0() >= 0 )
                  {
                    v22 = (HANDLE *)PspSystemPartition;
                    if ( PspCreateProcess((_QWORD *)PspSystemPartition + 14, 0x1FFFFFu, 0LL, 0LL, 0, 0, 0LL, 0LL, 0LL) >= 0 )
                    {
                      v23 = ObReferenceObjectByHandle(v22[14], 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
                      v24 = Object;
                      v22[13] = Object;
                      if ( v23 >= 0 )
                      {
                        PsInitialSystemProcess = (PEPROCESS)v24;
                        _InterlockedOr((volatile signed __int32 *)v24 + 522, 0x40000000u);
                        _InterlockedOr(
                          (volatile signed __int32 *)&PsInitialSystemProcess[2].UserDirectoryTableBase + 1,
                          0x2000u);
                        _InterlockedOr(
                          (volatile signed __int32 *)PsInitialSystemProcess[2].ActiveProcessors.Bitmap + 1,
                          0x1000u);
                        strcpy_s((char *)PsIdleProcess + 1104, 0xFuLL, "Idle");
                        strcpy_s((char *)&PsInitialSystemProcess[1].ActiveProcessors.Bitmap[12], 0xFuLL, "System");
                        PsInitialSystemProcess[1].ActiveProcessors.Bitmap[15] = (unsigned __int64)ExAllocatePoolWithTag(
                                                                                                    NonPagedPoolNx,
                                                                                                    0x10uLL,
                                                                                                    0x61506553u);
                        v25 = (_QWORD *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[15];
                        if ( v25 )
                        {
                          *v25 = 0LL;
                          v25[1] = 0LL;
                          if ( PsCreateSystemThread(
                                 &ThreadHandle,
                                 0x1FFFFFu,
                                 0LL,
                                 0LL,
                                 0LL,
                                 (PKSTART_ROUTINE)Phase1Initialization,
                                 StartContext) >= 0 )
                          {
                            ObCloseHandle(ThreadHandle, 0);
                            if ( !VslVsmEnabled )
                              return 1;
                            PspIumFreeMapping = MmAllocateMappingAddress(0x1000uLL, 0x466D7356u);
                            if ( PspIumFreeMapping )
                            {
                              PspIumLogBuffer = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x4C6D7549u);
                              PsIumResumeAfterHibernate();
                              if ( (VslGetNestedPageProtectionFlags() & 0x40) != 0 )
                                *(_QWORD *)&PspSystemMitigationOptions = PspSystemMitigationOptions & 0xFFFFFF0FFFFFFFFFuLL | 0x5000000000LL;
                              if ( PspIumLogBuffer )
                              {
                                PspVsmLogCallbackRecord.State = 0;
                                KeRegisterBugCheckReasonCallback(
                                  &PspVsmLogCallbackRecord,
                                  (PKBUGCHECK_REASON_CALLBACK_ROUTINE)PspVsmLogBugCheckCallback,
                                  KbCallbackSecondaryDumpData,
                                  (PUCHAR)"SecureKernelFailureLog");
                              }
                              return 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
