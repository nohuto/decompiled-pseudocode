/*
 * XREFs of ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180023300
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180023520 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x18002362C (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     memset @ 0x180049B8A (memset.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800822FC (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::Fork(
        const void **a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  const void *v4; // r13
  int v6; // esi
  __int64 v7; // r14
  int v8; // r8d
  struct ATL::IAtlStringMgr *(__fastcall *v9)(ATL::CAtlStringMgr *); // rax
  unsigned __int64 v10; // rcx
  struct ATL::CStringData *(__fastcall *v11)(ATL::CAtlStringMgr *, int, int); // rax
  _DWORD *v12; // rbp
  signed int v13; // edi
  SIZE_T v14; // rdx
  __int64 v15; // rcx
  LPVOID (__fastcall *v16)(HANDLE *, SIZE_T); // rax
  _DWORD *v17; // rax
  size_t v18; // r8
  void *v19; // rcx
  __int64 result; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // [rsp+58h] [rbp+10h]

  v4 = *a1;
  v6 = a2;
  v7 = *((_QWORD *)*a1 - 3);
  v8 = *((_DWORD *)*a1 - 4);
  v23 = v8;
  v9 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *))(*(_QWORD *)v7 + 32LL);
  if ( v9 != ATL::CAtlStringMgr::Clone )
  {
    v21 = (__int64)v9((ATL::CAtlStringMgr *)v7);
    v8 = v23;
    v7 = v21;
  }
  v10 = (unsigned __int64)ATL::CAtlStringMgr::Allocate;
  v11 = **(struct ATL::CStringData *(__fastcall ***)(ATL::CAtlStringMgr *, int, int))v7;
  if ( v11 != ATL::CAtlStringMgr::Allocate )
  {
    v22 = (__int64)v11((ATL::CAtlStringMgr *)v7, v6, 2);
    v8 = v23;
    v12 = (_DWORD *)v22;
    goto LABEL_14;
  }
  v12 = 0LL;
  if ( v6 >= 0 && 0x7FFFFFFF - v6 >= 1 )
  {
    v13 = (v6 + 8) & 0xFFFFFFF8;
    if ( v6 + 1 <= v13 )
    {
      v10 = v13;
      if ( v13 )
      {
        a2 = 0xFFFFFFFFFFFFFFFFuLL % v13;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v13 < 2 )
          goto LABEL_14;
        v10 = 2LL * v13;
        if ( v10 > 0xFFFFFFFFFFFFFFE7uLL )
          goto LABEL_14;
      }
      else
      {
        v10 = 0LL;
      }
      v14 = v10 + 24;
      v15 = *(_QWORD *)(v7 + 8);
      v16 = **(LPVOID (__fastcall ***)(HANDLE *, SIZE_T))v15;
      if ( v16 == ATL::CWin32Heap::Allocate )
        v17 = HeapAlloc(*(HANDLE *)(v15 + 8), 0, v14);
      else
        v17 = (_DWORD *)v16((HANDLE *)v15, v14);
      v8 = v23;
      v10 = (unsigned __int64)v17;
      if ( v17 )
      {
        *(_QWORD *)v17 = v7;
        v17[4] = 1;
        v17[2] = 0;
        v12 = v17;
        v17[3] = v13 - 1;
      }
    }
  }
LABEL_14:
  if ( !v12 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v10);
  if ( v8 < v6 )
    v6 = v8;
  v18 = 2LL * (v6 + 1);
  if ( v18 )
  {
    if ( v12 != (_DWORD *)-24LL )
    {
      v19 = v12 + 6;
      if ( v4 )
      {
        memcpy_0(v19, v4, v18);
        goto LABEL_21;
      }
      memset(v19, 0, v18);
    }
    *(_DWORD *)_o__errno(v10, a2, v18, a4) = 22;
    invalid_parameter_noinfo();
  }
LABEL_21:
  result = v23;
  v12[2] = v23;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 - 2, 0xFFFFFFFF) <= 1 )
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, size_t))(**((_QWORD **)v4 - 3) + 8LL))(
               *((_QWORD *)v4 - 3),
               (__int64)v4 - 24,
               v18);
  *a1 = v12 + 6;
  return result;
}
