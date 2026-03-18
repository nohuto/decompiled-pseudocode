/*
 * XREFs of MmIsSpecialPoolAddress @ 0x14006660C
 * Callers:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     ExProtectPoolEx @ 0x140064D70 (ExProtectPoolEx.c)
 *     ExReturnPoolQuota @ 0x1401166AC (ExReturnPoolQuota.c)
 *     IopUpdateMinidumpContext @ 0x1401F819C (IopUpdateMinidumpContext.c)
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 *     MmIsNonPagedSystemAddressValid @ 0x140219990 (MmIsNonPagedSystemAddressValid.c)
 *     ExQueryPoolBlockSize @ 0x140284880 (ExQueryPoolBlockSize.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VeAllocatePoolWithTagPriority @ 0x1407A5DD0 (VeAllocatePoolWithTagPriority.c)
 *     ExFreePoolSanityChecks @ 0x1407CA844 (ExFreePoolSanityChecks.c)
 * Callees:
 *     MiVaIsSessionSpecialPool @ 0x140066694 (MiVaIsSessionSpecialPool.c)
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
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
  if ( SystemRegionType == 13 || SystemRegionType == 7 )
    return 1LL;
  LOBYTE(v3) = (unsigned int)MiVaIsSessionSpecialPool(a1) != 0;
  return v3;
}
