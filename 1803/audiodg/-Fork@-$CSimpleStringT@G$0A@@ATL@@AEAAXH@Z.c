/*
 * XREFs of ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140002798
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140002884 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x14005DA50 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x140002C00 (--0IUnknown@@QEAA@XZ.c)
 *     ?Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z @ 0x140002C20 (-Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x14001CA2A (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x14001D6ED (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1400378FC (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::Fork(const void **a1, int a2)
{
  const void *v2; // r14
  volatile signed __int32 *v5; // rbx
  int v6; // r12d
  __int64 (*v7)(void); // rax
  IUnknown *v8; // rax
  ATL::CAtlStringMgr *v9; // rcx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rax
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
  if ( (char *)v7 == (char *)IUnknown::IUnknown )
    v8 = IUnknown::IUnknown(*(IUnknown **)v5);
  else
    v8 = (IUnknown *)v7();
  v9 = (ATL::CAtlStringMgr *)v8;
  QueryInterface = v8->lpVtbl->QueryInterface;
  if ( (char *)QueryInterface == (char *)ATL::CAtlStringMgr::Allocate )
    v11 = ATL::CAtlStringMgr::Allocate(v9, a2, 2);
  else
    v11 = (struct ATL::CStringData *)((__int64 (__fastcall *)(ATL::CAtlStringMgr *, _QWORD, __int64))QueryInterface)(
                                       v9,
                                       (unsigned int)a2,
                                       2LL);
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
      memset_0(v15, 0, v16);
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
