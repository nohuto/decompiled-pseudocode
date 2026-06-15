/*
 * XREFs of ?AddRef@AudioDeviceMgr@@UEAAKXZ @ 0x1800E6B20
 * Callers:
 *     ?AddRef@AudioDeviceMgr@@W7EAAKXZ @ 0x180037A60 (-AddRef@AudioDeviceMgr@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::AddRef(AudioDeviceMgr *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3));
}
