/*
 * XREFs of MiRemoveSystemImagePage @ 0x1400BB9FC
 * Callers:
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DC7CC (MiMakeDriverPagesPrivate.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiTerminateWsle @ 0x140058F20 (MiTerminateWsle.c)
 */

__int64 __fastcall MiRemoveSystemImagePage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx

  *(_BYTE *)(a3 + 35) |= 8u;
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v4 = a2 << 25 >> 16;
  if ( PsNtosImageBase
    && (v4 < PsNtosImageEnd && v4 >= (unsigned __int64)PsNtosImageBase
     || v4 < PsHalImageEnd && v4 >= (unsigned __int64)PsHalImageBase) )
  {
    _InterlockedDecrement((_DWORD *)&xmmword_140388420 + 2);
  }
  else
  {
    _InterlockedDecrement((_DWORD *)&xmmword_140388420 + 3);
  }
  MiTerminateWsle(a1, v4, 2);
  return MiLockPageAtDpcInline(a3);
}
