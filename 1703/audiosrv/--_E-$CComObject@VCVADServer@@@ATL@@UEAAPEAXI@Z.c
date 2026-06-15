/*
 * XREFs of ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x180020360
 * Callers:
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x1800204E0 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x18001D0E0 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180022BF0 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall ATL::CComObject<CVADServer>::`vector deleting destructor'(char *a1, char a2)
{
  void *v4; // rcx
  __int64 v5; // rcx
  std::_Ref_count_base *v6; // rcx
  volatile signed __int32 *v7; // rdx
  ATL::CAtlStringMgr *v8; // rcx
  void (__fastcall *v9)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rax
  volatile signed __int32 *v10; // rdx
  volatile signed __int32 *v11; // rdx

  *(_QWORD *)a1 = &ATL::CComObject<CVADServer>::`vftable';
  *((_DWORD *)a1 + 2) = -1073741823;
  CVADServer::FinalRelease((CVADServer *)a1);
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  v4 = (void *)*((_QWORD *)a1 + 53);
  if ( v4 )
    operator delete(v4, (const struct std::nothrow_t *)1);
  v5 = *((_QWORD *)a1 + 52);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = (std::_Ref_count_base *)*((_QWORD *)a1 + 51);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 26) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 25) - 24LL));
  CoTaskMemFree(*((LPVOID *)a1 + 22));
  *((_QWORD *)a1 + 22) = 0LL;
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 18) - 24LL));
  v7 = (volatile signed __int32 *)(*((_QWORD *)a1 + 14) - 24LL);
  if ( _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) <= 1 )
  {
    v8 = *(ATL::CAtlStringMgr **)v7;
    v9 = *(void (__fastcall **)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**(_QWORD **)v7 + 8LL);
    if ( v9 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(v8, (struct ATL::CStringData *)v7);
    else
      ((void (__fastcall *)(ATL::CAtlStringMgr *))v9)(v8);
  }
  v10 = (volatile signed __int32 *)(*((_QWORD *)a1 + 11) - 24LL);
  if ( _InterlockedExchangeAdd(v10 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v10 + 8LL))(*(_QWORD *)v10);
  v11 = (volatile signed __int32 *)(*((_QWORD *)a1 + 10) - 24LL);
  if ( _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v11 + 8LL))(*(_QWORD *)v11);
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)a1 + 9) - 24LL));
  if ( a1[56] )
  {
    a1[56] = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x1B0);
  return a1;
}
