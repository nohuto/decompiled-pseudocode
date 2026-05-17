/*
 * XREFs of TpSetPoolMaxThreadsSoftLimit @ 0x1800596F0
 * Callers:
 *     sub_180059230 @ 0x180059230 (sub_180059230.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180108120 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     ZwSetInformationWorkerFactory @ 0x18009DD90 (ZwSetInformationWorkerFactory.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

__int64 __fastcall TpSetPoolMaxThreadsSoftLimit(__int64 a1, struct _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = (int)Ldr;
  if ( !a1 )
    return sub_1801086C8(a1, Ldr, a3, a4);
  if ( (int)Ldr < 0 )
    return sub_1801086C8(a1, Ldr, a3, a4);
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return sub_1801086C8(a1, Ldr, a3, a4);
  else
    return ZwSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 14LL, &v5);
}
