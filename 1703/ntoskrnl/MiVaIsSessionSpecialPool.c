/*
 * XREFs of MiVaIsSessionSpecialPool @ 0x1400A6B34
 * Callers:
 *     MmIsSpecialPoolAddress @ 0x1400A5B4C (MmIsSpecialPoolAddress.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MmQuerySpecialPoolBlockType @ 0x140217A8C (MmQuerySpecialPoolBlockType.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiVaIsSessionSpecialPool(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rax
  unsigned int v3; // r9d

  if ( (unsigned int)MiGetSystemRegionType(a1) != 1 )
    return 0LL;
  v2 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( !v2 || (*(_DWORD *)(v2 + 4) & 0x20) != 0 )
    return 0LL;
  LOBYTE(v3) = (*(_DWORD *)(48
                          * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                          - 0x57FFFFFFFF0LL) & 0xF000) == 4096LL;
  return v3;
}
