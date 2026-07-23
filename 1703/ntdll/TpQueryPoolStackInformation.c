/*
 * XREFs of TpQueryPoolStackInformation @ 0x1801052D0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationWorkerFactory @ 0x1800A7B30 (ZwQueryInformationWorkerFactory.c)
 */

NTSTATUS __cdecl TpQueryPoolStackInformation(PTP_POOL Pool, PTP_POOL_STACK_INFORMATION PoolStackInformation)
{
  NTSTATUS result; // eax
  _BYTE WorkerFactoryInformation[96]; // [rsp+30h] [rbp-88h] BYREF
  SIZE_T v5; // [rsp+90h] [rbp-28h]
  SIZE_T v6; // [rsp+98h] [rbp-20h]

  if ( !Pool || !PoolStackInformation )
    return -1073741811;
  result = ZwQueryInformationWorkerFactory(
             *((HANDLE *)Pool + 7),
             WorkerFactoryBasicInformation,
             WorkerFactoryInformation,
             0x78u,
             0LL);
  if ( result >= 0 )
  {
    PoolStackInformation->StackCommit = v6;
    PoolStackInformation->StackReserve = v5;
  }
  return result;
}
