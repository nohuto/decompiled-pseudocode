/*
 * XREFs of TpSetPoolMaxThreadsSoftLimit @ 0x1800596F0
 * Callers:
 *     sub_180059230 @ 0x180059230 (sub_180059230.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180108120 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     ZwSetInformationWorkerFactory @ 0x18009DD90 (ZwSetInformationWorkerFactory.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

NTSTATUS __fastcall TpSetPoolMaxThreadsSoftLimit(__int64 a1, PPEB_LDR_DATA Ldr, __int64 a3)
{
  int WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = (int)Ldr;
  if ( !a1 )
    return sub_1801086C8(a1, Ldr, a3);
  if ( (int)Ldr < 0 )
    return sub_1801086C8(a1, Ldr, a3);
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return sub_1801086C8(a1, Ldr, a3);
  else
    return ZwSetInformationWorkerFactory(
             *(HANDLE *)(a1 + 56),
             WorkerFactoryThreadSoftMaximum,
             &WorkerFactoryInformation,
             4u);
}
