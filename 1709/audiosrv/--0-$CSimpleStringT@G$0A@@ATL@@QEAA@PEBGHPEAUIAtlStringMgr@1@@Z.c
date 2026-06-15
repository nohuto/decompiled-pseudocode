/*
 * XREFs of ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEBGHPEAUIAtlStringMgr@1@@Z @ 0x18006FBDC
 * Callers:
 *     ?Mid@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@HH@Z @ 0x1800737CC (-Mid@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@HH@Z.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800148AC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     memset @ 0x180033A5A (memset.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180063FAC (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
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
  void *v9; // rcx
  size_t v10; // r8

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
  v9 = (void *)*a1;
  v10 = 2 * v4;
  if ( 2 * v4 )
  {
    if ( v9 )
    {
      if ( a2 )
      {
        memcpy_0(v9, a2, v10);
        return a1;
      }
      memset(v9, 0, v10);
    }
    *(_DWORD *)_o__errno(v9, v8) = 22;
    invalid_parameter_noinfo();
  }
  return a1;
}
