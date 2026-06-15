/*
 * XREFs of ??0SpatialAudioMetadataDictionary@@QEAA@XZ @ 0x1800D82F0
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionary@@$$QEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG$$QEA$$TAEAPEAEAEAI@Z @ 0x1800D81FC (--$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@W4DictionaryLoadKind@@AEBU_GUID@@AEAG$$.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18005A19C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

SpatialAudioMetadataDictionary *__fastcall SpatialAudioMetadataDictionary::SpatialAudioMetadataDictionary(
        SpatialAudioMetadataDictionary *this)
{
  _QWORD *v1; // rdi
  CAudioDGProcess *v3; // rcx
  SpatialAudioMetadataDictionary *result; // rax

  v1 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((SpatialAudioMetadataDictionary *)((char *)this + 16));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioMetadataDictionary,ISpatialAudioMetadataDictionaryData,Microsoft::WRL::FtmBase>::`vftable';
  *((_DWORD *)this + 15) = 1;
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioMetadataDictionary,ISpatialAudioMetadataDictionaryData,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioMetadataDictionaryData'};
  *v1 = &SpatialAudioMetadataDictionary::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  if ( v3 )
    (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)this = &SpatialAudioMetadataDictionary::`vftable';
  *((_QWORD *)this + 1) = &SpatialAudioMetadataDictionary::`vftable'{for `ISpatialAudioMetadataDictionaryData'};
  *v1 = &SpatialAudioMetadataDictionary::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 64), 0, 0);
  *((_QWORD *)this + 13) = 0LL;
  result = this;
  *((_WORD *)this + 64) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((GUID *)this + 7) = GUID_00000000_0000_0000_0000_000000000000;
  return result;
}
