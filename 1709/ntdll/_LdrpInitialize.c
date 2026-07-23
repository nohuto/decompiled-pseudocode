/*
 * XREFs of _LdrpInitialize @ 0x180078E70
 * Callers:
 *     LdrpInitialize @ 0x180078E20 (LdrpInitialize.c)
 * Callees:
 *     LdrpInitializationFailure @ 0x180002208 (LdrpInitializationFailure.c)
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     LdrpInitializeThread @ 0x18002EC08 (LdrpInitializeThread.c)
 *     LdrpLogDllState @ 0x180031CA8 (LdrpLogDllState.c)
 *     RtlSleepConditionVariableSRW @ 0x1800380E0 (RtlSleepConditionVariableSRW.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlInitializeHeapGC @ 0x1800814AC (RtlInitializeHeapGC.c)
 *     LdrpTouchThreadStack @ 0x180085424 (LdrpTouchThreadStack.c)
 *     ZwTerminateProcess @ 0x1800A0640 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x1800A0740 (ZwDelayExecution.c)
 *     ZwTestAlert @ 0x1800A3770 (ZwTestAlert.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 *     LdrpLogEtwEvent @ 0x1800D1E90 (LdrpLogEtwEvent.c)
 *     LdrpDoDebuggerBreak @ 0x1800D2B9C (LdrpDoDebuggerBreak.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D6034 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrInitializeMrdata @ 0x1800D6C08 (LdrInitializeMrdata.c)
 */

int __fastcall LdrpInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  struct _TEB *v4; // r13
  struct _PEB *v5; // rax
  _PEB *ProcessEnvironmentBlock; // r14
  int v7; // edi
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rcx
  NTSTATUS v12; // eax
  char v13; // cl
  struct _PEB *v14; // rax
  __int64 v15; // rcx
  int v16; // r9d
  __int64 v17; // rcx
  LARGE_INTEGER DelayInterval; // [rsp+40h] [rbp-58h] BYREF
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // [rsp+48h] [rbp-50h]
  int v22; // [rsp+B0h] [rbp+18h]

  v4 = NtCurrentTeb();
  while ( 1 )
  {
    LODWORD(v5) = _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 0);
    if ( (_DWORD)v5 != 1 || (v4->SameTebFlags & 0x2000) != 0 )
    {
      ProcessEnvironmentBlock = v4->ProcessEnvironmentBlock;
      if ( !(_DWORD)v5 )
      {
        v4->SameTebFlags |= 0x20u;
        ProcessEnvironmentBlock->LoaderLock = &LdrpLoaderLock;
        LdrInitState = 0;
        _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
        qword_18016F2A0 = (__int64)&RtlpDynamicFunctionTable;
        RtlpDynamicFunctionTable = (__int64)&RtlpDynamicFunctionTable;
        RtlpDynamicFunctionTableLock.0 = 0LL;
        RtlpDynamicFunctionTableTree = 0LL;
        v7 = LdrInitializeMrdata();
        if ( v7 >= 0 )
        {
          ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
          if ( (ProcessParameters->Flags & 0x80000000) != 0 )
          {
            LdrpIsSecureProcess = 1;
            LdrpDetourExist = 1;
          }
          v7 = LdrpInitializeProcess(a1, a2);
          v22 = v7;
          if ( v7 >= 0 )
          {
            LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14AEu);
            if ( ProcessEnvironmentBlock->MinimumStackCommit )
              v22 = LdrpTouchThreadStack();
            LdrInitState = 3;
            _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
            LODWORD(v5) = RtlInitializeHeapGC(LdrpThreadPool);
            v7 = v22;
            if ( v22 >= 0 && (!UseWOW64 || LdrpProcessInitialized == 1) )
            {
              LODWORD(v5) = RtlGetCurrentServiceSessionId();
              if ( (_DWORD)v5 )
              {
                v5 = NtCurrentPeb();
                v8 = (__int64)v5->SharedData + 554;
              }
              else
              {
                v8 = 2147353476LL;
              }
              if ( *(_BYTE *)v8 )
              {
                v5 = NtCurrentPeb();
                if ( (v5->TracingFlags & 4) != 0 )
                {
                  LODWORD(v5) = RtlGetCurrentServiceSessionId();
                  if ( (_DWORD)v5 )
                  {
                    v5 = NtCurrentPeb();
                    v11 = (__int64)v5->SharedData + 555;
                  }
                  else
                  {
                    v11 = 2147353477LL;
                  }
                  if ( (*(_BYTE *)v11 & 0x20) != 0 )
                  {
                    LOBYTE(v10) = -1;
                    LOBYTE(v9) = -1;
                    LODWORD(v5) = LdrpLogEtwEvent(5252, -1, v9, v10, 0LL, 0LL);
                  }
                }
              }
              _InterlockedAdd(&LdrpProcessInitialized, 1u);
              v7 = v22;
            }
          }
          else
          {
            LODWORD(v5) = LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) != 0 )
            {
              LdrpLogDbgPrint(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                1560,
                (unsigned int)"_LdrpInitialize",
                0,
                "Process initialization failed with status 0x%08lx\n",
                v7);
              LODWORD(v5) = LdrpDebugFlags;
            }
            if ( ((unsigned __int8)v5 & 0x10) != 0 )
              __debugbreak();
          }
        }
        else
        {
          LODWORD(v5) = LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              1536,
              (unsigned int)"_LdrpInitialize",
              0,
              "LDR:MRDATA: Process initialization failed with status 0x%08lx\n",
              v7);
            LODWORD(v5) = LdrpDebugFlags;
          }
          if ( ((unsigned __int8)v5 & 0x10) != 0 )
            __debugbreak();
        }
        goto LABEL_67;
      }
      v7 = 0;
      if ( !ProcessEnvironmentBlock->InheritedAddressSpace )
        goto LABEL_58;
      if ( _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 2) == 2 )
        break;
    }
    DelayInterval.QuadPart = -300000LL;
    while ( LdrpProcessInitialized == 1 )
    {
      v12 = ZwDelayExecution(0, &DelayInterval);
      if ( v12 < 0 )
      {
        v13 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1479,
            (unsigned int)"_LdrpInitialize",
            1,
            "Delaying execution failed with status 0x%08lx\n",
            v12);
          v13 = LdrpDebugFlags;
        }
        if ( (v13 & 0x40) != 0 )
          __debugbreak();
      }
    }
  }
  if ( ProcessEnvironmentBlock->InheritedAddressSpace )
  {
    v14 = NtCurrentPeb();
    LdrpForkActiveLock.0 = 0LL;
    LdrpForkConditionVariable.Ptr = 0LL;
    v14->InheritedAddressSpace = 0;
    if ( v14->BeingDebugged )
      LdrpDoDebuggerBreak();
  }
  LODWORD(v5) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v5 )
  {
    v5 = NtCurrentPeb();
    v15 = (__int64)v5->SharedData + 554;
  }
  else
  {
    v15 = 2147353476LL;
  }
  if ( *(_BYTE *)v15 )
  {
    v5 = NtCurrentPeb();
    if ( (v5->TracingFlags & 4) != 0 )
    {
      LODWORD(v5) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v5 )
      {
        v5 = NtCurrentPeb();
        v17 = (__int64)v5->SharedData + 555;
      }
      else
      {
        v17 = 2147353477LL;
      }
      if ( (*(_BYTE *)v17 & 0x20) != 0 )
      {
        LOBYTE(v16) = -1;
        LOBYTE(a3) = -1;
        LODWORD(v5) = LdrpLogEtwEvent(5252, -1, a3, v16, 0LL, 0LL);
      }
    }
  }
  _InterlockedAdd(&LdrpProcessInitialized, 1u);
  v7 = 0;
LABEL_58:
  if ( (v4->SameTebFlags & 0x40) == 0 )
  {
    if ( LdrpForkInProgress )
    {
      RtlAcquireSRWLockShared(&LdrpForkActiveLock);
      while ( LdrpForkInProgress )
        RtlSleepConditionVariableSRW(&LdrpForkConditionVariable, &LdrpForkActiveLock, 0LL, 1u);
      RtlReleaseSRWLockShared(&LdrpForkActiveLock);
    }
    if ( UseWOW64 )
      g_LdrpWow64LdrpInitialize(a1);
    LODWORD(v5) = LdrpInitializeThread(a1, a2, a3);
  }
LABEL_67:
  if ( v7 < 0 )
  {
    LdrpInitializationFailure(v7);
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
    RtlRaiseStatus(v7);
  }
  if ( (v4->SameTebFlags & 0x2000) == 0 )
    LODWORD(v5) = ZwTestAlert();
  return (int)v5;
}
