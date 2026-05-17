/*
 * XREFs of TpSetPoolMaxThreads @ 0x18000A220
 * Callers:
 *     LdrpEnableParallelLoading @ 0x180009F74 (LdrpEnableParallelLoading.c)
 *     TppPoolpReferenceGlobalPool @ 0x180035C94 (TppPoolpReferenceGlobalPool.c)
 *     TpSetDefaultPoolMaxThreads @ 0x18010A920 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     TppETWPoolThreadMax @ 0x1800028CC (TppETWPoolThreadMax.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     NtSetInformationWorkerFactory @ 0x1800A3350 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 */

struct _PEB *__fastcall TpSetPoolMaxThreads(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _PEB *result; // rax
  __int64 v6; // rcx
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  if ( !a1 || a2 < 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    return (struct _PEB *)TppRaiseInvalidParameter();
  NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 5LL, &v7);
  result = (struct _PEB *)RtlGetCurrentServiceSessionId(v4, v3);
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v6 = (__int64)result->SharedData + 556;
  }
  else
  {
    v6 = 2147353478LL;
  }
  if ( *(_BYTE *)v6 )
    return (struct _PEB *)TppETWPoolThreadMax(a1, v7);
  return result;
}
