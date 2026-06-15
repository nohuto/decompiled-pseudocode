/*
 * XREFs of ??0SpatialAudioMetadataDictionaryData@@QEAA@XZ @ 0x1800CC00C
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionaryData@@V1@AEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionaryData@@AEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG@Z @ 0x1800CBF64 (--$MakeAndInitialize@VSpatialAudioMetadataDictionaryData@@V1@AEAW4DictionaryLoadKind@@AEBU_GUID@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180046650 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

SpatialAudioMetadataDictionaryData *__fastcall SpatialAudioMetadataDictionaryData::SpatialAudioMetadataDictionaryData(
        SpatialAudioMetadataDictionaryData *this)
{
  _QWORD *v1; // rdi
  CAudioDGProcess *v3; // rcx
  SpatialAudioMetadataDictionaryData *result; // rax

  v1 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((SpatialAudioMetadataDictionaryData *)((char *)this + 8));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioMetadataDictionaryData,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `ISpatialAudioMetadataDictionaryData'};
  *((_DWORD *)this + 9) = 1;
  *v1 = &SpatialAudioMetadataDictionaryData::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  if ( v3 )
    (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)this = &SpatialAudioMetadataDictionaryData::`vftable'{for `ISpatialAudioMetadataDictionaryData'};
  *v1 = &SpatialAudioMetadataDictionaryData::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 1, 0, 0);
  *((_QWORD *)this + 10) = 0LL;
  result = this;
  *((_DWORD *)this + 22) = 0;
  *((_WORD *)this + 46) = 0;
  *((GUID *)this + 6) = GUID_00000000_0000_0000_0000_000000000000;
  return result;
}
