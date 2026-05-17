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

__int64 __fastcall LdrpInitialize(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  struct _TEB *v5; // r13
  __int64 result; // rax
  _PEB *ProcessEnvironmentBlock; // r14
  int v8; // edi
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rcx
  int v13; // eax
  char v14; // cl
  struct _PEB *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+40h] [rbp-58h] BYREF
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // [rsp+48h] [rbp-50h]
  int v21; // [rsp+B0h] [rbp+18h]

  v5 = NtCurrentTeb();
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(&LdrpProcessInitialized, 1, 0);
    if ( (_DWORD)result != 1 || (v5->SameTebFlags & 0x2000) != 0 )
    {
      ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
      if ( !(_DWORD)result )
      {
        v5->SameTebFlags |= 0x20u;
        ProcessEnvironmentBlock->LoaderLock = (_RTL_CRITICAL_SECTION *)&LdrpLoaderLock;
        LdrInitState = 0;
        _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
        qword_18016F2A0 = (__int64)&RtlpDynamicFunctionTable;
        RtlpDynamicFunctionTable = (__int64)&RtlpDynamicFunctionTable;
        RtlpDynamicFunctionTableLock = 0LL;
        RtlpDynamicFunctionTableTree = 0LL;
        v8 = LdrInitializeMrdata();
        if ( v8 >= 0 )
        {
          ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
          if ( (ProcessParameters->Flags & 0x80000000) != 0 )
          {
            LdrpIsSecureProcess = 1;
            LdrpDetourExist = 1;
          }
          v8 = LdrpInitializeProcess(a1, a2);
          v21 = v8;
          if ( v8 >= 0 )
          {
            LdrpLogDllState(*(_QWORD *)(LdrpImageEntry + 48), LdrpImageEntry + 72, 0x14AEu);
            if ( ProcessEnvironmentBlock->MinimumStackCommit )
              v21 = LdrpTouchThreadStack();
            LdrInitState = 3;
            _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->80, 1u);
            result = RtlInitializeHeapGC(LdrpThreadPool);
            v8 = v21;
            if ( v21 >= 0 && (!UseWOW64 || LdrpProcessInitialized == 1) )
            {
              result = (__int64)RtlGetCurrentServiceSessionId();
              if ( (_DWORD)result )
              {
                result = (__int64)NtCurrentPeb();
                v9 = *(_QWORD *)(result + 144) + 554LL;
              }
              else
              {
                v9 = 2147353476LL;
              }
              if ( *(_BYTE *)v9 )
              {
                result = (__int64)NtCurrentPeb();
                if ( (*(_BYTE *)(result + 888) & 4) != 0 )
                {
                  result = (__int64)RtlGetCurrentServiceSessionId();
                  if ( (_DWORD)result )
                  {
                    result = (__int64)NtCurrentPeb();
                    v12 = *(_QWORD *)(result + 144) + 555LL;
                  }
                  else
                  {
                    v12 = 2147353477LL;
                  }
                  if ( (*(_BYTE *)v12 & 0x20) != 0 )
                  {
                    LOBYTE(v11) = -1;
                    LOBYTE(v10) = -1;
                    result = LdrpLogEtwEvent(5252, -1, v10, v11, 0LL, 0LL);
                  }
                }
              }
              _InterlockedAdd(&LdrpProcessInitialized, 1u);
              v8 = v21;
            }
          }
          else
          {
            result = (unsigned int)LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) != 0 )
            {
              LdrpLogDbgPrint(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                1560,
                (unsigned int)"_LdrpInitialize",
                0,
                "Process initialization failed with status 0x%08lx\n",
                v8);
              result = (unsigned int)LdrpDebugFlags;
            }
            if ( (result & 0x10) != 0 )
              __debugbreak();
          }
        }
        else
        {
          result = (unsigned int)LdrpDebugFlags;
          if ( (LdrpDebugFlags & 3) != 0 )
          {
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              1536,
              (unsigned int)"_LdrpInitialize",
              0,
              "LDR:MRDATA: Process initialization failed with status 0x%08lx\n",
              v8);
            result = (unsigned int)LdrpDebugFlags;
          }
          if ( (result & 0x10) != 0 )
            __debugbreak();
        }
        goto LABEL_67;
      }
      v8 = 0;
      if ( !ProcessEnvironmentBlock->InheritedAddressSpace )
        goto LABEL_58;
      if ( _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 2) == 2 )
        break;
    }
    v18 = -300000LL;
    while ( LdrpProcessInitialized == 1 )
    {
      v13 = ZwDelayExecution(0LL, &v18);
      if ( v13 < 0 )
      {
        v14 = LdrpDebugFlags;
        if ( (LdrpDebugFlags & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1479,
            (unsigned int)"_LdrpInitialize",
            1,
            "Delaying execution failed with status 0x%08lx\n",
            v13);
          v14 = LdrpDebugFlags;
        }
        if ( (v14 & 0x40) != 0 )
          __debugbreak();
      }
    }
  }
  if ( ProcessEnvironmentBlock->InheritedAddressSpace )
  {
    v15 = NtCurrentPeb();
    LdrpForkActiveLock = 0LL;
    LdrpForkConditionVariable = 0LL;
    v15->InheritedAddressSpace = 0;
    if ( v15->BeingDebugged )
      LdrpDoDebuggerBreak();
  }
  result = (__int64)RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (__int64)NtCurrentPeb();
    v16 = *(_QWORD *)(result + 144) + 554LL;
  }
  else
  {
    v16 = 2147353476LL;
  }
  if ( *(_BYTE *)v16 )
  {
    result = (__int64)NtCurrentPeb();
    if ( (*(_BYTE *)(result + 888) & 4) != 0 )
    {
      result = (__int64)RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (__int64)NtCurrentPeb();
        v17 = *(_QWORD *)(result + 144) + 555LL;
      }
      else
      {
        v17 = 2147353477LL;
      }
      if ( (*(_BYTE *)v17 & 0x20) != 0 )
      {
        LOBYTE(a4) = -1;
        LOBYTE(a3) = -1;
        result = LdrpLogEtwEvent(5252, -1, a3, a4, 0LL, 0LL);
      }
    }
  }
  _InterlockedAdd(&LdrpProcessInitialized, 1u);
  v8 = 0;
LABEL_58:
  if ( (v5->SameTebFlags & 0x40) == 0 )
  {
    if ( LdrpForkInProgress )
    {
      RtlAcquireSRWLockShared(&LdrpForkActiveLock, a2, a3, a4);
      while ( LdrpForkInProgress )
        RtlSleepConditionVariableSRW(&LdrpForkConditionVariable, (__int64)&LdrpForkActiveLock, 0LL, 1);
      RtlReleaseSRWLockShared(&LdrpForkActiveLock);
    }
    if ( UseWOW64 )
      g_LdrpWow64LdrpInitialize(a1);
    result = LdrpInitializeThread(a1, (__int64)a2, a3);
  }
LABEL_67:
  if ( v8 < 0 )
  {
    LdrpInitializationFailure(v8);
    ZwTerminateProcess(-1LL, (unsigned int)v8);
    RtlRaiseStatus(v8);
  }
  if ( (v5->SameTebFlags & 0x2000) == 0 )
    return ZwTestAlert();
  return result;
}
