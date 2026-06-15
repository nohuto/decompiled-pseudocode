/*
 * XREFs of ??0CAudioHealthMonitor@@QEAA@K@Z @ 0x180060184
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063FBC (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001B028 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

CAudioHealthMonitor *__fastcall CAudioHealthMonitor::CAudioHealthMonitor(CAudioHealthMonitor *this, int a2)
{
  DWORD pcbData[4]; // [rsp+40h] [rbp-238h] BYREF
  _BYTE pvData[528]; // [rsp+50h] [rbp-228h] BYREF

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CAudioHealthMonitor::`vftable';
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = 16;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  pcbData[0] = 520;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"SOFTWARE\\Microsoft\\Virtual Machine\\Guest\\Parameters",
          L"PhysicalHostName",
          2u,
          0LL,
          pvData,
          pcbData) )
    *((_DWORD *)this + 16) = 1;
  return this;
}
