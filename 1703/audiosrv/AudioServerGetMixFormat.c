/*
 * XREFs of AudioServerGetMixFormat @ 0x18002C9D0
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x18000B310 (TemplateEventDescriptor.c)
 *     Template_zqttq @ 0x18000B330 (Template_zqttq.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x18000C130 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CF40 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004B8FC (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetMixFormat(__int64 a1, const wchar_t *a2, __int128 *a3, _QWORD *a4)
{
  __int64 v7; // rcx
  unsigned __int16 *v8; // rsi
  __int64 v9; // rbx
  struct IAudioPolicyManager *v10; // rcx
  int AliasedEndpointCharacteristics; // edi
  __int64 v12; // rcx
  int (*v13)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int MixFormat; // eax
  void *v15; // rax
  struct CEndpointCharacteristics *v17; // [rsp+60h] [rbp-78h] BYREF
  void *Src; // [rsp+68h] [rbp-70h] BYREF
  struct _GUID v19; // [rsp+70h] [rbp-68h] BYREF
  __int128 v20; // [rsp+80h] [rbp-58h]
  __int128 v21; // [rsp+90h] [rbp-48h] BYREF

  v20 = *a3;
  v21 = v20;
  EtwEventActivityIdControl(4LL, &v21);
  v8 = 0LL;
  v9 = 0LL;
  Src = 0LL;
  v17 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    Template_zqttq(
      v7,
      (__int64)&AudioSrv_GetMixFormat_Task_Start,
      a2,
      *((_DWORD *)a3 + 4),
      *((_DWORD *)a3 + 6),
      *((_DWORD *)a3 + 9),
      *((_DWORD *)a3 + 5));
  v10 = g_PolicyManager;
  AliasedEndpointCharacteristics = 0;
  *a4 = 0LL;
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)v10 + 64LL))(
          v10,
          *((unsigned int *)a3 + 4))
    || !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5)) )
  {
    AliasedEndpointCharacteristics = -2147024809;
    AudSrvTraceLoggingErrorHelper("ValidateVadServerSettings", 0x4AFu, -2147024809);
  }
  if ( AliasedEndpointCharacteristics >= 0 )
  {
    AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(a2, 0, &v17);
    if ( AliasedEndpointCharacteristics >= 0 )
    {
      v9 = *((_QWORD *)v17 + 2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      AliasedEndpointCharacteristics = DeriveAudioProcessingModeConfiguration(
                                         *((_DWORD *)a3 + 4),
                                         *((_DWORD *)a3 + 6),
                                         v17,
                                         *((_DWORD *)v17 + 37) == 1,
                                         0,
                                         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                                         0,
                                         *((_DWORD *)a3 + 10),
                                         0LL,
                                         0LL,
                                         &v19,
                                         0LL);
      if ( AliasedEndpointCharacteristics >= 0 )
      {
        MixFormat = CEndpointCharacteristics::GetMixFormat(
                      v17,
                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a3 + 5),
                      &v19,
                      v13,
                      (struct tWAVEFORMATEX **)&Src);
        v8 = (unsigned __int16 *)Src;
        AliasedEndpointCharacteristics = MixFormat;
        if ( MixFormat >= 0 )
        {
          v15 = operator new[](*((unsigned __int16 *)Src + 8) + 18LL, (const struct std::nothrow_t *)&std::nothrow);
          *a4 = v15;
          if ( v15 )
            memcpy_0(v15, v8, v8[8] + 18LL);
          else
            AliasedEndpointCharacteristics = -2147024882;
        }
      }
    }
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v12, (__int64)&AudioSrv_GetMixFormat_Task_Stop);
  if ( v8 )
    CoTaskMemFree(v8);
  if ( AliasedEndpointCharacteristics < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetMixFormat", 0xE44u, AliasedEndpointCharacteristics);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v17 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v17 + 16LL))(v17);
  EtwEventActivityIdControl(4LL, &v21);
  return (unsigned int)AliasedEndpointCharacteristics;
}
