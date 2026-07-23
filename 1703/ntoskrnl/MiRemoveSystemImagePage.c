/*
 * XREFs of MiRemoveSystemImagePage @ 0x14002CDA4
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x14006C72C (MiMakeDriverPagesPrivate.c)
 *     MiLockCode @ 0x140100CD0 (MiLockCode.c)
 * Callees:
 *     MiTerminateWsle @ 0x140105650 (MiTerminateWsle.c)
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
    _InterlockedDecrement((_DWORD *)&xmmword_14036C0E0 + 2);
  }
  else
  {
    _InterlockedDecrement((_DWORD *)&xmmword_14036C0E0 + 3);
  }
  MiTerminateWsle(a1, v4, 2LL);
  return MiLockPageAtDpcInline(a3);
}
