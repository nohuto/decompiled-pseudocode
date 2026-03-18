/*
 * XREFs of MiMarkKernelPageTablePages @ 0x14040CF24
 * Callers:
 *     MmMarkHiberPhase @ 0x14040D3A0 (MmMarkHiberPhase.c)
 * Callees:
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiMarkKernelPageTablesHelper @ 0x14040DCC0 (MiMarkKernelPageTablesHelper.c)
 */

__int64 MiMarkKernelPageTablePages()
{
  unsigned __int64 v0; // r9
  unsigned __int64 v1; // rdx
  __int64 PteAddress; // rdx
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r10

  v0 = 0xFFFF800000000000uLL;
  do
  {
    MiGetPteAddress(v0);
    PteAddress = MiGetPteAddress(v1);
  }
  while ( v3 != 1 );
  MiMarkKernelPageTablesHelper(v0, PteAddress, 4LL);
  v4 = 0xFFFFF70000000000uLL;
  do
  {
    MiGetPteAddress(v4);
    v6 = MiGetPteAddress(v5);
  }
  while ( v7 != 1 );
  return MiMarkKernelPageTablesHelper(v4, v6, 4LL);
}
