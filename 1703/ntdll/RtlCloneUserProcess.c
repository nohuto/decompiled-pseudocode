/*
 * XREFs of RtlCloneUserProcess @ 0x1800D86D0
 * Callers:
 *     sub_1800D8360 @ 0x1800D8360 (sub_1800D8360.c)
 * Callees:
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18000C9B0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     sub_180019FC0 @ 0x180019FC0 (sub_180019FC0.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlWakeAllConditionVariable @ 0x180051860 (RtlWakeAllConditionVariable.c)
 *     sub_18008D520 @ 0x18008D520 (sub_18008D520.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800D7B28 @ 0x1800D7B28 (sub_1800D7B28.c)
 *     sub_1800D7BCC @ 0x1800D7BCC (sub_1800D7BCC.c)
 *     sub_1800D7D28 @ 0x1800D7D28 (sub_1800D7D28.c)
 *     sub_1800D8EC0 @ 0x1800D8EC0 (sub_1800D8EC0.c)
 *     sub_1800D8F18 @ 0x1800D8F18 (sub_1800D8F18.c)
 *     sub_1800EF328 @ 0x1800EF328 (sub_1800EF328.c)
 *     sub_1800EFBEC @ 0x1800EFBEC (sub_1800EFBEC.c)
 */

NTSTATUS __cdecl RtlCloneUserProcess(
        ULONG ProcessFlags,
        PSECURITY_DESCRIPTOR ProcessSecurityDescriptor,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        HANDLE DebugPort,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  PSECURITY_DESCRIPTOR v7; // rbp
  int v9; // esi
  ULONG v10; // r15d
  ULONG v11; // r14d
  ULONG v12; // edi
  NTSTATUS v13; // ebx
  _RTL_SRWLOCK *v14; // rbx
  __int64 v15; // rbp
  NTSTATUS v16; // eax
  NTSTATUS v17; // ebp
  unsigned int v18; // ebx
  _QWORD v19[8]; // [rsp+30h] [rbp-68h] BYREF

  v7 = ProcessSecurityDescriptor;
  if ( (ProcessFlags & 0xFFFFFFF8) != 0 )
    return -1073741585;
  v9 = 2;
  v10 = ProcessFlags & 1;
  v11 = 2 * (ProcessFlags & 2);
  v12 = ProcessFlags & 4;
  if ( (ProcessFlags & 4) == 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v13 = -1073741420;
    }
    else
    {
      sub_18001AE14(0);
      sub_180019FC0();
      RtlEnterCriticalSection(&stru_18015B220);
      v13 = 0;
    }
    if ( v13 >= 0 )
    {
      RtlAcquireSRWLockExclusive(&stru_18015C200);
      sub_1800D8EC0();
      RtlEnterCriticalSection(&stru_18015AE60);
      RtlAcquireSRWLockShared(&stru_18015C0D8);
      v14 = &stru_18015C0E8;
      v15 = 16LL;
      do
      {
        RtlAcquireSRWLockExclusive(v14);
        v14 += 2;
        --v15;
      }
      while ( v15 );
      RtlAcquireSRWLockExclusive(&stru_18015C290);
      sub_1800D7D28(0);
      v13 = sub_1800EF328();
      if ( v13 >= 0 )
      {
        RtlAcquireSRWLockExclusive(&stru_18015C1F8);
        RtlAcquireSRWLockExclusive(&stru_18015C1E8);
        v13 = 0;
        byte_18015AE99 = 1;
      }
      else
      {
        sub_1800D7D28(2);
        RtlReleaseSRWLockExclusive(&stru_18015C290);
        sub_1800D7BCC(0);
        RtlLeaveCriticalSection(&stru_18015AE60);
        sub_1800D8F18(0LL);
        RtlReleaseSRWLockExclusive(&stru_18015C200);
        sub_1800D7B28(0);
      }
      v7 = ProcessSecurityDescriptor;
    }
    if ( v13 < 0 )
      return v13;
  }
  memset(v19, 0, 0x38uLL);
  v19[1] = v7;
  LOWORD(v19[0]) = 1;
  v19[2] = ThreadSecurityDescriptor;
  v19[4] = DebugPort;
  v16 = sub_18008D520(0LL, 0LL, v11, v10, (__int64)v19, (HANDLE *)ProcessInformation);
  v17 = v16;
  if ( !v12 )
  {
    if ( v16 == 297 )
    {
      stru_18015C1F8.Ptr = (PVOID)1;
      v18 = 1;
      v9 = 1;
      stru_18015AE60.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
      stru_18015AE60.LockCount = -2;
      stru_18015AE60.RecursionCount = 1;
      stru_18015AE60.LockSemaphore = 0LL;
      stru_18015C200.Ptr = (PVOID)1;
    }
    else
    {
      byte_18015AE99 = 0;
      v18 = 0;
      RtlReleaseSRWLockExclusive(&stru_18015C1E8);
    }
    RtlReleaseSRWLockExclusive(&stru_18015C1F8);
    sub_1800D7D28(v9);
    if ( v9 == 1 )
      stru_18015C290.Ptr = (PVOID)1;
    else
      RtlReleaseSRWLockExclusive(&stru_18015C290);
    sub_1800EFBEC(v18);
    sub_1800D7BCC(v18);
    RtlLeaveCriticalSection(&stru_18015AE60);
    sub_1800D8F18(v18);
    RtlReleaseSRWLockExclusive(&stru_18015C200);
    sub_1800D7B28(v18);
    if ( v18 )
    {
      byte_18015AE99 = 0;
      RtlAcquireReleaseSRWLockExclusive(&stru_18015C1E8);
      RtlWakeAllConditionVariable(&ConditionVariable);
    }
  }
  return v17;
}
