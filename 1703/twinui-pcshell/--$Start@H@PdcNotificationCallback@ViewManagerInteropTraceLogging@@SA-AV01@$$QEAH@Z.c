/*
 * XREFs of ??$Start@H@PdcNotificationCallback@ViewManagerInteropTraceLogging@@SA?AV01@$$QEAH@Z @ 0x180110030
 * Callers:
 *     _lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator() @ 0x18010FD50 (_lambda_9d1d8d58343981d67c57f7f39dcd56a0_--operator().c)
 * Callees:
 *     ?StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z @ 0x18010F74C (-StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

ViewManagerInteropTraceLogging::PdcNotificationCallback *__fastcall ViewManagerInteropTraceLogging::PdcNotificationCallback::Start<int>(
        ViewManagerInteropTraceLogging::PdcNotificationCallback *this,
        int *a2)
{
  char *v2; // rbx
  _QWORD *v5; // rcx

  *((_QWORD *)this + 2) = this;
  v2 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  v5 = (_QWORD *)((char *)this + 136);
  v2[4] = 0;
  v2[64] = 0;
  *((_DWORD *)v2 + 10) = 0;
  *((_QWORD *)v2 + 6) = "PdcNotificationCallback";
  *((_QWORD *)v2 + 7) = 0LL;
  *((_QWORD *)v2 + 9) = 1LL;
  v5[18] = 0LL;
  v5[19] = 0LL;
  memset(v5, 0, 0x90uLL);
  *((_QWORD *)v2 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  ViewManagerInteropTraceLogging::PdcNotificationCallback::StartActivity(this, *a2);
  return this;
}
