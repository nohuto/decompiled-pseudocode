/*
 * XREFs of MmIsSpecialPoolAddress @ 0x14004C860
 * Callers:
 *     ExProtectPoolEx @ 0x14004C6F8 (ExProtectPoolEx.c)
 *     ExReturnPoolQuota @ 0x1400BA618 (ExReturnPoolQuota.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     ExQueryPoolBlockSize @ 0x140187020 (ExQueryPoolBlockSize.c)
 *     IopUpdateMinidumpContext @ 0x1402354E0 (IopUpdateMinidumpContext.c)
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 *     MmIsNonPagedSystemAddressValid @ 0x140256470 (MmIsNonPagedSystemAddressValid.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     VeAllocatePoolWithTagPriority @ 0x140812DA0 (VeAllocatePoolWithTagPriority.c)
 *     ExFreePoolSanityChecks @ 0x140837DBC (ExFreePoolSanityChecks.c)
 * Callees:
 *     MiVaIsSessionSpecialPool @ 0x1400CA560 (MiVaIsSessionSpecialPool.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiIsAddressValid @ 0x140122C40 (MiIsAddressValid.c)
 */

__int64 __fastcall MmIsSpecialPoolAddress(unsigned __int64 a1)
{
  int SystemRegionType; // eax
  unsigned int v3; // r10d

  if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || !(unsigned __int8)MiIsAddressValid(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
  {
    return 0LL;
  }
  SystemRegionType = MiGetSystemRegionType(a1);
  if ( SystemRegionType == 7 || SystemRegionType == 13 )
    return 1LL;
  LOBYTE(v3) = (unsigned int)MiVaIsSessionSpecialPool(a1) != 0;
  return v3;
}
