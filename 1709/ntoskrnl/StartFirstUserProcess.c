/*
 * XREFs of StartFirstUserProcess @ 0x14085168C
 * Callers:
 *     Phase1InitializationIoReady @ 0x14082FAF0 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     InbvIsBootDriverInstalled @ 0x140156FF0 (InbvIsBootDriverInstalled.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x14017DC40 (ZwSetInformationProcess.c)
 *     ZwResumeThread @ 0x14017E300 (ZwResumeThread.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     FinalizeBootLogo @ 0x1401F3AFC (FinalizeBootLogo.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlCreateUserProcessEx @ 0x140851878 (RtlCreateUserProcessEx.c)
 *     QueryRegistryHideMachine @ 0x140851AFC (QueryRegistryHideMachine.c)
 *     RegistryOverwriteCentralProcessor @ 0x140868B3C (RegistryOverwriteCentralProcessor.c)
 */

void StartFirstUserProcess()
{
  const UNICODE_STRING *ServerSiloGlobals; // rsi
  __int64 MaximumLength; // rcx
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rbx
  char *PoolWithTag; // rax
  char *v6; // rdi
  __int128 v7; // xmm0
  BOOLEAN v8; // r8
  PRTL_USER_PROCESS_EXTENDED_PARAMETERS v9; // r9
  ULONG_PTR v10; // rbx
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-49h] BYREF
  _RTL_USER_PROCESS_INFORMATION ProcessInformation; // [rsp+40h] [rbp-39h] BYREF
  int v15; // [rsp+E0h] [rbp+67h] BYREF
  LARGE_INTEGER Interval; // [rsp+E8h] [rbp+6Fh] BYREF

  if ( (unsigned __int8)QueryRegistryHideMachine() )
    RegistryOverwriteCentralProcessor();
  ServerSiloGlobals = (const UNICODE_STRING *)PsGetServerSiloGlobals(0LL);
  MaximumLength = ServerSiloGlobals[62].MaximumLength;
  v2 = ServerSiloGlobals[63].MaximumLength;
  v3 = MaximumLength + 1100;
  v4 = v2 + MaximumLength;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v2 + MaximumLength + 1100, 0x62537350u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x6Du, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  memset(PoolWithTag, 0, v4 + 1100);
  *((_DWORD *)v6 + 1) = v3;
  *((_QWORD *)v6 + 16) = &v6[v3];
  *(_DWORD *)v6 = v3;
  *((_DWORD *)v6 + 2) = 4194305;
  *((_QWORD *)v6 + 126) = v2;
  RtlInitUnicodeString((PUNICODE_STRING)v6 + 5, 0LL);
  *((_QWORD *)v6 + 8) = v6 + 1040;
  *((_WORD *)v6 + 29) = ServerSiloGlobals[62].MaximumLength;
  RtlCopyUnicodeString((PUNICODE_STRING)(v6 + 56), ServerSiloGlobals + 62);
  *((_QWORD *)v6 + 13) = &v6[*((unsigned __int16 *)v6 + 29) + 1040];
  *((_WORD *)v6 + 49) = 60;
  RtlCopyUnicodeString((PUNICODE_STRING)v6 + 6, &NtInitialUserProcess);
  v7 = *((_OWORD *)v6 + 6);
  DestinationString.Buffer = (wchar_t *)*((_QWORD *)v6 + 16);
  *((_OWORD *)v6 + 7) = v7;
  DestinationString.Length = 0;
  DestinationString.MaximumLength = v2;
  RtlCopyUnicodeString(&DestinationString, ServerSiloGlobals + 63);
  v10 = RtlCreateUserProcessEx((PUNICODE_STRING)v6 + 6, (PRTL_USER_PROCESS_PARAMETERS)v6, v8, v9, &ProcessInformation);
  if ( InbvIsBootDriverInstalled() )
    FinalizeBootLogo();
  if ( (v10 & 0x80000000) != 0LL )
    KeBugCheckEx(0x6Du, v10, 0LL, 1uLL, 0LL);
  v15 = 1;
  v11 = ZwSetInformationProcess(ProcessInformation.ProcessHandle, ProcessBreakOnTermination, &v15, 4u);
  if ( v11 < 0 )
    KeBugCheckEx(0x6Du, v11, 0LL, 2uLL, 0LL);
  v12 = ZwResumeThread(ProcessInformation.ThreadHandle, 0LL);
  if ( v12 < 0 )
    KeBugCheckEx(0x6Du, v12, 0LL, 3uLL, 0LL);
  byte_140387808 = 1;
  Interval.QuadPart = -50000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  ZwClose(ProcessInformation.ThreadHandle);
  ZwClose(ProcessInformation.ProcessHandle);
  ExFreePoolWithTag(v6, 0);
}
