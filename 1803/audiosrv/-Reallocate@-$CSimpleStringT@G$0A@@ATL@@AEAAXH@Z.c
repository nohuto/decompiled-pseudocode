/*
 * XREFs of ?Reallocate@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180043A14
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180030BB0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     ?Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z @ 0x180043A80 (-Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18009E954 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

char *__fastcall ATL::CSimpleStringT<unsigned short,0>::Reallocate(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // r8
  struct ATL::CStringData *v4; // rdx
  ATL::CAtlStringMgr *v5; // rcx
  struct ATL::CStringData *(__fastcall *v6)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *, int, int); // rax
  struct ATL::CStringData *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *result; // rax

  v2 = a2;
  v4 = (struct ATL::CStringData *)(*a1 - 24LL);
  if ( *((_DWORD *)v4 + 3) >= (int)v2 || (int)v2 <= 0 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(a1, v4);
  v5 = *(ATL::CAtlStringMgr **)v4;
  v6 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *, int, int))(**(_QWORD **)v4 + 16LL);
  if ( v6 == ATL::CAtlStringMgr::Reallocate )
    v7 = ATL::CAtlStringMgr::Reallocate(v5, v4, v2, 2);
  else
    v7 = v6(v5, v4, v2, 2);
  if ( !v7 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v9, v8);
  result = (char *)v7 + 24;
  *a1 = result;
  return result;
}
