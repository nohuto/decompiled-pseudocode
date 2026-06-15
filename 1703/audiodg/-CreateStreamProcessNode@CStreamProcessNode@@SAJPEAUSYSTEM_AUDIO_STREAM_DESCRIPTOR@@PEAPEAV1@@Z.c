/*
 * XREFs of ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140019F00
 * Callers:
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140011CE0 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000E610 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x14001B990 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamProcessNode::CreateStreamProcessNode(
        const struct tWAVEFORMATEX **a1,
        struct CStreamProcessNode **a2)
{
  void *v4; // rbx
  BOOL v5; // eax
  unsigned int v6; // ebp
  __int64 v7; // rdi
  unsigned int (__fastcall *v8)(CAudioMediaType *__hidden); // rax
  CAudioMediaType *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned int (__fastcall *v12)(CAudioMediaType *__hidden); // rax
  CAudioMediaType *v13; // rcx
  __int64 v14; // rcx

  v4 = operator new(0x40uLL);
  if ( v4 )
  {
    v5 = *(_DWORD *)a1 != 0;
    *((_QWORD *)v4 + 1) = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_DWORD *)v4 + 6) = v5;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_DWORD *)v4 + 10) = 3;
    *(_QWORD *)v4 = &CStreamProcessNode::`vftable';
    *((_QWORD *)v4 + 6) = 0LL;
    *((_DWORD *)v4 + 14) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v6 = CAudioMediaType::Create(a1[10], (unsigned int)a1[10]->cbSize + 18, (struct IAudioMediaType **)v4 + 6, 0.0, 0);
    if ( (v6 & 0x80000000) == 0 )
    {
      *((_DWORD *)v4 + 14) = *((_DWORD *)a1 + 3);
      *((_DWORD *)v4 + 15) = *(_DWORD *)a1;
      v7 = *((_QWORD *)v4 + 6);
      if ( *((_QWORD *)v4 + 1) != v7 )
      {
        if ( v7 )
        {
          v8 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v7 + 8LL);
          v9 = (CAudioMediaType *)*((_QWORD *)v4 + 6);
          if ( v8 == CAudioMediaType::AddRef )
            CAudioMediaType::AddRef(v9);
          else
            v8(v9);
        }
        v10 = *((_QWORD *)v4 + 1);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        *((_QWORD *)v4 + 1) = v7;
      }
      v11 = *((_QWORD *)v4 + 6);
      if ( *((_QWORD *)v4 + 2) != v11 )
      {
        if ( v11 )
        {
          v12 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v11 + 8LL);
          v13 = (CAudioMediaType *)*((_QWORD *)v4 + 6);
          if ( v12 == CAudioMediaType::AddRef )
            CAudioMediaType::AddRef(v13);
          else
            v12(v13);
        }
        v14 = *((_QWORD *)v4 + 2);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        *((_QWORD *)v4 + 2) = v11;
      }
      *a2 = (struct CStreamProcessNode *)v4;
      return v6;
    }
    (**(void (__fastcall ***)(void *, __int64))v4)(v4, 1LL);
  }
  else
  {
    v6 = -2147024882;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_a00fb4be71793c9c12457d7c93fa59d1_Traceguids, v6);
  }
  AudDGTraceLoggingErrorHelper("CStreamProcessNode::CreateStreamProcessNode", 0x195u, v6);
  return v6;
}
