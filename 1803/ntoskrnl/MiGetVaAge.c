/*
 * XREFs of MiGetVaAge @ 0x14012A280
 * Callers:
 *     MiUpdateWsleAge @ 0x14004F124 (MiUpdateWsleAge.c)
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14012A21C (MI_WSLE_LOG_ACCESS.c)
 *     MiResetAccessBitPteWorker @ 0x140259F10 (MiResetAccessBitPteWorker.c)
 *     MiSimpleAgePte @ 0x14025A0C0 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x14025A740 (MiUpdateOldPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiGetVaAge(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  char v7; // r8^7

  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
    return (*(_BYTE *)(48
                     * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                     - 0x58000000000LL) >> 1) & 7;
  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL
    && v2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v5 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 8 * ((v2 >> 3) & 0x1FF));
      v7 = HIBYTE(*(_QWORD *)v2);
      if ( (v6 & 0x20) == 0 )
        v7 = HIBYTE(v3);
      HIBYTE(v3) = v7;
      if ( (v6 & 0x42) != 0 )
        HIBYTE(v3) = v7;
    }
  }
  return HIBYTE(v3) & 0xF;
}
