/*
 * XREFs of TpSetPoolMinThreads @ 0x180086AC0
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x180035C94 (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     NtSetInformationWorkerFactory @ 0x1800A3350 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 *     TppETWPoolThreadMin @ 0x18010B094 (TppETWPoolThreadMin.c)
 */

NTSTATUS __cdecl TpSetPoolMinThreads(PTP_POOL Pool, ULONG MinThreads)
{
  int v3; // edi
  __int64 v4; // rdx
  ULONG WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  WorkerFactoryInformation = MinThreads;
  if ( !Pool || (MinThreads & 0x80000000) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter(Pool);
    return -1073741811;
  }
  else
  {
    v3 = NtSetInformationWorkerFactory(*((HANDLE *)Pool + 7), WorkerFactoryThreadMinimum, &WorkerFactoryInformation, 4u);
    if ( RtlGetCurrentServiceSessionId() )
      v4 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v4 = 2147353478LL;
    if ( *(_BYTE *)v4 )
    {
      if ( v3 >= 0 )
        TppETWPoolThreadMin(Pool, WorkerFactoryInformation);
    }
    return v3;
  }
}
