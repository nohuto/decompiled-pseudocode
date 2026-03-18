/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x140100920
 * Callers:
 *     MiEmptyWorkingSetHelper @ 0x14007C56C (MiEmptyWorkingSetHelper.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14007F294 (MiDeprioritizeVirtualAddresses.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     MiTrimPte @ 0x1400FF080 (MiTrimPte.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiTerminateWsle @ 0x140105650 (MiTerminateWsle.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 * Callees:
 *     MiLogPageAccess @ 0x1400D6220 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x140100990 (MiGetVaAge.c)
 */

unsigned __int64 __fastcall MI_WSLE_LOG_ACCESS(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax

  v2 = a2;
  v3 = a1;
  v4 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( v4 >= 0xFFFFF68000000000uLL && (result = 0xFFFFF6FFFFFFFFFFuLL, v4 <= 0xFFFFF6FFFFFFFFFFuLL)
    || (result = MiGetVaAge(0xFFFFF68000000000uLL, v4), (_BYTE)result != 7) )
  {
    if ( (*v2 & 0x20) != 0 )
      return MiLogPageAccess(v3, (__int64)v2);
  }
  return result;
}
