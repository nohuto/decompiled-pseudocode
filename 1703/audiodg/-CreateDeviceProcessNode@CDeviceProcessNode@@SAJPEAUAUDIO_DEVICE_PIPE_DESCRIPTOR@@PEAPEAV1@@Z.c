/*
 * XREFs of ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001AEE0
 * Callers:
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x1400145A0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000E610 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001A900 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x14001B990 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140036454 (WPP_SF_.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceProcessNode::CreateDeviceProcessNode(
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a1,
        struct IAudioMediaType ***a2)
{
  struct IAudioMediaType **v4; // rbx
  int v5; // eax
  int v6; // esi
  struct IAudioMediaType *v7; // rdi
  unsigned int (__fastcall *AddRef)(CAudioMediaType *__hidden); // rax
  CAudioMediaType *v9; // rcx
  struct IAudioMediaType *v10; // rcx
  struct IAudioMediaType *v11; // rdi
  unsigned int (__fastcall *v12)(CAudioMediaType *__hidden); // rax
  CAudioMediaType *v13; // rcx
  struct IAudioMediaType *v14; // rcx
  _QWORD *v16; // rcx
  struct CEndpointInstance *v17; // [rsp+80h] [rbp+18h] BYREF

  v4 = (struct IAudioMediaType **)operator new(0x38uLL);
  v17 = (struct CEndpointInstance *)v4;
  if ( v4 )
  {
    v5 = *((_DWORD *)a1 + 18);
    v4[1] = 0LL;
    v4[2] = 0LL;
    *((_DWORD *)v4 + 6) = v5;
    v4[4] = 0LL;
    *((_DWORD *)v4 + 10) = 1;
    *v4 = (struct IAudioMediaType *)&CDeviceProcessNode::`vftable';
    v4[6] = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_a00fb4be71793c9c12457d7c93fa59d1_Traceguids);
    }
    v6 = CEndpointInstance::CreateDeviceEndpointInstance(a1, &v17);
    if ( v6 >= 0 )
    {
      v4[4] = (struct IAudioMediaType *)v17;
      v6 = CAudioMediaType::Create(
             *((const struct tWAVEFORMATEX **)a1 + 1),
             (unsigned int)*(unsigned __int16 *)(*((_QWORD *)a1 + 1) + 16LL) + 18,
             v4 + 6,
             0.0,
             0);
      if ( v6 >= 0 )
      {
        v7 = v4[6];
        if ( v4[1] != v7 )
        {
          if ( v7 )
          {
            AddRef = (unsigned int (__fastcall *)(CAudioMediaType *__hidden))v7->lpVtbl->AddRef;
            v9 = (CAudioMediaType *)v4[6];
            if ( AddRef == CAudioMediaType::AddRef )
              CAudioMediaType::AddRef(v9);
            else
              AddRef(v9);
          }
          v10 = v4[1];
          if ( v10 )
            ((void (__fastcall *)(struct IAudioMediaType *))v10->lpVtbl->Release)(v10);
          v4[1] = v7;
        }
        v11 = v4[6];
        if ( v4[2] != v11 )
        {
          if ( v11 )
          {
            v12 = (unsigned int (__fastcall *)(CAudioMediaType *__hidden))v11->lpVtbl->AddRef;
            v13 = (CAudioMediaType *)v4[6];
            if ( v12 == CAudioMediaType::AddRef )
              CAudioMediaType::AddRef(v13);
            else
              v12(v13);
          }
          v14 = v4[2];
          if ( v14 )
            ((void (__fastcall *)(struct IAudioMediaType *))v14->lpVtbl->Release)(v14);
          v4[2] = v11;
        }
        *a2 = v4;
        return (unsigned int)v6;
      }
    }
  }
  else
  {
    v6 = -2147024882;
  }
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_a00fb4be71793c9c12457d7c93fa59d1_Traceguids,
      (unsigned int)v6);
    v16 = WPP_GLOBAL_Control;
  }
  if ( v4 )
  {
    ((void (__fastcall *)(struct IAudioMediaType **, __int64))(*v4)->lpVtbl)(v4, 1LL);
    v16 = WPP_GLOBAL_Control;
  }
  if ( v16 != &WPP_GLOBAL_Control && (*((_DWORD *)v16 + 7) & 0x20000) != 0 && *((_BYTE *)v16 + 25) >= 2u )
    WPP_SF_D(v16[2], 15LL, &WPP_a00fb4be71793c9c12457d7c93fa59d1_Traceguids, (unsigned int)v6);
  AudDGTraceLoggingErrorHelper("CDeviceProcessNode::CreateDeviceProcessNode", 0x156u, v6);
  return (unsigned int)v6;
}
