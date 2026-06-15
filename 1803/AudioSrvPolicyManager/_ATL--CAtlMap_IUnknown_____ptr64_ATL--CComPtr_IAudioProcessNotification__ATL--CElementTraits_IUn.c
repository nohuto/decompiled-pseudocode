/*
 * XREFs of _ATL::CAtlMap_IUnknown_____ptr64_ATL::CComPtr_IAudioProcessNotification__ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_ATL::CComPtr_IAudioProcessNotification_____::SetAt_::_1_::catch$0 @ 0x1800370E9
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180017C34 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTra.c)
 *     _CxxThrowException_0 @ 0x1800362A1 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_IUnknown_____ptr64_ATL::CComPtr_IAudioProcessNotification__ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_ATL::CComPtr_IAudioProcessNotification_____::SetAt_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::RemoveAtPos(
    *(__int64 **)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  throw;
}
