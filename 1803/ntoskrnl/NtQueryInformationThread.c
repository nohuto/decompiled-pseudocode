/*
 * XREFs of NtQueryInformationThread @ 0x1404CF440
 * Callers:
 *     <none>
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x140060460 (PsGetWorkOnBehalfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1400604FC (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x140060570 (IoThreadToProcess.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400607C0 (KeQueryTotalCycleTimeThread.c)
 *     KeQueryBasePriorityThread @ 0x140060CB0 (KeQueryBasePriorityThread.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     PsQueryThreadStartAddress @ 0x14006D11C (PsQueryThreadStartAddress.c)
 *     PsGetEffectiveContainerId @ 0x1400BDCA0 (PsGetEffectiveContainerId.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1400C1EC0 (KeSetIdealProcessorThreadByNumber.c)
 *     KeQueryAffinityThread @ 0x1400D1320 (KeQueryAffinityThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeQueryValuesThread @ 0x1400FE540 (KeQueryValuesThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     xKdEnumerateDebuggingDevices @ 0x1401873E0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KeQueryActualAffinityThread @ 0x14023FDEC (KeQueryActualAffinityThread.c)
 *     KeQueryHeteroCpuPolicyThread @ 0x14023FEA0 (KeQueryHeteroCpuPolicyThread.c)
 *     KeQueryCpuSetsThread @ 0x14024689C (KeQueryCpuSetsThread.c)
 *     PspWow64GetContextThread @ 0x140563880 (PspWow64GetContextThread.c)
 *     PsGetThreadExitStatus @ 0x140581B90 (PsGetThreadExitStatus.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     MmCopyVirtualMemory @ 0x14059CD40 (MmCopyVirtualMemory.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     VslGetSecureTebAddress @ 0x1407189C0 (VslGetSecureTebAddress.c)
 *     PspQueryLastCallThread @ 0x14077A7C0 (PspQueryLastCallThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  __m128i *v6; // r14
  struct _KTHREAD *CurrentThread; // r13
  int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  NTSTATUS result; // eax
  NTSTATUS v14; // ebx
  PVOID v15; // rcx
  int ContextThread; // edi
  __int32 v17; // ebx
  char *v18; // rbx
  PVOID WorkOnBehalfThread; // rcx
  BOOL v20; // r15d
  void *v21; // rcx
  BOOL v22; // r15d
  PVOID v23; // rbx
  _KPROCESS *v24; // r15
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  struct _EX_RUNDOWN_REF *v29; // rsi
  int v30; // ebx
  __int64 v31; // rdi
  PVOID v32; // rdi
  char v33; // bl
  NTSTATUS v34; // r15d
  signed __int64 *v35; // r13
  signed __int64 v36; // rax
  const WCHAR *v37; // rdx
  unsigned __int16 v38; // r12
  ULONG v39; // eax
  __int64 v40; // rsi
  NTSTATUS v41; // ebx
  PVOID v42; // r8
  NTSTATUS v43; // eax
  int v44; // ebx
  int v45; // ebx
  __int16 v46; // cx
  PVOID v47; // rcx
  __int32 v48; // esi
  unsigned __int8 *v49; // rax
  int v50; // ecx
  struct _KTHREAD *v51; // rbx
  struct _KTHREAD *v52; // rcx
  unsigned int v53; // r8d
  ULONG v54; // ebx
  ULONG v55; // eax
  NTSTATUS v56; // esi
  unsigned int *v57; // rbx
  unsigned __int64 ThreadStartAddress; // rdx
  __int64 v59; // rcx
  __int32 v60; // edi
  unsigned __int8 v61; // [rsp+40h] [rbp-218h]
  PVOID Object; // [rsp+48h] [rbp-210h] BYREF
  char v63; // [rsp+50h] [rbp-208h]
  char v64; // [rsp+51h] [rbp-207h]
  NTSTATUS v65; // [rsp+54h] [rbp-204h]
  _PROCESSOR_NUMBER v66; // [rsp+5Ch] [rbp-1FCh] BYREF
  unsigned __int16 v67; // [rsp+60h] [rbp-1F8h]
  HANDLE v68; // [rsp+68h] [rbp-1F0h]
  int v69; // [rsp+70h] [rbp-1E8h]
  __int32 v70; // [rsp+78h] [rbp-1E0h] BYREF
  unsigned __int8 v71; // [rsp+7Ch] [rbp-1DCh]
  unsigned __int8 v72; // [rsp+7Dh] [rbp-1DBh]
  char v73; // [rsp+7Eh] [rbp-1DAh]
  char v74; // [rsp+7Fh] [rbp-1D9h]
  int v75; // [rsp+80h] [rbp-1D8h] BYREF
  __m128i v76; // [rsp+88h] [rbp-1D0h] BYREF
  PULONG v77; // [rsp+98h] [rbp-1C0h]
  PVOID v78; // [rsp+A0h] [rbp-1B8h] BYREF
  struct _KTHREAD *v79; // [rsp+A8h] [rbp-1B0h]
  struct _KTHREAD *v80; // [rsp+B0h] [rbp-1A8h]
  __int64 v81; // [rsp+B8h] [rbp-1A0h] BYREF
  __m128i v82; // [rsp+C0h] [rbp-198h] BYREF
  __m128i v83; // [rsp+D0h] [rbp-188h]
  __int32 v84; // [rsp+E0h] [rbp-178h]
  ULONG v85; // [rsp+E4h] [rbp-174h]
  ULONG v86; // [rsp+E8h] [rbp-170h]
  const WCHAR *v87; // [rsp+F8h] [rbp-160h]
  PULONG v88; // [rsp+100h] [rbp-158h]
  unsigned __int64 CycleTimeStamp; // [rsp+118h] [rbp-140h] BYREF
  __m128i v90; // [rsp+120h] [rbp-138h] BYREF
  __m128i v91[4]; // [rsp+130h] [rbp-128h] BYREF
  _QWORD Src[20]; // [rsp+170h] [rbp-E8h] BYREF

  v6 = (__m128i *)ThreadInformation;
  v88 = ReturnLength;
  v68 = ThreadHandle;
  v77 = ReturnLength;
  CurrentThread = KeGetCurrentThread();
  v79 = CurrentThread;
  v80 = CurrentThread;
  v61 = CurrentThread->gap0[10];
  if ( v61 )
  {
    v10 = 1;
    if ( ThreadInformationClass == ThreadNameInformation )
    {
      v11 = 8;
    }
    else if ( ThreadInformationLength < 4 )
    {
      v11 = 1;
    }
    else
    {
      v11 = 4;
    }
    v69 = v11;
    if ( ThreadInformationLength )
    {
      if ( ((v11 - 1) & (unsigned int)ThreadInformation) != 0 )
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
    v10 = 1;
  }
  memset(&v91[1], 0, 0x30uLL);
  if ( ThreadInformationClass != ThreadCycleTime )
  {
    if ( ThreadInformationClass == ThreadActualBasePriority )
    {
      if ( ThreadInformationLength == 4 )
      {
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v17 = *((char *)Object + 563);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v6->m128i_i32[0] = v17;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
    }
    else if ( ThreadInformationClass == ThreadTimes )
    {
      if ( ThreadInformationLength == 32 )
      {
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v83.m128i_i64[0] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 163);
        v83.m128i_i64[1] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 183);
        v82.m128i_i64[0] = *((_QWORD *)Object + 190);
        if ( *((_BYTE *)Object + 4) )
          v82.m128i_i64[1] = *((_QWORD *)Object + 191);
        else
          v82.m128i_i64[1] = 0LL;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *v6 = v82;
        v6[1] = v83;
        if ( ReturnLength )
          *ReturnLength = 32;
        return 0;
      }
    }
    else
    {
      if ( ThreadInformationClass )
      {
        switch ( ThreadInformationClass )
        {
          case ThreadDescriptorTableEntry:
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            if ( result < 0 )
              return result;
            v43 = xKdEnumerateDebuggingDevices();
            goto LABEL_156;
          case ThreadQuerySetWin32StartAddress:
            if ( ThreadInformationLength != 8 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            v30 = result;
            if ( result < 0 )
              return result;
            v31 = *((_QWORD *)Object + 210);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i64[0] = v31;
            if ( ReturnLength )
              *ReturnLength = 8;
            goto LABEL_118;
          case ThreadPerformanceCount:
            if ( ThreadInformationLength != 8 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            v30 = result;
            if ( result < 0 )
              return result;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i64[0] = 0LL;
            if ( ReturnLength )
              *ReturnLength = 8;
            goto LABEL_118;
          case ThreadAmILastThread:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            if ( CurrentThread->Process[1].ThreadSeed[0] != 1 )
              v10 = 0;
            v6->m128i_i32[0] = v10;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadPriorityBoost:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            ContextThread = result;
            if ( result < 0 )
              return result;
            v44 = (*((_DWORD *)Object + 30) >> 3) & 1;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i32[0] = v44;
            if ( ReturnLength )
              *ReturnLength = 4;
            return ContextThread;
          case ThreadIsIoPending:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            if ( result < 0 )
              return result;
            v22 = *((_QWORD *)Object + 206) != (_QWORD)Object + 1648;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i32[0] = v22;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadHideFromDebugger:
            if ( ThreadInformationLength != 1 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
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
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            if ( result < 0 )
              return result;
            v45 = (*((_DWORD *)Object + 436) >> 5) & 1;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i32[0] = v45;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadIsTerminated:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            if ( result < 0 )
              return result;
            v20 = (*((_DWORD *)Object + 436) & 1) != 0;
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v6->m128i_i32[0] = v20;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadLastSystemCall:
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            if ( result < 0 )
              return result;
            v43 = PspQueryLastCallThread(Object, v6, ThreadInformationLength, ReturnLength);
LABEL_156:
            v14 = v43;
            goto LABEL_157;
          case ThreadIoPriority:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            v14 = result;
            v65 = result;
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
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
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
            if ( v61 )
            {
              v91[0] = *v6;
              ProbeForWrite((volatile void *)v91[0].m128i_i64[0], HIDWORD(_mm_srli_si128(v91[0], 8).m128i_u64[0]), 1u);
              v6 = v91;
            }
            v68 = v6;
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            v65 = result;
            if ( result < 0 )
              return result;
            v23 = Object;
            if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
            {
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              result = -1073741816;
            }
            else
            {
              v24 = (_KPROCESS *)*((_QWORD *)Object + 68);
              v25 = v24[1].ActiveProcessors.Bitmap[7];
              if ( v25 && ((v46 = *(_WORD *)(v25 + 8), v46 == 332) || v46 == 452) )
                v26 = 12288LL;
              else
                v26 = 6200LL;
              v27 = v6->m128i_u32[3];
              if ( (_DWORD)v27 && (v28 = v6->m128i_u32[2], v28 < v26) && v27 <= v26 - v28 )
              {
                if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 215) )
                {
                  v29 = (struct _EX_RUNDOWN_REF *)Object;
                  if ( v24 == KeGetCurrentThread()->ApcState.Process )
                  {
                    memmove(
                      (void *)v6->m128i_i64[0],
                      (const void *)(*((_QWORD *)Object + 30) + v6->m128i_u32[2]),
                      v6->m128i_u32[3]);
                    v30 = v65;
                  }
                  else
                  {
                    v30 = MmCopyVirtualMemory((ULONG_PTR)v24, v6->m128i_u32[3], v61, (__int64)&v81);
                  }
                  ExReleaseRundownProtection(v29 + 215);
                  ObfDereferenceObjectWithTag(v29, 0x79517350u);
                  if ( v30 >= 0 )
                  {
                    if ( ReturnLength )
                      *ReturnLength = v6->m128i_u32[3];
                    v30 = 0;
                    v65 = 0;
                  }
LABEL_118:
                  result = v30;
                }
                else
                {
                  ObfDereferenceObjectWithTag(v23, 0x79517350u);
                  result = -1073741749;
                }
              }
              else
              {
                ObfDereferenceObjectWithTag(Object, 0x79517350u);
LABEL_187:
                result = -1073741811;
              }
            }
            break;
          case ThreadWow64Context:
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            if ( result < 0 )
              return result;
            ContextThread = PspWow64GetContextThread(Object, v6, ThreadInformationLength, v61);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            if ( ContextThread >= 0 && ReturnLength )
              *ReturnLength = 716;
            return ContextThread;
          case ThreadGroupInformation:
            if ( ThreadInformationLength != 16 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            v30 = result;
            if ( result < 0 )
              return result;
            v32 = Object;
            KeQueryAffinityThread((__int64)Object, (__int64)&v90);
            *v6 = v90;
            if ( ReturnLength )
              *ReturnLength = 16;
            goto LABEL_130;
          case ThreadUmsInformation:
            if ( ThreadInformationLength != 24 )
              return -1073741820;
            v48 = v6->m128i_i32[0];
            v84 = v6->m128i_i32[0];
            result = ObReferenceObjectByHandle(ThreadHandle, 0x40u, (POBJECT_TYPE)PsThreadType, v61, &v78, 0LL);
            v30 = result;
            if ( result < 0 )
              return result;
            if ( v48 == 3 )
            {
              v6->m128i_i64[0] = 0LL;
              v6->m128i_i64[1] = 0LL;
              v6[1].m128i_i64[0] = 0LL;
              v49 = (unsigned __int8 *)v78;
              v50 = *((unsigned __int8 *)v78 + 3) >> 7;
              v6->m128i_i32[2] = v50;
              v6->m128i_i32[2] = v50 | (v49[3] >> 5) & 2;
            }
            else
            {
              v30 = -1073741811;
            }
            ObfDereferenceObject(v78);
            goto LABEL_118;
          case ThreadCounterProfiling:
            if ( ThreadInformationLength != 1 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            v30 = result;
            if ( result < 0 )
              return result;
            v47 = Object;
            v6->m128i_i8[0] = *((_QWORD *)Object + 45) != 0LL;
            ObfDereferenceObjectWithTag(v47, 0x79517350u);
            if ( ReturnLength )
              *ReturnLength = ThreadInformationLength;
            goto LABEL_118;
          case ThreadIdealProcessorEx:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            if ( result < 0 )
              return result;
            v66 = (_PROCESSOR_NUMBER)0x400000;
            KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, &v66, &v66);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            *(_PROCESSOR_NUMBER *)v6->m128i_i8 = v66;
            if ( ReturnLength )
              *ReturnLength = 4;
            return 0;
          case ThreadCpuAccountingInformation:
            if ( !ThreadInformationLength )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            v65 = result;
            if ( result < 0 )
              return result;
            v6->m128i_i8[0] = *((_QWORD *)Object + 13) != 0LL;
            if ( ReturnLength )
              *ReturnLength = 1;
            v14 = v65;
            goto LABEL_157;
          case ThreadSuspendCount:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            v41 = result;
            if ( result >= 0 )
            {
              v42 = Object;
              v6->m128i_i32[0] = *((char *)Object + 644) + ((*((_DWORD *)Object + 30) >> 14) & 1);
              if ( ReturnLength )
                *ReturnLength = 4;
              ObfDereferenceObjectWithTag(v42, 0x79517350u);
              return v41;
            }
            return result;
          case ThreadHeterogeneousCpuPolicy:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            ContextThread = ObpReferenceObjectByHandleWithTag(
                              (ULONG_PTR)ThreadHandle,
                              0x79517350u,
                              (__int64)&Object,
                              0LL,
                              0LL);
            if ( ContextThread < 0 )
              return ContextThread;
            v51 = (struct _KTHREAD *)Object;
            v6->m128i_i32[0] = KeQueryHeteroCpuPolicyThread((__int64)Object, 1);
            if ( ReturnLength )
              *ReturnLength = 4;
            v52 = v51;
            goto LABEL_257;
          case ThreadContainerId:
            if ( ThreadInformationLength != 16 )
              return -1073741820;
            if ( ThreadHandle != (HANDLE)-2LL )
              goto LABEL_187;
            result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v82);
            if ( result >= 0 )
            {
              *v6 = v82;
              if ( ReturnLength )
                *ReturnLength = 16;
            }
            return result;
          case ThreadNameInformation:
            v64 = 0;
            Object = 0LL;
            v33 = 0;
            v63 = 0;
            v34 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            v65 = v34;
            if ( v34 < 0 )
            {
              v35 = (signed __int64 *)Object;
              v40 = (__int64)v79;
            }
            else
            {
              v64 = 1;
              --CurrentThread->KernelApcDisable;
              v35 = (signed __int64 *)Object;
              ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1728, 0LL);
              v33 = 1;
              v63 = 1;
              v36 = v35[251];
              if ( v36 )
              {
                v37 = *(const WCHAR **)(v36 + 8);
                v38 = *(_WORD *)v36;
                v67 = *(_WORD *)v36;
              }
              else
              {
                v37 = &word_140657F20;
                v38 = 0;
                v67 = 0;
              }
              v87 = v37;
              v39 = v38 + 16;
              LODWORD(v68) = v39;
              v86 = v39;
              if ( v39 > ThreadInformationLength )
              {
                v34 = -1073741789;
                v65 = -1073741789;
              }
              else
              {
                memmove(&v6[1], v37, v38);
                v6->m128i_i16[0] = v38;
                v6->m128i_i16[1] = v38;
                v6->m128i_i64[1] = (__int64)v6[1].m128i_i64;
                v39 = (unsigned int)v68;
                v33 = v63;
              }
              if ( v88 )
                *v88 = v39;
              v40 = (__int64)v79;
            }
            if ( v33 )
            {
              if ( _InterlockedCompareExchange64(v35 + 216, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(v35 + 216);
              KeAbPostRelease((ULONG_PTR)(v35 + 216));
              KeLeaveCriticalRegionThread(v40);
              v34 = v65;
              v35 = (signed __int64 *)Object;
            }
            if ( v64 )
              ObfDereferenceObjectWithTag(v35, 0x79517350u);
            return v34;
          case ThreadSelectedCpuSets:
            if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0xA0 )
              return -1073741820;
            v34 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            v65 = v34;
            if ( v34 >= 0 )
            {
              v54 = 8 * KeQueryCpuSetsThread((__int64)Object, Src, v53);
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              v55 = v54;
              v85 = v54;
              if ( ReturnLength )
                *ReturnLength = v54;
              if ( v54 >= ThreadInformationLength )
                v55 = ThreadInformationLength;
              memmove(v6, Src, v55);
            }
            return v34;
          case ThreadSystemThreadInformation:
            if ( ThreadInformationLength != 80 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            v56 = result;
            if ( result >= 0 )
            {
              v57 = (unsigned int *)Object;
              KeQueryValuesThread((__int64)Object, (__int64)&v70);
              ThreadStartAddress = PsQueryThreadStartAddress((__int64)v57, 1);
              if ( ThreadStartAddress > 0x7FFFFFFEFFFFLL )
                ThreadStartAddress = 0LL;
              v6[4].m128i_i32[1] = v71;
              v6[4].m128i_i32[2] = v72;
              v6[3].m128i_i32[3] = v74;
              v6[3].m128i_i32[2] = v73;
              v6[1].m128i_i32[2] = v70;
              v59 = KeMaximumIncrement;
              v6->m128i_i64[0] = KeMaximumIncrement * (unsigned __int64)v57[163];
              v6->m128i_i64[1] = v59 * v57[183];
              v6[1].m128i_i64[0] = *((_QWORD *)v57 + 190);
              v6[4].m128i_i32[0] = v57[85];
              *(__m128i *)((char *)v6 + 40) = *(__m128i *)(v57 + 398);
              v6[2].m128i_i64[0] = ThreadStartAddress;
              if ( ReturnLength )
                *ReturnLength = 80;
              ObfDereferenceObjectWithTag(v57, 0x79517350u);
              return v56;
            }
            return result;
          case ThreadActualGroupAffinity:
            if ( ThreadInformationLength != 16 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            v30 = result;
            if ( result < 0 )
              return result;
            v32 = Object;
            KeQueryActualAffinityThread((__int64)Object, (__int64)&v90);
            *v6 = v90;
            if ( ReturnLength )
              *ReturnLength = 16;
LABEL_130:
            ObfDereferenceObjectWithTag(v32, 0x79517350u);
            goto LABEL_118;
          case ThreadDynamicCodePolicyInfo:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
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
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            v65 = result;
            if ( result < 0 )
              return result;
            v6->m128i_i32[0] = (*((_DWORD *)Object + 436) >> 19) & 1;
            if ( ReturnLength )
              *ReturnLength = 4;
            v14 = v65;
LABEL_157:
            v15 = Object;
            goto LABEL_27;
          case ThreadWorkOnBehalfTicket:
            if ( ThreadInformationLength != 16 )
              return -1073741820;
            if ( ThreadHandle != (HANDLE)-2LL )
              goto LABEL_187;
            v76 = 0uLL;
            WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v75);
            if ( WorkOnBehalfThread )
            {
              PsEncodeThreadWorkOnBehalfTicket((__int64)WorkOnBehalfThread, &v76);
              if ( v75 )
                ObfDereferenceObject(v21);
            }
            else
            {
              PsEncodeThreadWorkOnBehalfTicket((__int64)CurrentThread, &v76);
              v76.m128i_i32[2] |= 1u;
            }
            *v6 = v76;
            if ( ReturnLength )
              *ReturnLength = 16;
            return 0;
          case ThreadSubsystemInformation:
            if ( ThreadInformationLength != 4 )
              return -1073741820;
            v60 = 0;
            result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            v14 = result;
            if ( result < 0 )
              return result;
            v15 = Object;
            if ( *((_QWORD *)Object + 244) )
              v60 = qword_1403A6130;
            v6->m128i_i32[0] = v60;
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
      if ( ThreadInformationLength == 48 )
      {
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v18 = (char *)Object;
        if ( *((_BYTE *)Object + 4) )
          v91[1].m128i_i32[0] = PsGetThreadExitStatus((PETHREAD)Object);
        else
          v91[1].m128i_i32[0] = 259;
        v91[1].m128i_i64[1] = *((_QWORD *)v18 + 30);
        if ( (IoThreadToProcess((PETHREAD)v18)->SecureState.SecureHandle & 1) != 0 )
          VslGetSecureTebAddress(v18, &v91[1].m128i_u64[1]);
        v91[0] = *(__m128i *)(v18 + 1592);
        v91[3].m128i_i64[0] = *((_QWORD *)v18 + 69);
        v91[3].m128i_i32[2] = v18[195];
        v91[3].m128i_i32[3] = KeQueryBasePriorityThread((__int64)v18);
        ObfDereferenceObjectWithTag(v18, 0x79517350u);
        *v6 = v91[1];
        v6[1] = v91[0];
        v6[2] = v91[3];
        if ( ReturnLength )
          *ReturnLength = 48;
        return 0;
      }
    }
    return -1073741820;
  }
  if ( ThreadInformationLength != 16 )
    return -1073741820;
  ContextThread = 0;
  if ( ThreadHandle == (HANDLE)-2LL )
  {
    Object = CurrentThread;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ThreadHandle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
    ContextThread = result;
    if ( result < 0 )
      return result;
    CurrentThread = (struct _KTHREAD *)Object;
  }
  v6->m128i_i64[0] = KeQueryTotalCycleTimeThread(CurrentThread, &CycleTimeStamp);
  v6->m128i_i64[1] = CycleTimeStamp;
  if ( ReturnLength )
    *ReturnLength = 16;
  if ( ThreadHandle != (HANDLE)-2LL )
  {
    v52 = CurrentThread;
LABEL_257:
    ObfDereferenceObjectWithTag(v52, 0x79517350u);
  }
  return ContextThread;
}
