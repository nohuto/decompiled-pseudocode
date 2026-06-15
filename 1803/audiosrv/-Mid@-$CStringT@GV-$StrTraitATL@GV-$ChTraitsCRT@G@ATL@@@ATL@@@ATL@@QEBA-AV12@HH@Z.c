/*
 * XREFs of ?Mid@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@HH@Z @ 0x1800AB334
 * Callers:
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800ADB58 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x18000A978 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z @ 0x1800A8260 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z.c)
 *     ?GetManager@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@2@XZ @ 0x1800A9F44 (-GetManager@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@.c)
 */

__int64 *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Mid(
        __int64 *a1,
        __int64 *a2,
        int a3,
        int a4)
{
  int v4; // edi
  int v6; // edx
  __int64 v7; // r14
  int v8; // r8d
  unsigned int v9; // eax
  unsigned int v10; // esi
  __int64 (__fastcall ***Manager)(_QWORD, _QWORD, __int64); // rax

  v4 = 0;
  if ( a3 >= 0 )
    v4 = a3;
  v6 = 0;
  if ( a4 >= 0 )
    v6 = a4;
  if ( 0x7FFFFFFF - v4 < v6 )
    ATL::AtlThrowImpl(-2147024809);
  v7 = *a1;
  v8 = *(_DWORD *)(*a1 - 16);
  v9 = v8 - v4;
  if ( v6 + v4 <= v8 )
    v9 = v6;
  v10 = 0;
  if ( v4 <= v8 )
    v10 = v9;
  if ( v4 || v10 != v8 )
  {
    Manager = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::GetManager(a1);
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
      a2,
      (const void *)(v7 + 2LL * v4),
      v10,
      Manager);
  }
  else
  {
    *a2 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v7 - 24) + 24;
  }
  return a2;
}
