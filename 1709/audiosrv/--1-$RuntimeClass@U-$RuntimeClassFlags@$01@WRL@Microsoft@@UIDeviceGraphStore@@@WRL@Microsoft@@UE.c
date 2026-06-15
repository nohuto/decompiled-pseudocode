/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDeviceGraphStore@@@WRL@Microsoft@@UEAA@XZ @ 0x1800960C8
 * Callers:
 *     _CDeviceGraphObjectsStore::CDeviceGraphObjectsStore_::_1_::dtor$0 @ 0x1800381FD (_CDeviceGraphObjectsStore--CDeviceGraphObjectsStore_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::CDeviceGraphStore_::_1_::dtor$0 @ 0x1800922D0 (_CDeviceGraphStore--CDeviceGraphStore_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$0 @ 0x1800AFA90 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphStore>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphStore>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
