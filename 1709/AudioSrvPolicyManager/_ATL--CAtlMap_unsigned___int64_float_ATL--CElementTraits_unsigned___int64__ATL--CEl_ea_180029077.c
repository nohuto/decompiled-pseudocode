/*
 * XREFs of _ATL::CAtlMap_unsigned___int64_float_ATL::CElementTraits_unsigned___int64__ATL::CElementTraits_float___::NewNode_::_1_::catch$1 @ 0x180029077
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180027AB1 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_unsigned___int64_float_ATL::CElementTraits_unsigned___int64__ATL::CElementTraits_float___::NewNode_::_1_::catch_1(
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
