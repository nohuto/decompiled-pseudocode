/*
 * XREFs of ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000E410
 * Callers:
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003230 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140003A90 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140004550 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x1400091F0 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140009E90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003FA80 (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14003FE70 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 * Callees:
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x14000AE60 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000AF50 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000E120 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001C898 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcessNode::CreateDummyProcessNode(int a1, const struct tWAVEFORMATEX *a2, _QWORD *a3)
{
  CAudioMediaType *v6; // rbx
  _QWORD *v7; // rdi
  int v8; // esi
  ULONG (__stdcall *AddRef)(IAudioMediaType *); // rax
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(CAudioMediaType *); // rax
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
          v11 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v6 + 8LL);
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
      &WPP_12ee975d414f3dc6e1f6d6e7c2eb499f_Traceguids,
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
