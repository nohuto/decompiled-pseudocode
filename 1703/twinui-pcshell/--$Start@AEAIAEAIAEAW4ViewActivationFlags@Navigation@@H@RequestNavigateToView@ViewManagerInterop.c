/*
 * XREFs of ??$Start@AEAIAEAIAEAW4ViewActivationFlags@Navigation@@H@RequestNavigateToView@ViewManagerInteropTraceLogging@@SA?AV01@AEAI0AEAW4ViewActivationFlags@Navigation@@$$QEAH@Z @ 0x1800FE338
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800F189C (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     ?StartActivity@RequestNavigateToView@ViewManagerInteropTraceLogging@@QEAAXKKKH@Z @ 0x1800EE89C (-StartActivity@RequestNavigateToView@ViewManagerInteropTraceLogging@@QEAAXKKKH@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

ViewManagerInteropTraceLogging::RequestNavigateToView *__fastcall ViewManagerInteropTraceLogging::RequestNavigateToView::Start<unsigned int &,unsigned int &,enum Navigation::ViewActivationFlags &,int>(
        ViewManagerInteropTraceLogging::RequestNavigateToView *this,
        int *a2,
        int *a3,
        int *a4,
        _DWORD *a5)
{
  char *v5; // rbx
  _QWORD *v9; // rcx

  *((_QWORD *)this + 2) = this;
  v5 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  v9 = (_QWORD *)((char *)this + 136);
  v5[4] = 0;
  v5[64] = 0;
  *((_DWORD *)v5 + 10) = 0;
  *((_QWORD *)v5 + 6) = "RequestNavigateToView";
  *((_QWORD *)v5 + 7) = 0LL;
  *((_QWORD *)v5 + 9) = 1LL;
  v9[18] = 0LL;
  v9[19] = 0LL;
  memset(v9, 0, 0x90uLL);
  *((_QWORD *)v5 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RequestNavigateToView::`vftable';
  ViewManagerInteropTraceLogging::RequestNavigateToView::StartActivity(this, *a2, *a3, *a4, *a5);
  return this;
}
