/*
 * XREFs of ?QueryInterface@AudioDeviceMgr@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180055EC0
 * Callers:
 *     ?CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z @ 0x18005F730 (-CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z.c)
 *     ?QueryInterface@AudioDeviceMgr@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066810 (-QueryInterface@AudioDeviceMgr@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::QueryInterface(AudioDeviceMgr *this, const struct _GUID *a2, void **a3)
{
  AudioDeviceMgr *v3; // rcx
  __int64 (__fastcall *v4)(AudioDeviceMgr *__hidden, const struct _GUID *, void **); // rax

  v3 = (AudioDeviceMgr *)*((_QWORD *)this + 3);
  v4 = **(__int64 (__fastcall ***)(AudioDeviceMgr *__hidden, const struct _GUID *, void **))v3;
  if ( v4 == AudioDeviceMgr::NonDelegatingQueryInterface )
    return AudioDeviceMgr::NonDelegatingQueryInterface(v3, a2, a3);
  else
    return v4(v3, a2, a3);
}
