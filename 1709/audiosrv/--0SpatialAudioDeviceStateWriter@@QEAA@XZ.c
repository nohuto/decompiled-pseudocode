/*
 * XREFs of ??0SpatialAudioDeviceStateWriter@@QEAA@XZ @ 0x1800D3938
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1800D387C (--$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 * Callees:
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18005A19C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

SpatialAudioDeviceStateWriter *__fastcall SpatialAudioDeviceStateWriter::SpatialAudioDeviceStateWriter(
        SpatialAudioDeviceStateWriter *this)
{
  CAudioDGProcess *v2; // rcx

  memset((char *)this + 8, 0, 0x208uLL);
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *(_QWORD *)this = &SpatialAudioStateIO::`vftable';
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  Microsoft::WRL::FtmBase::FtmBase((SpatialAudioDeviceStateWriter *)((char *)this + 576));
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  *((_QWORD *)this + 71) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDeviceStateWriter,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioDeviceStateWriter'};
  *((_QWORD *)this + 72) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDeviceStateWriter,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  *((_DWORD *)this + 155) = 1;
  if ( v2 )
    (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)v2 + 8LL))(v2);
  *(_QWORD *)this = &SpatialAudioDeviceStateWriter::`vftable';
  *((_QWORD *)this + 71) = &SpatialAudioDeviceStateWriter::`vftable'{for `ISpatialAudioDeviceStateWriter'};
  *((_QWORD *)this + 72) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDeviceStateWriter,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 624), 0, 0);
  return this;
}
