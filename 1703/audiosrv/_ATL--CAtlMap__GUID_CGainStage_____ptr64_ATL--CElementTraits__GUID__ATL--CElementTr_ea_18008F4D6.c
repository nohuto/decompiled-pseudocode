/*
 * XREFs of _ATL::CAtlMap__GUID_CGainStage_____ptr64_ATL::CElementTraits__GUID__ATL::CElementTraits_CGainStage_____ptr64___::SetAt_::_1_::catch$0 @ 0x18008F4D6
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180057F94 (_CxxThrowException_0.c)
 *     ?RemoveAtPos@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18008EE9C (-RemoveAtPos@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits.c)
 */

void __fastcall __noreturn ATL::CAtlMap__GUID_CGainStage_____ptr64_ATL::CElementTraits__GUID__ATL::CElementTraits_CGainStage_____ptr64___::SetAt_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::RemoveAtPos(
    *(_QWORD *)(a2 + 96),
    *(_QWORD *)(a2 + 120));
  throw;
}
