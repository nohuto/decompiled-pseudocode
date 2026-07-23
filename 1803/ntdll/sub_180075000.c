/*
 * XREFs of sub_180075000 @ 0x180075000
 * Callers:
 *     sub_180074FB0 @ 0x180074FB0 (sub_180074FB0.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlSleepConditionVariableSRW @ 0x180025E20 (RtlSleepConditionVariableSRW.c)
 *     sub_180038ED4 @ 0x180038ED4 (sub_180038ED4.c)
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     sub_18005712C @ 0x18005712C (sub_18005712C.c)
 *     sub_180082060 @ 0x180082060 (sub_180082060.c)
 *     sub_18008965C @ 0x18008965C (sub_18008965C.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwTerminateProcess @ 0x18009B040 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x18009B140 (ZwDelayExecution.c)
 *     ZwTestAlert @ 0x18009E1B0 (ZwTestAlert.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800CBAB0 @ 0x1800CBAB0 (sub_1800CBAB0.c)
 *     sub_1800CCA4C @ 0x1800CCA4C (sub_1800CCA4C.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800CFF48 @ 0x1800CFF48 (sub_1800CFF48.c)
 *     sub_1800D0C98 @ 0x1800D0C98 (sub_1800D0C98.c)
 */

void __fastcall sub_180075000(__int64 a1, __int64 a2, __int64 a3)
{
  struct _TEB *v4; // r13
  signed __int32 v5; // eax
  PPEB ProcessEnvironmentBlock; // r14
  NTSTATUS v7; // edi
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  char v10; // al
  char v11; // al
  int v12; // r8d
  int v13; // r9d
  USHORT *v14; // rcx
  struct _PEB *v15; // rax
  __int64 v16; // rcx
  char v17; // cl
  int v18; // r9d
  USHORT *v19; // rcx
  LARGE_INTEGER DelayInterval; // [rsp+40h] [rbp-58h] BYREF
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // [rsp+48h] [rbp-50h]
  int v23; // [rsp+B0h] [rbp+18h]

  v4 = NtCurrentTeb();
  while ( 1 )
  {
    v5 = _InterlockedCompareExchange(&dword_18015C3B8, 1, 0);
    if ( v5 == 1 && (v4->SameTebFlags & 0x2000) == 0 )
      goto LABEL_15;
    ProcessEnvironmentBlock = v4->ProcessEnvironmentBlock;
    if ( !v5 )
      break;
    v7 = 0;
    if ( !ProcessEnvironmentBlock->InheritedAddressSpace )
      goto LABEL_5;
    if ( _InterlockedCompareExchange(&dword_18015C3B8, 1, 2) == 2 )
    {
      if ( ProcessEnvironmentBlock->InheritedAddressSpace )
      {
        v15 = NtCurrentPeb();
        stru_18015D248.Ptr = 0LL;
        ConditionVariable.Ptr = 0LL;
        v15->InheritedAddressSpace = 0;
        if ( v15->BeingDebugged )
          sub_1800CCA4C();
      }
      if ( RtlGetCurrentServiceSessionId() )
        v16 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
      else
        v16 = 2147353476LL;
      if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v19 = RtlGetCurrentServiceSessionId()
            ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
            : (USHORT *)2147353477;
        if ( (*(_BYTE *)v19 & 0x20) != 0 )
        {
          LOBYTE(v18) = -1;
          LOBYTE(a3) = -1;
          sub_1800CBAB0(5252, -1, a3, v18, 0LL, 0LL);
        }
      }
      _InterlockedAdd(&dword_18015C3B8, 1u);
      v7 = 0;
LABEL_5:
      if ( (v4->SameTebFlags & 0x40) == 0 )
      {
        if ( byte_18015BEB9 )
        {
          RtlAcquireSRWLockShared(&stru_18015D248);
          while ( byte_18015BEB9 )
            RtlSleepConditionVariableSRW(&ConditionVariable, &stru_18015D248, 0LL, 1u);
          RtlReleaseSRWLockShared(&stru_18015D248);
        }
        if ( dword_18015C290 )
          qword_18016F220(a1);
        sub_180038ED4(a1, a2, a3);
      }
      goto LABEL_10;
    }
LABEL_15:
    DelayInterval.QuadPart = -300000LL;
    while ( dword_18015C3B8 == 1 )
    {
      v8 = ZwDelayExecution(0, &DelayInterval);
      if ( v8 < 0 )
      {
        v17 = dword_180156A70;
        if ( (dword_180156A70 & 3) != 0 )
        {
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1480,
            (unsigned int)"_LdrpInitialize",
            1,
            "Delaying execution failed with status 0x%08lx\n",
            v8);
          v17 = dword_180156A70;
        }
        if ( (v17 & 0x40) != 0 )
          __debugbreak();
      }
    }
  }
  v4->SameTebFlags |= 0x20u;
  ProcessEnvironmentBlock->LoaderLock = &stru_1801565B0;
  dword_18015CFB8 = 0;
  _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->CrossProcessFlags, 1u);
  qword_18016F2B0 = (__int64)&qword_18016F2A8;
  qword_18016F2A8 = (__int64)&qword_18016F2A8;
  stru_18015B2B0.Ptr = 0LL;
  qword_18016F2A0 = 0LL;
  v7 = sub_1800D0C98();
  if ( v7 >= 0 )
  {
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 0x80000000) != 0 )
    {
      byte_18015C298 = 1;
      byte_18015C280 = 1;
    }
    v7 = sub_1800CDEF0(a1, a2);
    v23 = v7;
    if ( v7 >= 0 )
    {
      sub_18003BC9C(*(_QWORD *)(qword_18015BF88 + 48), qword_18015BF88 + 72, 0x14AEu);
      if ( ProcessEnvironmentBlock->MinimumStackCommit )
        v23 = sub_180082060();
      dword_18015CFB8 = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->CrossProcessFlags, 1u);
      sub_18005712C(Pool);
      v7 = v23;
      if ( v23 >= 0 && (!dword_18015C290 || dword_18015C3B8 == 1) )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
        else
          v9 = 2147353476LL;
        if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
        {
          v14 = RtlGetCurrentServiceSessionId()
              ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
              : (USHORT *)2147353477;
          if ( (*(_BYTE *)v14 & 0x20) != 0 )
          {
            LOBYTE(v13) = -1;
            LOBYTE(v12) = -1;
            sub_1800CBAB0(5252, -1, v12, v13, 0LL, 0LL);
          }
        }
        _InterlockedAdd(&dword_18015C3B8, 1u);
        v7 = v23;
      }
    }
    else
    {
      v11 = dword_180156A70;
      if ( (dword_180156A70 & 3) != 0 )
      {
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          1561,
          (unsigned int)"_LdrpInitialize",
          0,
          "Process initialization failed with status 0x%08lx\n",
          v7);
        v11 = dword_180156A70;
      }
      if ( (v11 & 0x10) != 0 )
        __debugbreak();
    }
  }
  else
  {
    v10 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        1537,
        (unsigned int)"_LdrpInitialize",
        0,
        "LDR:MRDATA: Process initialization failed with status 0x%08lx\n",
        v7);
      v10 = dword_180156A70;
    }
    if ( (v10 & 0x10) != 0 )
      __debugbreak();
  }
LABEL_10:
  if ( v7 < 0 )
  {
    sub_18008965C((unsigned int)v7);
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
    RtlRaiseStatus(v7);
  }
  if ( (v4->SameTebFlags & 0x2000) == 0 )
    ZwTestAlert();
}
