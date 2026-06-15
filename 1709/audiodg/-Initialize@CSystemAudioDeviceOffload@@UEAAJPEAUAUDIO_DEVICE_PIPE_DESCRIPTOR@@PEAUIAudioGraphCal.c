/*
 * XREFs of ?Initialize@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003D870
 * Callers:
 *     <none>
 * Callees:
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x140014BA4 (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x14001A604 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14003827C (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     WPP_SF_Ds @ 0x140038734 (WPP_SF_Ds.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x14003D040 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::Initialize(
        CSystemAudioDeviceOffload *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        int a4)
{
  __int128 v4; // xmm0
  AEError *v8; // rbx
  int v9; // eax
  __int128 v11; // [rsp+40h] [rbp-38h] BYREF

  v4 = *(_OWORD *)((char *)a2 + 152);
  *(_OWORD *)((char *)this + 248) = v4;
  v11 = v4;
  EtwEventActivityIdControl(4LL, &v11);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  *((_DWORD *)this + 56) = a4;
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 34);
  v8 = (AEError *)(unsigned int)CSystemAudioDeviceBase::ActivateEndpoint(this, a2);
  if ( AEError::DeviceInUse(v8) )
    LODWORD(v8) = -2005139370;
  if ( (int)v8 < 0 )
    goto LABEL_10;
  LODWORD(v8) = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
                  *((_QWORD *)this + 29),
                  &GUID_64f1dd49_71ca_4281_8672_3a9eddd1d0b6,
                  (char *)this + 408);
  if ( (int)v8 >= 0 )
  {
    LODWORD(v8) = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
                    *((_QWORD *)this + 29),
                    &GUID_dfe21355_5ec2_40e0_8d6b_710ac3c00249,
                    (char *)this + 416);
    if ( (int)v8 >= 0 )
    {
      LODWORD(v8) = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
                      *((_QWORD *)this + 29),
                      &GUID_e1546dce_9dd1_418b_9ab2_348ced161c86,
                      (char *)this + 424);
      if ( (int)v8 >= 0 )
      {
        LODWORD(v8) = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
                        *((_QWORD *)this + 29),
                        &GUID_076a6922_d802_4f83_baf6_409d9ca11bfe,
                        (char *)this + 432);
        if ( (int)v8 >= 0 )
        {
          *((_QWORD *)this + 48) = *((_QWORD *)a2 + 4);
          *((_QWORD *)this + 49) = *((_QWORD *)a2 + 5);
          *((_DWORD *)this + 100) = *((_DWORD *)a2 + 12);
          *((_DWORD *)this + 8) = *((_DWORD *)a2 + 18);
          v9 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
          *((_DWORD *)this + 101) = v9;
          if ( !v9 )
          {
            LODWORD(v8) = -2147024882;
LABEL_10:
            (*(void (__fastcall **)(CSystemAudioDeviceOffload *))(*(_QWORD *)this + 208LL))(this);
            goto LABEL_11;
          }
          LODWORD(v8) = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 0);
        }
      }
    }
  }
LABEL_11:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  if ( (int)v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        (__int64)&WPP_280372cfd5753b11ae35f7647d6422a5_Traceguids,
        (int)v8,
        (__int64)"CSystemAudioDeviceOffload::Initialize");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffload::Initialize", 0x93u, (int)v8);
  }
  EtwEventActivityIdControl(4LL, &v11);
  return (unsigned int)v8;
}
