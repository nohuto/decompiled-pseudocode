/*
 * XREFs of ??1CVADServer@@QEAA@XZ @ 0x180025C04
 * Callers:
 *     ??1?$CComObject@VCVADServer@@@ATL@@UEAA@XZ @ 0x18002AFF4 (--1-$CComObject@VCVADServer@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CVADServer_::_CComObject_CVADServer__::_1_::dtor$0 @ 0x180039BD9 (_ATL--CComObject_CVADServer_--_CComObject_CVADServer__--_1_--dtor$0.c)
 *     _ATL::CComObject_CVADServer_::CreateInstance_::_1_::dtor$1 @ 0x180039C02 (_ATL--CComObject_CVADServer_--CreateInstance_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001827C (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVADServer::~CVADServer(CVADServer *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  std::_Ref_count_base *v5; // rcx

  v2 = *((_QWORD *)this + 56);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (void *)*((_QWORD *)this + 54);
  if ( v3 )
    operator delete(v3, (const struct std::nothrow_t *)1);
  v4 = *((_QWORD *)this + 53);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 52);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 26) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 25) - 24LL));
  CoTaskMemFree(*((LPVOID *)this + 22));
  *((_QWORD *)this + 22) = 0LL;
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 18) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 14) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 11) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 10) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 9) - 24LL));
  if ( *((_BYTE *)this + 56) )
  {
    *((_BYTE *)this + 56) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  }
}
