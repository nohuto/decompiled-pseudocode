/*
 * XREFs of ??0SpatialAudioMetadataDictionaryData@@QEAA@XZ @ 0x1800D79B8
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionaryData@@V1@AEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionaryData@@AEAW4DictionaryLoadKind@@AEBU_GUID@@AEAG@Z @ 0x1800D7918 (--$MakeAndInitialize@VSpatialAudioMetadataDictionaryData@@V1@AEAW4DictionaryLoadKind@@AEBU_GUID@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18005A19C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
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
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioMetadataDictionaryData,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioMetadataDictionaryData'};
  *((_DWORD *)this + 13) = 1;
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioMetadataDictionaryData,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  if ( v3 )
    (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)this = &SpatialAudioMetadataDictionaryData::`vftable'{for `ISpatialAudioMetadataDictionaryData'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioMetadataDictionaryData,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 56), 0, 0);
  *((_QWORD *)this + 12) = 0LL;
  result = this;
  *((_DWORD *)this + 26) = 0;
  *((_WORD *)this + 54) = 0;
  *((GUID *)this + 7) = GUID_00000000_0000_0000_0000_000000000000;
  return result;
}
