/*
 * XREFs of ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003EF70
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400055C0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FB00 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x14000FE00 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033668 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400336E4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_ @ 0x140035F54 (WPP_SF_.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14003827C (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x14003D040 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z @ 0x1400630C4 (-AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::Initialize(
        CSystemAudioDeviceOffloadGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        int a4)
{
  __int128 v5; // xmm0
  char v8; // si
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR *v9; // rdx
  AEError *v10; // rbx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  void *v17; // rdx
  unsigned int v18; // ecx
  unsigned __int8 v19; // r8
  unsigned __int64 v21; // [rsp+20h] [rbp-50h]
  unsigned __int64 v22; // [rsp+28h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-38h] BYREF
  char v25; // [rsp+40h] [rbp-30h]
  __int128 v26; // [rsp+48h] [rbp-28h]
  __int128 v27; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v5 = *(_OWORD *)((char *)a2 + 152);
  v8 = 1;
  *(_OWORD *)((char *)this + 248) = v5;
  v26 = v5;
  v27 = v5;
  EtwEventActivityIdControl(4LL, &v27);
  v25 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v9 = a2;
  *((_DWORD *)this + 56) = a4;
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 34);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_07dfb70a96f13fbfd7442f1423bb079c_Traceguids);
    v9 = a2;
  }
  v10 = (AEError *)(unsigned int)CSystemAudioDeviceBase::ActivateEndpoint(this, v9);
  if ( AEError::DeviceInUse(v10) )
  {
    LODWORD(v10) = -2005139370;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      (const char *)0x887C0056LL);
    goto LABEL_24;
  }
  if ( (int)v10 < 0 )
  {
    v11 = (unsigned int)v10;
    v12 = 72LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      (const char *)v11);
    goto LABEL_24;
  }
  v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
          *((_QWORD *)this + 29),
          &GUID_64f1dd49_71ca_4281_8672_3a9eddd1d0b6,
          (char *)this + 448);
  LODWORD(v10) = v13;
  if ( v13 < 0 )
  {
    v12 = 76LL;
LABEL_17:
    v11 = (unsigned int)v13;
    goto LABEL_18;
  }
  v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
          *((_QWORD *)this + 29),
          &GUID_dfe21355_5ec2_40e0_8d6b_710ac3c00249,
          (char *)this + 456);
  LODWORD(v10) = v13;
  if ( v13 < 0 )
  {
    v12 = 78LL;
    goto LABEL_17;
  }
  v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
          *((_QWORD *)this + 29),
          &GUID_e1546dce_9dd1_418b_9ab2_348ced161c86,
          (char *)this + 464);
  LODWORD(v10) = v13;
  if ( v13 < 0 )
  {
    v12 = 80LL;
    goto LABEL_17;
  }
  v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 29))(
          *((_QWORD *)this + 29),
          &GUID_076a6922_d802_4f83_baf6_409d9ca11bfe,
          (char *)this + 472);
  LODWORD(v10) = v13;
  if ( v13 < 0 )
  {
    v12 = 82LL;
    goto LABEL_17;
  }
  v14 = *((_QWORD *)this + 29);
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)a2 + 8) = v14;
  v15 = CSystemAudioDeviceSharedBase::Initialize(this, a2, a3, a4);
  LODWORD(v10) = v15;
  if ( v15 >= 0 )
  {
    v8 = 0;
    LODWORD(v10) = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5F,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceoffloadgraph.cpp",
      (const char *)(unsigned int)v15);
  }
  v16 = *((_QWORD *)a2 + 8);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
LABEL_24:
  if ( v25 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v27);
  if ( v8 )
    CSystemAudioDeviceSharedBase::Cleanup(this);
  AEWMILOG_PERFORMANCE(v18, v17, v19, 0xAu, v21, v22);
  PublishDeviceGraphWnfState();
  return (unsigned int)v10;
}
