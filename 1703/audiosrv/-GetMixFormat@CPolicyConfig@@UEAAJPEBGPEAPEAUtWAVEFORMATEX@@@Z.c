/*
 * XREFs of ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x18009C620
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CF40 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::GetMixFormat(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        struct tWAVEFORMATEX **a3)
{
  int AliasedEndpointCharacteristics; // ebx
  int (*v5)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  struct _GUID v7; // [rsp+30h] [rbp-18h] BYREF
  struct CEndpointCharacteristics *v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(a2, 0, &v8);
  if ( AliasedEndpointCharacteristics >= 0 )
  {
    v7 = GUID_00000000_0000_0000_0000_000000000000;
    AliasedEndpointCharacteristics = CEndpointCharacteristics::GetMixFormat(v8, eHostProcessConnector, &v7, v5, a3);
  }
  if ( v8 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)AliasedEndpointCharacteristics;
}
