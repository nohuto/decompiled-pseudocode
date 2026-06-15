/*
 * XREFs of _ATL::CAtlMap__GUID_CGainStage_____ptr64_ATL::CElementTraits__GUID__ATL::CElementTraits_CGainStage_____ptr64___::NewNode_::_1_::catch$1 @ 0x18007397F
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180036B83 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap__GUID_CGainStage_____ptr64_ATL::CElementTraits__GUID__ATL::CElementTraits_CGainStage_____ptr64___::NewNode_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 96);
  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v4 + 24) = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v3 + 64) = v4;
  throw;
}
