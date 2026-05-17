/*
 * XREFs of TpSetPoolWorkerThreadIdleTimeout @ 0x18000A2A0
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180009F74 (LdrpEnableParallelLoading.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1800A3350 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpSetPoolWorkerThreadIdleTimeout(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  if ( a1 && a2 < 0 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 2LL, &v3);
  TppRaiseInvalidParameter();
  return 3221225485LL;
}
