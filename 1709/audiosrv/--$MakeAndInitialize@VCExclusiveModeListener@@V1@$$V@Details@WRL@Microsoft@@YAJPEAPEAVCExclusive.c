/*
 * XREFs of ??$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@@Z @ 0x1800BEC20
 * Callers:
 *     ?OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x18002ED40 (-OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSP.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CExclusiveModeListener@@QEAA@XZ @ 0x1800BF044 (--0CExclusiveModeListener@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x1800C6BDC (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D3B80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CExclusiveModeListener,CExclusiveModeListener,>(
        volatile signed __int32 **a1)
{
  CExclusiveModeListener *v2; // rax
  int v3; // edi
  volatile signed __int32 *v4; // rbx

  *a1 = 0LL;
  v2 = (CExclusiveModeListener *)operator new(0x178uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = (volatile signed __int32 *)CExclusiveModeListener::CExclusiveModeListener(v2);
    v3 = CExclusiveModeListener::RuntimeClassInitialize((CExclusiveModeListener *)v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
        _InterlockedIncrement(v4 + 13);
      *a1 = v4;
      v3 = 0;
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient,Microsoft::WRL::FtmBase>::Release(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
