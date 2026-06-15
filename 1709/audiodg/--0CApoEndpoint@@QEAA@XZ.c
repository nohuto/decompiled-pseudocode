/*
 * XREFs of ??0CApoEndpoint@@QEAA@XZ @ 0x1400345AC
 * Callers:
 *     ??$MakeAndInitialize@VCApoEndpoint@@V1@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVCApoEndpoint@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Z @ 0x1400344C4 (--$MakeAndInitialize@VCApoEndpoint@@V1@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESC.c)
 * Callees:
 *     memset @ 0x14001D9AC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

CApoEndpoint *__fastcall CApoEndpoint::CApoEndpoint(CApoEndpoint *this)
{
  *((_DWORD *)this + 7) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioOutputEndpointRT>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CApoEndpoint::`vftable';
  *((_QWORD *)this + 1) = &CApoEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CApoEndpoint::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioOutputEndpointRT>'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  memset((char *)this + 80, 0, 0x28uLL);
  return this;
}
