/*
 * XREFs of ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x180030B28
 * Callers:
 *     ?GetBuffer@CAudioEndpointId@@QEAAPEBGXZ @ 0x1800164B0 (-GetBuffer@CAudioEndpointId@@QEAAPEBGXZ.c)
 *     ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x1800B6CBC (-Delete@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z.c)
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800B8014 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 * Callees:
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800309C0 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 */

_DWORD *__fastcall ATL::CSimpleStringT<unsigned short,0>::GetBuffer(
        const void **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *result; // rax

  result = *a1;
  if ( *((int *)*a1 - 2) > 1 )
  {
    ATL::CSimpleStringT<unsigned short,0>::Fork(a1, *(result - 4), a3, a4);
    return *a1;
  }
  return result;
}
