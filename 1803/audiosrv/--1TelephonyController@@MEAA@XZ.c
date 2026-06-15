/*
 * XREFs of ??1TelephonyController@@MEAA@XZ @ 0x18011A1E0
 * Callers:
 *     ??_GTelephonyController@@MEAAPEAXI@Z @ 0x18011A254 (--_GTelephonyController@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CAtlMap@IV?$CComPtr@UIKsControl@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UIKsControl@@@ATL@@@2@@ATL@@QEAAXXZ @ 0x1800FCB58 (-RemoveAll@-$CAtlMap@IV-$CComPtr@UIKsControl@@@ATL@@V-$CElementTraits@I@2@V-$CElementTraits@V-$C.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x180114024 (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 */

void __fastcall TelephonyController::~TelephonyController(TelephonyController *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &TelephonyController::`vftable'{for `ITelephonyController'};
  *((_QWORD *)this + 1) = &TelephonyController::`vftable'{for `CUnknown'};
  v2 = *((_QWORD *)this + 25);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  ATL::CAtlMap<unsigned int,ATL::CComPtr<IKsControl>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<IKsControl>>>::RemoveAll((__int64)this + 128);
  ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll((__int64)this + 80);
  ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll((__int64)this + 32);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
