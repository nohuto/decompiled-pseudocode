/*
 * XREFs of NtQueryInformationThread @ 0x1404CB7E0
 * Callers:
 *     <none>
 * Callees:
 *     IoThreadToProcess @ 0x14006A740 (IoThreadToProcess.c)
 *     PsGetWorkOnBehalfThread @ 0x14006AD64 (PsGetWorkOnBehalfThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeQueryValuesThread @ 0x1400825E0 (KeQueryValuesThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     KeQueryTotalCycleTimeThread @ 0x14008D6A0 (KeQueryTotalCycleTimeThread.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1400E5800 (KeSetIdealProcessorThreadByNumber.c)
 *     KeQueryBasePriorityThread @ 0x1401151D8 (KeQueryBasePriorityThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x14011BF20 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     PsGetEffectiveContainerId @ 0x14011C1E0 (PsGetEffectiveContainerId.c)
 *     KeQueryAffinityThread @ 0x14012F6F0 (KeQueryAffinityThread.c)
 *     xKdEnumerateDebuggingDevices @ 0x14015D6F0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KeQueryActualAffinityThread @ 0x1402027A4 (KeQueryActualAffinityThread.c)
 *     KeQueryHeteroCpuPolicyThread @ 0x140202860 (KeQueryHeteroCpuPolicyThread.c)
 *     KeQueryCpuSetsThread @ 0x140208DC0 (KeQueryCpuSetsThread.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     MmCopyVirtualMemory @ 0x1405084C0 (MmCopyVirtualMemory.c)
 *     PspWow64GetContextThread @ 0x140583D4C (PspWow64GetContextThread.c)
 *     PsGetThreadExitStatus @ 0x14059AD70 (PsGetThreadExitStatus.c)
 *     PspQueryLastCallThread @ 0x14059E56C (PspQueryLastCallThread.c)
 *     VslGetSecureTebAddress @ 0x1406B3D90 (VslGetSecureTebAddress.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  __m128i *v6; // r14
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  NTSTATUS result; // eax
  NTSTATUS v14; // ebx
  PVOID v15; // rcx
  __int32 v16; // ebx
  char *v17; // rbx
  PVOID WorkOnBehalfThread; // rcx
  BOOL v19; // edi
  BOOL v20; // edi
  PVOID v21; // rbx
  _KPROCESS *v22; // rsi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  struct _EX_RUNDOWN_REF *v27; // rdi
  int v28; // ebx
  __int64 v29; // rdi
  NTSTATUS ContextThread; // edi
  void *v31; // rcx
  PVOID v32; // r8
  char v33; // bl
  signed __int64 *v34; // r15
  signed __int64 v35; // rax
  const wchar_t *v36; // rdx
  ULONG v37; // r13d
  __int64 v38; // rsi
  PVOID v39; // rdi
  NTSTATUS v40; // eax
  int v41; // ebx
  int v42; // ebx
  __int16 v43; // cx
  PVOID v44; // rcx
  __int32 v45; // edi
  _BYTE *v46; // rcx
  unsigned int v47; // edx
  NTSTATUS v48; // esi
  PVOID v49; // rbx
  unsigned int v50; // r8d
  NTSTATUS v51; // r15d
  ULONG v52; // ebx
  ULONG v53; // eax
  unsigned int *v54; // rbx
  unsigned __int64 v55; // rcx
  __int64 v56; // rcx
  signed __int32 v57[8]; // [rsp+0h] [rbp-258h] BYREF
  unsigned __int8 v58; // [rsp+40h] [rbp-218h]
  PVOID Object; // [rsp+48h] [rbp-210h] BYREF
  char v60; // [rsp+50h] [rbp-208h]
  char v61; // [rsp+51h] [rbp-207h]
  NTSTATUS v62; // [rsp+54h] [rbp-204h]
  _PROCESSOR_NUMBER v63; // [rsp+5Ch] [rbp-1FCh] BYREF
  __int16 v64; // [rsp+60h] [rbp-1F8h]
  _WORD *v65; // [rsp+68h] [rbp-1F0h]
  __int32 v66; // [rsp+70h] [rbp-1E8h] BYREF
  unsigned __int8 v67; // [rsp+74h] [rbp-1E4h]
  unsigned __int8 v68; // [rsp+75h] [rbp-1E3h]
  char v69; // [rsp+76h] [rbp-1E2h]
  char v70; // [rsp+77h] [rbp-1E1h]
  int v71; // [rsp+78h] [rbp-1E0h] BYREF
  __m128i v72; // [rsp+80h] [rbp-1D8h] BYREF
  PVOID v73[2]; // [rsp+90h] [rbp-1C8h] BYREF
  __int64 v74[2]; // [rsp+A0h] [rbp-1B8h] BYREF
  __m128i v75; // [rsp+B0h] [rbp-1A8h] BYREF
  __m128i v76; // [rsp+C0h] [rbp-198h]
  __int32 v77; // [rsp+D0h] [rbp-188h]
  ULONG v78; // [rsp+D4h] [rbp-184h]
  ULONG v79; // [rsp+D8h] [rbp-180h]
  const wchar_t *v80; // [rsp+E0h] [rbp-178h]
  PULONG v81; // [rsp+E8h] [rbp-170h]
  unsigned __int64 CycleTimeStamp[3]; // [rsp+100h] [rbp-158h] BYREF
  __m128i v83; // [rsp+120h] [rbp-138h] BYREF
  __m128i v84[4]; // [rsp+130h] [rbp-128h] BYREF
  _QWORD Src[20]; // [rsp+170h] [rbp-E8h] BYREF

  v6 = (__m128i *)ThreadInformation;
  v81 = ReturnLength;
  CycleTimeStamp[1] = (unsigned __int64)ThreadHandle;
  v74[1] = (__int64)ReturnLength;
  CurrentThread = KeGetCurrentThread();
  v65 = CurrentThread;
  v73[1] = CurrentThread;
  v58 = CurrentThread->gap0[10];
  if ( v58 )
  {
    v10 = 0LL;
    if ( ThreadInformationClass == ThreadNameInformation )
    {
      v11 = 7LL;
    }
    else if ( ThreadInformationLength < 4 )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = 3LL;
    }
    if ( ThreadInformationLength )
    {
      if ( ((unsigned __int64)ThreadInformation & v11) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ThreadInformation + ThreadInformationLength > 0x7FFFFFFF0000LL
        || (char *)ThreadInformation + ThreadInformationLength < ThreadInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    if ( ReturnLength )
    {
      v12 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  else
  {
    v10 = 0LL;
  }
  memset(&v84[1], 0, 0x30uLL);
  if ( ThreadInformationClass != ThreadCycleTime )
  {
    if ( ThreadInformationClass == ThreadActualBasePriority )
    {
      if ( ThreadInformationLength == 4 )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   v58,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v16 = *((char *)Object + 563);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v6->m128i_i32[0] = v16;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
    }
    else if ( ThreadInformationClass )
    {
      if ( ThreadInformationClass != ThreadTimes )
      {
        switch ( ThreadInformationClass )
        {
          case ThreadDescriptorTableEntry:
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       64,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v40 = xKdEnumerateDebuggingDevices();
            goto LABEL_153;
          case ThreadQuerySetWin32StartAddress:
            if ( ThreadInformationLength != 8 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       64,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            v28 = result;
            if ( result < 0 )
              return result;
            v29 = *((_QWORD *)Object + 210);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i64[0] = v29;
            if ( ReturnLength )
              *ReturnLength = 8;
            goto LABEL_110;
          case ThreadPerformanceCount:
            if ( ThreadInformationLength != 8 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       64,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            v28 = result;
            if ( result < 0 )
              return result;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i64[0] = 0LL;
            if ( ReturnLength )
              *ReturnLength = 8;
            goto LABEL_110;
          case ThreadAmILastThread:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            v6->m128i_i32[0] = CurrentThread->Process[1].ThreadSeed[0] == 1;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadPriorityBoost:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            ContextThread = result;
            if ( result < 0 )
              return result;
            v41 = (*((_DWORD *)Object + 30) >> 3) & 1;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i32[0] = v41;
            if ( ReturnLength )
              *ReturnLength = 4;
            return ContextThread;
          case ThreadIsIoPending:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       64,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v20 = *((_QWORD *)Object + 206) != (_QWORD)Object + 1648;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i32[0] = v20;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadHideFromDebugger:
            if ( ThreadInformationLength != 1 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       64,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            v14 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            v6->m128i_i8[0] = (*((_DWORD *)Object + 436) & 4) != 0;
            if ( ReturnLength )
              *ReturnLength = 1;
            goto LABEL_27;
          case ThreadBreakOnTermination:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       64,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v42 = (*((_DWORD *)Object + 436) >> 5) & 1;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i32[0] = v42;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadIsTerminated:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v19 = (*((_DWORD *)Object + 436) & 1) != 0;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i32[0] = v19;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadLastSystemCall:
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       8,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v40 = PspQueryLastCallThread(Object, v6, ThreadInformationLength, ReturnLength);
LABEL_153:
            v14 = v40;
            goto LABEL_154;
          case ThreadIoPriority:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            v14 = result;
            v62 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            v6->m128i_i32[0] = (*((_DWORD *)Object + 436) >> 9) & 7;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_27;
          case ThreadPagePriority:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            v14 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            v6->m128i_i32[0] = (*((_DWORD *)Object + 436) >> 12) & 7;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_27;
          case ThreadTebInformation:
            if ( ThreadInformationLength != 16 )
              return -1073741820;
            if ( v58 )
            {
              v84[0] = *v6;
              ProbeForWrite((volatile void *)v84[0].m128i_i64[0], HIDWORD(_mm_srli_si128(v84[0], 8).m128i_u64[0]), 1u);
              v6 = v84;
            }
            v65 = v6;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       24,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            v62 = result;
            if ( result < 0 )
              return result;
            v21 = Object;
            if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
            {
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              result = -1073741816;
            }
            else
            {
              v22 = (_KPROCESS *)*((_QWORD *)Object + 68);
              v23 = v22[1].ActiveProcessors.Bitmap[7];
              if ( v23 && ((v43 = *(_WORD *)(v23 + 8), v43 == 332) || v43 == 452) )
                v24 = 12288LL;
              else
                v24 = 6200LL;
              v25 = v6->m128i_u32[3];
              if ( (_DWORD)v25 && (v26 = v6->m128i_u32[2], v26 < v24) && v25 <= v24 - v26 )
              {
                if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 215) )
                {
                  v27 = (struct _EX_RUNDOWN_REF *)Object;
                  if ( v22 == KeGetCurrentThread()->ApcState.Process )
                  {
                    memmove(
                      (void *)v6->m128i_i64[0],
                      (const void *)(*((_QWORD *)Object + 30) + v6->m128i_u32[2]),
                      v6->m128i_u32[3]);
                    v28 = v62;
                  }
                  else
                  {
                    v28 = MmCopyVirtualMemory((ULONG_PTR)v22, v6->m128i_u32[3], v58, (__int64)v74);
                  }
                  ExReleaseRundownProtection_0(v27 + 215);
                  ObfDereferenceObjectWithTag(v27, 0x79517350u);
                  if ( v28 >= 0 )
                  {
                    if ( ReturnLength )
                      *ReturnLength = v6->m128i_u32[3];
                    v28 = 0;
                    v62 = 0;
                  }
LABEL_110:
                  result = v28;
                }
                else
                {
                  ObfDereferenceObjectWithTag(v21, 0x79517350u);
                  result = -1073741749;
                }
              }
              else
              {
                ObfDereferenceObjectWithTag(Object, 0x79517350u);
LABEL_185:
                result = -1073741811;
              }
            }
            break;
          case ThreadWow64Context:
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       8,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            ContextThread = PspWow64GetContextThread(Object, v6, ThreadInformationLength, v58);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( ContextThread >= 0 && ReturnLength )
              *ReturnLength = 716;
            return ContextThread;
          case ThreadGroupInformation:
            if ( ThreadInformationLength != 16 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            v28 = result;
            if ( result < 0 )
              return result;
            v39 = Object;
            KeQueryAffinityThread((__int64)Object, (__int64)&v83);
            *v6 = v83;
            if ( ReturnLength )
              *ReturnLength = 16;
            goto LABEL_150;
          case ThreadUmsInformation:
            if ( ThreadInformationLength != 24 )
              return -1073741820;
            v45 = v6->m128i_i32[0];
            v77 = v6->m128i_i32[0];
            result = ObReferenceObjectByHandle(ThreadHandle, 0x40u, (POBJECT_TYPE)PsThreadType, v58, v73, 0LL);
            v28 = result;
            if ( result < 0 )
              return result;
            if ( v45 == 3 )
            {
              v6->m128i_i64[0] = 0LL;
              v6->m128i_i64[1] = 0LL;
              v6[1].m128i_i64[0] = 0LL;
              v46 = v73[0];
              v47 = v6->m128i_i32[2] & 0xFFFFFFFE | (*((unsigned __int8 *)v73[0] + 3) >> 7);
              v6->m128i_i32[2] = v47;
              v6->m128i_i32[2] = v47 ^ ((unsigned __int8)v47 ^ (v46[3] >> 5)) & 2;
            }
            else
            {
              v28 = -1073741811;
            }
            ObfDereferenceObject(v73[0]);
            goto LABEL_110;
          case ThreadCounterProfiling:
            if ( ThreadInformationLength != 1 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       64,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            v28 = result;
            if ( result < 0 )
              return result;
            v44 = Object;
            v6->m128i_i8[0] = *((_QWORD *)Object + 45) != 0LL;
            ObfDereferenceObjectWithTag(v44, 0x79517350u);
            if ( ReturnLength )
              *ReturnLength = 1;
            goto LABEL_110;
          case ThreadIdealProcessorEx:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            if ( result < 0 )
              return result;
            v63 = (_PROCESSOR_NUMBER)0x400000;
            KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, &v63, &v63);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_PROCESSOR_NUMBER *)v6->m128i_i8 = v63;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadCpuAccountingInformation:
            if ( !ThreadInformationLength )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       64,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            v62 = result;
            if ( result < 0 )
              return result;
            v6->m128i_i8[0] = *((_QWORD *)Object + 13) != 0LL;
            if ( ReturnLength )
              *ReturnLength = 1;
            v14 = v62;
            goto LABEL_154;
          case ThreadSuspendCount:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            v14 = result;
            if ( result < 0 )
              return result;
            v32 = Object;
            v6->m128i_i32[0] = *((char *)Object + 644) + ((*((_DWORD *)Object + 30) >> 14) & 1);
            if ( ReturnLength )
              *ReturnLength = 4;
            v15 = v32;
            goto LABEL_27;
          case ThreadHeterogeneousCpuPolicy:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            v48 = ObpReferenceObjectByHandleWithTag(
                    (ULONG_PTR)ThreadHandle,
                    2048,
                    (__int64)PsThreadType,
                    v58,
                    2035381072,
                    &Object,
                    0LL,
                    0LL);
            if ( v48 >= 0 )
            {
              v49 = Object;
              v6->m128i_i32[0] = KeQueryHeteroCpuPolicyThread((__int64)Object, 1);
              if ( ReturnLength )
                *ReturnLength = 4;
              ObfDereferenceObjectWithTag(v49, 0x79517350u);
            }
            return v48;
          case ThreadContainerId:
            if ( ThreadInformationLength != 16 )
              return -1073741820;
            if ( ThreadHandle != (HANDLE)-2LL )
              goto LABEL_185;
            result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v75);
            if ( result >= 0 )
            {
              *v6 = v75;
              if ( ReturnLength )
                *ReturnLength = 16;
            }
            return result;
          case ThreadNameInformation:
            v61 = 0;
            Object = 0LL;
            v33 = 0;
            v60 = 0;
            ContextThread = ObpReferenceObjectByHandleWithTag(
                              (ULONG_PTR)ThreadHandle,
                              2048,
                              (__int64)PsThreadType,
                              v58,
                              2035381072,
                              &Object,
                              0LL,
                              0LL);
            v62 = ContextThread;
            if ( ContextThread < 0 )
            {
              v34 = (signed __int64 *)Object;
              v38 = (__int64)v65;
            }
            else
            {
              v61 = 1;
              --v65[242];
              v34 = (signed __int64 *)Object;
              ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1728, 0LL);
              v33 = 1;
              v60 = 1;
              v35 = v34[251];
              if ( v35 )
              {
                v36 = *(const wchar_t **)(v35 + 8);
                LOWORD(v10) = *(_WORD *)v35;
              }
              else
              {
                v36 = &word_1405F52C0;
              }
              v64 = v10;
              v80 = v36;
              v37 = (unsigned __int16)v10 + 16;
              v79 = v37;
              if ( v37 > ThreadInformationLength )
              {
                ContextThread = -1073741789;
                v62 = -1073741789;
              }
              else
              {
                memmove(&v6[1], v36, (unsigned __int16)v10);
                v6->m128i_i16[0] = v10;
                v6->m128i_i16[1] = v10;
                v6->m128i_i64[1] = (__int64)v6[1].m128i_i64;
                v33 = v60;
              }
              if ( v81 )
                *v81 = v37;
              v38 = (__int64)v65;
            }
            if ( v33 )
            {
              if ( _InterlockedCompareExchange64(v34 + 216, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(v34 + 216);
              KeAbPostRelease((ULONG_PTR)(v34 + 216));
              KeLeaveCriticalRegionThread(v38);
              ContextThread = v62;
              v34 = (signed __int64 *)Object;
            }
            if ( !v61 )
              return ContextThread;
            ObfDereferenceObjectWithTag(v34, 0x79517350u);
            return ContextThread;
          case ThreadSelectedCpuSets:
            if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0xA0 )
              return -1073741820;
            v51 = ObpReferenceObjectByHandleWithTag(
                    (ULONG_PTR)ThreadHandle,
                    2048,
                    (__int64)PsThreadType,
                    v58,
                    2035381072,
                    &Object,
                    0LL,
                    0LL);
            v62 = v51;
            if ( v51 >= 0 )
            {
              v52 = 8 * KeQueryCpuSetsThread((__int64)Object, Src, v50);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              v53 = v52;
              v78 = v52;
              if ( ReturnLength )
                *ReturnLength = v52;
              if ( v52 >= ThreadInformationLength )
                v53 = ThreadInformationLength;
              memmove(v6, Src, v53);
            }
            return v51;
          case ThreadSystemThreadInformation:
            if ( ThreadInformationLength != 80 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            ContextThread = result;
            v62 = result;
            if ( result < 0 )
              return result;
            v54 = (unsigned int *)Object;
            KeQueryValuesThread((__int64)Object, (__int64)&v66);
            if ( (v54[29] & 0x400) != 0 )
            {
              v55 = *((_QWORD *)v54 + 210);
            }
            else
            {
              if ( (v54[438] & 8) != 0 || (v55 = *((_QWORD *)Object + 194), _InterlockedOr(v57, 0), (v54[438] & 8) != 0) )
                v55 = 0LL;
              ContextThread = v62;
              v54 = (unsigned int *)Object;
            }
            if ( v55 <= 0x7FFFFFFEFFFFLL )
              v10 = v55;
            v6[4].m128i_i32[1] = v67;
            v6[4].m128i_i32[2] = v68;
            v6[3].m128i_i32[3] = v70;
            v6[3].m128i_i32[2] = v69;
            v6[1].m128i_i32[2] = v66;
            v56 = KeMaximumIncrement;
            v6->m128i_i64[0] = KeMaximumIncrement * (unsigned __int64)v54[163];
            v6->m128i_i64[1] = v56 * v54[183];
            v6[1].m128i_i64[0] = *((_QWORD *)v54 + 190);
            v6[4].m128i_i32[0] = v54[85];
            *(__m128i *)((char *)v6 + 40) = *(__m128i *)(v54 + 398);
            v6[2].m128i_i64[0] = v10;
            if ( ReturnLength )
              *ReturnLength = 80;
            ObfDereferenceObjectWithTag(v54, 0x79517350u);
            return ContextThread;
          case ThreadActualGroupAffinity:
            if ( ThreadInformationLength != 16 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            v28 = result;
            if ( result < 0 )
              return result;
            v39 = Object;
            KeQueryActualAffinityThread((__int64)Object, (__int64)&v83);
            *v6 = v83;
            if ( ReturnLength )
              *ReturnLength = 16;
LABEL_150:
            ObfDereferenceObjectWithTag(v39, 0x79517350u);
            goto LABEL_110;
          case ThreadDynamicCodePolicyInfo:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            v14 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            v6->m128i_i32[0] = (*((_DWORD *)Object + 436) & 0x40000) != 0;
            if ( ReturnLength )
              *ReturnLength = 4;
            goto LABEL_27;
          case ThreadExplicitCaseSensitivity:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            v62 = result;
            if ( result < 0 )
              return result;
            v6->m128i_i32[0] = (*((_DWORD *)Object + 436) >> 19) & 1;
            if ( ReturnLength )
              *ReturnLength = 4;
            v14 = v62;
LABEL_154:
            v15 = Object;
            goto LABEL_27;
          case ThreadWorkOnBehalfTicket:
            if ( ThreadInformationLength != 16 )
              return -1073741820;
            if ( ThreadHandle != (HANDLE)-2LL )
              goto LABEL_185;
            v72 = 0uLL;
            WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v71);
            if ( WorkOnBehalfThread )
            {
              PsEncodeThreadWorkOnBehalfTicket((__int64)WorkOnBehalfThread, &v72);
              if ( v71 )
                ObfDereferenceObject(v31);
            }
            else
            {
              PsEncodeThreadWorkOnBehalfTicket((__int64)CurrentThread, &v72);
              v72.m128i_i32[2] |= 1u;
            }
            *v6 = v72;
            if ( ReturnLength )
              *ReturnLength = 16;
            return 0;
          case ThreadSubsystemInformation:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag(
                       (ULONG_PTR)ThreadHandle,
                       2048,
                       (__int64)PsThreadType,
                       v58,
                       2035381072,
                       &Object,
                       0LL,
                       0LL);
            v14 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            if ( *((_QWORD *)Object + 244) )
              LODWORD(v10) = qword_140362970;
            v6->m128i_i32[0] = v10;
            if ( ReturnLength )
              *ReturnLength = 4;
LABEL_27:
            ObfDereferenceObjectWithTag(v15, 0x79517350u);
            result = v14;
            break;
          default:
            return -1073741821;
        }
        return result;
      }
      if ( ThreadInformationLength == 32 )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   v58,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v76.m128i_i64[0] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 163);
        v76.m128i_i64[1] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 183);
        v75.m128i_i64[0] = *((_QWORD *)Object + 190);
        if ( (unsigned __int8)*((_DWORD *)Object + 1) )
          v75.m128i_i64[1] = *((_QWORD *)Object + 191);
        else
          v75.m128i_i64[1] = 0LL;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *v6 = v75;
        v6[1] = v76;
        if ( ReturnLength )
          *ReturnLength = 32;
        return 0;
      }
    }
    else if ( ThreadInformationLength == 48 )
    {
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 2048,
                 (__int64)PsThreadType,
                 v58,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v17 = (char *)Object;
      if ( (unsigned __int8)*((_DWORD *)Object + 1) )
        v84[1].m128i_i32[0] = PsGetThreadExitStatus((PETHREAD)Object);
      else
        v84[1].m128i_i32[0] = 259;
      v84[1].m128i_i64[1] = *((_QWORD *)v17 + 30);
      if ( (IoThreadToProcess((PETHREAD)v17)->SecureState.SecureHandle & 1) != 0 )
        VslGetSecureTebAddress(v17, &v84[1].m128i_u64[1]);
      v84[0] = *(__m128i *)(v17 + 1592);
      v84[3].m128i_i64[0] = *((_QWORD *)v17 + 69);
      v84[3].m128i_i32[2] = v17[195];
      v84[3].m128i_i32[3] = KeQueryBasePriorityThread((__int64)v17);
      ObfDereferenceObjectWithTag(v17, 0x79517350u);
      *v6 = v84[1];
      v6[1] = v84[0];
      v6[2] = v84[3];
      if ( ReturnLength )
        *ReturnLength = 48;
      return 0;
    }
    return -1073741820;
  }
  if ( ThreadInformationLength != 16 )
    return -1073741820;
  if ( ThreadHandle == (HANDLE)-2LL )
  {
    Object = CurrentThread;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ThreadHandle,
               2048,
               (__int64)PsThreadType,
               v58,
               2035381072,
               &Object,
               0LL,
               0LL);
    LODWORD(v10) = result;
    if ( result < 0 )
      return result;
    CurrentThread = (struct _KTHREAD *)Object;
  }
  v6->m128i_i64[0] = KeQueryTotalCycleTimeThread(CurrentThread, CycleTimeStamp);
  v6->m128i_i64[1] = CycleTimeStamp[0];
  if ( ReturnLength )
    *ReturnLength = 16;
  if ( ThreadHandle != (HANDLE)-2LL )
    ObfDereferenceObjectWithTag(CurrentThread, 0x79517350u);
  return v10;
}
