/*
 * XREFs of ??1?$CComPtr@VEndpointDevice@@@ATL@@QEAA@XZ @ 0x18009A060
 * Callers:
 *     _EndpointDevice::CreateInstance_::_1_::dtor$0 @ 0x180068649 (_EndpointDevice--CreateInstance_--_1_--dtor$0.c)
 *     _EndpointCollection::CreateInstance_::_1_::dtor$0 @ 0x1800687BD (_EndpointCollection--CreateInstance_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::AddEndpointDevice_::_1_::dtor$0 @ 0x180068816 (_AudioDeviceMgr--AddEndpointDevice_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::AddEndpointDevice_::_1_::dtor$1 @ 0x180068822 (_AudioDeviceMgr--AddEndpointDevice_--_1_--dtor$1.c)
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$3 @ 0x180068876 (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$3.c)
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$4 @ 0x180068886 (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$4.c)
 *     _PhoneTopology::CreateInstance_::_1_::dtor$0 @ 0x1800689BF (_PhoneTopology--CreateInstance_--_1_--dtor$0.c)
 *     _PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint_::_1_::dtor$1 @ 0x1800FA48E (_PhoneCallAudio--DoSetPhoneCallAudioActiveEndpoint_--_1_--dtor$1.c)
 *     _PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint_::_1_::dtor$2 @ 0x1800FA49A (_PhoneCallAudio--DoSetPhoneCallAudioActiveEndpoint_--_1_--dtor$2.c)
 *     _PhoneCallAudio::PublishDefaults_::_1_::dtor$2 @ 0x1800FB0FB (_PhoneCallAudio--PublishDefaults_--_1_--dtor$2.c)
 *     _AudioDeviceMgr::FindEndpointDeviceInCollection_::_1_::dtor$1 @ 0x18011699E (_AudioDeviceMgr--FindEndpointDeviceInCollection_--_1_--dtor$1.c)
 *     _AudioDeviceMgr::GetDefaultAudioEndpointForPolicy_::_1_::dtor$0 @ 0x180116B0A (_AudioDeviceMgr--GetDefaultAudioEndpointForPolicy_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::GetEndpointDevice_::_1_::dtor$0 @ 0x180116C9A (_AudioDeviceMgr--GetEndpointDevice_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::ProcessOnDefaultDeviceChanged_::_1_::dtor$0 @ 0x180117018 (_AudioDeviceMgr--ProcessOnDefaultDeviceChanged_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::ProcessOnDeviceRemoved_::_1_::dtor$0 @ 0x1801171AD (_AudioDeviceMgr--ProcessOnDeviceRemoved_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::ProcessOnDeviceRemoved_::_1_::dtor$1 @ 0x1801171B9 (_AudioDeviceMgr--ProcessOnDeviceRemoved_--_1_--dtor$1.c)
 *     _AudioDeviceMgr::ProcessOnDeviceStateChanged_::_1_::dtor$0 @ 0x1801172D5 (_AudioDeviceMgr--ProcessOnDeviceStateChanged_--_1_--dtor$0.c)
 *     _EndpointCollection::GetDeviceByIdString_::_1_::dtor$1 @ 0x1801179A6 (_EndpointCollection--GetDeviceByIdString_--_1_--dtor$1.c)
 *     _EndpointCollection::GetDeviceByInterfacePath_::_1_::dtor$1 @ 0x180117BDA (_EndpointCollection--GetDeviceByInterfacePath_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>(EndpointDevice **a1)
{
  EndpointDevice *v1; // rcx
  __int64 (__fastcall *v2)(EndpointDevice *); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(__int64 (__fastcall **)(EndpointDevice *))(*(_QWORD *)v1 + 16LL);
    if ( v2 == EndpointDevice::Release )
      EndpointDevice::Release(v1);
    else
      v2(v1);
  }
}
