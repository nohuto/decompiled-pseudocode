/*
 * XREFs of _ATL::CAtlMap_IUnknown_____ptr64_GraphStreamingResourceManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_GraphStreamingResourceManager::DeviceRegistrations::ListValue___::NewNode_::_1_::catch$1 @ 0x140020838
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x14001E511 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_IUnknown_____ptr64_GraphStreamingResourceManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_GraphStreamingResourceManager::DeviceRegistrations::ListValue___::NewNode_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 96);
  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v4 + 32) = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v3 + 64) = v4;
  throw;
}
