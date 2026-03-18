/*
 * XREFs of MiVaIsSessionSpecialPool @ 0x1400CA560
 * Callers:
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MmIsSpecialPoolAddress @ 0x14004C860 (MmIsSpecialPoolAddress.c)
 *     MmQuerySpecialPoolBlockType @ 0x14025D000 (MmQuerySpecialPoolBlockType.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
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
  LOBYTE(v4) = (*(_DWORD *)(48
                          * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                          - 0x57FFFFFFFF0LL) & 0xF000) == 4096LL;
  return v4;
}
