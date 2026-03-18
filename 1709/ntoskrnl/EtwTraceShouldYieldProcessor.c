/*
 * XREFs of EtwTraceShouldYieldProcessor @ 0x14027B8F8
 * Callers:
 *     MiQueryAddressSpan @ 0x14003EDF0 (MiQueryAddressSpan.c)
 *     MiGetPageChain @ 0x1400484F0 (MiGetPageChain.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiWalkPageTablesRecursively @ 0x14009D030 (MiWalkPageTablesRecursively.c)
 *     NtUnlockVirtualMemory @ 0x1400EB680 (NtUnlockVirtualMemory.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall EtwTraceShouldYieldProcessor(int a1, int a2, int a3)
{
  _DWORD v3[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  v3[0] = a1;
  v3[1] = a2;
  v4 = v3;
  v6 = 0;
  v3[2] = a3;
  v5 = 12;
  EtwTraceKernelEvent((__int64)&v4, 1u, 0x24000000u, 0xF6Du, 0x400A02u);
}
