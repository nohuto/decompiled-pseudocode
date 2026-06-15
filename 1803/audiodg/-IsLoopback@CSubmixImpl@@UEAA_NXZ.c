/*
 * XREFs of ?IsLoopback@CSubmixImpl@@UEAA_NXZ @ 0x140002070
 * Callers:
 *     ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140012270 (-OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140012400 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSubmixImpl::IsLoopback(CSubmixImpl *this)
{
  return *((_DWORD *)this + 54) == 2;
}
