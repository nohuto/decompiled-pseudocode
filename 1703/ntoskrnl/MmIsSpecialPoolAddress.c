/*
 * XREFs of MmIsSpecialPoolAddress @ 0x1400A5B4C
 * Callers:
 *     ExReturnPoolQuota @ 0x140024F70 (ExReturnPoolQuota.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     ExProtectPoolEx @ 0x1400A5BE0 (ExProtectPoolEx.c)
 *     IopUpdateMinidumpContext @ 0x1401F2830 (IopUpdateMinidumpContext.c)
 *     KeBugCheck2 @ 0x1401FEE60 (KeBugCheck2.c)
 *     MmIsNonPagedSystemAddressValid @ 0x140211F20 (MmIsNonPagedSystemAddressValid.c)
 *     ExQueryPoolBlockSize @ 0x14025B080 (ExQueryPoolBlockSize.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     VeAllocatePoolWithTagPriority @ 0x1407640D0 (VeAllocatePoolWithTagPriority.c)
 *     ExFreePoolSanityChecks @ 0x1407883B0 (ExFreePoolSanityChecks.c)
 * Callees:
 *     MiIsAddressValid @ 0x1400A58A0 (MiIsAddressValid.c)
 *     MiVaIsSessionSpecialPool @ 0x1400A6B34 (MiVaIsSessionSpecialPool.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MmIsSpecialPoolAddress(unsigned __int64 a1)
{
  int SystemRegionType; // eax
  unsigned int v3; // r10d

  if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || !MiIsAddressValid(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
  {
    return 0LL;
  }
  SystemRegionType = MiGetSystemRegionType(a1);
  if ( SystemRegionType == 13 || SystemRegionType == 7 )
    return 1LL;
  LOBYTE(v3) = (unsigned int)MiVaIsSessionSpecialPool(a1) != 0;
  return v3;
}
