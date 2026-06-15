/*
 * XREFs of ??0CMonitorManager@@QEAA@XZ @ 0x180059674
 * Callers:
 *     ?ListenTo_Initialize@@YAJXZ @ 0x18005B4B4 (-ListenTo_Initialize@@YAJXZ.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002FE5C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
CMonitorManager *__fastcall CMonitorManager::CMonitorManager(CMonitorManager *this)
{
  *(_QWORD *)this = &CMonitorManager::`vftable';
  *((_DWORD *)this + 2) = 1;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 72));
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 10;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)this + 4);
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 10;
  *((_BYTE *)this + 248) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 256));
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 82) = -1;
  return this;
}
