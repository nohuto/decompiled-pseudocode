/*
 * XREFs of ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x1800B6CBC
 * Callers:
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800B8014 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 * Callees:
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x180030B28 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180030B78 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
        const void **a1,
        int a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebx
  unsigned int *v6; // rdx
  int v7; // ebp
  int v8; // esi
  int v9; // r14d
  int v10; // ebp
  _DWORD *Buffer; // rdx
  __int64 v12; // rax
  char *v13; // rcx
  char *v14; // r9
  size_t v15; // r8

  v4 = 0;
  if ( a2 >= 0 )
    v4 = a2;
  v6 = (unsigned int *)*a1;
  v7 = *((_DWORD *)*a1 - 4);
  if ( v4 == 0x7FFFFFFF )
    ATL::AtlThrowImpl(-2147024809);
  v8 = v7 - v4;
  v9 = 1;
  if ( v4 + 1 > v7 )
    v9 = v7 - v4;
  if ( v9 > 0 )
  {
    v10 = v7 - v9;
    Buffer = ATL::CSimpleStringT<unsigned short,0>::GetBuffer(a1, (__int64)v6, a3, a4);
    v12 = v4 + (__int64)v9;
    v13 = (char *)Buffer + 2 * v4;
    v14 = (char *)Buffer + 2 * v12;
    v15 = 2LL * (v8 - v9 + 1);
    if ( v15 )
    {
      if ( !v13 || !v14 )
      {
        *(_DWORD *)_o__errno(v13, Buffer, v15, v14) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove(v13, (char *)Buffer + 2 * v12, v15);
    }
    ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)a1, v10);
    v6 = (unsigned int *)*a1;
  }
  return *(v6 - 4);
}
