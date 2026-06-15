/*
 * XREFs of ??0SpatialAudioPositionCalc@@QEAA@XZ @ 0x1800CC858
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioPositionCalc@@@Z @ 0x1800CC7E4 (--$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@@Details@WRL@Microso.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180046650 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

SpatialAudioPositionCalc *__fastcall SpatialAudioPositionCalc::SpatialAudioPositionCalc(SpatialAudioPositionCalc *this)
{
  _QWORD *v1; // rdi
  CAudioDGProcess *v3; // rcx
  SpatialAudioPositionCalc *result; // rax

  v1 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((SpatialAudioPositionCalc *)((char *)this + 8));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `ISpatialAudioPositionCalc'};
  *((_DWORD *)this + 9) = 1;
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( v3 )
    (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)this = &SpatialAudioPositionCalc::`vftable'{for `ISpatialAudioPositionCalc'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 1, 0, 0);
  *((_WORD *)this + 64) = 0;
  result = this;
  *((_DWORD *)this + 20) = 33882113;
  *((_DWORD *)this + 21) = 1280;
  *((_DWORD *)this + 22) = 3;
  *((_DWORD *)this + 23) = 134610951;
  *((_DWORD *)this + 24) = 591360;
  *((_DWORD *)this + 25) = 184551947;
  *((_DWORD *)this + 26) = 219157772;
  *((_DWORD *)this + 27) = 353243157;
  *((_DWORD *)this + 28) = 320147219;
  *((_DWORD *)this + 29) = 219157516;
  *((_DWORD *)this + 30) = 336465940;
  *((_DWORD *)this + 31) = 320081683;
  *((_BYTE *)this + 130) = 4;
  return result;
}
