/*
 * XREFs of ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18001760C
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018540 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x1800379F0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x1800397A4 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180039A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x1800BB6F4 (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPolicyConfig::ProcessPropertyChange(const unsigned __int16 *a1, struct _tagpropertykey *a2)
{
  __int64 (__fastcall *v4)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, int, struct CEndpointCharacteristics **); // rax
  int AliasedEndpointCharacteristics; // eax
  struct IPolicyConfig *v6; // rdx
  void (*v7)(void); // rax
  int v8; // [rsp+30h] [rbp-20h] BYREF
  int v9; // [rsp+34h] [rbp-1Ch] BYREF
  struct CEndpointCharacteristics *v10; // [rsp+38h] [rbp-18h] BYREF
  struct IMMDevice *v11[2]; // [rsp+40h] [rbp-10h] BYREF

  v11[1] = (struct IMMDevice *)-2LL;
  v11[0] = 0LL;
  v8 = 0;
  if ( (*(int (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                    + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a1,
         v11) >= 0
    && ((int (__fastcall *)(struct IMMDevice *, int *))v11[0]->lpVtbl->GetState)(v11[0], &v8) >= 0
    && v8 == 1 )
  {
    v10 = 0LL;
    v4 = *(__int64 (__fastcall **)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, int, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL);
    if ( v4 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
      AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                         g_pEndpointCharacteristicsCache,
                                         a1,
                                         1,
                                         &v10);
    else
      AliasedEndpointCharacteristics = v4(g_pEndpointCharacteristicsCache, a1, 1, &v10);
    if ( AliasedEndpointCharacteristics >= 0 )
    {
      v9 = 0;
      CEndpointCharacteristics::ProcessPropertyChange(v10, v6, a2, &v9);
      if ( v9 )
        CPolicyConfig::DisconnectHelper(v11[0]);
    }
    if ( v10 )
    {
      v7 = *(void (**)(void))(*(_QWORD *)v10 + 16LL);
      if ( (char *)v7 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release();
      else
        v7();
    }
  }
  if ( v11[0] )
    ((void (__fastcall *)(struct IMMDevice *))v11[0]->lpVtbl->Release)(v11[0]);
}
