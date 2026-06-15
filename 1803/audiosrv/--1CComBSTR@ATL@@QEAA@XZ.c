/*
 * XREFs of ??1CComBSTR@ATL@@QEAA@XZ @ 0x180096EE4
 * Callers:
 *     _CAppAudioSessionId::CalculateStaticId_::_1_::dtor$1 @ 0x180066F18 (_CAppAudioSessionId--CalculateStaticId_--_1_--dtor$1.c)
 *     _AudioDeviceMgr::ProcessOnDeviceRemoved_::_1_::dtor$2 @ 0x1801171C5 (_AudioDeviceMgr--ProcessOnDeviceRemoved_--_1_--dtor$2.c)
 *     _AudioDeviceMgr::ProcessOnDeviceStateChanged_::_1_::dtor$1 @ 0x1801172E1 (_AudioDeviceMgr--ProcessOnDeviceStateChanged_--_1_--dtor$1.c)
 *     _EndpointDevice::GetEndpointName_::_1_::dtor$0 @ 0x1801181B5 (_EndpointDevice--GetEndpointName_--_1_--dtor$0.c)
 *     _PhoneTopology::SetActiveEndpoint_::_1_::dtor$1 @ 0x1801199A1 (_PhoneTopology--SetActiveEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComBSTR::~CComBSTR(BSTR *this)
{
  SysFreeString(*this);
}
