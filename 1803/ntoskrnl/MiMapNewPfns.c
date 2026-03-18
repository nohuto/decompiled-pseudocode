/*
 * XREFs of MiMapNewPfns @ 0x14074AF30
 * Callers:
 *     MiAddPhysicalMemory @ 0x14074A438 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 *     MiIncreaseCommitLimits @ 0x14017DC60 (MiIncreaseCommitLimits.c)
 *     KeConfigureDynamicMemory @ 0x14023FC14 (KeConfigureDynamicMemory.c)
 *     MiInitializeDynamicPfns @ 0x140252AC0 (MiInitializeDynamicPfns.c)
 */

__int64 __fastcall MiMapNewPfns(unsigned __int64 a1, __int64 a2, __int16 a3, int a4)
{
  __int64 v8; // r8
  __int64 PteAddress; // rax
  __int64 v10; // rdx

  MiGetPteAddress(48 * a2 - 0x58000000001LL);
  PteAddress = MiGetPteAddress(v8 + 48 * a1);
  if ( !(unsigned int)MiMakeZeroedPageTables(PteAddress, v10, 0x1A1u, 4) )
    return 3221225626LL;
  if ( (a4 & 2) == 0 )
  {
    if ( !(unsigned int)MiIncreaseCommitLimits((__int64)&MiSystemPartition, a2 - a1, a2 - a1, (a4 & 4) != 0, 0LL) )
      return 3221225773LL;
    if ( (a4 & 4) == 0 )
      KeConfigureDynamicMemory(a1, a2 - 1, 1);
  }
  MiInitializeDynamicPfns(a1, a2 - a1, a3, a4);
  return 0LL;
}
