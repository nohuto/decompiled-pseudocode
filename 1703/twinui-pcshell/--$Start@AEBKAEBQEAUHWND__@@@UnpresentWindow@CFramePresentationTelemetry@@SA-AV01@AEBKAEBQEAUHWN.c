/*
 * XREFs of ??$Start@AEBKAEBQEAUHWND__@@@UnpresentWindow@CFramePresentationTelemetry@@SA?AV01@AEBKAEBQEAUHWND__@@@Z @ 0x180069D98
 * Callers:
 *     ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x180066920 (-UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z @ 0x18006D824 (-StartActivity@UnpresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

CFramePresentationTelemetry::UnpresentWindow *__fastcall CFramePresentationTelemetry::UnpresentWindow::Start<unsigned long const &,HWND__ * const &>(
        CFramePresentationTelemetry::UnpresentWindow *this,
        unsigned int *a2,
        HWND *a3)
{
  char *v3; // rbx
  _QWORD *v7; // rcx

  *((_QWORD *)this + 2) = this;
  v3 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  v7 = (_QWORD *)((char *)this + 136);
  v3[4] = 0;
  v3[64] = 0;
  *((_DWORD *)v3 + 10) = 0;
  *((_QWORD *)v3 + 6) = "UnpresentWindow";
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 9) = 1LL;
  v7[18] = 0LL;
  v7[19] = 0LL;
  memset(v7, 0, 0x90uLL);
  *((_QWORD *)v3 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
  CFramePresentationTelemetry::UnpresentWindow::StartActivity(this, *a2, *a3);
  return this;
}
