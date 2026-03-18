/*
 * XREFs of MiVaIsSessionSpecialPool @ 0x140066694
 * Callers:
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MmIsSpecialPoolAddress @ 0x14006660C (MmIsSpecialPoolAddress.c)
 *     MmQuerySpecialPoolBlockType @ 0x140221358 (MmQuerySpecialPoolBlockType.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiVaIsSessionSpecialPool(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // rax
  unsigned int v4; // r9d

  if ( (unsigned int)MiGetSystemRegionType(a1) != 1 )
    return 0LL;
  v3 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( !v3 || (*(_DWORD *)(v3 + 4) & 0x20) != 0 )
    return 0LL;
  LOBYTE(v4) = (*(_DWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(((v1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL)
                          - 0x57FFFFFFFF0LL) & 0xF000) == 4096LL;
  return v4;
}
