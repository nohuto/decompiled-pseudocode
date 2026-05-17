/*
 * XREFs of TpSetPoolWorkerThreadIdleTimeout @ 0x18000FEC0
 * Callers:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 * Callees:
 *     ZwSetInformationWorkerFactory @ 0x1800A8530 (ZwSetInformationWorkerFactory.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall TpSetPoolWorkerThreadIdleTimeout(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  if ( a1 && a2 < 0 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return ZwSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 2LL, &v3);
  sub_1801058B8();
  return 3221225485LL;
}
