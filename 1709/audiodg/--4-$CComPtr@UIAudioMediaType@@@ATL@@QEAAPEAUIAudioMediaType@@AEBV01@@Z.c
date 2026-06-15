/*
 * XREFs of ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x14000E8B0
 * Callers:
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140001FE0 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x1400091F0 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140009E90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140019B74 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x1400406F4 (-CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudio.c)
 * Callees:
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x14000AE60 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

CAudioMediaType *__fastcall ATL::CComPtr<IAudioMediaType>::operator=(CAudioMediaType **a1, CAudioMediaType **a2)
{
  CAudioMediaType *result; // rax
  CAudioMediaType *v4; // rbx
  __int64 (__fastcall *v5)(CAudioMediaType *); // rax
  CAudioMediaType *v6; // rcx

  result = *a1;
  v4 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v4 )
    {
      v5 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v4 + 8LL);
      v6 = *a2;
      if ( v5 == CAudioMediaType::AddRef )
        CAudioMediaType::AddRef(v6);
      else
        v5(v6);
    }
    if ( *a1 )
      (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v4;
    return v4;
  }
  return result;
}
