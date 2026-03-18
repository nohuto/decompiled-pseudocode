/*
 * XREFs of MiReturnSystemImageAddress @ 0x1405413B0
 * Callers:
 *     MiReturnImageBase @ 0x140499C04 (MiReturnImageBase.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140542BF0 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiReleaseDriverPtes @ 0x1405413F0 (MiReleaseDriverPtes.c)
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
