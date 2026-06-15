/*
 * XREFs of ??$MakeAndInitialize@VCApoEndpoint@@V1@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVCApoEndpoint@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Z @ 0x140034B70
 * Callers:
 *     ?CreateApoEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@IPEAPEAV1@@Z @ 0x140041CE8 (-CreateApoEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019728 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D508 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??0CApoEndpoint@@QEAA@XZ @ 0x140034C5C (--0CApoEndpoint@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x1400351EC (-RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApoEndpoint,CApoEndpoint,IDeviceGraphObjectCache * &,BRIDGE_STREAM_DESCRIPTOR * &,IAudioProcessingObject * &,IAudioMediaType * &,unsigned int &>(
        CApoEndpoint **a1,
        struct IDeviceGraphObjectCache **a2,
        struct BRIDGE_STREAM_DESCRIPTOR **a3,
        struct IAudioProcessingObject **a4,
        struct IAudioMediaType **a5,
        unsigned int *a6)
{
  CApoEndpoint *v10; // rax
  int v11; // edi
  CApoEndpoint *v12; // rbx
  CApoEndpoint *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v10 = (CApoEndpoint *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = CApoEndpoint::CApoEndpoint(v10);
    v14 = v12;
    v11 = CApoEndpoint::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5, *a6);
    if ( v11 >= 0 )
    {
      if ( v12 )
        (*(void (__fastcall **)(CApoEndpoint *))(*(_QWORD *)v12 + 8LL))(v12);
      *a1 = v12;
      v11 = 0;
    }
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  return (unsigned int)v11;
}
