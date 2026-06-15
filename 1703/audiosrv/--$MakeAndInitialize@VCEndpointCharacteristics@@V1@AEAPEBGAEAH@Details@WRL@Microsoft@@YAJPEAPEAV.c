/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x1800455E8
 * Callers:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CAC0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000B2F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x180041C3C (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180043D9C (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristics,CEndpointCharacteristics,unsigned short const * &,int &>(
        CEndpointCharacteristics **a1,
        const unsigned __int16 **a2,
        int *a3)
{
  CEndpointCharacteristics *v6; // rbx
  CEndpointCharacteristics *v7; // rax
  int v8; // edi
  __int64 (__fastcall *v10)(volatile signed __int32 *); // rax

  *a1 = 0LL;
  v6 = 0LL;
  v7 = (CEndpointCharacteristics *)operator new(0x688uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v6 = CEndpointCharacteristics::CEndpointCharacteristics(v7);
    v8 = CEndpointCharacteristics::RuntimeClassInitialize(v6, *a2, *a3);
    if ( v8 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      v8 = 0;
    }
  }
  else
  {
    v8 = -2147024882;
  }
  if ( v6 )
  {
    v10 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL);
    if ( v10 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v6);
    else
      v10((volatile signed __int32 *)v6);
  }
  return (unsigned int)v8;
}
