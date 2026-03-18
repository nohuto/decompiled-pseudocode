/*
 * XREFs of MmInSwapVirtualAddresses @ 0x14075654C
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x14009C150 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     MiProcessWsInSwapSupport @ 0x14007F488 (MiProcessWsInSwapSupport.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwTraceWorkingSetSwap @ 0x14052C59C (EtwTraceWorkingSetSwap.c)
 *     MiContractWsSwapPageFile @ 0x14052C90C (MiContractWsSwapPageFile.c)
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
