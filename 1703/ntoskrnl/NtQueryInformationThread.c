/*
 * XREFs of NtQueryInformationThread @ 0x140424560
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryAffinityThread @ 0x1400072C0 (KeQueryAffinityThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x140007340 (KeQueryTotalCycleTimeThread.c)
 *     KeQueryBasePriorityThread @ 0x14000786C (KeQueryBasePriorityThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x14002872C (PsEncodeThreadWorkOnBehalfTicket.c)
 *     PsGetEffectiveContainerId @ 0x140029820 (PsGetEffectiveContainerId.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14002D4E0 (KeSetIdealProcessorThreadByNumber.c)
 *     IoThreadToProcess @ 0x14002FAA0 (IoThreadToProcess.c)
 *     KeQueryValuesThread @ 0x14003F770 (KeQueryValuesThread.c)
 *     PsQueryThreadStartAddress @ 0x14006B8C4 (PsQueryThreadStartAddress.c)
 *     PsGetWorkOnBehalfThread @ 0x1400E7974 (PsGetWorkOnBehalfThread.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     xKdEnumerateDebuggingDevices @ 0x140168720 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KeQueryActualAffinityThread @ 0x1401FCB28 (KeQueryActualAffinityThread.c)
 *     KeQueryHeteroCpuPolicyThread @ 0x1401FCBC0 (KeQueryHeteroCpuPolicyThread.c)
 *     KeQueryCpuSetsThread @ 0x140202698 (KeQueryCpuSetsThread.c)
 *     PsGetThreadExitStatus @ 0x140424100 (PsGetThreadExitStatus.c)
 *     PspWow64GetContextThread @ 0x140425814 (PspWow64GetContextThread.c)
 *     MmCopyVirtualMemory @ 0x1405181F0 (MmCopyVirtualMemory.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     VslGetSecureTebAddress @ 0x140687FD0 (VslGetSecureTebAddress.c)
 *     PspQueryLastCallThread @ 0x1406E0324 (PspQueryLastCallThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  __m128i *v6; // r14
  PETHREAD CurrentThread; // rdi
  int v9; // r15d
  NTSTATUS v10; // r12d
  __int64 v11; // rax
  __int64 v12; // rdx
  NTSTATUS result; // eax
  PETHREAD v14; // rbx
  __int32 BasePriority; // ebx
  int v16; // ebx
  PETHREAD v17; // rcx
  int ContextThread; // edi
  struct _LIST_ENTRY *Flink; // rdi
  PETHREAD v20; // rbx
  _KPROCESS *Process; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  struct _EX_RUNDOWN_REF *v26; // rdi
  HANDLE v27; // rbx
  PETHREAD v28; // rdi
  PETHREAD v29; // r8
  int v30; // eax
  int v31; // ebx
  int v32; // ebx
  __int16 v33; // cx
  PETHREAD v34; // rcx
  __int32 v35; // edi
  _BYTE *v36; // rcx
  unsigned int v37; // edx
  PETHREAD v38; // rbx
  unsigned int v39; // r8d
  NTSTATUS v40; // r15d
  ULONG v41; // ebx
  unsigned __int64 ThreadStartAddress; // rdx
  __int64 v43; // rcx
  char v44; // bl
  signed __int64 *p_Lock; // r15
  signed __int64 v46; // rax
  const size_t *v47; // rdx
  ULONG v48; // r13d
  __int64 v49; // rsi
  PVOID WorkOnBehalfThread; // rcx
  void *v51; // rcx
  unsigned __int8 v52; // [rsp+40h] [rbp-238h]
  PETHREAD Thread; // [rsp+48h] [rbp-230h] BYREF
  char v54; // [rsp+50h] [rbp-228h]
  HANDLE Handle; // [rsp+58h] [rbp-220h]
  char v56; // [rsp+60h] [rbp-218h]
  NTSTATUS v57; // [rsp+64h] [rbp-214h]
  _PROCESSOR_NUMBER v58; // [rsp+6Ch] [rbp-20Ch] BYREF
  __int16 v59; // [rsp+70h] [rbp-208h]
  _WORD *v60; // [rsp+78h] [rbp-200h]
  int v61; // [rsp+80h] [rbp-1F8h]
  __int32 v62; // [rsp+88h] [rbp-1F0h] BYREF
  unsigned __int8 v63; // [rsp+8Ch] [rbp-1ECh]
  unsigned __int8 v64; // [rsp+8Dh] [rbp-1EBh]
  char v65; // [rsp+8Eh] [rbp-1EAh]
  char v66; // [rsp+8Fh] [rbp-1E9h]
  ULONG v67; // [rsp+90h] [rbp-1E8h]
  int v68; // [rsp+94h] [rbp-1E4h] BYREF
  __m128i v69; // [rsp+98h] [rbp-1E0h] BYREF
  PULONG v70; // [rsp+A8h] [rbp-1D0h]
  PVOID Object[3]; // [rsp+B0h] [rbp-1C8h] BYREF
  __m128i v72; // [rsp+C8h] [rbp-1B0h] BYREF
  __m128i v73; // [rsp+D8h] [rbp-1A0h]
  __int32 v74; // [rsp+E8h] [rbp-190h]
  ULONG v75; // [rsp+ECh] [rbp-18Ch]
  unsigned __int64 CycleTimeStamp[4]; // [rsp+F8h] [rbp-180h] BYREF
  PULONG v77; // [rsp+118h] [rbp-160h]
  __m128i v78; // [rsp+130h] [rbp-148h] BYREF
  __m128i v79[4]; // [rsp+140h] [rbp-138h] BYREF
  __int64 v80; // [rsp+180h] [rbp-F8h] BYREF
  _QWORD Src[20]; // [rsp+190h] [rbp-E8h] BYREF

  v6 = (__m128i *)ThreadInformation;
  Handle = ThreadHandle;
  v77 = ReturnLength;
  CycleTimeStamp[1] = (unsigned __int64)ThreadHandle;
  v70 = ReturnLength;
  CurrentThread = KeGetCurrentThread();
  v60 = CurrentThread;
  Object[1] = CurrentThread;
  v52 = CurrentThread->gap0[10];
  if ( v52 )
  {
    v9 = 1;
    v10 = 0;
    if ( ThreadInformationClass == ThreadNameInformation )
    {
      v61 = 8;
      v11 = 7LL;
    }
    else if ( ThreadInformationLength < 4 )
    {
      v61 = 1;
      v11 = 0LL;
    }
    else
    {
      v61 = 4;
      v11 = 3LL;
    }
    if ( ThreadInformationLength )
    {
      if ( (v11 & (unsigned __int64)ThreadInformation) != 0 )
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
    v9 = 1;
    v10 = 0;
  }
  memset(&v79[1], 0, 0x30uLL);
  switch ( ThreadInformationClass )
  {
    case ThreadTimes:
      if ( ThreadInformationLength == 32 )
      {
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v73.m128i_i64[0] = KeMaximumIncrement * (unsigned __int64)Thread->SchedulerApc.SpareLong0;
        v73.m128i_i64[1] = KeMaximumIncrement * (unsigned __int64)Thread->UserTime;
        v72.m128i_i64[0] = *(_QWORD *)&Thread[1].Header.Lock;
        if ( (unsigned __int8)Thread->Header.SignalState )
          v72.m128i_i64[1] = (__int64)Thread[1].Header.WaitListHead.Flink;
        else
          v72.m128i_i64[1] = 0LL;
        ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        *v6 = v72;
        v6[1] = v73;
        if ( ReturnLength )
          *ReturnLength = 32;
        return 0;
      }
      return -1073741820;
    case ThreadActualBasePriority:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
      if ( result >= 0 )
      {
        BasePriority = Thread->BasePriority;
        ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        v6->m128i_i32[0] = BasePriority;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
      break;
    case ThreadPagePriority:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
      v16 = result;
      if ( result >= 0 )
      {
        v17 = Thread;
        v6->m128i_i32[0] = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 12) & 7;
        if ( ReturnLength )
          *ReturnLength = 4;
LABEL_50:
        ObfDereferenceObjectWithTag(v17, 0x79517350u);
        return v16;
      }
      break;
    case ThreadBasicInformation:
      if ( ThreadInformationLength == 48 )
      {
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v14 = Thread;
        if ( (unsigned __int8)Thread->Header.SignalState )
          v79[1].m128i_i32[0] = PsGetThreadExitStatus(Thread);
        else
          v79[1].m128i_i32[0] = 259;
        v79[1].m128i_i64[1] = (__int64)v14->Teb;
        if ( !IoThreadToProcess(v14)->SecurePid )
          LOBYTE(v9) = 0;
        if ( (_BYTE)v9 )
          VslGetSecureTebAddress(v14, &v79[1].m128i_u64[1]);
        v79[0] = *(__m128i *)&v14[1].CurrentRunTime;
        v79[3].m128i_i64[0] = v14->UserAffinity.Mask;
        v79[3].m128i_i32[2] = v14->Priority;
        v79[3].m128i_i32[3] = KeQueryBasePriorityThread((__int64)v14);
        ObfDereferenceObjectWithTag(v14, 0x79517350u);
        *v6 = v79[1];
        v6[1] = v79[0];
        v6[2] = v79[3];
        if ( ReturnLength )
          *ReturnLength = 48;
        return 0;
      }
      return -1073741820;
    default:
      switch ( ThreadInformationClass )
      {
        case ThreadDescriptorTableEntry:
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          if ( result < 0 )
            return result;
          v30 = xKdEnumerateDebuggingDevices();
          goto LABEL_136;
        case ThreadQuerySetWin32StartAddress:
          if ( ThreadInformationLength != 8 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          v16 = result;
          if ( result < 0 )
            return result;
          Flink = Thread[1].ApcState.ApcListHead[1].Flink;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          v6->m128i_i64[0] = (__int64)Flink;
          if ( ReturnLength )
            *ReturnLength = 8;
          return v16;
        case ThreadPerformanceCount:
          if ( ThreadInformationLength != 8 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          v16 = result;
          if ( result < 0 )
            return result;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          v6->m128i_i64[0] = 0LL;
          if ( ReturnLength )
            *ReturnLength = 8;
          return v16;
        case ThreadAmILastThread:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          if ( CurrentThread->Process[1].ThreadSeed[0] != 1 )
            v9 = 0;
          v6->m128i_i32[0] = v9;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ThreadPriorityBoost:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          ContextThread = result;
          if ( result < 0 )
            return result;
          v31 = (*((_DWORD *)&Thread->0 + 1) >> 1) & 1;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          v6->m128i_i32[0] = v31;
          if ( ReturnLength )
            *ReturnLength = 4;
          return ContextThread;
        case ThreadIsIoPending:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          if ( result < 0 )
            return result;
          if ( Thread[1].FirstArgument == &Thread[1].FirstArgument )
            v9 = 0;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          v6->m128i_i32[0] = v9;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ThreadHideFromDebugger:
          if ( ThreadInformationLength != 1 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          v16 = result;
          if ( result < 0 )
            return result;
          v17 = Thread;
          v6->m128i_i8[0] = (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 4) != 0;
          if ( ReturnLength )
            *ReturnLength = 1;
          goto LABEL_50;
        case ThreadBreakOnTermination:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          if ( result < 0 )
            return result;
          v32 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 5) & 1;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          v6->m128i_i32[0] = v32;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ThreadIsTerminated:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          if ( result < 0 )
            return result;
          if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 1) == 0 )
            v9 = 0;
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          v6->m128i_i32[0] = v9;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ThreadLastSystemCall:
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          if ( result < 0 )
            return result;
          v30 = PspQueryLastCallThread(Thread, v6, ThreadInformationLength, ReturnLength);
LABEL_136:
          v16 = v30;
          goto LABEL_137;
        case ThreadIoPriority:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          v16 = result;
          v57 = result;
          if ( result < 0 )
            return result;
          v17 = Thread;
          v6->m128i_i32[0] = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
          if ( ReturnLength )
            *ReturnLength = 4;
          goto LABEL_50;
        case ThreadCycleTime:
          if ( ThreadInformationLength != 16 )
            return -1073741820;
          v27 = Handle;
          if ( Handle == (HANDLE)-2LL )
          {
            Thread = CurrentThread;
          }
          else
          {
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
            v10 = result;
            if ( result < 0 )
              return result;
            CurrentThread = Thread;
          }
          v6->m128i_i64[0] = KeQueryTotalCycleTimeThread(CurrentThread, CycleTimeStamp);
          v6->m128i_i64[1] = CycleTimeStamp[0];
          if ( ReturnLength )
            *ReturnLength = 16;
          if ( v27 != (HANDLE)-2LL )
            ObfDereferenceObjectWithTag(CurrentThread, 0x79517350u);
          return v10;
        case ThreadTebInformation:
          if ( ThreadInformationLength != 16 )
            return -1073741820;
          if ( v52 )
          {
            v79[0] = *v6;
            ProbeForWrite((volatile void *)v79[0].m128i_i64[0], HIDWORD(_mm_srli_si128(v79[0], 8).m128i_u64[0]), 1u);
            v6 = v79;
          }
          v60 = v6;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          v57 = result;
          if ( result < 0 )
            return result;
          v20 = Thread;
          if ( (Thread->MiscFlags & 0x400) != 0 )
          {
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            return -1073741816;
          }
          Process = Thread->Process;
          v22 = Process[1].ActiveProcessors.Bitmap[7];
          if ( v22 && ((v33 = *(_WORD *)(v22 + 8), v33 == 332) || v33 == 452) )
          {
            v23 = 14392LL;
            if ( *(_WORD *)(v22 + 8) != 0x8664 )
              v23 = 12288LL;
          }
          else
          {
            v23 = 6200LL;
          }
          v24 = v6->m128i_u32[3];
          if ( !(_DWORD)v24 || (v25 = v6->m128i_u32[2], v25 >= v23) || v24 > v23 - v25 )
          {
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            return -1073741811;
          }
          if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
          {
            ObfDereferenceObjectWithTag(v20, 0x79517350u);
            return -1073741749;
          }
          v26 = (struct _EX_RUNDOWN_REF *)Thread;
          if ( Process == KeGetCurrentThread()->ApcState.Process )
          {
            memmove((void *)v6->m128i_i64[0], (char *)Thread->Teb + v6->m128i_u32[2], v6->m128i_u32[3]);
            v16 = v57;
          }
          else
          {
            v16 = MmCopyVirtualMemory((ULONG_PTR)Process, v6->m128i_u32[3], v52, (__int64)&v80);
          }
          ExReleaseRundownProtection(v26 + 214);
          ObfDereferenceObjectWithTag(v26, 0x79517350u);
          if ( v16 >= 0 )
          {
            if ( ReturnLength )
              *ReturnLength = v6->m128i_u32[3];
            v16 = 0;
            v57 = 0;
          }
          break;
        case ThreadWow64Context:
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          if ( result < 0 )
            return result;
          ContextThread = PspWow64GetContextThread(Thread, v6, ThreadInformationLength, v52);
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          if ( ContextThread >= 0 && ReturnLength )
            *ReturnLength = 716;
          return ContextThread;
        case ThreadGroupInformation:
          if ( ThreadInformationLength != 16 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          v16 = result;
          if ( result < 0 )
            return result;
          v28 = Thread;
          KeQueryAffinityThread((__int64)Thread, (__int64)&v78);
          *v6 = v78;
          if ( ReturnLength )
            *ReturnLength = 16;
          goto LABEL_127;
        case ThreadUmsInformation:
          if ( ThreadInformationLength != 24 )
            return -1073741820;
          v35 = v6->m128i_i32[0];
          v74 = v6->m128i_i32[0];
          result = ObReferenceObjectByHandle(Handle, 0x40u, (POBJECT_TYPE)PsThreadType, v52, Object, 0LL);
          v16 = result;
          if ( result < 0 )
            return result;
          if ( v35 == 3 )
          {
            v6->m128i_i64[0] = 0LL;
            v6->m128i_i64[1] = 0LL;
            v6[1].m128i_i64[0] = 0LL;
            v36 = Object[0];
            v37 = v6->m128i_i32[2] & 0xFFFFFFFE | (*((unsigned __int8 *)Object[0] + 3) >> 7);
            v6->m128i_i32[2] = v37;
            v6->m128i_i32[2] = v37 ^ ((unsigned __int8)v37 ^ (v36[3] >> 5)) & 2;
          }
          else
          {
            v16 = -1073741811;
          }
          ObfDereferenceObject(Object[0]);
          return v16;
        case ThreadCounterProfiling:
          if ( ThreadInformationLength != 1 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          v16 = result;
          if ( result < 0 )
            return result;
          v34 = Thread;
          v6->m128i_i8[0] = Thread->WaitBlock[0].SparePtr != 0LL;
          ObfDereferenceObjectWithTag(v34, 0x79517350u);
          if ( ReturnLength )
            *ReturnLength = 1;
          return v16;
        case ThreadIdealProcessorEx:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          if ( result < 0 )
            return result;
          v58 = (_PROCESSOR_NUMBER)0x400000;
          KeSetIdealProcessorThreadByNumber(Thread, &v58, &v58);
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          *(_PROCESSOR_NUMBER *)v6->m128i_i8 = v58;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ThreadCpuAccountingInformation:
          if ( !ThreadInformationLength )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          v57 = result;
          if ( result < 0 )
            return result;
          v6->m128i_i8[0] = Thread->SchedulingGroup != 0LL;
          if ( ReturnLength )
            *ReturnLength = 1;
          v16 = v57;
          goto LABEL_137;
        case ThreadSuspendCount:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          v16 = result;
          if ( result < 0 )
            return result;
          v29 = Thread;
          v6->m128i_i32[0] = Thread->SuspendCount + ((*((_DWORD *)&Thread->0 + 1) >> 13) & 1);
          if ( ReturnLength )
            *ReturnLength = 4;
          v17 = v29;
          goto LABEL_50;
        case ThreadHeterogeneousCpuPolicy:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          ContextThread = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          if ( ContextThread < 0 )
            return ContextThread;
          v38 = Thread;
          v6->m128i_i32[0] = KeQueryHeteroCpuPolicyThread((__int64)Thread, 1);
          if ( ReturnLength )
            *ReturnLength = 4;
          goto LABEL_197;
        case ThreadContainerId:
          if ( ThreadInformationLength != 16 )
            return -1073741820;
          if ( Handle != (HANDLE)-2LL )
            return -1073741811;
          result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v72);
          if ( result >= 0 )
          {
            *v6 = v72;
            if ( ReturnLength )
              *ReturnLength = 16;
          }
          return result;
        case ThreadNameInformation:
          v56 = 0;
          Thread = 0LL;
          v44 = 0;
          v54 = 0;
          ContextThread = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          v57 = ContextThread;
          if ( ContextThread < 0 )
          {
            p_Lock = (signed __int64 *)&Thread->Header.Lock;
            v49 = (__int64)v60;
          }
          else
          {
            v56 = 1;
            --v60[242];
            p_Lock = (signed __int64 *)&Thread->Header.Lock;
            ExAcquirePushLockSharedEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
            v44 = 1;
            v54 = 1;
            v46 = p_Lock[250];
            if ( v46 )
            {
              v47 = *(const size_t **)(v46 + 8);
              LOWORD(v10) = *(_WORD *)v46;
            }
            else
            {
              v47 = &cchOriginalDestLength;
            }
            v59 = v10;
            CycleTimeStamp[3] = (unsigned __int64)v47;
            v48 = (unsigned __int16)v10 + 16;
            v75 = v48;
            if ( v48 <= ThreadInformationLength )
            {
              Object[2] = v6;
              memmove(&v6[1], v47, (unsigned __int16)v10);
              v6->m128i_i16[0] = v10;
              v6->m128i_i16[1] = v10;
              v6->m128i_i64[1] = (__int64)v6[1].m128i_i64;
              v44 = v54;
            }
            else
            {
              ContextThread = -1073741789;
              v57 = -1073741789;
            }
            if ( v77 )
              *v77 = v48;
            v49 = (__int64)v60;
          }
          if ( v44 )
          {
            if ( _InterlockedCompareExchange64(p_Lock + 215, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(p_Lock + 215);
            KeAbPostRelease((ULONG_PTR)(p_Lock + 215));
            KeLeaveCriticalRegionThread(v49);
            ContextThread = v57;
            p_Lock = (signed __int64 *)&Thread->Header.Lock;
          }
          if ( !v56 )
            return ContextThread;
          ObfDereferenceObjectWithTag(p_Lock, 0x79517350u);
          return ContextThread;
        case ThreadSelectedCpuSets:
          if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0xA0 )
            return -1073741820;
          v40 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          v57 = v40;
          if ( v40 >= 0 )
          {
            v41 = 8 * KeQueryCpuSetsThread((__int64)Thread, Src, v39);
            ObfDereferenceObjectWithTag(Thread, 0x79517350u);
            v67 = v41;
            if ( ReturnLength )
              *ReturnLength = v41;
            if ( v41 >= ThreadInformationLength )
              v41 = ThreadInformationLength;
            v67 = v41;
            memmove(v6, Src, v41);
          }
          return v40;
        case ThreadSystemThreadInformation:
          if ( ThreadInformationLength != 80 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          ContextThread = result;
          if ( result < 0 )
            return result;
          v38 = Thread;
          KeQueryValuesThread((__int64)Thread, (__int64)&v62);
          ThreadStartAddress = PsQueryThreadStartAddress((__int64)v38, 1);
          if ( ThreadStartAddress > 0x7FFFFFFEFFFFLL )
            ThreadStartAddress = 0LL;
          v6[4].m128i_i32[1] = v63;
          v6[4].m128i_i32[2] = v64;
          v6[3].m128i_i32[3] = v66;
          v6[3].m128i_i32[2] = v65;
          v6[1].m128i_i32[2] = v62;
          v43 = KeMaximumIncrement;
          v6->m128i_i64[0] = KeMaximumIncrement * (unsigned __int64)v38->SchedulerApc.SpareLong0;
          v6->m128i_i64[1] = v43 * v38->UserTime;
          v6[1].m128i_i64[0] = *(_QWORD *)&v38[1].Header.Lock;
          v6[4].m128i_i32[0] = v38->WaitBlock[0].SpareLong;
          *(__m128i *)((char *)v6 + 40) = *(__m128i *)&v38[1].CurrentRunTime;
          v6[2].m128i_i64[0] = ThreadStartAddress;
          if ( ReturnLength )
            *ReturnLength = 80;
LABEL_197:
          ObfDereferenceObjectWithTag(v38, 0x79517350u);
          return ContextThread;
        case ThreadActualGroupAffinity:
          if ( ThreadInformationLength != 16 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          v16 = result;
          if ( result < 0 )
            return result;
          v28 = Thread;
          KeQueryActualAffinityThread((__int64)Thread, (__int64)&v78);
          *v6 = v78;
          if ( ReturnLength )
            *ReturnLength = 16;
LABEL_127:
          v17 = v28;
          goto LABEL_50;
        case ThreadDynamicCodePolicyInfo:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          v16 = result;
          if ( result < 0 )
            return result;
          v17 = Thread;
          v6->m128i_i32[0] = (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x40000) != 0;
          if ( ReturnLength )
            *ReturnLength = 4;
          goto LABEL_50;
        case ThreadExplicitCaseSensitivity:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          v57 = result;
          if ( result < 0 )
            return result;
          v6->m128i_i32[0] = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 19) & 1;
          if ( ReturnLength )
            *ReturnLength = 4;
          v16 = v57;
LABEL_137:
          v17 = Thread;
          goto LABEL_50;
        case ThreadWorkOnBehalfTicket:
          if ( ThreadInformationLength != 16 )
            return -1073741820;
          if ( Handle != (HANDLE)-2LL )
            return -1073741811;
          v69 = 0uLL;
          WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v68);
          if ( WorkOnBehalfThread )
          {
            PsEncodeThreadWorkOnBehalfTicket((__int64)WorkOnBehalfThread, &v69);
            if ( v68 )
              ObfDereferenceObject(v51);
          }
          else
          {
            PsEncodeThreadWorkOnBehalfTicket((__int64)CurrentThread, &v69);
            v69.m128i_i32[2] |= 1u;
          }
          *v6 = v69;
          if ( ReturnLength )
            *ReturnLength = 16;
          return 0;
        case ThreadSubsystemInformation:
          if ( ThreadInformationLength != 4 )
            return -1073741820;
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 2035381072, (__int64)&Thread, 0LL, 0LL);
          v16 = result;
          if ( result < 0 )
            return result;
          v17 = Thread;
          if ( *(_QWORD *)&Thread[1].WaitBlockFill11[112] )
            v10 = qword_140348E70;
          v6->m128i_i32[0] = v10;
          if ( ReturnLength )
            *ReturnLength = 4;
          goto LABEL_50;
        default:
          return -1073741821;
      }
      return v16;
  }
  return result;
}
