/*
 * XREFs of TpSetPoolMinThreads @ 0x1800878A0
 * Callers:
 *     sub_180018508 @ 0x180018508 (sub_180018508.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     ZwSetInformationWorkerFactory @ 0x1800A8530 (ZwSetInformationWorkerFactory.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 *     sub_180105A00 @ 0x180105A00 (sub_180105A00.c)
 */

NTSTATUS __cdecl TpSetPoolMinThreads(PTP_POOL Pool, ULONG MinThreads)
{
  int v3; // edi
  __int64 v4; // rdx
  ULONG WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = MinThreads;
  if ( !Pool || (MinThreads & 0x80000000) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    sub_1801058B8(Pool);
    return -1073741811;
  }
  else
  {
    v3 = ZwSetInformationWorkerFactory(*((HANDLE *)Pool + 7), WorkerFactoryThreadMinimum, &WorkerFactoryInformation, 4u);
    if ( RtlGetCurrentServiceSessionId() )
      v4 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v4 = 2147353478LL;
    if ( *(_BYTE *)v4 )
    {
      if ( v3 >= 0 )
        sub_180105A00(Pool, WorkerFactoryInformation);
    }
    return v3;
  }
}
