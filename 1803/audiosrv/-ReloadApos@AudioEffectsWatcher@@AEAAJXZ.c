/*
 * XREFs of ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800A7E6C
 * Callers:
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x1800A7B48 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ.c)
 * Callees:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHHPEAU_GUID@@444@Z @ 0x1800102E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800EC0E8 (-GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_a.c)
 */

__int64 __fastcall AudioEffectsWatcher::ReloadApos(AudioEffectsWatcher *this)
{
  int SystemEffect; // edi
  int v3; // r9d
  __int64 v4; // rax
  unsigned int v5; // esi
  bool v6; // r14
  struct IAudioSystemEffects2 **v7; // rbx
  struct IAudioSystemEffects2 *v8; // rcx
  GUID *v9; // rax
  struct _GUID v10; // xmm0
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v12; // [rsp+28h] [rbp-69h]
  struct ICompositeSystemEffect **v13; // [rsp+30h] [rbp-61h]
  struct IAudioProcessingObject **v14; // [rsp+38h] [rbp-59h]
  CEndpointCharacteristics *v15; // [rsp+78h] [rbp-19h] BYREF
  struct _tagpropertykey v16; // [rsp+88h] [rbp-9h] BYREF
  struct _GUID v17; // [rsp+A8h] [rbp+17h] BYREF
  struct _GUID v18; // [rsp+B8h] [rbp+27h] BYREF

  v15 = 0LL;
  SystemEffect = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                   g_pEndpointCharacteristicsCache,
                   *((_QWORD *)this + 3),
                   0LL,
                   &v15);
  if ( SystemEffect >= 0 )
  {
    SystemEffect = DeriveAudioProcessingModeConfiguration(
                     *((_DWORD *)this + 8),
                     *((_DWORD *)this + 9),
                     0,
                     v15,
                     *((_DWORD *)v15 + 37) != 0,
                     0,
                     eHostProcessConnector,
                     1,
                     0,
                     0,
                     0LL,
                     &v18,
                     0LL,
                     0LL);
    if ( SystemEffect >= 0 )
    {
      v4 = *(_QWORD *)&v18.Data1 - *((_QWORD *)this + 5);
      if ( *(_QWORD *)&v18.Data1 == *((_QWORD *)this + 5) )
        v4 = *(_QWORD *)v18.Data4 - *((_QWORD *)this + 6);
      v5 = 0;
      v6 = v4 == 0;
      v7 = (struct IAudioSystemEffects2 **)((char *)this + 128);
      while ( 1 )
      {
        if ( !v6 )
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
          SystemEffect = CEndpointCharacteristics::GetSystemEffect(v15, &v16, &v17, v3, v12, v13, v14, v7);
          if ( SystemEffect < 0 )
            break;
        }
        ++v5;
        v7 += 4;
        if ( v5 >= 3 )
        {
          SystemEffect = 0;
          break;
        }
      }
    }
  }
  if ( v15 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)SystemEffect;
}
