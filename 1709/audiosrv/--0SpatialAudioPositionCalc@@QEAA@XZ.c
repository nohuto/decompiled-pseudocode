/*
 * XREFs of ??0SpatialAudioPositionCalc@@QEAA@XZ @ 0x1800253B4
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioPositionCalc@@@Z @ 0x1800290D4 (--$MakeAndInitialize@VSpatialAudioPositionCalc@@UISpatialAudioPositionCalc@@$$V@Details@WRL@Micr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

SpatialAudioPositionCalc *__fastcall SpatialAudioPositionCalc::SpatialAudioPositionCalc(SpatialAudioPositionCalc *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  LPUNKNOWN v4; // rcx
  CAudioDGProcess *v5; // rcx
  SpatialAudioPositionCalc *result; // rax
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
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioPositionCalc'};
  *((_QWORD *)this + 1) = &SpatialAudioPositionCalc::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  *((_DWORD *)this + 13) = 1;
  if ( v5 )
    (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)v5 + 8LL))(v5);
  *(_QWORD *)this = &SpatialAudioPositionCalc::`vftable'{for `ISpatialAudioPositionCalc'};
  *((_QWORD *)this + 1) = &SpatialAudioPositionCalc::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 56), 0, 0);
  *((_WORD *)this + 72) = 0;
  result = this;
  *((_DWORD *)this + 24) = 33882113;
  *((_DWORD *)this + 25) = 1280;
  *((_DWORD *)this + 26) = 3;
  *((_DWORD *)this + 27) = 134610951;
  *((_DWORD *)this + 28) = 591360;
  *((_DWORD *)this + 29) = 184551947;
  *((_DWORD *)this + 30) = 219157772;
  *((_DWORD *)this + 31) = 353243157;
  *((_DWORD *)this + 32) = 320147219;
  *((_DWORD *)this + 33) = 219157516;
  *((_DWORD *)this + 34) = 336465940;
  *((_DWORD *)this + 35) = 320081683;
  *((_BYTE *)this + 146) = 4;
  return result;
}
