/*
 * XREFs of ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1400028B0
 * Callers:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1400028E4 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x14003746C (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1400376B4 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::SetLength(__int64 *a1, int a2)
{
  __int64 result; // rax

  if ( a2 < 0 || a2 > *(_DWORD *)(*a1 - 12) )
    ATL::AtlThrowImpl(-2147024809);
  *(_DWORD *)(*a1 - 16) = a2;
  result = *a1;
  *(_WORD *)(*a1 + 2LL * a2) = 0;
  return result;
}
