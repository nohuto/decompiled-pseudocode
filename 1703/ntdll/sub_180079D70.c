/*
 * XREFs of sub_180079D70 @ 0x180079D70
 * Callers:
 *     sub_180079D20 @ 0x180079D20 (sub_180079D20.c)
 * Callees:
 *     sub_1800048B8 @ 0x1800048B8 (sub_1800048B8.c)
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     sub_180041490 @ 0x180041490 (sub_180041490.c)
 *     RtlSleepConditionVariableSRW @ 0x180071060 (RtlSleepConditionVariableSRW.c)
 *     sub_180086CEC @ 0x180086CEC (sub_180086CEC.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_180095AC4 @ 0x180095AC4 (sub_180095AC4.c)
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 *     ZwDelayExecution @ 0x1800A5980 (ZwDelayExecution.c)
 *     ZwTestAlert @ 0x1800A8930 (ZwTestAlert.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     sub_1800D62F0 @ 0x1800D62F0 (sub_1800D62F0.c)
 *     sub_1800D6F48 @ 0x1800D6F48 (sub_1800D6F48.c)
 *     sub_1800D76B0 @ 0x1800D76B0 (sub_1800D76B0.c)
 */

NTSTATUS __fastcall sub_180079D70(__int64 a1, __int64 a2, __int64 a3)
{
  struct _TEB *v5; // r15
  signed __int32 v6; // eax
  PPEB ProcessEnvironmentBlock; // r14
  int v8; // edi
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  char v12; // al
  char v13; // al
  int v14; // r8d
  int v15; // r9d
  USHORT *v16; // rcx
  struct _PEB *v17; // rax
  char v18; // cl
  __int64 v19; // rcx
  int v20; // r9d
  USHORT *v21; // rcx
  LARGE_INTEGER DelayInterval; // [rsp+38h] [rbp-40h] BYREF
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // [rsp+40h] [rbp-38h]
  int v24; // [rsp+90h] [rbp+18h]

  v5 = NtCurrentTeb();
  while ( 1 )
  {
    v6 = _InterlockedCompareExchange(&dword_18015B398, 1, 0);
    if ( v6 == 1 && (v5->SameTebFlags & 0x2000) == 0 )
      goto LABEL_13;
    ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
    if ( !v6 )
    {
      v5->SameTebFlags |= 0x20u;
      ProcessEnvironmentBlock->LoaderLock = &stru_1801555A8;
      dword_18015C018 = 0;
      _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->CrossProcessFlags, 1u);
      qword_18016B2A0 = (__int64)&qword_18016B298;
      qword_18016B298 = (__int64)&qword_18016B298;
      stru_18015A2B0.Ptr = 0LL;
      qword_18016B290 = 0LL;
      v8 = sub_180095AC4();
      if ( v8 < 0 )
      {
        v12 = dword_180155A10;
        if ( (dword_180155A10 & 3) != 0 )
        {
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1572,
            (unsigned int)"_LdrpInitialize",
            0,
            "LDR:MRDATA: Process initialization failed with status 0x%08lx\n",
            v8);
          v12 = dword_180155A10;
        }
        if ( (v12 & 0x10) != 0 )
          __debugbreak();
        goto LABEL_10;
      }
      ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
      if ( (ProcessParameters->Flags & 0x80000000) != 0 )
      {
        byte_18015B26C = 1;
        byte_18015B260 = 1;
      }
      v8 = sub_180091AB4(a1, a2);
      v24 = v8;
      if ( v8 < 0 )
      {
        v13 = dword_180155A10;
        if ( (dword_180155A10 & 3) != 0 )
        {
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1596,
            (unsigned int)"_LdrpInitialize",
            0,
            "Process initialization failed with status 0x%08lx\n",
            v8);
          v13 = dword_180155A10;
        }
        if ( (v13 & 0x10) != 0 )
          __debugbreak();
        goto LABEL_10;
      }
      sub_18003CA5C(*(_QWORD *)(qword_18015AE50 + 48), qword_18015AE50 + 72, 0x14AEu);
      if ( ProcessEnvironmentBlock->MinimumStackCommit )
        v24 = sub_180086CEC();
      dword_18015C018 = 3;
      _interlockedbittestandreset((volatile signed __int32 *)&ProcessEnvironmentBlock->CrossProcessFlags, 1u);
      v8 = v24;
      if ( v24 >= 0 )
      {
        if ( !dword_18015B264 || dword_18015B398 == 1 )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v11 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
          else
            v11 = 2147353476LL;
          if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
          {
            v16 = RtlGetCurrentServiceSessionId()
                ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
                : (USHORT *)2147353477;
            if ( (*(_BYTE *)v16 & 0x20) != 0 )
            {
              LOBYTE(v15) = -1;
              LOBYTE(v14) = -1;
              sub_1800D62F0(5252, -1, v14, v15, 0LL, 0LL);
            }
          }
          _InterlockedAdd(&dword_18015B398, 1u);
          v8 = v24;
        }
        goto LABEL_10;
      }
LABEL_70:
      sub_1800048B8(v8);
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v8);
      RtlRaiseStatus(v8);
    }
    v8 = 0;
    if ( !ProcessEnvironmentBlock->InheritedAddressSpace )
      goto LABEL_5;
    if ( _InterlockedCompareExchange(&dword_18015B398, 1, 2) == 2 )
      break;
LABEL_13:
    DelayInterval.QuadPart = -300000LL;
    while ( dword_18015B398 == 1 )
    {
      v10 = ZwDelayExecution(0, &DelayInterval);
      if ( v10 < 0 )
      {
        v18 = dword_180155A10;
        if ( (dword_180155A10 & 3) != 0 )
        {
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            1515,
            (unsigned int)"_LdrpInitialize",
            1,
            "Delaying execution failed with status 0x%08lx\n",
            v10);
          v18 = dword_180155A10;
        }
        if ( (v18 & 0x40) != 0 )
          __debugbreak();
      }
    }
  }
  if ( ProcessEnvironmentBlock->InheritedAddressSpace )
  {
    v17 = NtCurrentPeb();
    stru_18015C1E8.Ptr = 0LL;
    ConditionVariable.Ptr = 0LL;
    v17->InheritedAddressSpace = 0;
    if ( v17->BeingDebugged )
      sub_1800D6F48();
  }
  if ( RtlGetCurrentServiceSessionId() )
    v19 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
  else
    v19 = 2147353476LL;
  if ( *(_BYTE *)v19 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v21 = RtlGetCurrentServiceSessionId()
        ? (USHORT *)((char *)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1)
        : (USHORT *)2147353477;
    if ( (*(_BYTE *)v21 & 0x20) != 0 )
    {
      LOBYTE(v20) = -1;
      LOBYTE(a3) = -1;
      sub_1800D62F0(5252, -1, a3, v20, 0LL, 0LL);
    }
  }
  _InterlockedAdd(&dword_18015B398, 1u);
  v8 = 0;
LABEL_5:
  if ( (v5->SameTebFlags & 0x40) == 0 )
  {
    if ( byte_18015AE99 )
    {
      RtlAcquireSRWLockShared(&stru_18015C1E8);
      while ( byte_18015AE99 )
        RtlSleepConditionVariableSRW(&ConditionVariable, &stru_18015C1E8, 0LL, 1u);
      RtlReleaseSRWLockShared(&stru_18015C1E8);
    }
    if ( dword_18015B264 )
      qword_18016B210(a1);
    sub_180041490(a1, a2, a3);
  }
LABEL_10:
  if ( v8 < 0 )
    goto LABEL_70;
  return ZwTestAlert();
}
