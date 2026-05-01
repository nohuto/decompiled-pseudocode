/*
 * XREFs of ??$Start@AEAI@OnRequestConsolidateView@ViewManagerInteropTraceLogging@@SA?AV01@AEAI@Z @ 0x18010E28C
 * Callers:
 *     ?OnRequestConsolidateView@ViewManagerBridge@@UEAAJI@Z @ 0x18010BFB0 (-OnRequestConsolidateView@ViewManagerBridge@@UEAAJI@Z.c)
 * Callees:
 *     ?StartActivity@OnRequestConsolidateView@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x180107B1C (-StartActivity@OnRequestConsolidateView@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

ViewManagerInteropTraceLogging::OnRequestConsolidateView *__fastcall ViewManagerInteropTraceLogging::OnRequestConsolidateView::Start<unsigned int &>(
        ViewManagerInteropTraceLogging::OnRequestConsolidateView *this,
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
  *((_QWORD *)v2 + 6) = "OnRequestConsolidateView";
  *((_QWORD *)v2 + 7) = 0LL;
  *((_QWORD *)v2 + 9) = 1LL;
  v5[18] = 0LL;
  v5[19] = 0LL;
  memset(v5, 0, 0x90uLL);
  *((_QWORD *)v2 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnRequestConsolidateView::`vftable';
  ViewManagerInteropTraceLogging::OnRequestConsolidateView::StartActivity(this, *a2);
  return this;
}
