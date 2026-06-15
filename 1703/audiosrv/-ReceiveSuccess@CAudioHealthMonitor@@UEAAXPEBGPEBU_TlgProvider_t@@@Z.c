/*
 * XREFs of ?ReceiveSuccess@CAudioHealthMonitor@@UEAAXPEBGPEBU_TlgProvider_t@@@Z @ 0x18001DE40
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18001E970 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     AudioServerCreateStream @ 0x18002AF60 (AudioServerCreateStream.c)
 *     AudioServerDestroyStream @ 0x1800323F0 (AudioServerDestroyStream.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CAudioHealthMonitor::ReceiveSuccess(
        CAudioHealthMonitor *this,
        const unsigned __int16 *a2,
        const struct _TlgProvider_t *a3)
{
  int v5; // eax
  LPCRITICAL_SECTION v6; // [rsp+30h] [rbp-18h] BYREF
  char v7; // [rsp+38h] [rbp-10h]

  v6 = (LPCRITICAL_SECTION)((char *)this + 24);
  v7 = 0;
  ATL::CCritSecLock::Lock(&v6);
  if ( !IsDebuggerPresent()
    && !*((_DWORD *)this + 16)
    && a2
    && (CompareStringOrdinal(a2, -1, L"AudioServerInitialize", -1, 0) == 2
     || CompareStringOrdinal(a2, -1, L"AudioServerCreateStream", -1, 0) == 2) )
  {
    v5 = *((_DWORD *)this + 2);
    if ( v5 )
      *((_DWORD *)this + 2) = v5 - 1;
  }
  if ( v7 )
    LeaveCriticalSection(v6);
}
