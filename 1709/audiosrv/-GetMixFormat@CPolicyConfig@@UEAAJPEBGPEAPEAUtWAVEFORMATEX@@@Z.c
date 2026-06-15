/*
 * XREFs of ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x180084640
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022020 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::GetMixFormat(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        struct tWAVEFORMATEX **a3)
{
  int MixFormat; // ebx
  int (*v5)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  void (*v6)(void); // rax
  struct _GUID v8; // [rsp+30h] [rbp-18h] BYREF
  CEndpointCharacteristics *v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  MixFormat = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, const unsigned __int16 *, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                g_pEndpointCharacteristicsCache,
                a2,
                0LL,
                &v9);
  if ( MixFormat >= 0 )
  {
    v8 = GUID_00000000_0000_0000_0000_000000000000;
    MixFormat = CEndpointCharacteristics::GetMixFormat(
                  (struct _RTL_CRITICAL_SECTION *)v9,
                  eHostProcessConnector,
                  &v8,
                  v5,
                  a3);
  }
  if ( v9 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
    if ( (char *)v6 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((volatile signed __int32 *)v9);
    else
      v6();
  }
  return (unsigned int)MixFormat;
}
