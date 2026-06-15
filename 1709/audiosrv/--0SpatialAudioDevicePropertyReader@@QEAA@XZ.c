/*
 * XREFs of ??0SpatialAudioDevicePropertyReader@@QEAA@XZ @ 0x1800280E8
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180029518 (--$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

SpatialAudioDevicePropertyReader *__fastcall SpatialAudioDevicePropertyReader::SpatialAudioDevicePropertyReader(
        SpatialAudioDevicePropertyReader *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  LPUNKNOWN v4; // rcx
  CAudioDGProcess *v5; // rcx
  SpatialAudioDevicePropertyReader *result; // rax
  LPUNKNOWN v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 40);
  *((_QWORD *)this + 1) = &Microsoft::WRL::FtmBase::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  v7 = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &v7) >= 0 )
  {
    v3 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    ((void (__fastcall *)(LPUNKNOWN, GUID *, __int64 *))v7->lpVtbl->QueryInterface)(
      v7,
      &GUID_00000003_0000_0000_c000_000000000046,
      v1);
  }
  v4 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v4->lpVtbl->Release)(v4);
  }
  v5 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioDevicePropertyReader'};
  *((_QWORD *)this + 1) = &SpatialAudioDevicePropertyReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  *((_DWORD *)this + 13) = 1;
  if ( v5 )
    (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)v5 + 8LL))(v5);
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)this = &SpatialAudioDevicePropertyReader::`vftable'{for `ISpatialAudioDevicePropertyReader'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 1) = &SpatialAudioDevicePropertyReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 72), 0, 0);
  *((_QWORD *)this + 51) = 0LL;
  result = this;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_DWORD *)this + 108) = 0;
  *((_QWORD *)this + 64) = 0LL;
  *((_DWORD *)this + 130) = 0;
  return result;
}
