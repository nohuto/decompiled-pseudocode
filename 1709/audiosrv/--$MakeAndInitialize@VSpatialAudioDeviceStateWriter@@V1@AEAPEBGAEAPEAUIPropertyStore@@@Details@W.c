/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1800D387C
 * Callers:
 *     Create_SpatialAudioDeviceStateWriter @ 0x1800D3E68 (Create_SpatialAudioDeviceStateWriter.c)
 * Callees:
 *     ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180028E44 (-Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x18005CA34 (-InternalRelease@-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0SpatialAudioDeviceStateWriter@@QEAA@XZ @ 0x1800D3938 (--0SpatialAudioDeviceStateWriter@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateWriter,SpatialAudioDeviceStateWriter,unsigned short const * &,IPropertyStore * &>(
        SpatialAudioDeviceStateWriter **a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  SpatialAudioDeviceStateWriter *v6; // rax
  int v7; // ebx
  SpatialAudioDeviceStateWriter *v8; // rdi
  SpatialAudioDeviceStateWriter *v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = (SpatialAudioDeviceStateWriter *)operator new(0x298uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = SpatialAudioDeviceStateWriter::SpatialAudioDeviceStateWriter(v6);
    v10 = v8;
    v11 = 0LL;
    v7 = SpatialAudioIO::Initialize(v8, *a2, *a3);
    if ( v7 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*((_QWORD *)v8 + 71) + 8LL))((__int64)v8 + 568);
      *a1 = v8;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
