/*
 * XREFs of ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x1400037B0
 * Callers:
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x1400062A0 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007580 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140043970 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 * Callees:
 *     wil::ScopeExit__lambda_ef105e67d81a19e965bf21a75f17bf90___ @ 0x14000391C (wil--ScopeExit__lambda_ef105e67d81a19e965bf21a75f17bf90___.c)
 *     ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x1400046B0 (-RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     ?GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140004C20 (-GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRe.c)
 *     ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400055E0 (-AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetStreamingResourceManager@CSubmixImpl@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400065D0 (-GetStreamingResourceManager@CSubmixImpl@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140007130 (-AddPipeToMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?UnregisterResources@CStreamInstance@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400311E4 (-UnregisterResources@CStreamInstance@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14003EE9C (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamInstance::ConnectToRightSubmix(
        CStreamInstance *this,
        struct ISubmixInternal *a2,
        const struct CPipeInstance *a3)
{
  int (*v6)(CSubmixImpl *__hidden, struct IAudioStreamingResourceRegistration **); // rax
  char *v7; // rdx
  int (*v8)(GraphStreamingResourceManager *__hidden, void *, struct ProcessRegistrationToken__ **); // rax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rax
  struct CPipeInstance *v12; // rdx
  __int64 (__fastcall *v13)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *); // rax
  int v14; // eax
  char v15; // al
  struct ISubmixInternal *v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // r9
  int v21; // eax
  int v22; // [rsp+20h] [rbp-38h]
  _QWORD v23[2]; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v24[2]; // [rsp+38h] [rbp-20h] BYREF
  char v25; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  GraphStreamingResourceManager *v27; // [rsp+78h] [rbp+20h] BYREF

  v22 = -2;
  v27 = 0LL;
  v6 = *(int (**)(CSubmixImpl *__hidden, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)a2 + 120LL);
  if ( v6 == CSystemAudioDeviceSharedBase::GetStreamingResourceManager )
  {
    CSystemAudioDeviceSharedBase::GetStreamingResourceManager(a2, &v27);
  }
  else if ( v6 == CSubmixImpl::GetStreamingResourceManager )
  {
    CSubmixImpl::GetStreamingResourceManager(a2, &v27);
  }
  else
  {
    ((void (__fastcall *)(struct ISubmixInternal *, GraphStreamingResourceManager **))v6)(a2, &v27);
  }
  v23[0] = &v27;
  v23[1] = this;
  wil::ScopeExit__lambda_ef105e67d81a19e965bf21a75f17bf90___(v24, v23);
  if ( v27 )
  {
    if ( !*((_QWORD *)this + 6) )
    {
      v7 = (char *)*((_QWORD *)this + 5);
      if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v8 = *(int (**)(GraphStreamingResourceManager *__hidden, void *, struct ProcessRegistrationToken__ **))(*(_QWORD *)v27 + 24LL);
        v9 = v8 == GraphStreamingResourceManager::RegisterProcess
           ? GraphStreamingResourceManager::RegisterProcess(v27, v7, (struct ProcessRegistrationToken__ **)this + 6)
           : ((__int64 (__fastcall *)(GraphStreamingResourceManager *))v8)(v27);
        v10 = v9;
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xCE,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)(unsigned int)v9,
            -2);
          v18 = 85LL;
LABEL_33:
          v20 = v10;
          goto LABEL_34;
        }
      }
    }
  }
  if ( a3 )
  {
    v19 = CPipeInstance::ConnectToRightPipe(*(CPipeInstance **)this, a3);
    v10 = v19;
    if ( v19 >= 0 )
    {
      v21 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)this);
      v10 = v21;
      if ( v21 >= 0 )
        goto LABEL_14;
      v20 = (unsigned int)v21;
      v18 = 94LL;
    }
    else
    {
      v20 = (unsigned int)v19;
      v18 = 92LL;
    }
LABEL_34:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v18,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v20,
      v22);
    v15 = v25;
    goto LABEL_15;
  }
  v11 = *(_QWORD *)a2;
  v12 = *(struct CPipeInstance **)this;
  if ( *((_DWORD *)this + 5) == 2 )
  {
    v17 = a2;
    v13 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *))(v11 + 32);
  }
  else
  {
    v13 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *__hidden, struct CPipeInstance *))(v11 + 24);
    if ( v13 == CSystemAudioDeviceSharedBase::AddPipeToMixSplitConnection )
    {
      v14 = CSystemAudioDeviceSharedBase::AddPipeToMixSplitConnection(a2, v12);
      goto LABEL_13;
    }
    v17 = a2;
    if ( v13 == CSubmixImpl::AddPipeToMixSplitConnection )
    {
      v14 = CSubmixImpl::AddPipeToMixSplitConnection(a2, v12);
      goto LABEL_13;
    }
  }
  v14 = v13(v17, v12);
LABEL_13:
  v10 = v14;
  if ( v14 < 0 )
  {
    v18 = 100LL;
    goto LABEL_33;
  }
LABEL_14:
  v15 = 0;
  *((_BYTE *)this + 17) = 1;
  v10 = 0;
LABEL_15:
  if ( v15 && *(_QWORD *)v24[0] )
    CStreamInstance::UnregisterResources(
      (CStreamInstance *)v24[1],
      *(struct IAudioStreamingResourceRegistration **)v24[0]);
  if ( v27 )
    (*(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v27 + 16LL))(v27);
  return v10;
}
