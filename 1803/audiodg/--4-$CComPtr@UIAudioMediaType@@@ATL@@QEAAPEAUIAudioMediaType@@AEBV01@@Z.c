/*
 * XREFs of ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140001E70
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140001C78 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140001D84 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000B540 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000C180 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14003E694 (-CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudio.c)
 * Callees:
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x14000CD20 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

CAudioMediaType *__fastcall ATL::CComPtr<IAudioMediaType>::operator=(CAudioMediaType **a1, CAudioMediaType **a2)
{
  CAudioMediaType *result; // rax
  CAudioMediaType *v4; // rbx
  unsigned int (__fastcall *v5)(CAudioMediaType *__hidden); // rax
  CAudioMediaType *v6; // rcx

  result = *a1;
  v4 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v4 )
    {
      v5 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v4 + 8LL);
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
