/*
 * XREFs of ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x180047B70
 * Callers:
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x180016F10 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180034080 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180048A90 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall ATL::CComObject<CVADServer>::`vector deleting destructor'(char *a1, char a2)
{
  __int64 v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  std::_Ref_count_base *v7; // rcx
  volatile signed __int32 *v8; // rdx
  ATL::CAtlStringMgr *v9; // rcx
  void (__fastcall *v10)(ATL::CAtlStringMgr *, struct ATL::CStringData *); // rax
  volatile signed __int32 *v11; // rdx
  volatile signed __int32 *v12; // rdx

  *(_QWORD *)a1 = &ATL::CComObject<CVADServer>::`vftable';
  *((_DWORD *)a1 + 2) = -1073741823;
  CVADServer::FinalRelease((CVADServer *)a1);
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  v4 = *((_QWORD *)a1 + 58);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (void *)*((_QWORD *)a1 + 56);
  if ( v5 )
    operator delete(v5, (const struct std::nothrow_t *)1);
  v6 = *((_QWORD *)a1 + 55);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = (std::_Ref_count_base *)*((_QWORD *)a1 + 54);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 27) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 26) - 24LL));
  CoTaskMemFree(*((LPVOID *)a1 + 22));
  *((_QWORD *)a1 + 22) = 0LL;
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 18) - 24LL));
  v8 = (volatile signed __int32 *)(*((_QWORD *)a1 + 14) - 24LL);
  if ( _InterlockedExchangeAdd(v8 + 4, 0xFFFFFFFF) <= 1 )
  {
    v9 = *(ATL::CAtlStringMgr **)v8;
    v10 = *(void (__fastcall **)(ATL::CAtlStringMgr *, struct ATL::CStringData *))(**(_QWORD **)v8 + 8LL);
    if ( v10 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(v9, (struct ATL::CStringData *)v8);
    else
      ((void (__fastcall *)(ATL::CAtlStringMgr *))v10)(v9);
  }
  v11 = (volatile signed __int32 *)(*((_QWORD *)a1 + 11) - 24LL);
  if ( _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v11 + 8LL))(*(_QWORD *)v11);
  v12 = (volatile signed __int32 *)(*((_QWORD *)a1 + 10) - 24LL);
  if ( _InterlockedExchangeAdd(v12 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v12 + 8LL))(*(_QWORD *)v12);
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 9) - 24LL));
  if ( a1[56] )
  {
    a1[56] = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x1F0);
  return a1;
}
