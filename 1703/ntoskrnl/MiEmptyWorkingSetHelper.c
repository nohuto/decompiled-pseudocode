/*
 * XREFs of MiEmptyWorkingSetHelper @ 0x14007C56C
 * Callers:
 *     MiEmptyWsPrivatePagesCallback @ 0x14007C430 (MiEmptyWsPrivatePagesCallback.c)
 *     MiEmptyPte @ 0x140134C20 (MiEmptyPte.c)
 *     MiUpdateOldPte @ 0x140215910 (MiUpdateOldPte.c)
 * Callees:
 *     MiFreeWsleList @ 0x1400D6F10 (MiFreeWsleList.c)
 *     MiDemoteCombinedPte @ 0x1400D7830 (MiDemoteCombinedPte.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140100920 (MI_WSLE_LOG_ACCESS.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiEmptyWorkingSetHelper(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rdi
  __int64 v8; // r8
  unsigned __int8 v9; // r9
  __int64 v10; // r8

  v6 = a2 << 25 >> 16;
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( (unsigned __int8)((MiGetWsleContents(0xFFFFF68000000000uLL, a2 << 25 >> 16) & 0xF) - 8) <= 1u )
      return 0LL;
  }
  else if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
  {
    return 0LL;
  }
  v8 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(a2) - 0x58000000000LL;
  if ( *(_WORD *)(v8 + 32) > 1u && (v9 & *(_BYTE *)(a1 + 192)) != 0
    || (v9 & *(_BYTE *)(a1 + 192)) == 2
    && *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 172)) != *(_QWORD *)(qword_14036C8F8
                                                                                         + 8
                                                                                         * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL)) )
  {
    return 0LL;
  }
  v10 = *(_QWORD *)(v8 + 8);
  if ( v10 >= 0 )
    MiDemoteCombinedPte(a1, a2, v10 | 0x8000000000000000uLL);
  if ( dword_14036CA68 )
    MI_WSLE_LOG_ACCESS(a1, a2);
  MiInsertTbFlushEntry(a3, v6, 1LL, 0LL);
  if ( *(_DWORD *)(a3 + 12) == *(_DWORD *)(a3 + 8) )
  {
    MiFreeWsleList(a1, a3, 0LL);
    *(_DWORD *)(a3 + 12) = 0;
  }
  return 1LL;
}
