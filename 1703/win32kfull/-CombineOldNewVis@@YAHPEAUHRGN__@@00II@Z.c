/*
 * XREFs of ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1C00FCC50
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CombineOldNewVis(HRGN a1, HRGN a2, HRGN a3, __int64 a4, char a5)
{
  switch ( a5 & 3 )
  {
    case 0:
      return (unsigned int)GreCombineRgn(a1, a2, a3, a4) > 1;
    case 1:
LABEL_10:
      GreCombineRgn(a1, a2, 0LL, 5LL);
      return 1LL;
    case 2:
      if ( (_DWORD)a4 == 4 )
        return 0LL;
      a2 = a3;
      goto LABEL_10;
    case 3:
      return 0LL;
  }
  return 1LL;
}
