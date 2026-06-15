/*
 * XREFs of ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14001A854
 * Callers:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x14001A8B4 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x140038A1C (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 * Callees:
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14001A764 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 */

_DWORD *__fastcall ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(const void **a1, int a2)
{
  _DWORD *result; // rax
  int v3; // r8d
  int v5; // ecx
  int v6; // eax
  int v7; // ecx

  result = *a1;
  v3 = a2;
  if ( *((_DWORD *)*a1 - 4) > a2 )
    v3 = *(result - 4);
  if ( (int)*(result - 2) > 1 )
    return (_DWORD *)ATL::CSimpleStringT<unsigned short,0>::Fork(a1, v3);
  v5 = *(result - 3);
  if ( v5 < v3 )
  {
    if ( v5 <= 0x40000000 )
      v6 = v5 / 2;
    else
      v6 = 0x100000;
    v7 = v6 + v5;
    if ( v7 < v3 )
      v7 = v3;
    return (_DWORD *)ATL::CSimpleStringT<unsigned short,0>::Reallocate(a1, (unsigned int)v7);
  }
  return result;
}
