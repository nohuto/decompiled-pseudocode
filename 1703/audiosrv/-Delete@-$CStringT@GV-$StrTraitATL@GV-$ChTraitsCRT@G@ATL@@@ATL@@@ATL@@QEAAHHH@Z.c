/*
 * XREFs of ?Delete@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHHH@Z @ 0x1800972BC
 * Callers:
 *     ?UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800985E0 (-UnescapeIdentifierString@CAudioIdentifier@@SAXAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800235CC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x18002362C (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Delete(
        const void **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebx
  int v6; // ebp
  int v7; // edi
  int v8; // ebp
  char *Buffer; // rax
  char *v10; // r9
  char *v11; // rcx
  size_t v12; // r8

  v4 = 0;
  if ( (int)a2 >= 0 )
    v4 = a2;
  v6 = *((_DWORD *)*a1 - 4);
  if ( v4 == 0x7FFFFFFF )
    ATL::AtlThrowImpl(-2147024809);
  v7 = v6 - v4;
  if ( v4 + 1 <= v6 )
    v7 = 1;
  if ( v7 > 0 )
  {
    v8 = v6 - v7;
    Buffer = (char *)ATL::CSimpleStringT<unsigned short,0>::GetBuffer(a1, a2, a3, a4);
    v10 = &Buffer[2 * v4 + 2 * (__int64)v7];
    v11 = &Buffer[2 * v4];
    v12 = 2LL * (v8 - v4 + 1);
    if ( v12 )
    {
      if ( !v11 || !v10 )
      {
        *(_DWORD *)_o__errno(v11, v4, v12, v10) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove(v11, &Buffer[2 * v4 + 2 * (__int64)v7], v12);
    }
    ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)a1, v8);
  }
  return *((unsigned int *)*a1 - 4);
}
