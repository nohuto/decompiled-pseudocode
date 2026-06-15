/*
 * XREFs of ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003E600
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140005840 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140005CE0 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400141C0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140036454 (WPP_SF_.c)
 *     WPP_SF_q @ 0x14003651C (WPP_SF_q.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14003899C (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x14003CAE0 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z @ 0x140060210 (-AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::Initialize(
        CSystemAudioDeviceOffloadGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        int a4)
{
  __int128 v4; // xmm0
  AEError *v9; // rbx
  __int64 v10; // r9
  _UNKNOWN **v11; // rcx
  void *v12; // rdx
  unsigned int v13; // ecx
  unsigned __int8 v14; // r8
  unsigned __int64 v16; // [rsp+20h] [rbp-88h]
  unsigned __int64 v17; // [rsp+28h] [rbp-80h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-78h] BYREF
  char v19; // [rsp+38h] [rbp-70h]
  __int128 v20; // [rsp+40h] [rbp-68h]
  __int128 v21; // [rsp+50h] [rbp-58h] BYREF

  v4 = *(_OWORD *)((char *)a2 + 148);
  *(_OWORD *)((char *)this + 248) = v4;
  v20 = v4;
  v21 = v4;
  EtwEventActivityIdControl(4LL, &v21);
  v19 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  *((_DWORD *)this + 56) = a4;
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 34);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_a5f12e58a0d33d0e52fe5d67144dcfb4_Traceguids);
  }
  v9 = (AEError *)(unsigned int)CSystemAudioDeviceBase::ActivateEndpoint(this, a2);
  if ( AEError::DeviceInUse(v9) )
  {
    LODWORD(v9) = -2005139370;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_26;
    }
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_a5f12e58a0d33d0e52fe5d67144dcfb4_Traceguids);
  }
  if ( (int)v9 >= 0 )
  {
    LODWORD(v9) = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
                    *((_QWORD *)this + 29),
                    &GUID_64f1dd49_71ca_4281_8672_3a9eddd1d0b6,
                    (char *)this + 448);
    if ( (int)v9 >= 0 )
    {
      LODWORD(v9) = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
                      *((_QWORD *)this + 29),
                      &GUID_dfe21355_5ec2_40e0_8d6b_710ac3c00249,
                      (char *)this + 456);
      if ( (int)v9 >= 0 )
      {
        LODWORD(v9) = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
                        *((_QWORD *)this + 29),
                        &GUID_e1546dce_9dd1_418b_9ab2_348ced161c86,
                        (char *)this + 464);
        if ( (int)v9 >= 0 )
        {
          LODWORD(v9) = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
                          *((_QWORD *)this + 29),
                          &GUID_076a6922_d802_4f83_baf6_409d9ca11bfe,
                          (char *)this + 472);
          if ( (int)v9 >= 0 )
          {
            v10 = *((_QWORD *)this + 29);
            *((_QWORD *)this + 29) = 0LL;
            *((_QWORD *)a2 + 8) = v10;
            if ( v10 )
            {
              v11 = (_UNKNOWN **)WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control )
                goto LABEL_25;
              if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
              {
LABEL_21:
                if ( v11 != &WPP_GLOBAL_Control && (*((_DWORD *)v11 + 7) & 0x200) != 0 && *((_BYTE *)v11 + 25) >= 4u )
                  WPP_SF_((__int64)v11[2], 0xDu, (__int64)&WPP_a5f12e58a0d33d0e52fe5d67144dcfb4_Traceguids);
LABEL_25:
                LODWORD(v9) = CSystemAudioDeviceSharedBase::Initialize(this, a2, a3, a4);
                if ( (int)v9 >= 0 )
                  goto LABEL_27;
                goto LABEL_26;
              }
              WPP_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0xCu,
                (__int64)&WPP_a5f12e58a0d33d0e52fe5d67144dcfb4_Traceguids);
            }
            v11 = (_UNKNOWN **)WPP_GLOBAL_Control;
            goto LABEL_21;
          }
        }
      }
    }
  }
LABEL_26:
  CSystemAudioDeviceSharedBase::Cleanup(this);
LABEL_27:
  AEWMILOG_PERFORMANCE(v13, v12, v14, 0xAu, v16, v17);
  if ( (int)v9 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xEu,
        (__int64)&WPP_a5f12e58a0d33d0e52fe5d67144dcfb4_Traceguids,
        (int)v9);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffloadGraph::Initialize", 0x66u, (int)v9);
  }
  PublishDeviceGraphWnfState();
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v21);
  return (unsigned int)v9;
}
