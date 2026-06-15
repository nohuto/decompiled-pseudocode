/*
 * XREFs of ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800309C0
 * Callers:
 *     ?GetBuffer@?$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ @ 0x180030B28 (-GetBuffer@-$CSimpleStringT@G$0A@@ATL@@QEAAPEAGXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180030BB0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18009E954 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::Fork(const void **a1, int a2, __int64 a3, __int64 a4)
{
  const void *v4; // r13
  struct ATL::CStringData *(__fastcall ***v7)(ATL::CAtlStringMgr *__hidden, int, int); // r15
  int v8; // r8d
  struct ATL::CStringData *(__fastcall **v9)(ATL::CAtlStringMgr *__hidden, int, int); // rax
  unsigned __int64 v10; // rdx
  struct ATL::CStringData *(__fastcall *v11)(ATL::CAtlStringMgr *__hidden, int, int); // rax
  unsigned __int64 v12; // rcx
  _DWORD *v13; // rbp
  signed int v14; // edi
  SIZE_T v15; // rdx
  struct ATL::CStringData *(__fastcall **v16)(ATL::CAtlStringMgr *__hidden, int, int); // rcx
  LPVOID (__fastcall *v17)(HANDLE *, SIZE_T); // rax
  _DWORD *v18; // rax
  size_t v19; // r8
  void *v20; // rcx
  __int64 result; // rax
  struct ATL::CStringData *(__fastcall ***v22)(ATL::CAtlStringMgr *__hidden, int, int); // rax
  __int64 v23; // rax
  unsigned int v24; // [rsp+58h] [rbp+10h]

  v4 = *a1;
  v7 = (struct ATL::CStringData *(__fastcall ***)(ATL::CAtlStringMgr *__hidden, int, int))*((_QWORD *)*a1 - 3);
  v8 = *((_DWORD *)*a1 - 4);
  v24 = v8;
  v9 = *v7;
  v10 = (unsigned __int64)(*v7)[4];
  if ( (struct ATL::IAtlStringMgr *(__fastcall *)(ATL::CAtlStringMgr *__hidden))v10 != ATL::CAtlStringMgr::Clone )
  {
    v22 = (struct ATL::CStringData *(__fastcall ***)(ATL::CAtlStringMgr *__hidden, int, int))((__int64 (__fastcall *)(struct ATL::CStringData *(__fastcall ***)(ATL::CAtlStringMgr *__hidden, int, int)))(*v7)[4])(v7);
    v8 = v24;
    v7 = v22;
    v9 = *v22;
  }
  v11 = *v9;
  v12 = (unsigned __int64)ATL::CAtlStringMgr::Allocate;
  if ( v11 != ATL::CAtlStringMgr::Allocate )
  {
    v23 = (__int64)v11((ATL::CAtlStringMgr *)v7, a2, 2);
    v8 = v24;
    v13 = (_DWORD *)v23;
    goto LABEL_14;
  }
  v13 = 0LL;
  if ( a2 >= 0 && 0x7FFFFFFF - a2 >= 1 )
  {
    v14 = (a2 + 8) & 0xFFFFFFF8;
    if ( a2 + 1 <= v14 )
    {
      v12 = v14;
      if ( v14 )
      {
        v10 = 0xFFFFFFFFFFFFFFFFuLL % v14;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v14 < 2 )
          goto LABEL_14;
        v12 = 2LL * v14;
        if ( v12 > 0xFFFFFFFFFFFFFFE7uLL )
          goto LABEL_14;
      }
      else
      {
        v12 = 0LL;
      }
      v15 = v12 + 24;
      v16 = v7[1];
      v17 = *(LPVOID (__fastcall **)(HANDLE *, SIZE_T))*v16;
      if ( v17 == ATL::CWin32Heap::Allocate )
        v18 = HeapAlloc(v16[1], 0, v15);
      else
        v18 = (_DWORD *)v17((HANDLE *)v16, v15);
      v8 = v24;
      v12 = (unsigned __int64)v18;
      if ( v18 )
      {
        *(_QWORD *)v18 = v7;
        v18[4] = 1;
        v18[2] = 0;
        v13 = v18;
        v18[3] = v14 - 1;
      }
    }
  }
LABEL_14:
  if ( !v13 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v12, v10);
  if ( v8 < a2 )
    a2 = v8;
  v19 = 2LL * (a2 + 1);
  if ( v19 )
  {
    if ( v13 != (_DWORD *)-24LL )
    {
      v20 = v13 + 6;
      if ( v4 )
      {
        memcpy_0(v20, v4, v19);
        goto LABEL_21;
      }
      memset_0(v20, 0, v19);
    }
    *(_DWORD *)_o__errno(v12, v10, v19, a4) = 22;
    invalid_parameter_noinfo();
  }
LABEL_21:
  result = v24;
  v13[2] = v24;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 - 2, 0xFFFFFFFF) <= 1 )
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, size_t))(**((_QWORD **)v4 - 3) + 8LL))(
               *((_QWORD *)v4 - 3),
               (__int64)v4 - 24,
               v19);
  *a1 = v13 + 6;
  return result;
}
