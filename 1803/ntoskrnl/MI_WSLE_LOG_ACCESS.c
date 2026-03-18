/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x14012A21C
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     MiStealPage @ 0x14003B400 (MiStealPage.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140052680 (MiDeprioritizeVirtualAddresses.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiEmptyWorkingSetHelper @ 0x1400ACEE8 (MiEmptyWorkingSetHelper.c)
 *     MiTrimPte @ 0x14012A7D0 (MiTrimPte.c)
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 *     MiTrimPteWorker @ 0x14025A4D0 (MiTrimPteWorker.c)
 * Callees:
 *     MiLogPageAccess @ 0x140129AB0 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x14012A280 (MiGetVaAge.c)
 */

void __fastcall MI_WSLE_LOG_ACCESS(__int64 a1, _BYTE *a2, __int64 a3)
{
  _BYTE *v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rdx

  v3 = a2;
  v4 = a1;
  v5 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( (v5 >= 0xFFFFF68000000000uLL && v5 <= 0xFFFFF6FFFFFFFFFFuLL
     || (unsigned __int8)MiGetVaAge(0xFFFFF68000000000uLL, v5, a3, v3) != 7)
    && (*v3 & 0x20) != 0 )
  {
    MiLogPageAccess(v4, (__int64)v3);
  }
}
