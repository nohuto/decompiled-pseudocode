/*
 * XREFs of ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x18009F330
 * Callers:
 *     ?ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x18004B870 (-ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x18009F710 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000B2F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x180079E28 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x18009BDBC (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void CPolicyConfig::UpdateRenderingEndpointsSpatialSettings(void)
{
  void *v0; // rcx
  unsigned int v1; // ebx
  struct tWAVEFORMATEX *v2; // rdx
  void (*v3)(void); // rax
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  struct CEndpointCharacteristics *v5[4]; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v6; // [rsp+70h] [rbp+18h] BYREF
  int v7; // [rsp+78h] [rbp+20h] BYREF
  struct IMMDevice *v8; // [rsp+80h] [rbp+28h] BYREF
  LPVOID pv; // [rsp+88h] [rbp+30h] BYREF

  v5[1] = (struct CEndpointCharacteristics *)-2LL;
  v6 = 0;
  v4 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         0LL,
         1LL,
         &v4) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v4 + 24LL))(v4, &v6) >= 0 )
  {
    v5[0] = 0LL;
    v0 = 0LL;
    pv = 0LL;
    v1 = 0;
    if ( v6 )
    {
      do
      {
        v8 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v4 + 32LL))(v4, v1, &v8) >= 0
          && ((int (__fastcall *)(struct IMMDevice *, LPVOID *))v8->lpVtbl->GetId)(v8, &pv) >= 0
          && (int)GetAliasedEndpointCharacteristics((const unsigned __int16 *)pv, 1u, v5) >= 0 )
        {
          v7 = 0;
          CEndpointCharacteristics::ProcessPropertyChange(
            (struct IMMDevice **)v5[0],
            v2,
            &PKEY_SpatialAudioEndpoint_Settings,
            &v7);
          if ( v7 )
            CPolicyConfig::DisconnectHelper(v8);
        }
        if ( v8 )
          ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->Release)(v8);
        ++v1;
      }
      while ( v1 < v6 );
      v0 = pv;
    }
    CoTaskMemFree(v0);
    pv = 0LL;
    if ( v5[0] )
    {
      v3 = *(void (**)(void))(*(_QWORD *)v5[0] + 16LL);
      if ( (char *)v3 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v5[0]);
      else
        v3();
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
