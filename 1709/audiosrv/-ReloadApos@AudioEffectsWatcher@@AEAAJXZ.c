/*
 * XREFs of ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x18000BDB4
 * Callers:
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x18000BBF0 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ.c)
 * Callees:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180020320 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180021B6C (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180021C48 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180021D6C (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180023A10 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioEffectsWatcher::ReloadApos(AudioEffectsWatcher *this)
{
  const unsigned __int16 *v1; // rdx
  __int64 (__fastcall *v3)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, int, struct CEndpointCharacteristics **); // rax
  int AliasedEndpointCharacteristics; // eax
  int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // esi
  bool v8; // r14
  struct IAudioSystemEffects2 **v9; // rdi
  struct IAudioSystemEffects2 *v10; // rcx
  __int128 v11; // xmm0
  GUID *v12; // r8
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int ModeEffect; // eax
  void (*v18)(void); // rax
  struct CEndpointCharacteristics *v20[2]; // [rsp+78h] [rbp-19h] BYREF
  struct _GUID v21; // [rsp+88h] [rbp-9h] BYREF
  __int128 v22; // [rsp+98h] [rbp+7h]
  _QWORD v23[2]; // [rsp+B8h] [rbp+27h] BYREF

  v1 = (const unsigned __int16 *)*((_QWORD *)this + 3);
  v20[0] = 0LL;
  v3 = *(__int64 (__fastcall **)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, int, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL);
  if ( v3 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       g_pEndpointCharacteristicsCache,
                                       v1,
                                       0,
                                       v20);
  else
    AliasedEndpointCharacteristics = v3(g_pEndpointCharacteristicsCache, v1, 0, v20);
  v5 = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics >= 0 )
  {
    v5 = DeriveAudioProcessingModeConfiguration(*((unsigned int *)this + 8), *((unsigned int *)this + 9), 0LL);
    if ( v5 >= 0 )
    {
      v6 = v23[0] - *((_QWORD *)this + 5);
      if ( v23[0] == *((_QWORD *)this + 5) )
        v6 = v23[1] - *((_QWORD *)this + 6);
      v7 = 0;
      v8 = v6 == 0;
      v9 = (struct IAudioSystemEffects2 **)((char *)this + 128);
      while ( 1 )
      {
        if ( !v8 )
        {
          v10 = *v9;
          if ( *v9 )
          {
            *v9 = 0LL;
            ((void (__fastcall *)(struct IAudioSystemEffects2 *))v10->lpVtbl->Release)(v10);
          }
        }
        if ( !*v9 )
          break;
LABEL_31:
        ++v7;
        v9 += 4;
        if ( v7 >= 3 )
        {
          v5 = 0;
          goto LABEL_33;
        }
      }
      v11 = *(_OWORD *)(v9 - 3);
      v12 = (GUID *)v23;
      if ( *((_BYTE *)v9 - 4) )
        v12 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v13 = *((_DWORD *)v9 - 2) == 5;
      v22 = *(_OWORD *)(v9 - 3);
      if ( !v13 )
        goto LABEL_18;
      v16 = v11 - *(_QWORD *)&PKEY_FX_StreamEffectClsid.fmtid.Data1;
      if ( (_QWORD)v11 == *(_QWORD *)&PKEY_FX_StreamEffectClsid.fmtid.Data1 )
        v16 = *((_QWORD *)&v11 + 1) - *(_QWORD *)PKEY_FX_StreamEffectClsid.fmtid.Data4;
      if ( v16 )
      {
LABEL_18:
        if ( *((_DWORD *)v9 - 2) != 6 )
          goto LABEL_22;
        v14 = v11 - *(_QWORD *)&PKEY_FX_ModeEffectClsid.fmtid.Data1;
        if ( (_QWORD)v11 == *(_QWORD *)&PKEY_FX_ModeEffectClsid.fmtid.Data1 )
          v14 = *((_QWORD *)&v11 + 1) - *(_QWORD *)PKEY_FX_ModeEffectClsid.fmtid.Data4;
        if ( !v14 )
        {
          v21 = *v12;
          ModeEffect = CEndpointCharacteristics::GetModeEffect(v20[0], &v21, 1, eHostProcessConnector, 0LL, 0LL, v9);
        }
        else
        {
LABEL_22:
          if ( *((_DWORD *)v9 - 2) != 7 )
            goto LABEL_23;
          v15 = v11 - *(_QWORD *)&PKEY_FX_EndpointEffectClsid.fmtid.Data1;
          if ( (_QWORD)v11 == *(_QWORD *)&PKEY_FX_EndpointEffectClsid.fmtid.Data1 )
            v15 = *((_QWORD *)&v11 + 1) - *(_QWORD *)PKEY_FX_EndpointEffectClsid.fmtid.Data4;
          if ( v15 )
          {
LABEL_23:
            v5 = -2147024809;
            goto LABEL_30;
          }
          ModeEffect = CEndpointCharacteristics::GetEndpointEffect(v20[0], 1, eHostProcessConnector, 0LL, 0LL, v9);
        }
      }
      else
      {
        v21 = *v12;
        ModeEffect = CEndpointCharacteristics::GetStreamEffect(v20[0], &v21, 1, eHostProcessConnector, 0LL, 0LL, v9);
      }
      v5 = ModeEffect;
LABEL_30:
      if ( v5 < 0 )
        goto LABEL_33;
      goto LABEL_31;
    }
  }
LABEL_33:
  if ( v20[0] )
  {
    v18 = *(void (**)(void))(*(_QWORD *)v20[0] + 16LL);
    if ( (char *)v18 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release();
    else
      v18();
  }
  return (unsigned int)v5;
}
