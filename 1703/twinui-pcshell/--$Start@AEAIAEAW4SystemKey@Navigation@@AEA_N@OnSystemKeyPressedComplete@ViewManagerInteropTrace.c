/*
 * XREFs of ??$Start@AEAIAEAW4SystemKey@Navigation@@AEA_N@OnSystemKeyPressedComplete@ViewManagerInteropTraceLogging@@SA?AV01@AEAIAEAW4SystemKey@Navigation@@AEA_N@Z @ 0x18010E0F0
 * Callers:
 *     ?OnSystemKeyPressedComplete@ViewManagerBridge@@UEAAJIW4SystemKey@Navigation@@_N@Z @ 0x18010BE30 (-OnSystemKeyPressedComplete@ViewManagerBridge@@UEAAJIW4SystemKey@Navigation@@_N@Z.c)
 * Callees:
 *     ?StartActivity@OnSystemKeyPressedComplete@ViewManagerInteropTraceLogging@@QEAAXKK_N@Z @ 0x180106AEC (-StartActivity@OnSystemKeyPressedComplete@ViewManagerInteropTraceLogging@@QEAAXKK_N@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete *__fastcall ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::Start<unsigned int &,enum Navigation::SystemKey &,bool &>(
        ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete *this,
        int *a2,
        int *a3,
        char *a4)
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
  *((_QWORD *)v4 + 6) = "OnSystemKeyPressedComplete";
  *((_QWORD *)v4 + 7) = 0LL;
  *((_QWORD *)v4 + 9) = 1LL;
  v8[18] = 0LL;
  v8[19] = 0LL;
  memset(v8, 0, 0x90uLL);
  *((_QWORD *)v4 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::`vftable';
  ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::StartActivity(this, *a2, *a3, *a4);
  return this;
}
