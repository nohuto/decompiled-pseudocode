/*
 * XREFs of ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800898DC
 * Callers:
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x1800895B8 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ.c)
 * Callees:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x18000C130 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800BE064 (-GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_a.c)
 */

__int64 __fastcall AudioEffectsWatcher::ReloadApos(AudioEffectsWatcher *this)
{
  int AliasedEndpointCharacteristics; // edi
  int v3; // r9d
  __int64 v4; // rax
  bool v5; // r14
  unsigned int v6; // esi
  struct IAudioSystemEffects2 **v7; // rbx
  struct IAudioSystemEffects2 *v8; // rcx
  GUID *v9; // rax
  struct _GUID v10; // xmm0
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v12; // [rsp+20h] [rbp-59h]
  struct ICompositeSystemEffect **v13; // [rsp+28h] [rbp-51h]
  struct IAudioProcessingObject **v14; // [rsp+30h] [rbp-49h]
  struct CEndpointCharacteristics *v15; // [rsp+60h] [rbp-19h] BYREF
  struct _tagpropertykey v16; // [rsp+70h] [rbp-9h] BYREF
  struct _GUID v17; // [rsp+90h] [rbp+17h] BYREF
  GUID v18; // [rsp+A0h] [rbp+27h] BYREF

  v15 = 0LL;
  AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(*((const unsigned __int16 **)this + 3), 0, &v15);
  if ( AliasedEndpointCharacteristics >= 0 )
  {
    AliasedEndpointCharacteristics = DeriveAudioProcessingModeConfiguration(
                                       *((_DWORD *)this + 8),
                                       *((_DWORD *)this + 9),
                                       v15,
                                       *((_DWORD *)v15 + 37) != 0,
                                       0,
                                       eHostProcessConnector,
                                       1,
                                       0,
                                       0LL,
                                       &v18,
                                       0LL,
                                       0LL);
    if ( AliasedEndpointCharacteristics >= 0 )
    {
      v4 = *(_QWORD *)&v18.Data1 - *((_QWORD *)this + 5);
      if ( *(_QWORD *)&v18.Data1 == *((_QWORD *)this + 5) )
        v4 = *(_QWORD *)v18.Data4 - *((_QWORD *)this + 6);
      v5 = v4 != 0;
      v6 = 0;
      v7 = (struct IAudioSystemEffects2 **)((char *)this + 128);
      while ( 1 )
      {
        if ( v5 )
        {
          v8 = *v7;
          if ( *v7 )
          {
            *v7 = 0LL;
            ((void (__fastcall *)(struct IAudioSystemEffects2 *))v8->lpVtbl->Release)(v8);
          }
        }
        if ( !*v7 )
        {
          v9 = &v18;
          if ( *((_BYTE *)v7 - 4) )
            v9 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v10 = *v9;
          v16.pid = *((_DWORD *)v7 - 2);
          v17 = v10;
          v16.fmtid = *(GUID *)(v7 - 3);
          AliasedEndpointCharacteristics = CEndpointCharacteristics::GetSystemEffect(
                                             v15,
                                             &v16,
                                             &v17,
                                             v3,
                                             v12,
                                             v13,
                                             v14,
                                             v7);
          if ( AliasedEndpointCharacteristics < 0 )
            break;
        }
        ++v6;
        v7 += 4;
        if ( v6 >= 3 )
        {
          AliasedEndpointCharacteristics = 0;
          break;
        }
      }
    }
  }
  if ( v15 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)AliasedEndpointCharacteristics;
}
