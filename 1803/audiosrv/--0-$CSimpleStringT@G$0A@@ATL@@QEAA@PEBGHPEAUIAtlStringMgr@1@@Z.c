/*
 * XREFs of ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z @ 0x1800A8260
 * Callers:
 *     ?Mid@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@HH@Z @ 0x1800AB334 (-Mid@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@HH@Z.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180030B78 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18009E954 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 *__fastcall ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(
        __int64 *a1,
        const void *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, _QWORD, __int64))
{
  __int64 v4; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  void *v10; // rcx
  size_t v11; // r8

  v4 = (int)a3;
  if ( !a4 )
    ATL::AtlThrowImpl(-2147467259);
  if ( !a2 && a3 )
    ATL::AtlThrowImpl(-2147024809);
  v7 = (**a4)(a4, a3, 2LL);
  if ( !v7 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  *a1 = v7 + 24;
  ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v4);
  v10 = (void *)*a1;
  v11 = 2 * v4;
  if ( 2 * v4 )
  {
    if ( v10 )
    {
      if ( a2 )
      {
        memcpy_0(v10, a2, v11);
        return a1;
      }
      memset_0(v10, 0, v11);
    }
    *(_DWORD *)_o__errno(v10, v8, v11, v9) = 22;
    invalid_parameter_noinfo();
  }
  return a1;
}
