/*
 * XREFs of TpSetPoolWorkerThreadIdleTimeout @ 0x18000FEC0
 * Callers:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 * Callees:
 *     ZwSetInformationWorkerFactory @ 0x1800A8530 (ZwSetInformationWorkerFactory.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

NTSTATUS __fastcall TpSetPoolWorkerThreadIdleTimeout(__int64 a1, __int64 a2)
{
  __int64 WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = a2;
  if ( a1 && a2 < 0 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return ZwSetInformationWorkerFactory(*(HANDLE *)(a1 + 56), WorkerFactoryIdleTimeout, &WorkerFactoryInformation, 8u);
  sub_1801058B8();
  return -1073741811;
}
