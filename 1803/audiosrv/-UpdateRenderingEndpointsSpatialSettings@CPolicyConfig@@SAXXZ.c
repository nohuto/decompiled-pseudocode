/*
 * XREFs of ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x1800BF2D0
 * Callers:
 *     ?ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800BF580 (-ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x1800BFAD0 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     GetSpatialSettingsMonitoringPKey @ 0x1800181B4 (GetSpatialSettingsMonitoringPKey.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x1800397A4 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180039A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x1800BB6F4 (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void CPolicyConfig::UpdateRenderingEndpointsSpatialSettings(void)
{
  __int64 v0; // rdx
  const GUID *v1; // r8
  const GUID *v2; // r9
  unsigned int i; // ebx
  struct IPolicyConfig *v4; // rdx
  void (*v5)(void); // rax
  unsigned int v6; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+34h] [rbp-4Ch] BYREF
  struct IMMDevice *v8; // [rsp+38h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-40h] BYREF
  __int64 v10; // [rsp+48h] [rbp-38h] BYREF
  CEndpointCharacteristics *v11[2]; // [rsp+50h] [rbp-30h] BYREF
  struct _tagpropertykey v12; // [rsp+60h] [rbp-20h] BYREF

  v11[1] = (CEndpointCharacteristics *)-2LL;
  v6 = 0;
  v10 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         0LL,
         1LL,
         &v10) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10 + 24LL))(v10, &v6) >= 0 )
  {
    v11[0] = 0LL;
    pv = 0LL;
    memset(&v12, 0, sizeof(v12));
    GetSpatialSettingsMonitoringPKey((__int64)&v12, v0, v1, v2);
    for ( i = 0; i < v6; ++i )
    {
      v8 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v10 + 32LL))(v10, i, &v8) >= 0
        && ((int (__fastcall *)(struct IMMDevice *, LPVOID *))v8->lpVtbl->GetId)(v8, &pv) >= 0
        && (*(int (__fastcall **)(CEndpointCharacteristicsCache *, LPVOID, __int64, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
             g_pEndpointCharacteristicsCache,
             pv,
             1LL,
             v11) >= 0 )
      {
        v7 = 0;
        CEndpointCharacteristics::ProcessPropertyChange(v11[0], v4, &v12, (const GUID *)&v7);
        if ( v7 )
          CPolicyConfig::DisconnectHelper(v8);
      }
      if ( v8 )
        ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->Release)(v8);
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v11[0] )
    {
      v5 = *(void (**)(void))(*(_QWORD *)v11[0] + 16LL);
      if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((__int64)v11[0]);
      else
        v5();
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
}
