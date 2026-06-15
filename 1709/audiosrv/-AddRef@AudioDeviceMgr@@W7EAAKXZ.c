/*
 * XREFs of ?AddRef@AudioDeviceMgr@@W7EAAKXZ @ 0x180037A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall AudioDeviceMgr::AddRef(__int64 a1)
{
  return AudioDeviceMgr::AddRef((AudioDeviceMgr *)(a1 - 8));
}
