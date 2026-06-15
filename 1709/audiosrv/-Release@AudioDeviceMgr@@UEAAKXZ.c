/*
 * XREFs of ?Release@AudioDeviceMgr@@UEAAKXZ @ 0x1800E7EE0
 * Callers:
 *     ?Release@AudioDeviceMgr@@W7EAAKXZ @ 0x180037A80 (-Release@AudioDeviceMgr@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::Release(AudioDeviceMgr *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 16LL))(*((_QWORD *)this + 3));
}
