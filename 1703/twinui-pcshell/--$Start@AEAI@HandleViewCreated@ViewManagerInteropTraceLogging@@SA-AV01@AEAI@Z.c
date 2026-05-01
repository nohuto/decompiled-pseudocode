/*
 * XREFs of ??$Start@AEAI@HandleViewCreated@ViewManagerInteropTraceLogging@@SA?AV01@AEAI@Z @ 0x1800FE744
 * Callers:
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x1800F32D4 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?StartActivity@HandleViewCreated@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x1800EEE1C (-StartActivity@HandleViewCreated@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

ViewManagerInteropTraceLogging::HandleViewCreated *__fastcall ViewManagerInteropTraceLogging::HandleViewCreated::Start<unsigned int &>(
        ViewManagerInteropTraceLogging::HandleViewCreated *this,
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
  *((_QWORD *)v2 + 6) = "HandleViewCreated";
  *((_QWORD *)v2 + 7) = 0LL;
  *((_QWORD *)v2 + 9) = 1LL;
  v5[18] = 0LL;
  v5[19] = 0LL;
  memset(v5, 0, 0x90uLL);
  *((_QWORD *)v2 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::HandleViewCreated::`vftable';
  ViewManagerInteropTraceLogging::HandleViewCreated::StartActivity(this, *a2);
  return this;
}
