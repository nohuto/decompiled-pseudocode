/*
 * XREFs of ??0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z @ 0x180036518
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180035B70 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001D40C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CAudioDGProcess *__fastcall CAudioDGProcess::CAudioDGProcess(CAudioDGProcess *this, struct IMonitorDGTermination *a2)
{
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)this);
  *((_DWORD *)this + 10) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 48) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = a2;
  return this;
}
