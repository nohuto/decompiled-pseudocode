/*
 * XREFs of _ATL::CAtlMap_ISaDeviceProxy_____ptr64_Sarm::CEndpointResourcePool_ATL::CElementTraits_ISaDeviceProxy_____ptr64__ATL::CElementTraits_Sarm::CEndpointResourcePool___::NewNode_::_1_::catch$4 @ 0x1800F38AD
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800657A3 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_ISaDeviceProxy_____ptr64_Sarm::CEndpointResourcePool_ATL::CElementTraits_ISaDeviceProxy_____ptr64__ATL::CElementTraits_Sarm::CEndpointResourcePool___::NewNode_::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 96);
  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v4 + 40) = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v3 + 64) = v4;
  throw;
}
