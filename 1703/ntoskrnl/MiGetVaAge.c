/*
 * XREFs of MiGetVaAge @ 0x140100990
 * Callers:
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MiUpdateWsleAge @ 0x14007C37C (MiUpdateWsleAge.c)
 *     MiTrimThisWsle @ 0x1400FF1A0 (MiTrimThisWsle.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140100920 (MI_WSLE_LOG_ACCESS.c)
 *     MiUpdateOldPte @ 0x140215910 (MiUpdateOldPte.c)
 * Callees:
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiGetVaAge(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rax

  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
    return (*(_DWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) - 0x58000000000LL) >> 2) & 7;
  v3 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (v3 & 1) != 0 )
    return HIBYTE(v3) & 0xF;
  else
    return 10;
}
