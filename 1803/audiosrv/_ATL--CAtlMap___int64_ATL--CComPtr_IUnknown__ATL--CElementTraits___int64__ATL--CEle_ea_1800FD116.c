/*
 * XREFs of _ATL::CAtlMap___int64_ATL::CComPtr_IUnknown__ATL::CElementTraits___int64__ATL::CElementTraits_ATL::CComPtr_IUnknown_____::SetAt_::_1_::catch$0 @ 0x1800FD116
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800657A3 (_CxxThrowException_0.c)
 *     ?RemoveAtPos@?$CAtlMap@_JV?$CComPtr@UIUnknown@@@ATL@@V?$CElementTraits@_J@2@V?$CElementTraits@V?$CComPtr@UIUnknown@@@ATL@@@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18011BDE8 (-RemoveAtPos@-$CAtlMap@_JV-$CComPtr@UIUnknown@@@ATL@@V-$CElementTraits@_J@2@V-$CElementTraits@V-.c)
 */

void __fastcall __noreturn ATL::CAtlMap___int64_ATL::CComPtr_IUnknown__ATL::CElementTraits___int64__ATL::CElementTraits_ATL::CComPtr_IUnknown_____::SetAt_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  ATL::CAtlMap<__int64,ATL::CComPtr<IUnknown>,ATL::CElementTraits<__int64>,ATL::CElementTraits<ATL::CComPtr<IUnknown>>>::RemoveAtPos(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  throw;
}
