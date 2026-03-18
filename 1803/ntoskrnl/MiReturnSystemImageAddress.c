/*
 * XREFs of MiReturnSystemImageAddress @ 0x1405F6654
 * Callers:
 *     MiReturnImageBase @ 0x1405937FC (MiReturnImageBase.c)
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x1405F8C24 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiReleaseDriverPtes @ 0x1405F6694 (MiReleaseDriverPtes.c)
 */

__int64 __fastcall MiReturnSystemImageAddress(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 PteAddress; // rax
  unsigned int v3; // r9d
  unsigned int v4; // r10d

  MiGetSystemRegionType(a1);
  PteAddress = MiGetPteAddress(v1);
  return MiReleaseDriverPtes(v3, PteAddress, v4);
}
