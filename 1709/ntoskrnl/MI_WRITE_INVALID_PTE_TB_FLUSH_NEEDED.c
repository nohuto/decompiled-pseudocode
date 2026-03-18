/*
 * XREFs of MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1400EDF24
 * Callers:
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiPteHasShadow @ 0x14017C178 (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140214414 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 */

__int64 __fastcall MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // r9
  unsigned __int64 v4; // r10
  char v5; // r11
  unsigned __int8 v6; // al
  unsigned __int8 v7; // r11

  v2 = *a1;
  v3 = a1;
  v4 = 0xFFFFF6FB7DBED7F8uLL;
  v5 = 32;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(a1, a2) )
  {
    LOBYTE(v2) = v5 | v2;
  }
  if ( (MiFlags & 0x800) != 0 )
  {
    LOBYTE(v2) = v5;
  }
  else if ( (MiFlags & 0x2000000) != 0 )
  {
    _mm_lfence();
  }
  if ( ((unsigned __int8)v2 & (unsigned __int8)v5) != 0 )
  {
    *v3 = a2;
    if ( (unsigned __int64)v3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v3 <= v4 )
      MiWritePteShadow(v3, a2);
  }
  else
  {
    v6 = MI_INTERLOCKED_EXCHANGE_PTE(v3);
    if ( (v6 & v7) == 0 )
      return 0LL;
  }
  return 1LL;
}
