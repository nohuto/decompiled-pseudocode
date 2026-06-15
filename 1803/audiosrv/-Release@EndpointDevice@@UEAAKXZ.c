/*
 * XREFs of ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840
 * Callers:
 *     ?CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x18005528C (-CreateInstance@EndpointDevice@@SAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 *     ?CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z @ 0x180055DE0 (-CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z.c)
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x180056168 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 *     ?CreateInstance@PhoneTopology@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology@@@Z @ 0x180056A1C (-CreateInstance@PhoneTopology@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology.c)
 *     ??1?$CComPtr@VEndpointDevice@@@ATL@@QEAA@XZ @ 0x18009A060 (--1-$CComPtr@VEndpointDevice@@@ATL@@QEAA@XZ.c)
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800FA288 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?PublishDefaults@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800FAF20 (-PublishDefaults@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z.c)
 *     ?UpdateCommsPreferredEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x1800FB7E8 (-UpdateCommsPreferredEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_000.c)
 *     ??1AudioDeviceMgr@@MEAA@XZ @ 0x180116590 (--1AudioDeviceMgr@@MEAA@XZ.c)
 *     ?FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpointCollection@@@Z @ 0x18011686C (-FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpoin.c)
 *     ?GetDefaultAudioEndpointForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAUIEndpointDevice@@@Z @ 0x180116A10 (-GetDefaultAudioEndpointForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x180116B30 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 *     ?ProcessOnDefaultDeviceChanged@AudioDeviceMgr@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180116F64 (-ProcessOnDefaultDeviceChanged@AudioDeviceMgr@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z @ 0x180117024 (-ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z.c)
 *     ?ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z @ 0x1801171E0 (-ProcessOnDeviceStateChanged@AudioDeviceMgr@@QEAAJPEBGK@Z.c)
 *     ??1EndpointIterator@@MEAA@XZ @ 0x1801174CC (--1EndpointIterator@@MEAA@XZ.c)
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIEndpointDevice@@PEAU3@@Z @ 0x1801176C4 (-Find@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3.c)
 *     ?FreeNode@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1ba@@3U__s_GUID@@B@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180117754 (-FreeNode@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_6904f82b_2e7f_4bcc_9201_92c524ade1b.c)
 *     ?GetDeviceByIdString@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x1801177C0 (-GetDeviceByIdString@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z.c)
 *     ?GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x1801179D0 (-GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z.c)
 *     ?GetNextDevice@EndpointCollection@@QEAAJPEAPEAU__POSITION@@PEAPEAUIEndpointDevice@@@Z @ 0x180117C3C (-GetNextDevice@EndpointCollection@@QEAAJPEAPEAU__POSITION@@PEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::Release(EndpointDevice *this)
{
  CUnknown *v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = (CUnknown *)*((_QWORD *)this + 2);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 16LL);
  if ( (char *)v2 == (char *)CUnknown::NonDelegatingRelease )
    return CUnknown::NonDelegatingRelease(v1);
  else
    return v2();
}
