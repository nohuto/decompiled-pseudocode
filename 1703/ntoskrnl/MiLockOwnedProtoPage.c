/*
 * XREFs of MiLockOwnedProtoPage @ 0x14010B370
 * Callers:
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MiRelockProtoPoolPage @ 0x14010B17C (MiRelockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14010B1D8 (MiCheckProtoPtePageState.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiWriteValidPteVolatile @ 0x1400FDBE0 (MiWriteValidPteVolatile.c)
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiLockOwnedProtoPage(__int64 a1, unsigned __int8 a2)
{
  volatile signed __int64 *v2; // rsi
  __int64 result; // rax
  unsigned int v6; // ebx

  v2 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  while ( (*(_BYTE *)(a1 + 34) & 0x20) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a2 != 17 )
      __writecr8(a2);
    v6 = 0;
    while ( (*(_BYTE *)(a1 + 34) & 0x20) != 0 )
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    MiLockPageInline(a1);
  }
  *(_BYTE *)(a1 + 34) |= 0x20u;
  result = *(_QWORD *)(a1 + 24) >> 62;
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0 )
  {
    result = MI_READ_PTE_LOCK_FREE(v2);
    if ( (result & 0x20) == 0 )
      result = MiWriteValidPteVolatile(v2, 1, 0);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
