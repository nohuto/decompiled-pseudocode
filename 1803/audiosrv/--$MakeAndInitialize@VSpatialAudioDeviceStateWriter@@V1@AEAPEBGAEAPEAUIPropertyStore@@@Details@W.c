/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18004B6D8
 * Callers:
 *     Create_SpatialAudioDeviceStateWriter @ 0x18004B61C (Create_SpatialAudioDeviceStateWriter.c)
 * Callees:
 *     ??0SpatialAudioDeviceStateWriter@@QEAA@XZ @ 0x18004B780 (--0SpatialAudioDeviceStateWriter@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateWriter@@@WRL@Microsoft@@IEAAKXZ @ 0x18004BA88 (-InternalRelease@-$ComPtr@VSpatialAudioDeviceStateWriter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18004D26C (-Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateWriter,SpatialAudioDeviceStateWriter,unsigned short const * &,IPropertyStore * &>(
        SpatialAudioDeviceStateWriter **a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  SpatialAudioDeviceStateWriter *v6; // rax
  SpatialAudioDeviceStateWriter *v7; // rdi
  int v8; // ebx
  SpatialAudioDeviceStateWriter *v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = (SpatialAudioDeviceStateWriter *)operator new(0x290uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = SpatialAudioDeviceStateWriter::SpatialAudioDeviceStateWriter(v6);
    v10 = v7;
    v11 = 0LL;
    v8 = SpatialAudioIO::Initialize(v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*((_QWORD *)v7 + 71) + 8LL))((__int64)v7 + 568);
      *a1 = v7;
      v8 = 0;
    }
    Microsoft::WRL::ComPtr<SpatialAudioDeviceStateWriter>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
