/*
 * XREFs of ??0CIAMGlobals@@QEAA@XZ @ 0x180103EA0
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x18010AA28 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ??0CReportWindowVisibilityChange@@QEAA@XZ @ 0x180104008 (--0CReportWindowVisibilityChange@@QEAA@XZ.c)
 */

CIAMGlobals *__fastcall CIAMGlobals::CIAMGlobals(CIAMGlobals *this)
{
  *(_QWORD *)this = 0LL;
  CReportWindowVisibilityChange::CReportWindowVisibilityChange((CIAMGlobals *)((char *)this + 8));
  *((_DWORD *)this + 22) = GetCurrentThreadId();
  *((_DWORD *)this + 23) = GetCurrentProcessId();
  *((_QWORD *)this + 12) = GetShellWindow();
  *((_DWORD *)this + 26) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
  *((_WORD *)this + 54) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_WORD *)this + 55) = GlobalAddAtomW(L"IAMWindowPropertyIndexBehaviorFlags");
  return this;
}
