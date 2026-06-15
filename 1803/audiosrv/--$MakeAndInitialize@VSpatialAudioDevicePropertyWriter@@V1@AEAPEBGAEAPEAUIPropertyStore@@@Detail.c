/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18004B578
 * Callers:
 *     Create_SpatialAudioDevicePropertyWriter @ 0x18004B4C4 (Create_SpatialAudioDevicePropertyWriter.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDevicePropertyWriter@@@WRL@Microsoft@@IEAAKXZ @ 0x18004B988 (-InternalRelease@-$ComPtr@VSpatialAudioDevicePropertyWriter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18004BE18 (-RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??0SpatialAudioDevicePropertyWriter@@QEAA@XZ @ 0x18004BEB8 (--0SpatialAudioDevicePropertyWriter@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDevicePropertyWriter,SpatialAudioDevicePropertyWriter,unsigned short const * &,IPropertyStore * &>(
        SpatialAudioDevicePropertyWriter **a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  SpatialAudioDevicePropertyWriter *v6; // rax
  SpatialAudioDevicePropertyWriter *v7; // rbx
  int v8; // edi
  SpatialAudioDevicePropertyWriter *v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = (SpatialAudioDevicePropertyWriter *)operator new(0x278uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = SpatialAudioDevicePropertyWriter::SpatialAudioDevicePropertyWriter(v6);
    v10 = v7;
    v11 = 0LL;
    v8 = SpatialAudioDevicePropertyWriter::RuntimeClassInitialize(v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      if ( v7 )
        (*(void (__fastcall **)(SpatialAudioDevicePropertyWriter *))(*(_QWORD *)v7 + 8LL))(v7);
      *a1 = v7;
      v8 = 0;
    }
    Microsoft::WRL::ComPtr<SpatialAudioDevicePropertyWriter>::InternalRelease(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
