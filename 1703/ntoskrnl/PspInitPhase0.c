/*
 * XREFs of PspInitPhase0 @ 0x1407FC734
 * Callers:
 *     PsInitSystem @ 0x140809E88 (PsInitSystem.c)
 * Callees:
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PsIumResumeAfterHibernate @ 0x1401388EC (PsIumResumeAfterHibernate.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x140154004 (SeRegisterObjectTypeMandatoryPolicy.c)
 *     VslGetNestedPageProtectionFlags @ 0x140159240 (VslGetNestedPageProtectionFlags.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     strcpy_s @ 0x14016FFF0 (strcpy_s.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExCreateHandleTable @ 0x14042B7E4 (ExCreateHandleTable.c)
 *     PspValidateMitigationOptions @ 0x14044C848 (PspValidateMitigationOptions.c)
 *     PspCreateProcess @ 0x14045D9C0 (PspCreateProcess.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x140567970 (PsCreateSystemThread.c)
 *     MmAllocateMappingAddress @ 0x1405728D0 (MmAllocateMappingAddress.c)
 *     PsChangeQuantumTable @ 0x1405839EC (PsChangeQuantumTable.c)
 *     RtlRunOnceInitialize @ 0x14059DDF0 (RtlRunOnceInitialize.c)
 *     ObCreateObjectType @ 0x14059EB50 (ObCreateObjectType.c)
 *     PspInitializeSiloStructures @ 0x1407FEF44 (PspInitializeSiloStructures.c)
 *     PspInitializeJobStructures @ 0x140824944 (PspInitializeJobStructures.c)
 */

char __fastcall PspInitPhase0(PVOID StartContext)
{
  int *v1; // r10
  __int64 v3; // r11
  int v4; // eax
  unsigned int v5; // r8d
  __int64 v6; // rax
  _RTL_RUN_ONCE *v7; // rcx
  _RTL_RUN_ONCE *v8; // rcx
  __int64 v9; // rax
  _RTL_RUN_ONCE *v10; // rcx
  _RTL_RUN_ONCE *v11; // rcx
  __int64 v12; // rax
  _RTL_RUN_ONCE *v13; // rcx
  _RTL_RUN_ONCE *v14; // rcx
  __int64 v15; // rax
  _KPROCESS *Process; // rcx
  char v17; // bl
  char v18; // bl
  __int64 *v19; // rdi
  int v20; // ebx
  void *v21; // rcx
  NTSTATUS v22; // eax
  _QWORD *v23; // rcx
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v26[16]; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+D8h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+E0h] [rbp-28h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v30; // [rsp+118h] [rbp+10h] BYREF
  int v31; // [rsp+128h] [rbp+20h] BYREF
  char v32; // [rsp+12Ch] [rbp+24h]
  int v33; // [rsp+130h] [rbp+28h]
  char v34; // [rsp+134h] [rbp+2Ch]
  int v35; // [rsp+138h] [rbp+30h]
  char v36; // [rsp+13Ch] [rbp+34h]
  int v37; // [rsp+140h] [rbp+38h]
  char v38; // [rsp+144h] [rbp+3Ch]
  int v39; // [rsp+148h] [rbp+40h]
  char v40; // [rsp+14Ch] [rbp+44h]
  int v41; // [rsp+150h] [rbp+48h]
  char v42; // [rsp+154h] [rbp+4Ch]

  PspMinimumWorkingSet += 30LL;
  v1 = &v31;
  PspMaximumWorkingSet += 300LL;
  v32 = 1;
  v31 = 0;
  v33 = 2;
  v36 = 1;
  v37 = 1;
  v34 = 3;
  v3 = 6LL;
  v35 = 3;
  v38 = 1;
  v39 = 4;
  v40 = 1;
  v41 = 5;
  v42 = 1;
  PspHardenedMitigationOptionsMap = 0uLL;
  do
  {
    v4 = *v1;
    v5 = *((unsigned __int8 *)v1 + 4);
    v1 += 2;
    *((_QWORD *)&PspHardenedMitigationOptionsMap + ((unsigned __int64)(unsigned int)(4 * v4) >> 6)) = ((unsigned __int64)v5 << ((4 * v4) & 0x3F)) | *((_QWORD *)&PspHardenedMitigationOptionsMap + ((unsigned __int64)(unsigned int)(4 * v4) >> 6)) & ~(3LL << ((4 * v4) & 0x3F));
    --v3;
  }
  while ( v3 );
  if ( (unsigned int)PspSystemMitigationOptionsLength < 0x10 )
    memset(
      (void *)(0x140000000LL + (unsigned int)PspSystemMitigationOptionsLength + 4080280LL),
      0,
      16LL - (unsigned int)PspSystemMitigationOptionsLength);
  PspSystemMitigationOptionsLength = 16;
  v30 = PspSystemMitigationOptions;
  if ( (int)PspValidateMitigationOptions((__m128i *)&v30, 1) < 0 )
  {
    v6 = 0LL;
    *((_QWORD *)&PspSystemMitigationOptions + 1) = 0LL;
  }
  else
  {
    v6 = PspSystemMitigationOptions;
  }
  v7 = &PspCreateThreadNotifyRoutine;
  *(_QWORD *)&PspSystemMitigationOptions = v6 & 0xFFFFFFFFCFFFFFFFuLL;
  do
  {
    RtlRunOnceInitialize(v7);
    v7 = v8 + 1;
  }
  while ( v9 != 1 );
  v10 = &PspCreateProcessNotifyRoutine;
  do
  {
    RtlRunOnceInitialize(v10);
    v10 = v11 + 1;
  }
  while ( v12 != 1 );
  v13 = &PspLoadImageNotifyRoutine;
  do
  {
    RtlRunOnceInitialize(v13);
    v13 = v14 + 1;
  }
  while ( v15 != 1 );
  PsChangeQuantumTable(0, PsRawPrioritySeparation);
  PspActiveProcessLock = 0LL;
  qword_140348FA8 = (__int64)&PsActiveProcessHead;
  PsActiveProcessHead = (__int64)&PsActiveProcessHead;
  Process = KeGetCurrentThread()->ApcState.Process;
  PsIdleProcess = Process;
  *(_QWORD *)&Process[1].Header.Lock = 0LL;
  ExInitializePushLock((PKSPIN_LOCK)&Process[1].ProfileListHead.Blink);
  *((_DWORD *)PsIdleProcess + 155) = 0;
  memset(v26, 0, 0x78uLL);
  LOWORD(v26[0]) = 120;
  v17 = BYTE2(v26[0]) | 8;
  *(_QWORD *)((char *)&v26[4] + 4) = 512LL;
  RtlInitUnicodeString(&DestinationString, L"Job");
  *(_QWORD *)((char *)v26 + 4) = 2048LL;
  v26[9] = PspJobDelete;
  HIDWORD(v26[5]) = 1552;
  v26[8] = PspJobClose;
  HIDWORD(v26[3]) = 2031679;
  BYTE2(v26[0]) = v17 & 0x7F;
  *(_OWORD *)((char *)&v26[1] + 4) = PspJobMapping;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v26, 0LL, (__int64)&PsJobType) >= 0
    && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsJobType, 1) >= 0 )
  {
    LODWORD(v26[1]) = 176;
    v18 = BYTE2(v26[0]) | 0x42;
    RtlInitUnicodeString(&DestinationString, L"Process");
    HIDWORD(v26[0]) = 32;
    v26[9] = PspProcessDelete;
    v26[5] = 0x82000001000LL;
    v26[7] = PspProcessOpen;
    v26[8] = PspProcessClose;
    *(_QWORD *)((char *)&v26[3] + 4) = 0x101000001FFFFFLL;
    *(_OWORD *)((char *)&v26[1] + 4) = PspProcessMapping;
    BYTE2(v26[0]) = v18 | 0x80;
    if ( (int)ObCreateObjectType(&DestinationString, (__int64)v26, 0LL, (__int64)&PsProcessType) >= 0
      && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsProcessType, 3) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Thread");
      BYTE2(v26[0]) |= 0x80u;
      v26[9] = PspThreadDelete;
      HIDWORD(v26[0]) = 4;
      v26[7] = PspThreadOpen;
      v26[5] = 0x81000000000LL;
      v26[8] = 0LL;
      *(_QWORD *)((char *)&v26[3] + 4) = 0x101800001FFFFFLL;
      *(_OWORD *)((char *)&v26[1] + 4) = PspThreadMapping;
      if ( (int)ObCreateObjectType(&DestinationString, (__int64)v26, 0LL, (__int64)&PsThreadType) >= 0
        && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsThreadType, 3) >= 0 )
      {
        memset(v26, 0, 0x78uLL);
        v19 = PspMemoryReserveObjectSizes;
        LOWORD(v26[0]) = 120;
        LODWORD(v26[1]) = 176;
        BYTE2(v26[0]) = BYTE2(v26[0]) & 0x7D | 2;
        v20 = 0;
        HIDWORD(v26[4]) = 512;
        *(_OWORD *)((char *)&v26[1] + 4) = PspMemReserveMapping;
        HIDWORD(v26[3]) = 983043;
        do
        {
          HIDWORD(v26[5]) = *(_DWORD *)v19;
          if ( (int)ObCreateObjectType(
                      (const UNICODE_STRING *)&PspMemoryReserveObjectNames[2 * v20],
                      (__int64)v26,
                      0LL,
                      (__int64)(&PspMemoryReserveObjectTypes + v20)) < 0 )
            return 0;
          ++v20;
          ++v19;
        }
        while ( v20 < 2 );
        RtlInitUnicodeString(&DestinationString, L"ActivityReference");
        memset(v26, 0, 0x78uLL);
        BYTE2(v26[0]) |= 4u;
        LOWORD(v26[0]) = 120;
        HIDWORD(v26[4]) = 1;
        LODWORD(v26[5]) = 8;
        LODWORD(v26[1]) = 402;
        *(_OWORD *)((char *)&v26[1] + 4) = PspActivityReferenceMapping;
        HIDWORD(v26[3]) = 2031616;
        v26[8] = PspCloseActivityReference;
        if ( (int)ObCreateObjectType(&DestinationString, (__int64)v26, 0LL, (__int64)&PspActivityReferenceObjectType) >= 0 )
        {
          if ( (unsigned __int8)PspInitializeJobStructures() )
          {
            if ( (unsigned __int8)PspInitializeSiloStructures() )
            {
              qword_140341790 = 0LL;
              qword_140341788 = (__int64)&PspWorkingSetChangeHead;
              PspWorkingSetChangeHead = (__int64)&PspWorkingSetChangeHead;
              PspAffinityUpdateLock = 0LL;
              PspCidTable = ExCreateHandleTable(0LL, 0LL);
              if ( PspCidTable )
              {
                RtlRunOnceInitialize(&PsWin32CallBack);
                RtlRunOnceInitialize(&PsWin32NullCallBack);
                *(_BYTE *)(PspCidTable + 44) |= 1u;
                PsReaperListHead = 0LL;
                qword_140349050 = (__int64)PspReaper;
                qword_140348FD0 = (__int64)PspProcessRundownWorker;
                PspProcessRundownCacheWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspProcessRundownWorkerSingle;
                qword_140349058 = 0LL;
                PsReaperWorkItem = 0LL;
                qword_140348FD8 = 0LL;
                PspProcessRundownWorkItem = 0LL;
                PspProcessRundownCacheWorkItem.Parameter = 0LL;
                PspProcessRundownCacheWorkItem.List.Flink = 0LL;
                v21 = (void *)(*((_QWORD *)PsIdleProcess + 107) & 0xFFFFFFFFFFFFFFF0uLL);
                ObjectAttributes.Length = 48;
                PspBootAccessToken = v21;
                memset(&ObjectAttributes.RootDirectory, 0, 20);
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( PspCreateProcess(
                       &PspInitialSystemProcessHandle,
                       0x1FFFFF,
                       (__int64)&ObjectAttributes,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       0LL) >= 0 )
                {
                  v22 = ObReferenceObjectByHandle(
                          PspInitialSystemProcessHandle,
                          0,
                          (POBJECT_TYPE)PsProcessType,
                          0,
                          &Object,
                          0LL);
                  PsInitialSystemProcess = (PEPROCESS)Object;
                  if ( v22 >= 0 )
                  {
                    _InterlockedOr((volatile signed __int32 *)Object + 516, 0x18u);
                    strcpy_s((char *)PsIdleProcess + 1104, 0xFuLL, "Idle");
                    strcpy_s((char *)&PsInitialSystemProcess[1].ActiveProcessors.Bitmap[12], 0xFuLL, "System");
                    PsInitialSystemProcess[1].ActiveProcessors.Bitmap[15] = (unsigned __int64)ExAllocatePoolWithTag(
                                                                                                NonPagedPoolNx,
                                                                                                0x10uLL,
                                                                                                0x61506553u);
                    v23 = (_QWORD *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[15];
                    if ( v23 )
                    {
                      *v23 = 0LL;
                      v23[1] = 0LL;
                      if ( PsCreateSystemThread(
                             &ThreadHandle,
                             0x1FFFFFu,
                             &ObjectAttributes,
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
                          PspIumLogBuffer = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x4C6D7549u);
                          PsIumResumeAfterHibernate();
                          if ( (VslGetNestedPageProtectionFlags() & 0x40) != 0 )
                            *(_QWORD *)&PspSystemMitigationOptions = PspSystemMitigationOptions & 0xFFFFFF0FFFFFFFFFuLL | 0x5000000000LL;
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
  return 0;
}
