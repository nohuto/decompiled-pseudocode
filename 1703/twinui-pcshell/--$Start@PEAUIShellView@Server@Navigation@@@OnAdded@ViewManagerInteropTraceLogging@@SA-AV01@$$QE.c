/*
 * XREFs of ??$Start@PEAUIShellView@Server@Navigation@@@OnAdded@ViewManagerInteropTraceLogging@@SA?AV01@$$QEAPEAUIShellView@Server@Navigation@@@Z @ 0x18010DC60
 * Callers:
 *     ?OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18010B4E0 (-OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?StartActivity@OnAdded@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z @ 0x18010501C (-StartActivity@OnAdded@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

ViewManagerInteropTraceLogging::OnAdded *__fastcall ViewManagerInteropTraceLogging::OnAdded::Start<Navigation::Server::IShellView *>(
        ViewManagerInteropTraceLogging::OnAdded *this,
        void **a2)
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
  *((_QWORD *)v2 + 6) = "OnAdded";
  *((_QWORD *)v2 + 7) = 0LL;
  *((_QWORD *)v2 + 9) = 1LL;
  v5[18] = 0LL;
  v5[19] = 0LL;
  memset(v5, 0, 0x90uLL);
  *((_QWORD *)v2 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnAdded::`vftable';
  ViewManagerInteropTraceLogging::OnAdded::StartActivity(this, *a2);
  return this;
}
