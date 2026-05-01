/*
 * XREFs of ??$Start@$$V@CrashRecovery@ViewManagerInteropTraceLogging@@SA?AV01@XZ @ 0x1800FEEEC
 * Callers:
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1800F9508 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 * Callees:
 *     ?StartActivity@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1800EDF2C (-StartActivity@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     memset @ 0x180194E50 (memset.c)
 */

ViewManagerInteropTraceLogging::CrashRecovery *__fastcall ViewManagerInteropTraceLogging::CrashRecovery::Start<>(
        ViewManagerInteropTraceLogging::CrashRecovery *this)
{
  char *v1; // rbx
  _QWORD *v3; // rcx

  *((_QWORD *)this + 2) = this;
  v1 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  v3 = (_QWORD *)((char *)this + 136);
  *(_DWORD *)v1 = 0;
  v1[4] = 0;
  v1[64] = 0;
  *((_DWORD *)v1 + 10) = 0;
  *((_QWORD *)v1 + 6) = "CrashRecovery";
  *((_QWORD *)v1 + 7) = 0LL;
  *((_QWORD *)v1 + 9) = 1LL;
  v3[18] = 0LL;
  v3[19] = 0LL;
  memset(v3, 0, 0x90uLL);
  *((_QWORD *)v1 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::CrashRecovery::`vftable';
  ViewManagerInteropTraceLogging::CrashRecovery::StartActivity(this);
  return this;
}
