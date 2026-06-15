/*
 * XREFs of ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x180089410
 * Callers:
 *     ?ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800896C0 (-ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x1800899E0 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     GetSpatialSettingsMonitoringPKey @ 0x18000873C (GetSpatialSettingsMonitoringPKey.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x18002294C (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x1800837A8 (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void CPolicyConfig::UpdateRenderingEndpointsSpatialSettings(void)
{
  unsigned int i; // ebx
  struct IPolicyConfig *v1; // rdx
  void (*v2)(void); // rax
  unsigned int v3; // [rsp+30h] [rbp-50h] BYREF
  int v4; // [rsp+34h] [rbp-4Ch] BYREF
  struct IMMDevice *v5; // [rsp+38h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-40h] BYREF
  __int64 v7; // [rsp+48h] [rbp-38h] BYREF
  CEndpointCharacteristics *v8[2]; // [rsp+50h] [rbp-30h] BYREF
  struct _tagpropertykey v9; // [rsp+60h] [rbp-20h] BYREF

  v8[1] = (CEndpointCharacteristics *)-2LL;
  v3 = 0;
  v7 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         0LL,
         1LL,
         &v7) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 24LL))(v7, &v3) >= 0 )
  {
    v8[0] = 0LL;
    pv = 0LL;
    memset(&v9, 0, sizeof(v9));
    GetSpatialSettingsMonitoringPKey((__int64)&v9);
    for ( i = 0; i < v3; ++i )
    {
      v5 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v7 + 32LL))(v7, i, &v5) >= 0
        && ((int (__fastcall *)(struct IMMDevice *, LPVOID *))v5->lpVtbl->GetId)(v5, &pv) >= 0
        && (*(int (__fastcall **)(CEndpointCharacteristicsCache *, LPVOID, __int64, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
             g_pEndpointCharacteristicsCache,
             pv,
             1LL,
             v8) >= 0 )
      {
        v4 = 0;
        CEndpointCharacteristics::ProcessPropertyChange(v8[0], v1, &v9, &v4);
        if ( v4 )
          CPolicyConfig::DisconnectHelper(v5);
      }
      if ( v5 )
        ((void (__fastcall *)(struct IMMDevice *))v5->lpVtbl->Release)(v5);
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v8[0] )
    {
      v2 = *(void (**)(void))(*(_QWORD *)v8[0] + 16LL);
      if ( (char *)v2 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((volatile signed __int32 *)v8[0]);
      else
        v2();
    }
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
