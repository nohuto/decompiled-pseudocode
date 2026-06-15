/*
 * XREFs of ??1CComBSTR@ATL@@QEAA@XZ @ 0x18005A964
 * Callers:
 *     _CAppAudioSessionId::CalculateStaticId_::_1_::dtor$1 @ 0x180038A44 (_CAppAudioSessionId--CalculateStaticId_--_1_--dtor$1.c)
 *     _AudioDeviceMgr::ProcessOnDeviceRemoved_::_1_::dtor$2 @ 0x1800E7C70 (_AudioDeviceMgr--ProcessOnDeviceRemoved_--_1_--dtor$2.c)
 *     _AudioDeviceMgr::ProcessOnDeviceStateChanged_::_1_::dtor$1 @ 0x1800E7E91 (_AudioDeviceMgr--ProcessOnDeviceStateChanged_--_1_--dtor$1.c)
 *     _EndpointDevice::GetEndpointName_::_1_::dtor$0 @ 0x1800E95BB (_EndpointDevice--GetEndpointName_--_1_--dtor$0.c)
 *     _PhoneTopology3::ActivateEndpointForCellular_::_1_::dtor$0 @ 0x1800EACD4 (_PhoneTopology3--ActivateEndpointForCellular_--_1_--dtor$0.c)
 *     _PhoneTopology3::SetActiveEndpoint_::_1_::dtor$1 @ 0x1800EC7DA (_PhoneTopology3--SetActiveEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComBSTR::~CComBSTR(BSTR *this)
{
  SysFreeString(*this);
}
