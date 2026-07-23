/*
 * XREFs of BgpFwReservePoolSwap @ 0x14083B12C
 * Callers:
 *     ResFwFreeContext @ 0x14083B078 (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x14083B9FC (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x14083C66C (BgpFwInitializeReservePool.c)
 */

__int64 __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_1403CDC30 = qword_1403CDBC8;
      dword_1403CDC50 = dword_1403CDBC4;
      result = (unsigned int)dword_1403CDBC0;
      dword_1403CDC38 = dword_1403CDBC0;
      stru_1403CDC40 = (_RTL_BITMAP)xmmword_1403CDBD0;
    }
  }
  else
  {
    dword_1403CDBC0 = dword_1403CDC38;
    qword_1403CDBC8 = qword_1403CDC30;
    dword_1403CDBC4 = dword_1403CDC50;
    xmmword_1403CDBD0 = (__int128)stru_1403CDC40;
    return BgpFwInitializeReservePool(a2, a3, a4);
  }
  return result;
}
