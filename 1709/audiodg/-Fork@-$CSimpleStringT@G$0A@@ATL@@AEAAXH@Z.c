/*
 * XREFs of ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14001A764
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14001A854 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x140060470 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 * Callees:
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x14001ABD0 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     ?Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z @ 0x14001ABF0 (-Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z.c)
 *     _invalid_parameter_noinfo @ 0x14001D964 (_invalid_parameter_noinfo.c)
 *     memset @ 0x14001D9AC (memset.c)
 *     memcpy_0 @ 0x14001E51D (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x140038C5C (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::Fork(const void **a1, int a2)
{
  const void *v2; // rbp
  volatile signed __int32 *v5; // rbx
  int v6; // r12d
  __int64 (*v7)(void); // rax
  struct ATL::IAtlStringMgr *v8; // rax
  ATL::CAtlStringMgr *v9; // rcx
  struct ATL::CStringData *(__fastcall *v10)(ATL::CAtlStringMgr *__hidden, int, int); // rax
  struct ATL::CStringData *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct ATL::CStringData *v14; // rsi
  void *v15; // rdi
  size_t v16; // r8
  signed __int32 v17; // eax
  bool v18; // cc
  __int64 result; // rax

  v2 = *a1;
  v5 = (volatile signed __int32 *)((char *)*a1 - 24);
  v6 = *((_DWORD *)v5 + 2);
  v7 = *(__int64 (**)(void))(**(_QWORD **)v5 + 32LL);
  if ( (char *)v7 == (char *)ATL::CAtlStringMgr::Clone )
    v8 = ATL::CAtlStringMgr::Clone(*(ATL::CAtlStringMgr **)v5);
  else
    v8 = (struct ATL::IAtlStringMgr *)v7();
  v9 = v8;
  v10 = **(struct ATL::CStringData *(__fastcall ***)(ATL::CAtlStringMgr *__hidden, int, int))v8;
  if ( v10 == ATL::CAtlStringMgr::Allocate )
    v11 = ATL::CAtlStringMgr::Allocate(v9, a2, 2);
  else
    v11 = v10(v9, a2, 2);
  v14 = v11;
  if ( !v11 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
  v15 = (char *)v11 + 24;
  if ( v6 < a2 )
    a2 = v6;
  v16 = 2LL * (a2 + 1);
  if ( v16 )
  {
    if ( v11 != (struct ATL::CStringData *)-24LL )
    {
      if ( v2 )
      {
        memcpy_0(v15, v2, v16);
        goto LABEL_12;
      }
      memset(v15, 0, v16);
    }
    *(_DWORD *)_o__errno(v13, v12, v16) = 22;
    invalid_parameter_noinfo();
  }
LABEL_12:
  *((_DWORD *)v14 + 2) = v6;
  v17 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
  v18 = v17 <= 1;
  result = (unsigned int)(v17 - 1);
  if ( v18 )
    result = (*(__int64 (__fastcall **)(_QWORD, volatile signed __int32 *, size_t))(**(_QWORD **)v5 + 8LL))(
               *(_QWORD *)v5,
               v5,
               v16);
  *a1 = v15;
  return result;
}
