/*
 * XREFs of _ATL::CAtlMap___int64_ATL::CComPtr_IUnknown__ATL::CElementTraits___int64__ATL::CElementTraits_ATL::CComPtr_IUnknown_____::NewNode_::_1_::catch$1 @ 0x1800FC647
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800657A3 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap___int64_ATL::CComPtr_IUnknown__ATL::CElementTraits___int64__ATL::CElementTraits_ATL::CComPtr_IUnknown_____::NewNode_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 96);
  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v4 + 16) = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v3 + 64) = v4;
  throw;
}
