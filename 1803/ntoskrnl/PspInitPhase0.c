/*
 * XREFs of PspInitPhase0 @ 0x1408A0D54
 * Callers:
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 * Callees:
 *     ExInitializePushLock @ 0x1400BA070 (ExInitializePushLock.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PsIumResumeAfterHibernate @ 0x14014DE60 (PsIumResumeAfterHibernate.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140169850 (KeRegisterBugCheckReasonCallback.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x14017149C (SeRegisterObjectTypeMandatoryPolicy.c)
 *     VslGetNestedPageProtectionFlags @ 0x14017D610 (VslGetNestedPageProtectionFlags.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     strcpy_s @ 0x14018E6D0 (strcpy_s.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x14052ABF0 (PsCreateSystemThread.c)
 *     ExCreateHandleTable @ 0x140553220 (ExCreateHandleTable.c)
 *     MmAllocateMappingAddress @ 0x140572870 (MmAllocateMappingAddress.c)
 *     PspValidateMitigationOptions @ 0x140573C2C (PspValidateMitigationOptions.c)
 *     PspValidateMitigationAuditOptions @ 0x140574090 (PspValidateMitigationAuditOptions.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     PspCreateProcess @ 0x1405E9350 (PspCreateProcess.c)
 *     PsChangeQuantumTable @ 0x1406116A8 (PsChangeQuantumTable.c)
 *     RtlRunOnceInitialize @ 0x1406216C0 (RtlRunOnceInitialize.c)
 *     ObCreateObjectType @ 0x140621880 (ObCreateObjectType.c)
 *     PspInitializeSiloStructures @ 0x14089FF04 (PspInitializeSiloStructures.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x1408C4278 (PspInitializeSystemPartitionPhase0.c)
 *     PspInitializeJobStructures @ 0x1408C8058 (PspInitializeJobStructures.c)
 */

char __fastcall PspInitPhase0(PVOID StartContext)
{
  char *v1; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  char v6; // cl
  __int64 v7; // r11
  int *v8; // r8
  __int64 v9; // r9
  int v10; // eax
  size_t v11; // rbx
  _RTL_RUN_ONCE *v12; // rcx
  _RTL_RUN_ONCE *v13; // rcx
  __int64 v14; // rax
  _RTL_RUN_ONCE *v15; // rcx
  _RTL_RUN_ONCE *v16; // rcx
  __int64 v17; // rax
  _RTL_RUN_ONCE *v18; // rcx
  _RTL_RUN_ONCE *v19; // rcx
  __int64 v20; // rax
  _KPROCESS *Process; // rcx
  __int64 *v22; // rdi
  int v23; // ebx
  HANDLE *v24; // rbx
  NTSTATUS v25; // eax
  PVOID v26; // rcx
  _QWORD *v27; // rcx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v30[16]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-20h] BYREF
  HANDLE ThreadHandle; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v33; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v34; // [rsp+100h] [rbp+0h] BYREF
  int v35; // [rsp+110h] [rbp+10h]
  char v36; // [rsp+114h] [rbp+14h] BYREF
  int v37; // [rsp+118h] [rbp+18h]
  char v38; // [rsp+11Ch] [rbp+1Ch]
  int v39; // [rsp+120h] [rbp+20h]
  char v40; // [rsp+124h] [rbp+24h]
  int v41; // [rsp+128h] [rbp+28h]
  char v42; // [rsp+12Ch] [rbp+2Ch]
  int v43; // [rsp+130h] [rbp+30h]
  char v44; // [rsp+134h] [rbp+34h]
  int v45; // [rsp+138h] [rbp+38h]
  char v46; // [rsp+13Ch] [rbp+3Ch]
  _OWORD v47[2]; // [rsp+140h] [rbp+40h] BYREF

  PspMinimumWorkingSet += 30LL;
  v1 = &v36;
  PspMaximumWorkingSet += 300LL;
  v35 = 0;
  v36 = 1;
  v37 = 2;
  v38 = 3;
  v3 = 6LL;
  v39 = 3;
  v40 = 1;
  v41 = 1;
  v42 = 1;
  v43 = 4;
  v44 = 1;
  v45 = 5;
  v46 = 1;
  v47[0] = _mm_load_si128((const __m128i *)&_xmm);
  v47[1] = _mm_load_si128((const __m128i *)&_xmm);
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
  v33 = PspSystemMitigationOptions;
  if ( (int)PspValidateMitigationOptions((__m128i *)&v33, 1) < 0 )
    PspSystemMitigationOptions = 0uLL;
  v8 = (int *)v47;
  v9 = 8LL;
  do
  {
    v10 = *v8++;
    *(_QWORD *)(v7 + 8 * ((unsigned __int64)(unsigned int)(4 * v10) >> 6) + 4507016) &= ~(3LL << ((4 * v10) & 0x3F));
    --v9;
  }
  while ( v9 );
  v11 = (unsigned int)PspSystemMitigationAuditOptionsLength;
  if ( (unsigned int)PspSystemMitigationAuditOptionsLength < 0x10 )
    memset(
      (char *)&PspSystemMitigationAuditOptions + (unsigned int)PspSystemMitigationAuditOptionsLength,
      0,
      16LL - (unsigned int)PspSystemMitigationAuditOptionsLength);
  v34 = PspSystemMitigationAuditOptions;
  if ( (int)PspValidateMitigationAuditOptions(&v34) < 0 )
    memset(&PspSystemMitigationAuditOptions, 0, v11);
  v12 = &PspCreateThreadNotifyRoutine;
  do
  {
    RtlRunOnceInitialize(v12);
    v12 = v13 + 1;
  }
  while ( v14 != 1 );
  v15 = &PspCreateProcessNotifyRoutine;
  do
  {
    RtlRunOnceInitialize(v15);
    v15 = v16 + 1;
  }
  while ( v17 != 1 );
  v18 = &PspLoadImageNotifyRoutine;
  do
  {
    RtlRunOnceInitialize(v18);
    v18 = v19 + 1;
  }
  while ( v20 != 1 );
  PsChangeQuantumTable(0, PsRawPrioritySeparation);
  PspActiveProcessLock = 0LL;
  qword_1403A62C8 = (__int64)&PsActiveProcessHead;
  PsActiveProcessHead = (__int64)&PsActiveProcessHead;
  Process = KeGetCurrentThread()->ApcState.Process;
  PsIdleProcess = Process;
  *(_QWORD *)&Process[1].Header.Lock = 0LL;
  ExInitializePushLock((PKSPIN_LOCK)&Process[1].ProfileListHead.Blink);
  *((_DWORD *)PsIdleProcess + 155) = 0;
  memset(v30, 0, 0x78uLL);
  LOWORD(v30[0]) = 120;
  *(_QWORD *)((char *)&v30[4] + 4) = 512LL;
  RtlInitUnicodeString(&DestinationString, L"Job");
  *(_QWORD *)((char *)v30 + 4) = 2048LL;
  v30[9] = PspJobDelete;
  HIDWORD(v30[5]) = 1568;
  v30[8] = PspJobClose;
  HIDWORD(v30[3]) = 2031679;
  BYTE2(v30[0]) = BYTE2(v30[0]) & 0x77 | 8;
  *(_OWORD *)((char *)&v30[1] + 4) = PspJobMapping;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PsJobType) >= 0
    && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsJobType, 1) >= 0 )
  {
    LODWORD(v30[1]) = 176;
    RtlInitUnicodeString(&DestinationString, L"Process");
    BYTE2(v30[0]) |= 0xC2u;
    v30[9] = PspProcessDelete;
    HIDWORD(v30[0]) = 32;
    v30[7] = PspProcessOpen;
    v30[5] = 0x84800001000LL;
    v30[8] = PspProcessClose;
    HIDWORD(v30[3]) = 0x1FFFFF;
    LODWORD(v30[4]) = 1052672;
    *(_OWORD *)((char *)&v30[1] + 4) = PspProcessMapping;
    if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PsProcessType) >= 0
      && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsProcessType, 3) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Thread");
      BYTE2(v30[0]) |= 0x80u;
      v30[9] = PspThreadDelete;
      HIDWORD(v30[0]) = 4;
      v30[7] = PspThreadOpen;
      v30[5] = 0x81800000000LL;
      v30[8] = 0LL;
      HIDWORD(v30[3]) = 0x1FFFFF;
      LODWORD(v30[4]) = 1054720;
      *(_OWORD *)((char *)&v30[1] + 4) = PspThreadMapping;
      if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PsThreadType) >= 0
        && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsThreadType, 3) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Partition");
        memset(v30, 0, 0x78uLL);
        BYTE2(v30[0]) |= 0xCu;
        v30[7] = PspOpenPartitionHandle;
        LOWORD(v30[0]) = 120;
        v30[8] = PspClosePartitionHandle;
        LODWORD(v30[1]) = 16;
        v30[9] = PspDeletePartition;
        HIDWORD(v30[3]) = 2031619;
        HIDWORD(v30[4]) = 512;
        *(_OWORD *)((char *)&v30[1] + 4) = PspPartitionMapping;
        HIDWORD(v30[5]) = 128;
        if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PsPartitionType) >= 0 )
        {
          memset(v30, 0, 0x78uLL);
          LOWORD(v30[0]) = 120;
          HIDWORD(v30[4]) = 512;
          BYTE2(v30[0]) = BYTE2(v30[0]) & 0x7D | 2;
          v22 = PspMemoryReserveObjectSizes;
          LODWORD(v30[1]) = 176;
          v23 = 0;
          *(_OWORD *)((char *)&v30[1] + 4) = PspMemReserveMapping;
          HIDWORD(v30[3]) = 983043;
          do
          {
            HIDWORD(v30[5]) = *(_DWORD *)v22;
            if ( (int)ObCreateObjectType(
                        (const UNICODE_STRING *)&PspMemoryReserveObjectNames[2 * v23],
                        (__int64)v30,
                        0LL,
                        (__int64)(&PspMemoryReserveObjectTypes + v23)) < 0 )
              return 0;
            ++v23;
            ++v22;
          }
          while ( v23 < 2 );
          RtlInitUnicodeString(&DestinationString, L"ActivityReference");
          memset(v30, 0, 0x78uLL);
          BYTE2(v30[0]) |= 4u;
          LOWORD(v30[0]) = 120;
          *(_QWORD *)((char *)&v30[4] + 4) = 0x800000001LL;
          LODWORD(v30[1]) = 402;
          *(_OWORD *)((char *)&v30[1] + 4) = PspActivityReferenceMapping;
          HIDWORD(v30[3]) = 2031616;
          v30[8] = PspCloseActivityReference;
          if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PspActivityReferenceObjectType) >= 0 )
          {
            if ( (unsigned __int8)PspInitializeJobStructures() )
            {
              if ( PspInitializeSiloStructures() )
              {
                qword_14039D570 = 0LL;
                qword_14039D568 = (__int64)&PspWorkingSetChangeHead;
                PspWorkingSetChangeHead = (__int64)&PspWorkingSetChangeHead;
                PspAffinityUpdateLock = 0LL;
                *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 6) = (PBOOLEAN)ExCreateHandleTable(0LL, 0LL);
                if ( *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 6) )
                {
                  RtlRunOnceInitialize(&PsWin32CallBack);
                  RtlRunOnceInitialize(&PsWin32NullCallBack);
                  (*(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 6))[44] |= 1u;
                  qword_1403A62B0 = (__int64)PspReaper;
                  qword_1403A6270 = (__int64)PspProcessRundownWorker;
                  PspProcessRundownCacheWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspProcessRundownWorkerSingle;
                  PsReaperListHead = 0LL;
                  qword_1403A62B8 = 0LL;
                  PsReaperWorkItem = 0LL;
                  qword_1403A6278 = 0LL;
                  PspProcessRundownWorkItem = 0LL;
                  PspProcessRundownCacheWorkItem.Parameter = 0LL;
                  PspProcessRundownCacheWorkItem.List.Flink = 0LL;
                  PspBootAccessToken = (PVOID)(*((_QWORD *)PsIdleProcess + 107) & 0xFFFFFFFFFFFFFFF0uLL);
                  if ( (int)PspInitializeSystemPartitionPhase0() >= 0 )
                  {
                    v24 = (HANDLE *)PspSystemPartition;
                    if ( PspCreateProcess((__int64)PspSystemPartition + 112, 0x1FFFFFu, 0LL, 0LL, 0, 0, 0LL, 0LL, 0LL) >= 0 )
                    {
                      v25 = ObReferenceObjectByHandle(v24[14], 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
                      v26 = Object;
                      v24[13] = Object;
                      if ( v25 >= 0 )
                      {
                        PsInitialSystemProcess = (PEPROCESS)v26;
                        _InterlockedOr((volatile signed __int32 *)v26 + 522, 0x40000000u);
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
                        v27 = (_QWORD *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[15];
                        if ( v27 )
                        {
                          *v27 = 0LL;
                          v27[1] = 0LL;
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
