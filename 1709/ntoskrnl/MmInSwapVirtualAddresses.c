/*
 * XREFs of MmInSwapVirtualAddresses @ 0x1406EC92C
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x140275E70 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     MiProcessWsInSwapSupport @ 0x140003F98 (MiProcessWsInSwapSupport.c)
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiContractWsSwapPageFile @ 0x140444648 (MiContractWsSwapPageFile.c)
 *     EtwTraceWorkingSetSwap @ 0x1405983E0 (EtwTraceWorkingSetSwap.c)
 */

__int64 __fastcall MmInSwapVirtualAddresses(PEPROCESS Process, PVOID P)
{
  __int64 ProcessPartition; // rbx
  _DWORD v6[10]; // [rsp+20h] [rbp-38h] BYREF

  v6[0] = 2;
  EtwTraceWorkingSetSwap(Process, 3, (__int64)v6);
  ProcessPartition = MiGetProcessPartition((__int64)Process);
  MiProcessWsInSwapSupport((__int64)P, 2u);
  ExFreePoolWithTag(P, 0);
  MiContractWsSwapPageFile(ProcessPartition);
  v6[8] = 0;
  EtwTraceWorkingSetSwap(Process, 1, (__int64)v6);
  return 0LL;
}
