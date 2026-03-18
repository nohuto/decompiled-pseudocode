/*
 * XREFs of MiResetAccessBitPteWorker @ 0x14021E03C
 * Callers:
 *     MiResetAccessBitPte @ 0x14021DF00 (MiResetAccessBitPte.c)
 *     MiResetAccessBitsEPTCallback @ 0x14021E130 (MiResetAccessBitsEPTCallback.c)
 * Callees:
 *     MiLogPageAccess @ 0x1400112C0 (MiLogPageAccess.c)
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiSetVaAge @ 0x14009E9C0 (MiSetVaAge.c)
 *     MiFlushTbListEarly @ 0x1400E94BC (MiFlushTbListEarly.c)
 *     MiGetVaAge @ 0x1400E97AC (MiGetVaAge.c)
 *     MiClearPteAccessed @ 0x140121C30 (MiClearPteAccessed.c)
 */

unsigned __int64 __fastcall MiResetAccessBitPteWorker(
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
  int *v13; // rbx
  int v14; // esi
  unsigned __int64 result; // rax
  __int64 v16; // r8
  __int64 v17; // r9

  VaAge = (unsigned __int8)MiGetVaAge(a1, a3);
  if ( VaAge == 7 && (unsigned int)MiGetPfnPriority(v9) < dword_140388C6C )
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
  v14 = 0;
  if ( (a6 & 4) != 0 )
    v14 = 1;
  else
    v13 = *(int **)(a5 + 8);
  result = MiClearPteAccessed(a1, a4, a2, v13, *(_DWORD *)a5, v14);
  if ( (_DWORD)result )
  {
    if ( v12 == 1 && !v14 && *(_DWORD *)a5 )
    {
      if ( v13 )
        return MiFlushTbListEarly((__int64)v13, 0LL);
      result = MiLogPageAccess(a1, a2, v16, v17);
    }
    if ( !v13 )
      return result;
    return MiFlushTbListEarly((__int64)v13, 0LL);
  }
  return result;
}
