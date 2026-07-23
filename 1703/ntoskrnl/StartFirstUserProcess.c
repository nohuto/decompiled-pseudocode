/*
 * XREFs of StartFirstUserProcess @ 0x14081013C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     InbvIsBootDriverInstalled @ 0x140158F50 (InbvIsBootDriverInstalled.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x14017E2C0 (ZwSetInformationProcess.c)
 *     ZwResumeThread @ 0x14017E980 (ZwResumeThread.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     InbvAcquireLock @ 0x1401EE13C (InbvAcquireLock.c)
 *     InbvGetDisplayState @ 0x1401EE214 (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1401EE2A8 (InbvReleaseLock.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCreateUserProcessEx @ 0x140810324 (RtlCreateUserProcessEx.c)
 *     QueryRegistryHideMachine @ 0x140810590 (QueryRegistryHideMachine.c)
 *     RegistryOverwriteCentralProcessor @ 0x140831C48 (RegistryOverwriteCentralProcessor.c)
 */

void StartFirstUserProcess()
{
  const UNICODE_STRING *ServerSiloGlobals; // rsi
  __int64 MaximumLength; // r14
  __int64 v2; // rbx
  char *PoolWithTag; // rax
  char *v4; // rdi
  __int128 v5; // xmm0
  BOOLEAN v6; // r8
  PRTL_USER_PROCESS_EXTENDED_PARAMETERS v7; // r9
  ULONG_PTR v8; // rbx
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-49h] BYREF
  _RTL_USER_PROCESS_INFORMATION ProcessInformation; // [rsp+40h] [rbp-39h] BYREF
  int v13; // [rsp+E0h] [rbp+67h] BYREF
  LARGE_INTEGER Interval; // [rsp+E8h] [rbp+6Fh] BYREF

  if ( (unsigned __int8)QueryRegistryHideMachine() )
    RegistryOverwriteCentralProcessor();
  ServerSiloGlobals = (const UNICODE_STRING *)PsGetServerSiloGlobals(0LL);
  MaximumLength = ServerSiloGlobals[61].MaximumLength;
  v2 = ServerSiloGlobals[60].MaximumLength + 1100LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, MaximumLength + v2, 0x62537350u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x6Du, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  memset(PoolWithTag, 0, MaximumLength + v2);
  *((_DWORD *)v4 + 1) = v2;
  *((_QWORD *)v4 + 16) = &v4[v2];
  *(_DWORD *)v4 = v2;
  *((_DWORD *)v4 + 2) = 4194305;
  *((_QWORD *)v4 + 126) = MaximumLength;
  RtlInitUnicodeString((PUNICODE_STRING)v4 + 5, 0LL);
  *((_QWORD *)v4 + 8) = v4 + 1040;
  *((_WORD *)v4 + 29) = ServerSiloGlobals[60].MaximumLength;
  RtlCopyUnicodeString((PUNICODE_STRING)(v4 + 56), ServerSiloGlobals + 60);
  *((_QWORD *)v4 + 13) = &v4[*((unsigned __int16 *)v4 + 29) + 1040];
  *((_WORD *)v4 + 49) = 60;
  RtlCopyUnicodeString((PUNICODE_STRING)v4 + 6, &NtInitialUserProcess);
  v5 = *((_OWORD *)v4 + 6);
  DestinationString.Buffer = (wchar_t *)*((_QWORD *)v4 + 16);
  *((_OWORD *)v4 + 7) = v5;
  DestinationString.Length = 0;
  DestinationString.MaximumLength = MaximumLength;
  RtlCopyUnicodeString(&DestinationString, ServerSiloGlobals + 61);
  v8 = RtlCreateUserProcessEx((PUNICODE_STRING)v4 + 6, (PRTL_USER_PROCESS_PARAMETERS)v4, v6, v7, &ProcessInformation);
  if ( InbvIsBootDriverInstalled() )
  {
    InbvAcquireLock();
    if ( !(unsigned int)InbvGetDisplayState() )
      VidSolidColorFill(0LL, 0LL, 639LL, 479LL, 0);
    PltRotBarStatus = 3;
    InbvReleaseLock();
  }
  if ( (v8 & 0x80000000) != 0LL )
    KeBugCheckEx(0x6Du, v8, 0LL, 1uLL, 0LL);
  v13 = 1;
  v9 = ZwSetInformationProcess(ProcessInformation.ProcessHandle, ProcessBreakOnTermination, &v13, 4u);
  if ( v9 < 0 )
    KeBugCheckEx(0x6Du, v9, 0LL, 2uLL, 0LL);
  v10 = ZwResumeThread(ProcessInformation.ThreadHandle, 0LL);
  if ( v10 < 0 )
    KeBugCheckEx(0x6Du, v10, 0LL, 3uLL, 0LL);
  byte_14036B898 = 1;
  Interval.QuadPart = -50000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  ZwClose(ProcessInformation.ThreadHandle);
  ZwClose(ProcessInformation.ProcessHandle);
  ExFreePoolWithTag(v4, 0);
}
