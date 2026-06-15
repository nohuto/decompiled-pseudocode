/*
 * XREFs of ??0SpatialAudioDevicePropertyWriter@@QEAA@XZ @ 0x18003C18C
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBG@Z @ 0x18004640C (--$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180046650 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

SpatialAudioDevicePropertyWriter *__fastcall SpatialAudioDevicePropertyWriter::SpatialAudioDevicePropertyWriter(
        SpatialAudioDevicePropertyWriter *this)
{
  _QWORD *v1; // rdi
  CAudioDGProcess *v3; // rcx
  SpatialAudioDevicePropertyWriter *result; // rax

  v1 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((SpatialAudioDevicePropertyWriter *)((char *)this + 8));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyWriter,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `ISpatialAudioDevicePropertyWriter'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyWriter,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_DWORD *)this + 9) = 1;
  if ( v3 )
    (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)this = &SpatialAudioDevicePropertyWriter::`vftable'{for `ISpatialAudioDevicePropertyWriter'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyWriter,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 1, 0, 0);
  *((_QWORD *)this + 10) = 0LL;
  result = this;
  *((_QWORD *)this + 11) = 0LL;
  return result;
}
