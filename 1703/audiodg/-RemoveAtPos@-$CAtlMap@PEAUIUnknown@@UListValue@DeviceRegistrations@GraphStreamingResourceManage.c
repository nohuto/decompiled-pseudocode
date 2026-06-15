/*
 * XREFs of ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140031710
 * Callers:
 *     ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140004190 (-RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegis.c)
 *     _ATL::CAtlMap_IUnknown_____ptr64_GraphStreamingResourceManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_GraphStreamingResourceManager::DeviceRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x140021C1B (_ATL--CAtlMap_IUnknown_____ptr64_GraphStreamingResourceManager--DeviceRegistrations_ea_140021C1B.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 i; // rax

  v2 = 0LL;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 40) % *(_DWORD *)(a1 + 16));
  if ( a2 != *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)v4) )
  {
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
    for ( i = *(_QWORD *)(v2 + 32); i != a2; i = *(_QWORD *)(i + 32) )
      v2 = i;
  }
  ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::RemoveNode(
    a1,
    a2,
    v2);
}
