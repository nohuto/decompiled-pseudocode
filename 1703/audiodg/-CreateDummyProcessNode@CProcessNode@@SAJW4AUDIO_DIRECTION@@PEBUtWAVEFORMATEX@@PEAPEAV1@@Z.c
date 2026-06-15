/*
 * XREFs of ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14001B070
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BC70 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140011CE0 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140012AD0 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x1400145A0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003EF74 (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14003F364 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000DCB0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000E610 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x14001B990 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcessNode::CreateDummyProcessNode(int a1, const struct tWAVEFORMATEX *a2, _QWORD *a3)
{
  CAudioMediaType *v6; // rbx
  _QWORD *v7; // rdi
  int v8; // esi
  ULONG (__stdcall *AddRef)(IAudioMediaType *); // rax
  __int64 v10; // rcx
  unsigned int (__fastcall *v11)(CAudioMediaType *__hidden); // rax
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(CAudioMediaType *); // rax
  struct IAudioMediaType *v15; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  v15 = 0LL;
  v7 = operator new(0x30uLL);
  if ( v7 )
  {
    *v7 = &CProcessNode::`vftable';
    v7[1] = 0LL;
    v7[2] = 0LL;
    *((_DWORD *)v7 + 6) = a1;
    v7[4] = 0LL;
    *((_DWORD *)v7 + 10) = 4;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v8 = CAudioMediaType::Create(a2, (unsigned int)a2->cbSize + 18, &v15, 0.0, 0);
    if ( v8 >= 0 )
    {
      v6 = (CAudioMediaType *)v15;
      if ( (struct IAudioMediaType *)v7[1] != v15 )
      {
        if ( v15 )
        {
          AddRef = v15->lpVtbl->AddRef;
          if ( (char *)AddRef == (char *)CAudioMediaType::AddRef )
            CAudioMediaType::AddRef((CAudioMediaType *)v15);
          else
            ((void (__fastcall *)(struct IAudioMediaType *))AddRef)(v15);
        }
        v10 = v7[1];
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        v7[1] = v6;
      }
      if ( (CAudioMediaType *)v7[2] != v6 )
      {
        if ( v6 )
        {
          v11 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v6 + 8LL);
          if ( v11 == CAudioMediaType::AddRef )
            CAudioMediaType::AddRef(v6);
          else
            v11(v6);
        }
        v12 = v7[2];
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        v7[2] = v6;
      }
      *a3 = v7;
      goto LABEL_20;
    }
    (*(void (__fastcall **)(_QWORD *, __int64))*v7)(v7, 1LL);
    v6 = (CAudioMediaType *)v15;
  }
  else
  {
    v8 = -2147024882;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_a00fb4be71793c9c12457d7c93fa59d1_Traceguids,
      (unsigned int)v8);
  }
  AudDGTraceLoggingErrorHelper("CProcessNode::CreateDummyProcessNode", 0x47u, v8);
LABEL_20:
  if ( v6 )
  {
    v13 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v6 + 16LL);
    if ( v13 == CAudioMediaType::Release )
      CAudioMediaType::Release(v6);
    else
      v13(v6);
  }
  return (unsigned int)v8;
}
