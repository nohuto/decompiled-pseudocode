/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioConfigureDevice@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18004B32C
 * Callers:
 *     Create_SpatialAudioConfigureDevice @ 0x18004B278 (Create_SpatialAudioConfigureDevice.c)
 * Callees:
 *     ??0SpatialAudioConfigureDevice@@QEAA@XZ @ 0x18004B864 (--0SpatialAudioConfigureDevice@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18004B8F0 (-RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioConfigureDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x18004BB88 (-InternalRelease@-$ComPtr@VSpatialAudioConfigureDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioConfigureDevice,SpatialAudioConfigureDevice,unsigned short const * &,IPropertyStore * &>(
        SpatialAudioConfigureDevice **a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  SpatialAudioConfigureDevice *v6; // rax
  SpatialAudioConfigureDevice *v7; // rax
  struct IPropertyStore *v8; // r8
  const unsigned __int16 *v9; // rdx
  SpatialAudioConfigureDevice *v10; // rbx
  int v11; // edi
  SpatialAudioConfigureDevice *v13; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (SpatialAudioConfigureDevice *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = SpatialAudioConfigureDevice::SpatialAudioConfigureDevice(v6);
    v8 = *a3;
    v9 = *a2;
    v10 = v7;
    v13 = v7;
    v11 = SpatialAudioConfigureDevice::RuntimeClassInitialize(v7, v9, v8);
    if ( v11 >= 0 )
    {
      if ( v10 )
        (*(void (__fastcall **)(SpatialAudioConfigureDevice *))(*(_QWORD *)v10 + 8LL))(v10);
      *a1 = v10;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<SpatialAudioConfigureDevice>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
