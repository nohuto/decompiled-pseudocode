/*
 * XREFs of TpSetPoolWorkerThreadIdleTimeout @ 0x180059740
 * Callers:
 *     sub_180056E90 @ 0x180056E90 (sub_180056E90.c)
 * Callees:
 *     ZwSetInformationWorkerFactory @ 0x18009DD90 (ZwSetInformationWorkerFactory.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

NTSTATUS __fastcall TpSetPoolWorkerThreadIdleTimeout(__int64 a1, PPEB_LDR_DATA Ldr, __int64 a3)
{
  PPEB_LDR_DATA WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = Ldr;
  if ( a1 )
  {
    if ( (__int64)Ldr < 0 )
    {
      Ldr = NtCurrentPeb()->Ldr;
      if ( !Ldr->ShutdownInProgress )
        return ZwSetInformationWorkerFactory(
                 *(HANDLE *)(a1 + 56),
                 WorkerFactoryIdleTimeout,
                 &WorkerFactoryInformation,
                 8u);
    }
  }
  sub_1801086C8(a1, Ldr, a3);
  return -1073741811;
}
