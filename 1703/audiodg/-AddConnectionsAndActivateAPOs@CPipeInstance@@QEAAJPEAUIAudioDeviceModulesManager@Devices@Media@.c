/*
 * XREFs of ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14000ACD0
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FE20 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x14000A8E0 (-SetModulesManagerOnAPOs@CPipeInstance@@AEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Window.c)
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x14000A9F0 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x140011070 (-AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x1400422B4 (-AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPipeInstance::AddConnectionsAndActivateAPOs(
        CPipeInstance *this,
        struct Windows::Media::Devices::IAudioDeviceModulesManager *a2)
{
  int v4; // edi
  __int64 v5; // rbx
  CConnectionInstance *v6; // rsi
  struct IAudioProcessor *v7; // rdx
  int v8; // eax
  int v9; // eax
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 18) + 32LL))(
         *((_QWORD *)this + 18),
         &v11);
  if ( v4 < 0 )
    goto LABEL_22;
  v5 = *((_QWORD *)this + 9);
  while ( v5 )
  {
    v6 = *(CConnectionInstance **)(v5 + 16);
    v5 = *(_QWORD *)(v5 + 8);
    v7 = (struct IAudioProcessor *)*((_QWORD *)this + 18);
    v8 = *((_DWORD *)v6 + 4);
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        v4 = -2147418113;
LABEL_17:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            12LL,
            &WPP_d2302955c188393ffc67d03e162b2897_Traceguids,
            (unsigned int)v4);
        }
        AudDGTraceLoggingErrorHelper("CConnectionInstance::AddConnections", 0x10Au, v4);
        goto LABEL_7;
      }
      v9 = CConnectionInstance::AddCaptureConnection(v6, v7, v11);
    }
    else
    {
      v9 = CConnectionInstance::AddRenderConnection(v6, v7, v11);
    }
    v4 = v9;
    if ( v9 < 0 )
      goto LABEL_17;
    *((_DWORD *)v6 + 1) = 1;
LABEL_7:
    if ( v4 < 0 )
      goto LABEL_22;
  }
  v4 = CPipeInstance::SetModulesManagerOnAPOs(this, a2);
  if ( v4 < 0
    || (v4 = CPipeInstance::ActivateAPOs(this, v11), v4 < 0)
    || (v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 18) + 40LL))(
               *((_QWORD *)this + 18),
               v11),
        v4 < 0) )
  {
LABEL_22:
    if ( v11 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 48LL))(*((_QWORD *)this + 18));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        39LL,
        &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
        (unsigned int)v4);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::AddConnectionsAndActivateAPOs", 0xAD5u, v4);
  }
  else
  {
    *((_DWORD *)this + 29) = 1;
  }
  return (unsigned int)v4;
}
