/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x1405EFA0C
 * Callers:
 *     PopFreeHiberContext @ 0x1405EF808 (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x140624E34 (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x14071FD70 (IopLiveDumpFreeMappingResources.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 */

char __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  unsigned __int64 v2; // r8

  PteAddress = MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_1403CC5E0, PteAddress, v2);
}
