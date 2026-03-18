/*
 * XREFs of MiResetAccessBitPteWorker @ 0x140259F10
 * Callers:
 *     MiResetAccessBitsEPTCallback @ 0x14025A010 (MiResetAccessBitsEPTCallback.c)
 * Callees:
 *     MiFlushTbListEarly @ 0x14009E7E4 (MiFlushTbListEarly.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiSetVaAge @ 0x140125600 (MiSetVaAge.c)
 *     MiClearPteAccessed @ 0x140128A30 (MiClearPteAccessed.c)
 *     MiLogPageAccess @ 0x140129AB0 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x14012A280 (MiGetVaAge.c)
 */

void __fastcall MiResetAccessBitPteWorker(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v9; // r9
  int VaAge; // r10d
  unsigned __int64 v11; // r11
  int v12; // ebp
  __int64 v13; // rbx

  VaAge = (unsigned __int8)MiGetVaAge(a1, a3);
  if ( VaAge == 7 && (unsigned int)MiGetPfnPriority(v9) < dword_1403CBF2C )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    if ( (unsigned int)(VaAge - 1) <= 5 )
      MiSetVaAge(a1, v11, 0);
  }
  v13 = 0LL;
  if ( (a6 & 4) == 0 )
    v13 = *(_QWORD *)(a5 + 8);
  if ( (unsigned int)MiClearPteAccessed(a1, a4, a2, v13, *(_DWORD *)a5, (a6 & 4) != 0) )
  {
    if ( v12 == 1 && (a6 & 4) == 0 && *(_DWORD *)a5 )
    {
      if ( v13 )
      {
LABEL_15:
        MiFlushTbListEarly(v13, 0);
        return;
      }
      MiLogPageAccess(a1, a2);
    }
    if ( !v13 )
      return;
    goto LABEL_15;
  }
}
