/*
 * XREFs of ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x18007DE54
 * Callers:
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18007F1C8 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800148AC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x18005B564 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
        const void **a1,
        int a2)
{
  int v2; // edi
  int v4; // esi
  int v5; // ebx
  char *Buffer; // rax
  char *v7; // rcx
  size_t v8; // r8

  v2 = 0;
  if ( a2 >= 0 )
    v2 = a2;
  v4 = *((_DWORD *)*a1 - 4);
  if ( v2 == 0x7FFFFFFF )
    ATL::AtlThrowImpl(-2147024809);
  v5 = 1;
  if ( v2 + 1 <= v4 || (v5 = v4 - v2, v4 - v2 > 0) )
  {
    Buffer = (char *)ATL::CSimpleStringT<unsigned short,0>::GetBuffer(a1);
    v7 = &Buffer[2 * v2];
    v8 = 2LL * (v4 - v2 - v5 + 1);
    if ( v8 )
    {
      if ( !v7 || !&Buffer[2 * v2 + 2 * (__int64)v5] )
      {
        *(_DWORD *)_o__errno(v7, v2) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove(v7, &Buffer[2 * v2 + 2 * (__int64)v5], v8);
    }
    ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)a1, v4 - v5);
  }
  return *((unsigned int *)*a1 - 4);
}
