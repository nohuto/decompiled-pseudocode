/*
 * XREFs of BgpFwReservePoolSwap @ 0x14075512C
 * Callers:
 *     ResFwFreeContext @ 0x140755078 (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x140756D58 (BgpFwLibraryInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_14036E368 = qword_14036E308;
      dword_14036E388 = dword_14036E304;
      result = (unsigned int)dword_14036E300;
      HintIndex = dword_14036E300;
      BitMapHeader = (_RTL_BITMAP)xmmword_14036E310;
    }
  }
  else
  {
    dword_14036E300 = HintIndex;
    qword_14036E308 = qword_14036E368;
    dword_14036E304 = dword_14036E388;
    xmmword_14036E310 = (__int128)BitMapHeader;
    return BgpFwInitializeReservePool(a2, a3, a4);
  }
  return result;
}
