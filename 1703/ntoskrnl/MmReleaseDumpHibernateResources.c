/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x140577870
 * Callers:
 *     PopFreeHiberContext @ 0x140577660 (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x1405A92A4 (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x14068F120 (IopLiveDumpFreeMappingResources.c)
 * Callees:
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 */

char __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  _QWORD *PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_14036D0A0, PteAddress, v2);
}
