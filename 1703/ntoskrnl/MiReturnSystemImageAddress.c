/*
 * XREFs of MiReturnSystemImageAddress @ 0x140583130
 * Callers:
 *     MiGetSystemAddressForImage @ 0x1404B1048 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     MiReturnImageBase @ 0x140513EE8 (MiReturnImageBase.c)
 * Callees:
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
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
