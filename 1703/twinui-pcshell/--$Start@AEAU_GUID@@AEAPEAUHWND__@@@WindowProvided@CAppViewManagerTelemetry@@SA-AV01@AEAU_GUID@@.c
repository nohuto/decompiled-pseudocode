/*
 * XREFs of ??$Start@AEAU_GUID@@AEAPEAUHWND__@@@WindowProvided@CAppViewManagerTelemetry@@SA?AV01@AEAU_GUID@@AEAPEAUHWND__@@@Z @ 0x180044364
 * Callers:
 *     ?WindowProvided@CAppViewManager@@UEAAJU_GUID@@PEAUHWND__@@@Z @ 0x18003EF80 (-WindowProvided@CAppViewManager@@UEAAJU_GUID@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?StartActivity@WindowProvided@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@PEAUHWND__@@@Z @ 0x18004627C (-StartActivity@WindowProvided@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@PEAUHWND__@@@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

CAppViewManagerTelemetry::WindowProvided *__fastcall CAppViewManagerTelemetry::WindowProvided::Start<_GUID &,HWND__ * &>(
        CAppViewManagerTelemetry::WindowProvided *this,
        struct _GUID *a2,
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
  *((_QWORD *)v3 + 6) = "WindowProvided";
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 9) = 1LL;
  v7[18] = 0LL;
  v7[19] = 0LL;
  memset(v7, 0, 0x90uLL);
  *((_QWORD *)v3 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &CAppViewManagerTelemetry::WindowProvided::`vftable';
  CAppViewManagerTelemetry::WindowProvided::StartActivity(this, a2, *a3);
  return this;
}
