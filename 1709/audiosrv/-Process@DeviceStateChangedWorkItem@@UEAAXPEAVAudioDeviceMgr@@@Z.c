/*
 * XREFs of ?Process@DeviceStateChangedWorkItem@@UEAAXPEAVAudioDeviceMgr@@@Z @ 0x1800E7A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DeviceStateChangedWorkItem::Process(DeviceStateChangedWorkItem *this, struct AudioDeviceMgr *a2)
{
  AudioDeviceMgr::ProcessOnDeviceStateChanged(a2, *((const unsigned __int16 **)this + 1), *((_DWORD *)this + 4));
}
