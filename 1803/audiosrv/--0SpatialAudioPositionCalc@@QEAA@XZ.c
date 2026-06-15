/*
 * XREFs of ??0SpatialAudioPositionCalc@@QEAA@XZ @ 0x18005CEA4
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioPositionCalc@@@Z @ 0x18004C200 (--$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@$$V@Details@WRL@Micr.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18004D5C4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

SpatialAudioPositionCalc *__fastcall SpatialAudioPositionCalc::SpatialAudioPositionCalc(SpatialAudioPositionCalc *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((SpatialAudioPositionCalc *)((char *)this + 8));
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioPositionCalc'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &SpatialAudioPositionCalc::`vftable'{for `ISpatialAudioPositionCalc'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 48), 0, 0);
  *((_DWORD *)this + 22) = 33882113;
  *((_DWORD *)this + 23) = 1280;
  *((_DWORD *)this + 24) = 3;
  *((_DWORD *)this + 25) = 134610951;
  *((_DWORD *)this + 26) = 591360;
  *((_DWORD *)this + 27) = 184551947;
  *((_DWORD *)this + 28) = 219157772;
  *((_DWORD *)this + 29) = 353243157;
  *((_DWORD *)this + 30) = 320147219;
  *((_DWORD *)this + 31) = 219157516;
  *((_DWORD *)this + 32) = 336465940;
  *((_DWORD *)this + 33) = 320081683;
  *((_WORD *)this + 68) = 0;
  *((_BYTE *)this + 138) = 4;
  return this;
}
