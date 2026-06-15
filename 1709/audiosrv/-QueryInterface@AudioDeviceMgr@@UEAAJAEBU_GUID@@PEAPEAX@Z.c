/*
 * XREFs of ?QueryInterface@AudioDeviceMgr@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E7EC0
 * Callers:
 *     ?QueryInterface@AudioDeviceMgr@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037A70 (-QueryInterface@AudioDeviceMgr@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::QueryInterface(AudioDeviceMgr *this, const struct _GUID *a2, void **a3)
{
  return (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 3))(
           *((_QWORD *)this + 3),
           a2,
           a3);
}
