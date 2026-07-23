/*
 * XREFs of RtlCloneUserProcess @ 0x1800D1660
 * Callers:
 *     sub_1800D12F0 @ 0x1800D12F0 (sub_1800D12F0.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 *     sub_180046FBC @ 0x180046FBC (sub_180046FBC.c)
 *     RtlWakeAllConditionVariable @ 0x1800735E0 (RtlWakeAllConditionVariable.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007EBA0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     sub_180086FA0 @ 0x180086FA0 (sub_180086FA0.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800D0858 @ 0x1800D0858 (sub_1800D0858.c)
 *     sub_1800D09C4 @ 0x1800D09C4 (sub_1800D09C4.c)
 *     sub_1800D0C68 @ 0x1800D0C68 (sub_1800D0C68.c)
 *     sub_1800D1E50 @ 0x1800D1E50 (sub_1800D1E50.c)
 *     sub_1800D1EA8 @ 0x1800D1EA8 (sub_1800D1EA8.c)
 *     sub_1800EB360 @ 0x1800EB360 (sub_1800EB360.c)
 *     sub_1800EBBBC @ 0x1800EBBBC (sub_1800EBBBC.c)
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
      sub_1800435B4(0);
      sub_180046FBC();
      RtlEnterCriticalSection(&stru_18015C240);
      v13 = 0;
    }
    if ( v13 >= 0 )
    {
      RtlAcquireSRWLockExclusive(&stru_18015D260);
      sub_1800D1E50();
      RtlEnterCriticalSection(&stru_18015BE80);
      RtlAcquireSRWLockShared(&stru_18015D118);
      v14 = &stru_18015D128;
      v15 = 16LL;
      do
      {
        RtlAcquireSRWLockExclusive(v14);
        v14 += 2;
        --v15;
      }
      while ( v15 );
      RtlAcquireSRWLockExclusive(&stru_18015D2D0);
      sub_1800D0C68(0);
      v13 = sub_1800EB360();
      if ( v13 >= 0 )
      {
        RtlAcquireSRWLockExclusive(&stru_18015D258);
        RtlAcquireSRWLockExclusive(&stru_18015D248);
        v13 = 0;
        byte_18015BEB9 = 1;
      }
      else
      {
        sub_1800D0C68(2);
        RtlReleaseSRWLockExclusive(&stru_18015D2D0);
        sub_1800D09C4(0);
        RtlLeaveCriticalSection(&stru_18015BE80);
        sub_1800D1EA8(0LL);
        RtlReleaseSRWLockExclusive(&stru_18015D260);
        sub_1800D0858(0);
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
  v16 = sub_180086FA0(0LL, 0LL, v11, v10, (__int64)v19, (HANDLE *)ProcessInformation);
  v17 = v16;
  if ( !v12 )
  {
    if ( v16 == 297 )
    {
      stru_18015D258.Ptr = (PVOID)1;
      v18 = 1;
      v9 = 1;
      stru_18015BE80.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
      stru_18015BE80.LockCount = -2;
      stru_18015BE80.RecursionCount = 1;
      stru_18015BE80.LockSemaphore = 0LL;
      stru_18015D260.Ptr = (PVOID)1;
    }
    else
    {
      byte_18015BEB9 = 0;
      v18 = 0;
      RtlReleaseSRWLockExclusive(&stru_18015D248);
    }
    RtlReleaseSRWLockExclusive(&stru_18015D258);
    sub_1800D0C68(v9);
    if ( v9 == 1 )
      stru_18015D2D0.Ptr = (PVOID)1;
    else
      RtlReleaseSRWLockExclusive(&stru_18015D2D0);
    sub_1800EBBBC(v18);
    sub_1800D09C4(v18);
    RtlLeaveCriticalSection(&stru_18015BE80);
    sub_1800D1EA8(v18);
    RtlReleaseSRWLockExclusive(&stru_18015D260);
    sub_1800D0858(v18);
    if ( v18 )
    {
      byte_18015BEB9 = 0;
      RtlAcquireReleaseSRWLockExclusive(&stru_18015D248);
      RtlWakeAllConditionVariable(&ConditionVariable);
    }
  }
  return v17;
}
