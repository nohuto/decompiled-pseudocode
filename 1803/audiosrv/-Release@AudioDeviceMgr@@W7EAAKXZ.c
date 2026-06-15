/*
 * XREFs of ?Release@AudioDeviceMgr@@W7EAAKXZ @ 0x180066820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::Release(__int64 a1)
{
  return AudioDeviceMgr::Release((AudioDeviceMgr *)(a1 - 8));
}
