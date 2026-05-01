/*
 * XREFs of ??$Start@AEAIAEAIAEAW4ViewActivationFlags@Navigation@@@OnRequestNavigateToView@ViewManagerInteropTraceLogging@@SA?AV01@AEAI0AEAW4ViewActivationFlags@Navigation@@@Z @ 0x18010DE88
 * Callers:
 *     ?OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBlob@@@Z @ 0x18010BAD0 (-OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBl.c)
 * Callees:
 *     ?StartActivity@OnRequestNavigateToView@ViewManagerInteropTraceLogging@@QEAAXKKK@Z @ 0x180105ABC (-StartActivity@OnRequestNavigateToView@ViewManagerInteropTraceLogging@@QEAAXKKK@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

ViewManagerInteropTraceLogging::OnRequestNavigateToView *__fastcall ViewManagerInteropTraceLogging::OnRequestNavigateToView::Start<unsigned int &,unsigned int &,enum Navigation::ViewActivationFlags &>(
        ViewManagerInteropTraceLogging::OnRequestNavigateToView *this,
        int *a2,
        int *a3,
        int *a4)
{
  char *v4; // rbx
  _QWORD *v8; // rcx

  *((_QWORD *)this + 2) = this;
  v4 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  v8 = (_QWORD *)((char *)this + 136);
  v4[4] = 0;
  v4[64] = 0;
  *((_DWORD *)v4 + 10) = 0;
  *((_QWORD *)v4 + 6) = "OnRequestNavigateToView";
  *((_QWORD *)v4 + 7) = 0LL;
  *((_QWORD *)v4 + 9) = 1LL;
  v8[18] = 0LL;
  v8[19] = 0LL;
  memset(v8, 0, 0x90uLL);
  *((_QWORD *)v4 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnRequestNavigateToView::`vftable';
  ViewManagerInteropTraceLogging::OnRequestNavigateToView::StartActivity(this, *a2, *a3, *a4);
  return this;
}
