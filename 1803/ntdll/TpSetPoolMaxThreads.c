/*
 * XREFs of TpSetPoolMaxThreads @ 0x180059670
 * Callers:
 *     sub_180056E90 @ 0x180056E90 (sub_180056E90.c)
 *     sub_180059230 @ 0x180059230 (sub_180059230.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180108120 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     sub_1800038AC @ 0x1800038AC (sub_1800038AC.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     ZwSetInformationWorkerFactory @ 0x18009DD90 (ZwSetInformationWorkerFactory.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

// local variable allocation has failed, the output may be wrong!
void __cdecl TpSetPoolMaxThreads(PTP_POOL Pool, ULONG MaxThreads)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  ULONG WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = MaxThreads;
  if ( !Pool
    || (MaxThreads & 0x80000000) != 0
    || (*(_QWORD *)&MaxThreads = NtCurrentPeb()->Ldr, *(_BYTE *)(*(_QWORD *)&MaxThreads + 72LL)) )
  {
    sub_1801086C8(Pool, *(_QWORD *)&MaxThreads, v2);
  }
  else
  {
    ZwSetInformationWorkerFactory(*((HANDLE *)Pool + 7), WorkerFactoryThreadMaximum, &WorkerFactoryInformation, 4u);
    if ( RtlGetCurrentServiceSessionId() )
      v4 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v4 = 2147353478LL;
    if ( *(_BYTE *)v4 )
      sub_1800038AC((__int64)Pool, WorkerFactoryInformation);
  }
}
