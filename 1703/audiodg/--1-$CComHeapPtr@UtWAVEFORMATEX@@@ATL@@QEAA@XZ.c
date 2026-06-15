/*
 * XREFs of ??1?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@QEAA@XZ @ 0x140031090
 * Callers:
 *     _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$15 @ 0x140020F34 (_CPipeInstance--InitializeAPOInterfaces_--_1_--dtor$15.c)
 *     _CPipeInstance::_CPipeInstance_::_1_::dtor$5 @ 0x1400214B9 (_CPipeInstance--_CPipeInstance_--_1_--dtor$5.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$1 @ 0x14002152C (_CAudioDeviceGraph--Initialize_--_1_--dtor$1.c)
 *     _CAudioDeviceGraph::InitializePump_::_1_::dtor$2 @ 0x140021718 (_CAudioDeviceGraph--InitializePump_--_1_--dtor$2.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$7 @ 0x140021DF4 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$7.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$8 @ 0x140021E00 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$8.c)
 *     _CApoEndpoint::_CApoEndpoint_::_1_::dtor$1 @ 0x140034DE2 (_CApoEndpoint--_CApoEndpoint_--_1_--dtor$1.c)
 *     _FillAuxiliaryInputInitStruct_::_1_::dtor$2 @ 0x1400350ED (_FillAuxiliaryInputInitStruct_--_1_--dtor$2.c)
 *     ?InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14004CA48 (-InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<tWAVEFORMATEX>::~CComHeapPtr<tWAVEFORMATEX>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
