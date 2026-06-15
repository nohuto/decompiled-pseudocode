/*
 * XREFs of ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140003190
 * Callers:
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x1400047E0 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005A10 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140042C60 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 * Callees:
 *     ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x1400045E0 (-RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     ?GetStreamingResourceManager@CSubmixImpl@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140004B50 (-GetStreamingResourceManager@CSubmixImpl@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140005560 (-AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140011E60 (-GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRe.c)
 *     ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140012770 (-AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?UnregisterResources@CStreamInstance@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14002FC1C (-UnregisterResources@CStreamInstance@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14003D95C (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamInstance::ConnectToRightSubmix(
        CStreamInstance *this,
        struct ISubmixInternal *a2,
        const struct CPipeInstance *a3)
{
  int (*v6)(CSubmixImpl *__hidden, struct IAudioStreamingResourceRegistration **); // rax
  char v7; // di
  char *v8; // rdx
  int (*v9)(GraphStreamingResourceManager *__hidden, void *, struct ProcessRegistrationToken__ **); // rax
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rax
  struct CPipeInstance *v13; // rdx
  __int64 (__fastcall *v14)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *); // rax
  int v15; // eax
  struct IAudioStreamingResourceRegistration *v16; // rcx
  struct ISubmixInternal *v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IAudioStreamingResourceRegistration *v23; // [rsp+78h] [rbp+20h] BYREF

  v23 = 0LL;
  v6 = *(int (**)(CSubmixImpl *__hidden, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)a2 + 120LL);
  if ( v6 == CSystemAudioDeviceSharedBase::GetStreamingResourceManager )
  {
    CSystemAudioDeviceSharedBase::GetStreamingResourceManager(a2, &v23);
  }
  else if ( v6 == CSubmixImpl::GetStreamingResourceManager )
  {
    CSubmixImpl::GetStreamingResourceManager(a2, &v23);
  }
  else
  {
    ((void (__fastcall *)(struct ISubmixInternal *, struct IAudioStreamingResourceRegistration **))v6)(a2, &v23);
  }
  v7 = 1;
  if ( v23 )
  {
    if ( !*((_QWORD *)this + 6) )
    {
      v8 = (char *)*((_QWORD *)this + 5);
      if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v9 = *(int (**)(GraphStreamingResourceManager *__hidden, void *, struct ProcessRegistrationToken__ **))(*(_QWORD *)v23 + 24LL);
        v10 = v9 == GraphStreamingResourceManager::RegisterProcess
            ? GraphStreamingResourceManager::RegisterProcess(v23, v8, (struct ProcessRegistrationToken__ **)this + 6)
            : ((__int64 (__fastcall *)(struct IAudioStreamingResourceRegistration *))v9)(v23);
        v11 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xCF,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)(unsigned int)v10,
            -2);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x56,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)v11,
            v21);
          goto LABEL_15;
        }
      }
    }
  }
  if ( a3 )
  {
    v19 = CPipeInstance::ConnectToRightPipe(*(CPipeInstance **)this, a3);
    v11 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v19,
        -2);
      goto LABEL_15;
    }
    v20 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)this);
    v11 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v20,
        -2);
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  v12 = *(_QWORD *)a2;
  v13 = *(struct CPipeInstance **)this;
  if ( *((_DWORD *)this + 5) == 2 )
  {
    v18 = a2;
    v14 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *))(v12 + 32);
  }
  else
  {
    v14 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *))(v12 + 24);
    if ( v14 == CSystemAudioDeviceSharedBase::AddPipeToMixSplitConnection )
    {
      v15 = CSystemAudioDeviceSharedBase::AddPipeToMixSplitConnection(a2, v13);
      goto LABEL_13;
    }
    v18 = a2;
    if ( v14 == CSubmixImpl::AddPipeToMixSplitConnection )
    {
      v15 = CSubmixImpl::AddPipeToMixSplitConnection(a2, v13);
      goto LABEL_13;
    }
  }
  v15 = v14(v18, v13);
LABEL_13:
  v11 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v15,
      -2);
    goto LABEL_15;
  }
LABEL_14:
  v7 = 0;
  *((_BYTE *)this + 17) = 1;
  v11 = 0;
LABEL_15:
  v16 = v23;
  if ( v7 && v23 )
  {
    CStreamInstance::UnregisterResources(this, v23);
    v16 = v23;
  }
  if ( v16 )
    (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v16 + 16LL))(v16);
  return v11;
}
