/*
 * XREFs of _ATL::CAtlArray_CVolumeUnit_ATL::CElementTraits_CVolumeUnit___::SetAtGrow_::_1_::catch$0 @ 0x18006A6AF
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180036B83 (_CxxThrowException_0.c)
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18006A97C (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 */

void __fastcall __noreturn ATL::CAtlArray_CVolumeUnit_ATL::CElementTraits_CVolumeUnit___::SetAtGrow_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 72);
  v4 = *(_QWORD *)(a2 + 64);
  if ( *(_QWORD *)(v4 + 8) != v3 )
    ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount(v4, v3);
  throw;
}
