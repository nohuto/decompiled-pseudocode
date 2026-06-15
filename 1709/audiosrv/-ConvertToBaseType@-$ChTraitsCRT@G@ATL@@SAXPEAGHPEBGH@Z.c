/*
 * XREFs of ?ConvertToBaseType@?$ChTraitsCRT@G@ATL@@SAXPEAGHPEBGH@Z @ 0x180070778
 * Callers:
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x180073538 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 * Callees:
 *     memcpy_s_0 @ 0x180033A54 (memcpy_s_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

errno_t __fastcall ATL::ChTraitsCRT<unsigned short>::ConvertToBaseType(void *a1, int a2, _WORD *a3, int a4)
{
  __int64 v4; // rax
  int v5; // r10d
  errno_t result; // eax

  v4 = -1LL;
  v5 = a4;
  if ( a4 == -1 )
  {
    do
      ++v4;
    while ( a3[v4] );
    v5 = v4 + 1;
  }
  result = memcpy_s_0(a1, 2LL * a2, a3, 2LL * v5);
  if ( result )
  {
    if ( result == 12 )
      ATL::AtlThrowImpl(-2147024882);
    if ( result == 22 || result == 34 )
      ATL::AtlThrowImpl(-2147024809);
    if ( result != 80 )
      ATL::AtlThrowImpl(-2147467259);
  }
  return result;
}
