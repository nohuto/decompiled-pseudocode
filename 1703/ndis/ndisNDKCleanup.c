/*
 * XREFs of ndisNDKCleanup @ 0x1C00E3E90
 * Callers:
 *     ndisMCommonHaltMiniport @ 0x1C00FB074 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001156C (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisNDKCleanup(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax

  NDKBlock = ndisGetNDKBlock(a1);
  ExFreePoolWithTag(NDKBlock, 0);
}
