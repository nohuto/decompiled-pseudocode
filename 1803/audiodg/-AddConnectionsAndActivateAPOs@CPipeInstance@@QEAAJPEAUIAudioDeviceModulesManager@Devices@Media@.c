/*
 * XREFs of ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@@Z @ 0x140009D30
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000DBF0 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000EB40 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140009AE0 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x14000D3F0 (-AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x140040D3C (-AddCaptureConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPipeInstance::AddConnectionsAndActivateAPOs(
        CPipeInstance *this,
        struct Windows::Media::Devices::IAudioDeviceModulesManager *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  char v6; // r12
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // rbx
  CConnectionInstance *v10; // rsi
  struct IAudioProcessor *v11; // rdx
  int v12; // eax
  int v13; // eax
  int v14; // r14d
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rsi
  int v20; // eax
  int v21; // eax
  __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v26; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int64 v27; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+58h]

  v24 = -2;
  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 18) + 32LL))(
         *((_QWORD *)this + 18),
         &v27);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB18,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v4,
      -2);
    return v5;
  }
  v6 = 1;
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD **)(v7 + 16);
      v7 = *(_QWORD *)(v7 + 8);
      v9 = (_QWORD *)*v8;
      if ( v9 )
        break;
LABEL_8:
      if ( !v7 )
        goto LABEL_9;
    }
    while ( 1 )
    {
      v10 = (CConnectionInstance *)v9[2];
      v9 = (_QWORD *)*v9;
      v11 = (struct IAudioProcessor *)*((_QWORD *)this + 18);
      v12 = *((_DWORD *)v10 + 4);
      if ( v12 )
      {
        if ( v12 != 1 )
        {
          v14 = -2147418113;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xFC,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
            (const char *)0x8000FFFFLL,
            v24);
LABEL_40:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB25,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
            (const char *)(unsigned int)v14,
            v24);
          goto LABEL_29;
        }
        v13 = CConnectionInstance::AddCaptureConnection(v10, v11, v27);
        v14 = v13;
        if ( v13 >= 0 )
        {
LABEL_6:
          *((_DWORD *)v10 + 1) = 1;
          goto LABEL_7;
        }
        v23 = 246LL;
      }
      else
      {
        v13 = CConnectionInstance::AddRenderConnection(v10, v11, v27);
        v14 = v13;
        if ( v13 >= 0 )
          goto LABEL_6;
        v23 = 242LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\connectioninstance.cpp",
        (const char *)(unsigned int)v13,
        v24);
      if ( v14 < 0 )
        goto LABEL_40;
LABEL_7:
      if ( !v9 )
        goto LABEL_8;
    }
  }
LABEL_9:
  v14 = 0;
  v28 = 0LL;
  v15 = *((_QWORD *)this + 3);
  if ( !v15 )
    goto LABEL_25;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v15 + 16);
    v15 = *(_QWORD *)(v15 + 8);
    if ( *(_DWORD *)(v16 + 40) == 2 )
      break;
LABEL_23:
    if ( !v15 )
      goto LABEL_24;
  }
  v17 = 0LL;
  v26 = 0LL;
  v18 = *(_QWORD *)(*(_QWORD *)(v16 + 32) + 40LL);
  if ( v18 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v17 = v26;
  }
  v14 = 0;
  if ( v17 != v18 )
  {
    v19 = v17;
    v17 = 0LL;
    v26 = 0LL;
    if ( v18 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v18)(v18, &GUID_98f37dac_d0b6_49f5_896a_aa4d169a4c48, &v26);
      v17 = v26;
    }
    if ( v19 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v17 = v26;
    }
  }
  if ( !v17 )
  {
LABEL_19:
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    goto LABEL_23;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, struct Windows::Media::Devices::IAudioDeviceModulesManager *))(*(_QWORD *)v17 + 24LL))(
          v17,
          a2);
  if ( v14 >= 0 )
  {
    v17 = v26;
    goto LABEL_19;
  }
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_24:
  if ( v14 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        39LL,
        &WPP_0100469152753b0964101f667eb0634c_Traceguids,
        (unsigned int)v14);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::SetModulesManagerOnAPOs", 0xBFFu, v14);
  }
LABEL_25:
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB2A,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v14,
      v24);
  }
  else
  {
    v20 = CPipeInstance::ActivateAPOs(this, v27);
    v14 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB2D,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)v20,
        v24);
    }
    else
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 18) + 40LL))(
              *((_QWORD *)this + 18),
              v27);
      v14 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB2F,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)(unsigned int)v21,
          v24);
      }
      else
      {
        *((_DWORD *)this + 29) = 1;
        v6 = 0;
        v14 = 0;
      }
    }
  }
LABEL_29:
  if ( v6 )
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 18) + 48LL))(*((_QWORD *)this + 18), v27);
  return (unsigned int)v14;
}
