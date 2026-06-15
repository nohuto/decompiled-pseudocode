/*
 * XREFs of ??0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z @ 0x180060AE8
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180061F40 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001B028 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CAudioDGProcess *__fastcall CAudioDGProcess::CAudioDGProcess(CAudioDGProcess *this, struct IMonitorDGTermination *a2)
{
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)this);
  *((_DWORD *)this + 10) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_WORD *)this + 50) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 18) = a2;
  return this;
}
