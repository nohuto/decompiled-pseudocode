/*
 * XREFs of ??0SpatialAudioConfigureDevice@@QEAA@XZ @ 0x18003BEB0
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioConfigureDevice@@AEAPEBG@Z @ 0x1800462AC (--$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVS.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180046650 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

SpatialAudioConfigureDevice *__fastcall SpatialAudioConfigureDevice::SpatialAudioConfigureDevice(
        SpatialAudioConfigureDevice *this)
{
  _QWORD *v1; // rdi
  CAudioDGProcess *v3; // rcx
  SpatialAudioConfigureDevice *result; // rax

  v1 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((SpatialAudioConfigureDevice *)((char *)this + 8));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioConfigureDevice,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `ISpatialAudioConfigureDevice'};
  *v1 = &SpatialAudioConfigureDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_DWORD *)this + 9) = 1;
  if ( v3 )
    (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)this = &SpatialAudioConfigureDevice::`vftable'{for `ISpatialAudioConfigureDevice'};
  *v1 = &SpatialAudioConfigureDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 1, 0, 0);
  *((_QWORD *)this + 75) = 0LL;
  result = this;
  *((_QWORD *)this + 76) = 0LL;
  return result;
}
