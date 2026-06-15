/*
 * XREFs of ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140019B74
 * Callers:
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003230 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14000E120 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x14000E8B0 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140019610 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     ??2@YAPEAX_K@Z @ 0x14001C898 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140035F54 (WPP_SF_.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceProcessNode::CreateDeviceProcessNode(
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a1,
        struct CDeviceProcessNode **a2)
{
  void *v4; // rbx
  int v5; // eax
  int v6; // edi
  _QWORD *v8; // rcx
  struct CEndpointInstance *v9; // [rsp+70h] [rbp+18h] BYREF

  v4 = operator new(0x38uLL);
  v9 = (struct CEndpointInstance *)v4;
  if ( v4 )
  {
    v5 = *((_DWORD *)a1 + 18);
    *((_QWORD *)v4 + 1) = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_DWORD *)v4 + 6) = v5;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_DWORD *)v4 + 10) = 1;
    *(_QWORD *)v4 = &CDeviceProcessNode::`vftable';
    *((_QWORD *)v4 + 6) = 0LL;
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
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_12ee975d414f3dc6e1f6d6e7c2eb499f_Traceguids);
    }
    v6 = CEndpointInstance::CreateDeviceEndpointInstance(a1, &v9);
    if ( v6 >= 0 )
    {
      *((_QWORD *)v4 + 4) = v9;
      v6 = CAudioMediaType::Create(
             *((const struct tWAVEFORMATEX **)a1 + 1),
             (unsigned int)*(unsigned __int16 *)(*((_QWORD *)a1 + 1) + 16LL) + 18,
             (struct IAudioMediaType **)v4 + 6,
             0.0,
             0);
      if ( v6 >= 0 )
      {
        ATL::CComPtr<IAudioMediaType>::operator=((CAudioMediaType **)v4 + 1, (CAudioMediaType **)v4 + 6);
        ATL::CComPtr<IAudioMediaType>::operator=((CAudioMediaType **)v4 + 2, (CAudioMediaType **)v4 + 6);
        *a2 = (struct CDeviceProcessNode *)v4;
        return (unsigned int)v6;
      }
    }
  }
  else
  {
    v6 = -2147024882;
  }
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_12ee975d414f3dc6e1f6d6e7c2eb499f_Traceguids,
      (unsigned int)v6);
    v8 = WPP_GLOBAL_Control;
  }
  if ( v4 )
  {
    (**(void (__fastcall ***)(void *, __int64))v4)(v4, 1LL);
    v8 = WPP_GLOBAL_Control;
  }
  if ( v8 != &WPP_GLOBAL_Control && (*((_DWORD *)v8 + 7) & 0x20000) != 0 && *((_BYTE *)v8 + 25) >= 2u )
    WPP_SF_D(v8[2], 15LL, &WPP_12ee975d414f3dc6e1f6d6e7c2eb499f_Traceguids, (unsigned int)v6);
  AudDGTraceLoggingErrorHelper("CDeviceProcessNode::CreateDeviceProcessNode", 0x156u, v6);
  return (unsigned int)v6;
}
