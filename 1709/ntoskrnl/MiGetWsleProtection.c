/*
 * XREFs of MiGetWsleProtection @ 0x1400E9F0C
 * Callers:
 *     MiWsleFlush @ 0x140052AC0 (MiWsleFlush.c)
 *     MiGetPfnProtection @ 0x1400E69D0 (MiGetPfnProtection.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400E9820 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetWsleProtection(unsigned __int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = (a2 >> 4) & 7;
  if ( ((a2 >> 4) & 7) != 0 )
  {
    v3 = *(_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v3 & 0x10) != 0 )
    {
      return (unsigned int)result | 8;
    }
    else if ( (v3 & 8) != 0 )
    {
      return (unsigned int)result | 0x18;
    }
  }
  return result;
}
