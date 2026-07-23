/*
 * XREFs of TpAdjustBindingCount @ 0x18000C7D8
 * Callers:
 *     TppIopFree @ 0x18000A900 (TppIopFree.c)
 *     TpBindFileToDirect @ 0x18000AB4C (TpBindFileToDirect.c)
 *     TppDestroyTimer @ 0x18000C5A8 (TppDestroyTimer.c)
 *     TppInitializeTimer @ 0x18000C73C (TppInitializeTimer.c)
 *     TppAlpcpFree @ 0x180013A50 (TppAlpcpFree.c)
 *     TppAllocAlpcCompletion @ 0x180013B30 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x180014020 (TpAllocJobNotification.c)
 *     TppJobpFree @ 0x180014300 (TppJobpFree.c)
 *     RtlpTpIoDllProcessUnloads @ 0x18010B408 (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1800A3350 (NtSetInformationWorkerFactory.c)
 */

int __fastcall TpAdjustBindingCount(__int64 a1, unsigned int a2)
{
  int result; // eax
  int v3; // r8d
  int WorkerFactoryInformation; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 432), a2);
    v3 = result + a2;
    if ( result > 0 )
    {
      if ( v3 > 0 )
        return result;
      WorkerFactoryInformation = -1;
      return NtSetInformationWorkerFactory(
               *(HANDLE *)(a1 + 56),
               WorkerFactoryBindingCount,
               &WorkerFactoryInformation,
               4u);
    }
    if ( v3 > 0 )
    {
      WorkerFactoryInformation = 1;
      return NtSetInformationWorkerFactory(
               *(HANDLE *)(a1 + 56),
               WorkerFactoryBindingCount,
               &WorkerFactoryInformation,
               4u);
    }
  }
  return result;
}
