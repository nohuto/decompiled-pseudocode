/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x1406E2588
 * Callers:
 *     PopEnableHiberFile @ 0x1405AD8E0 (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x1406BADE4 (IopLiveDumpFreeMappingResources.c)
 *     PopFreeHiberContext @ 0x1406FB8E8 (PopFreeHiberContext.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 */

__int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  unsigned int v2; // r8d
  unsigned __int64 v3; // r9

  PteAddress = MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_140389360, PteAddress, v2, v3);
}
