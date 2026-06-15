/*
 * XREFs of ??1?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@QEAA@XZ @ 0x140030B1C
 * Callers:
 *     _CPipeInstance::_CPipeInstance_::_1_::dtor$5 @ 0x140020999 (_CPipeInstance--_CPipeInstance_--_1_--dtor$5.c)
 *     _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$15 @ 0x140020AD4 (_CPipeInstance--InitializeAPOInterfaces_--_1_--dtor$15.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$1 @ 0x14002110C (_CAudioDeviceGraph--Initialize_--_1_--dtor$1.c)
 *     _CAudioDeviceGraph::InitializePump_::_1_::dtor$2 @ 0x14002132C (_CAudioDeviceGraph--InitializePump_--_1_--dtor$2.c)
 *     _CApoEndpoint::_CApoEndpoint_::_1_::dtor$1 @ 0x14003473A (_CApoEndpoint--_CApoEndpoint_--_1_--dtor$1.c)
 *     _FillAuxiliaryInputInitStruct_::_1_::dtor$2 @ 0x140034981 (_FillAuxiliaryInputInitStruct_--_1_--dtor$2.c)
 *     ?InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14004E1A8 (-InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<tWAVEFORMATEX>::~CComHeapPtr<tWAVEFORMATEX>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
