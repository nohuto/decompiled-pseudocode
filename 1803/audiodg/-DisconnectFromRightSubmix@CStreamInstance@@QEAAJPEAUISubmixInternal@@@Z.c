/*
 * XREFs of ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x1400030B4
 * Callers:
 *     ?DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140004A80 (-DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140005810 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140005A10 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     wil::details::lambda_call__lambda_417a45af64215962c13a0b99bcf3407d___::_lambda_call__lambda_417a45af64215962c13a0b99bcf3407d___ @ 0x1400304D8 (wil--details--lambda_call__lambda_417a45af64215962c13a0b99bcf3407d___--_lambda_call__lambda_417a.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140042C60 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 * Callees:
 *     ?GetStreamingResourceManager@CSubmixImpl@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140004B50 (-GetStreamingResourceManager@CSubmixImpl@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?RemovePipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140005420 (-RemovePipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z @ 0x140008530 (-OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::DisconnectFromRightSubmix(struct CPipeInstance **this, struct ISubmixInternal *a2)
{
  int (*v4)(CSubmixImpl *__hidden, struct CPipeInstance *); // rax
  struct CPipeInstance *v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  CPipeInstance *v8; // rbx
  __int64 v9; // rax
  int (*v10)(CSubmixImpl *__hidden, struct IAudioStreamingResourceRegistration **); // rax
  struct IAudioStreamingResourceRegistration *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAudioStreamingResourceRegistration *v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(int (**)(CSubmixImpl *__hidden, struct CPipeInstance *))(*(_QWORD *)a2 + 48LL);
  v5 = *this;
  if ( v4 == CSubmixImpl::RemovePipe )
    v6 = CSubmixImpl::RemovePipe(a2, v5);
  else
    v6 = ((__int64 (__fastcall *)(struct ISubmixInternal *, struct CPipeInstance *))v4)(a2, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v6,
      -2);
    return v7;
  }
  else
  {
    *((_BYTE *)this + 17) = 0;
    v8 = *this;
    v9 = (*(__int64 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 64LL))(a2);
    CPipeInstance::OnDisconnectedFromRightSubmix(v8, v9);
    v14 = 0LL;
    v10 = *(int (**)(CSubmixImpl *__hidden, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)a2 + 120LL);
    if ( v10 == CSubmixImpl::GetStreamingResourceManager )
      CSubmixImpl::GetStreamingResourceManager(a2, &v14);
    else
      ((void (__fastcall *)(struct ISubmixInternal *, struct IAudioStreamingResourceRegistration **))v10)(a2, &v14);
    v11 = v14;
    if ( v14 && this[6] )
    {
      (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v14 + 32LL))(v14);
      this[6] = 0LL;
      v11 = v14;
    }
    if ( v11 )
      (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v11 + 16LL))(v11);
    return 0LL;
  }
}
