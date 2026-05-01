/*
 * XREFs of ??$Start@PEAUIShellView@Server@Navigation@@PEBG@GetViewClientExtensionMapPropertyAsBool@ViewManagerInteropTraceLogging@@SA?AV01@$$QEAPEAUIShellView@Server@Navigation@@$$QEAPEBG@Z @ 0x18010D718
 * Callers:
 *     ?GetViewClientExtensionMapPropertyAsBool@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAE@Z @ 0x180109FD0 (-GetViewClientExtensionMapPropertyAsBool@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PE.c)
 * Callees:
 *     ?StartActivity@GetViewClientExtensionMapPropertyAsBool@ViewManagerInteropTraceLogging@@QEAAXPEAXPEBG@Z @ 0x180103ABC (-StartActivity@GetViewClientExtensionMapPropertyAsBool@ViewManagerInteropTraceLogging@@QEAAXPEAX.c)
 *     memset @ 0x180194E50 (memset.c)
 */

ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsBool *__fastcall ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsBool::Start<Navigation::Server::IShellView *,unsigned short const *>(
        ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsBool *this,
        void **a2,
        const unsigned __int16 **a3)
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
  *((_QWORD *)v3 + 6) = "GetViewClientExtensionMapPropertyAsBool";
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 9) = 1LL;
  v7[18] = 0LL;
  v7[19] = 0LL;
  memset(v7, 0, 0x90uLL);
  *((_QWORD *)v3 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsBool::`vftable';
  ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsBool::StartActivity(this, *a2, *a3);
  return this;
}
