/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180029518
 * Callers:
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x180020C30 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x1800D3704 (Create_SpatialAudioDevicePropertyReader.c)
 * Callees:
 *     ??0SpatialAudioDevicePropertyReader@@QEAA@XZ @ 0x1800280E8 (--0SpatialAudioDevicePropertyReader@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x1800289A4 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDevicePropertyReader@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180028C70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDev.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDevicePropertyReader,SpatialAudioDevicePropertyReader,unsigned short const * &,IPropertyStore * &>(
        SpatialAudioDevicePropertyReader **a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  SpatialAudioDevicePropertyReader *v6; // rax
  SpatialAudioDevicePropertyReader *v7; // rbx
  int v8; // edi
  __int64 (__fastcall *v9)(volatile signed __int32 *); // rax

  *a1 = 0LL;
  v6 = (SpatialAudioDevicePropertyReader *)operator new(0x210uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = SpatialAudioDevicePropertyReader::SpatialAudioDevicePropertyReader(v6);
    v8 = SpatialAudioDevicePropertyReader::RuntimeClassInitialize(v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      if ( v7 )
        (*(void (__fastcall **)(SpatialAudioDevicePropertyReader *))(*(_QWORD *)v7 + 8LL))(v7);
      *a1 = v7;
      v8 = 0;
    }
    if ( v7 )
    {
      v9 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL);
      if ( v9 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::Release((volatile signed __int32 *)v7);
      else
        v9((volatile signed __int32 *)v7);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
