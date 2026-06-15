/*
 * XREFs of ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140001C78
 * Callers:
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x1400115D0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140001E70 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140010370 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140019960 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     ??2@YAPEAX_K@Z @ 0x14001B95C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140034B74 (WPP_SF_.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceProcessNode::CreateDeviceProcessNode(
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a1,
        struct IAudioMediaType ***a2)
{
  struct IAudioMediaType **v4; // rbx
  int v5; // eax
  int v6; // edi
  _QWORD *v8; // rcx
  struct CEndpointInstance *v9; // [rsp+70h] [rbp+18h] BYREF

  v4 = (struct IAudioMediaType **)operator new(0x38uLL);
  v9 = (struct CEndpointInstance *)v4;
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
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_b0b678a55dcf3cc4e3459249774c166a_Traceguids);
    }
    v6 = CEndpointInstance::CreateDeviceEndpointInstance(a1, &v9);
    if ( v6 >= 0 )
    {
      v4[4] = (struct IAudioMediaType *)v9;
      v6 = CAudioMediaType::Create(
             *((const struct tWAVEFORMATEX **)a1 + 1),
             (unsigned int)*(unsigned __int16 *)(*((_QWORD *)a1 + 1) + 16LL) + 18,
             v4 + 6,
             0.0,
             0);
      if ( v6 >= 0 )
      {
        ATL::CComPtr<IAudioMediaType>::operator=(v4 + 1, v4 + 6);
        ATL::CComPtr<IAudioMediaType>::operator=(v4 + 2, v4 + 6);
        *a2 = v4;
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
      &WPP_b0b678a55dcf3cc4e3459249774c166a_Traceguids,
      (unsigned int)v6);
    v8 = WPP_GLOBAL_Control;
  }
  if ( v4 )
  {
    ((void (__fastcall *)(struct IAudioMediaType **, __int64))(*v4)->lpVtbl)(v4, 1LL);
    v8 = WPP_GLOBAL_Control;
  }
  if ( v8 != &WPP_GLOBAL_Control && (*((_DWORD *)v8 + 7) & 0x20000) != 0 && *((_BYTE *)v8 + 25) >= 2u )
    WPP_SF_D(v8[2], 15LL, &WPP_b0b678a55dcf3cc4e3459249774c166a_Traceguids, (unsigned int)v6);
  AudDGTraceLoggingErrorHelper("CDeviceProcessNode::CreateDeviceProcessNode", 0x156u, v6);
  return (unsigned int)v6;
}
