/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180029234
 * Callers:
 *     Create_SpatialAudioDeviceStateReader @ 0x180029438 (Create_SpatialAudioDeviceStateReader.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDeviceStateReader@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180028D80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISp_ea_180028D80.c)
 *     ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180028E44 (-Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?Load@SpatialAudioStateIO@@MEAAJXZ @ 0x180029010 (-Load@SpatialAudioStateIO@@MEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateReader,SpatialAudioDeviceStateReader,unsigned short const * &,IPropertyStore * &>(
        _QWORD *a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  char *v6; // rax
  char *v7; // rbx
  __int64 *v8; // rdi
  __int64 v9; // rcx
  LPUNKNOWN v10; // rcx
  int v11; // edi
  __int64 (__fastcall *v12)(SpatialAudioStateIO *); // rax
  int v13; // eax
  volatile signed __int32 *v14; // rcx
  __int64 (__fastcall *v15)(volatile signed __int32 *); // rax
  LPUNKNOWN ppunkMarshal; // [rsp+50h] [rbp+8h] BYREF
  char *v18; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = (char *)operator new(0x270uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v18 = v6;
  if ( v6 )
  {
    memset(v6 + 8, 0, 0x208uLL);
    *((_QWORD *)v7 + 66) = 0LL;
    *((_QWORD *)v7 + 67) = 0LL;
    *(_QWORD *)v7 = &SpatialAudioStateIO::`vftable';
    *((_QWORD *)v7 + 68) = 0LL;
    *((_QWORD *)v7 + 69) = 0LL;
    *((_QWORD *)v7 + 70) = 0LL;
    *((_QWORD *)v7 + 72) = &Microsoft::WRL::FtmBase::`vftable';
    v8 = (__int64 *)(v7 + 608);
    *((_QWORD *)v7 + 76) = 0LL;
    ppunkMarshal = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v9 = *v8;
      if ( *v8 )
      {
        *v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, char *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &GUID_00000003_0000_0000_c000_000000000046,
        v7 + 608);
    }
    v10 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v10->lpVtbl->Release)(v10);
    }
    *((_DWORD *)v7 + 155) = 1;
    *((_QWORD *)v7 + 71) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioDeviceStateReader'};
    *((_QWORD *)v7 + 72) = &SpatialAudioDeviceStateReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v7 = &SpatialAudioDeviceStateReader::`vftable';
    *((_QWORD *)v7 + 71) = &SpatialAudioDeviceStateReader::`vftable'{for `ISpatialAudioDeviceStateReader'};
    *((_QWORD *)v7 + 72) = &SpatialAudioDeviceStateReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    v18 = 0LL;
    v11 = SpatialAudioIO::Initialize((SpatialAudioIO *)v7, *a2, *a3);
    if ( v11 >= 0 )
    {
      v12 = *(__int64 (__fastcall **)(SpatialAudioStateIO *))(*(_QWORD *)v7 + 8LL);
      v13 = v12 == SpatialAudioStateIO::Load
          ? SpatialAudioStateIO::Load((SpatialAudioStateIO *)v7)
          : v12((SpatialAudioStateIO *)v7);
      v11 = v13;
      if ( v13 >= 0 )
      {
        (*(void (__fastcall **)(char *))(*((_QWORD *)v7 + 71) + 8LL))(v7 + 568);
        *a1 = v7;
        v11 = 0;
      }
    }
    if ( v7 )
    {
      v14 = (volatile signed __int32 *)(v7 + 568);
      v15 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*((_QWORD *)v7 + 71) + 16LL);
      if ( v15 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::Release(v14);
      else
        ((void (__fastcall *)(volatile signed __int32 *, __int64 (__fastcall *)(volatile signed __int32 *)))v15)(
          v14,
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::Release);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
