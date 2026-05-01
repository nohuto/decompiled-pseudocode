/*
 * XREFs of ??$Start@AEBKAEBQEAUHWND__@@AEBQEAU1@@PresentWindow@CFramePresentationTelemetry@@SA?AV01@AEBKAEBQEAUHWND__@@1@Z @ 0x180069994
 * Callers:
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x1800663F0 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?StartActivity@PresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@0@Z @ 0x18006D9A4 (-StartActivity@PresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@0@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

CFramePresentationTelemetry::PresentWindow *__fastcall CFramePresentationTelemetry::PresentWindow::Start<unsigned long const &,HWND__ * const &,HWND__ * const &>(
        CFramePresentationTelemetry::PresentWindow *this,
        unsigned int *a2,
        HWND *a3,
        HWND *a4)
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
  *((_QWORD *)v4 + 6) = "PresentWindow";
  *((_QWORD *)v4 + 7) = 0LL;
  *((_QWORD *)v4 + 9) = 1LL;
  v8[18] = 0LL;
  v8[19] = 0LL;
  memset(v8, 0, 0x90uLL);
  *((_QWORD *)v4 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &CFramePresentationTelemetry::PresentWindow::`vftable';
  CFramePresentationTelemetry::PresentWindow::StartActivity(this, *a2, *a3, *a4);
  return this;
}
