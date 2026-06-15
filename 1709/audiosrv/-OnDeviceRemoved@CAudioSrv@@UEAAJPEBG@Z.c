/*
 * XREFs of ?OnDeviceRemoved@CAudioSrv@@UEAAJPEBG@Z @ 0x1800622E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSrv::OnDeviceRemoved(CAudioSrv *this, const unsigned __int16 *a2)
{
  return CAudioSrv::QueueOnDeviceWorkItem((char *)this - 72, a2, 3LL);
}
