/*
 * XREFs of ?AddRef@AudioDeviceMgr@@UEAAKXZ @ 0x180056630
 * Callers:
 *     ?NonDelegatingQueryInterface@AudioDeviceMgr@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800563C0 (-NonDelegatingQueryInterface@AudioDeviceMgr@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@AudioDeviceMgr@@W7EAAKXZ @ 0x180066800 (-AddRef@AudioDeviceMgr@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::AddRef(AudioDeviceMgr *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3));
}
