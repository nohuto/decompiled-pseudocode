/*
 * XREFs of ?Mid@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@HH@Z @ 0x18008D9F4
 * Callers:
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800902A4 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180023C18 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z @ 0x180089C70 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z.c)
 *     ?GetManager@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@2@XZ @ 0x18008C504 (-GetManager@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@.c)
 */

__int64 *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Mid(
        __int64 *a1,
        __int64 *a2,
        int a3,
        int a4)
{
  int v4; // ebx
  signed int v7; // r8d
  __int64 v8; // r14
  int v9; // ecx
  unsigned int v10; // edi
  __int64 (__fastcall ***Manager)(_QWORD, _QWORD, __int64); // rax

  v4 = 0;
  if ( a3 >= 0 )
    v4 = a3;
  v7 = 0;
  if ( a4 >= 0 )
    v7 = a4;
  if ( 0x7FFFFFFF - v4 < v7 )
    ATL::AtlThrowImpl(-2147024809);
  v8 = *a1;
  v9 = *(_DWORD *)(*a1 - 16);
  if ( v7 + v4 > v9 )
    v7 = v9 - v4;
  v10 = 0;
  if ( v4 <= v9 )
    v10 = v7;
  if ( v4 || v10 != v9 )
  {
    Manager = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::GetManager(a1);
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
      a2,
      (const void *)(v8 + 2LL * v4),
      v10,
      Manager);
  }
  else
  {
    *a2 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v8 - 24) + 24;
  }
  return a2;
}
