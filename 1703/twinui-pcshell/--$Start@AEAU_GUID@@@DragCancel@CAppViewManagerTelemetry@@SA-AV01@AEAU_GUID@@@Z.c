/*
 * XREFs of ??$Start@AEAU_GUID@@@DragCancel@CAppViewManagerTelemetry@@SA?AV01@AEAU_GUID@@@Z @ 0x1800442A8
 * Callers:
 *     ?DragCancel@CAppViewManager@@UEAAJU_GUID@@@Z @ 0x18003EEE0 (-DragCancel@CAppViewManager@@UEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?StartActivity@DragCancel@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@@Z @ 0x180046400 (-StartActivity@DragCancel@CAppViewManagerTelemetry@@QEAAXAEBU_GUID@@@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

CAppViewManagerTelemetry::DragCancel *__fastcall CAppViewManagerTelemetry::DragCancel::Start<_GUID &>(
        CAppViewManagerTelemetry::DragCancel *this,
        struct _GUID *a2)
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
  *((_QWORD *)v2 + 6) = "DragCancel";
  *((_QWORD *)v2 + 7) = 0LL;
  *((_QWORD *)v2 + 9) = 1LL;
  v5[18] = 0LL;
  v5[19] = 0LL;
  memset(v5, 0, 0x90uLL);
  *((_QWORD *)v2 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &CAppViewManagerTelemetry::DragCancel::`vftable';
  CAppViewManagerTelemetry::DragCancel::StartActivity(this, a2);
  return this;
}
