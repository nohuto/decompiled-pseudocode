/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x180050038
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x1800379F0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180039A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18004F2A8 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x180050ADC (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180052AC4 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristics,CEndpointCharacteristics,unsigned short const * &,int &>(
        CEndpointCharacteristics **a1,
        const unsigned __int16 **a2,
        int *a3)
{
  CEndpointCharacteristics *v6; // rax
  CEndpointCharacteristics *v7; // rbx
  int v8; // edi
  unsigned int (__fastcall *v9)(__int64); // rax
  CEndpointCharacteristics *v11; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (CEndpointCharacteristics *)operator new(0x2190uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v6;
  if ( v6 )
  {
    v7 = CEndpointCharacteristics::CEndpointCharacteristics(v6);
    v11 = v7;
    v8 = CEndpointCharacteristics::RuntimeClassInitialize(v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v11);
      *a1 = v7;
      v8 = 0;
    }
    if ( v7 )
    {
      v9 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL);
      if ( v9 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((__int64)v7);
      else
        v9((__int64)v7);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
