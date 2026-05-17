/*
 * XREFs of TpSetPoolMaxThreadsSoftLimit @ 0x180084DB0
 * Callers:
 *     sub_180018508 @ 0x180018508 (sub_180018508.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180105340 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     ZwSetInformationWorkerFactory @ 0x1800A8530 (ZwSetInformationWorkerFactory.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall TpSetPoolMaxThreadsSoftLimit(__int64 a1, struct _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = (int)Ldr;
  if ( !a1 )
    return sub_1801058B8(a1, Ldr, a3, a4);
  if ( (int)Ldr < 0 )
    return sub_1801058B8(a1, Ldr, a3, a4);
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return sub_1801058B8(a1, Ldr, a3, a4);
  else
    return ZwSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 14LL, &v5);
}
