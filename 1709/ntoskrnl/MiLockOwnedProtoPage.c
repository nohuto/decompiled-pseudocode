/*
 * XREFs of MiLockOwnedProtoPage @ 0x140031B00
 * Callers:
 *     MiRelockProtoPoolPage @ 0x14002E068 (MiRelockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140032610 (MiCheckProtoPtePageState.c)
 * Callees:
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiWriteValidPteVolatile @ 0x1400E9F50 (MiWriteValidPteVolatile.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiLockOwnedProtoPage(__int64 a1, unsigned __int8 a2)
{
  __int64 *v2; // r14
  unsigned int v5; // ebx
  __int64 result; // rax

  v2 = (__int64 *)(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL);
  while ( (*(_BYTE *)(a1 + 34) & 0x20) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a2 != 17 )
      __writecr8(a2);
    v5 = 0;
    while ( (*(_BYTE *)(a1 + 34) & 0x20) != 0 )
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    MiLockPageInline(a1);
  }
  *(_BYTE *)(a1 + 34) |= 0x20u;
  result = *(_QWORD *)(a1 + 24) >> 62;
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0 )
  {
    result = *v2;
    if ( (unsigned __int64)v2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v2 <= 0xFFFFF6FB7DBED7F8uLL )
      result = MiReadPteShadow(v2, *v2);
    if ( (result & 0x20) == 0 )
      result = MiWriteValidPteVolatile(v2, 1LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
