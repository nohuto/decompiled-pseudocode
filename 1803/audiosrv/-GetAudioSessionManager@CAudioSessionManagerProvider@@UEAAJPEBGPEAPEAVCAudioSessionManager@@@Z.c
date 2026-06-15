/*
 * XREFs of ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180018A60
 * Callers:
 *     GetAudioSessionManager @ 0x180005A80 (GetAudioSessionManager.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180025900 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 * Callees:
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180018BB0 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSessionManagerProvider::GetAudioSessionManager(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct CAudioSessionManager **a3)
{
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rbx
  int (*v9)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **); // rax
  int AudioSessionManagerInternal; // eax
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  if ( !a2 )
  {
    v6 = -2147024809;
LABEL_24:
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerProvider::GetAudioSessionManager", 0x11Eu, v6);
    goto LABEL_14;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_aeba30c7500c361d0468064516c9e613_Traceguids, a2);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v13);
  if ( v6 < 0 )
    goto LABEL_24;
  v7 = v12;
  if ( v12 != v13 )
  {
    v8 = v12;
    v7 = 0LL;
    v12 = 0LL;
    if ( v13 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v13)(v13, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v12);
      v7 = v12;
    }
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v7 = v12;
    }
  }
  if ( !v7 )
  {
    v6 = -2147024809;
    goto LABEL_24;
  }
  v9 = *(int (**)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)this + 48LL);
  if ( v9 == CAudioSessionManagerProvider::GetAudioSessionManagerInternal )
    AudioSessionManagerInternal = CAudioSessionManagerProvider::GetAudioSessionManagerInternal(this, a2, a3);
  else
    AudioSessionManagerInternal = ((__int64 (__fastcall *)(CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **))v9)(
                                    this,
                                    a2,
                                    a3);
  v6 = AudioSessionManagerInternal;
  if ( AudioSessionManagerInternal < 0 )
    goto LABEL_24;
LABEL_14:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v6;
}
