/*
 * XREFs of ??1?$CComHeapPtr@G@ATL@@QEAA@XZ @ 0x14002FB60
 * Callers:
 *     _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$28 @ 0x14001FCA4 (_CPipeInstance--InitializeAPOInterfaces_--_1_--dtor$28.c)
 *     _CAudioDeviceGraph::InitializePump_::_1_::dtor$2 @ 0x140020460 (_CAudioDeviceGraph--InitializePump_--_1_--dtor$2.c)
 *     _FillAuxiliaryInputInitStruct_::_1_::dtor$2 @ 0x1400337D1 (_FillAuxiliaryInputInitStruct_--_1_--dtor$2.c)
 *     ?InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14004C3A8 (-InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<unsigned short>::~CComHeapPtr<unsigned short>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
