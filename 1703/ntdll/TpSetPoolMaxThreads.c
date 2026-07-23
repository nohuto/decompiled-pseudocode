/*
 * XREFs of TpSetPoolMaxThreads @ 0x18000FE40
 * Callers:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180018508 @ 0x180018508 (sub_180018508.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180105340 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     sub_180004AD8 @ 0x180004AD8 (sub_180004AD8.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     ZwSetInformationWorkerFactory @ 0x1800A8530 (ZwSetInformationWorkerFactory.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

void __cdecl TpSetPoolMaxThreads(PTP_POOL Pool, ULONG MaxThreads)
{
  __int64 v3; // rcx
  ULONG WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = MaxThreads;
  if ( !Pool || (MaxThreads & 0x80000000) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    sub_1801058B8();
  }
  else
  {
    ZwSetInformationWorkerFactory(*((HANDLE *)Pool + 7), WorkerFactoryThreadMaximum, &WorkerFactoryInformation, 4u);
    if ( RtlGetCurrentServiceSessionId() )
      v3 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v3 = 2147353478LL;
    if ( *(_BYTE *)v3 )
      sub_180004AD8((__int64)Pool, WorkerFactoryInformation);
  }
}
