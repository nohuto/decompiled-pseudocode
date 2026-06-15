/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18004CFF8
 * Callers:
 *     Create_SpatialAudioDeviceStateReader @ 0x18004CF18 (Create_SpatialAudioDeviceStateReader.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDeviceStateReader@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004BBD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISp_ea_18004BBD0.c)
 *     ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18004D26C (-Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?Load@SpatialAudioStateIO@@MEAAJXZ @ 0x18004D340 (-Load@SpatialAudioStateIO@@MEAAJXZ.c)
 *     ??0SpatialAudioDeviceStateReader@@QEAA@XZ @ 0x18004D494 (--0SpatialAudioDeviceStateReader@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateReader,SpatialAudioDeviceStateReader,unsigned short const * &,IPropertyStore * &>(
        SpatialAudioDeviceStateReader **a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  SpatialAudioDeviceStateReader *v6; // rax
  SpatialAudioDeviceStateReader *v7; // rbx
  int v8; // edi
  __int64 (__fastcall *v9)(SpatialAudioStateIO *__hidden); // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64); // rax

  *a1 = 0LL;
  v6 = (SpatialAudioDeviceStateReader *)operator new(0x268uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = SpatialAudioDeviceStateReader::SpatialAudioDeviceStateReader(v6);
    v8 = SpatialAudioIO::Initialize(v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      v9 = *(__int64 (__fastcall **)(SpatialAudioStateIO *__hidden))(*(_QWORD *)v7 + 8LL);
      v10 = v9 == SpatialAudioStateIO::Load ? SpatialAudioStateIO::Load(v7) : v9(v7);
      v8 = v10;
      if ( v10 >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*((_QWORD *)v7 + 71) + 8LL))((__int64)v7 + 568);
        *a1 = v7;
        v8 = 0;
      }
    }
    if ( v7 )
    {
      v11 = (__int64)v7 + 568;
      v12 = *(__int64 (__fastcall **)(__int64))(*((_QWORD *)v7 + 71) + 16LL);
      if ( v12 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::Release(v11);
      else
        v12(v11);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
