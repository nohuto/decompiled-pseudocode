/*
 * XREFs of MiGetVaAge @ 0x1400E97AC
 * Callers:
 *     MiTrimPte @ 0x140010D30 (MiTrimPte.c)
 *     MiTrimThisWsle @ 0x1400110FC (MiTrimThisWsle.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     MiClearPteAccessed @ 0x140121C30 (MiClearPteAccessed.c)
 *     MiUpdateWsleAge @ 0x140124820 (MiUpdateWsleAge.c)
 *     MiAgePteWorker @ 0x14021CBF0 (MiAgePteWorker.c)
 *     MiResetAccessBitPteWorker @ 0x14021E03C (MiResetAccessBitPteWorker.c)
 *     MiSimpleAgePte @ 0x14021E290 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x14021E890 (MiUpdateOldPte.c)
 * Callees:
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

char __fastcall MiGetVaAge(__int64 a1, unsigned __int64 a2)
{
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    return MiGetWsleContents(0xFFFFF68000000000uLL, a2) & 0xF;
  else
    return (*(_BYTE *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) - 0x58000000000LL) >> 1) & 7;
}
