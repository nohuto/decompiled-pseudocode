/*
 * XREFs of ?ShouldUpdateCounter@CAudioHealthMonitor@@AEAAHPEBG@Z @ 0x18007BA30
 * Callers:
 *     ?ReceiveHang@CAudioHealthMonitor@@UEAAXPEBGPEBU_TlgProvider_t@@@Z @ 0x180080080 (-ReceiveHang@CAudioHealthMonitor@@UEAAXPEBGPEBU_TlgProvider_t@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CAudioHealthMonitor::ShouldUpdateCounter(CAudioHealthMonitor *this, const unsigned __int16 *a2)
{
  return !IsDebuggerPresent()
      && !*((_DWORD *)this + 16)
      && a2
      && (CompareStringOrdinal(a2, -1, L"AudioServerInitialize", -1, 0) == 2
       || CompareStringOrdinal(a2, -1, L"AudioServerCreateStream", -1, 0) == 2);
}
