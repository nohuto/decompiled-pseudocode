/*
 * XREFs of ?RuntimeClassInitialize@UAPViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x18005AEB8
 * Callers:
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGAEAY0DF@$$CBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEAPEAVViewEventDispatcher@@@Z @ 0x180094654 (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBG_ea_180094654.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIAEAPEAUIUnknown@@PEBGAEAY0DF@$$CBGPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAIAEAPEAUIUnknown@@$$QEAPEBGAEAY0DF@$$CBG$$QEAPEAVViewEventDispatcher@@@Z @ 0x1801C6D18 (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIAEAPEAUIUnknown@@PEBGAEAY0DF@$$.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGAEAPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEAPEAUIUnknown@@$$QEAPEBG3AEAPEAVViewEventDispatcher@@@Z @ 0x1801C6EBC (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGAEAPEAVVi.c)
 * Callees:
 *     ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x18004EB20 (-RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 *     ?GetSplashScreenDismissed@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEA_N@Z @ 0x180057F20 (-GetSplashScreenDismissed@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UAPViewWrapper::RuntimeClassInitialize(
        UAPViewWrapper *this,
        int a2,
        struct IUnknown *a3,
        const unsigned __int16 *a4,
        unsigned __int16 *a5,
        ViewManagerBridge **a6)
{
  struct ViewEventDispatcher *v6; // rsi
  ViewManagerBridge *v11; // rcx
  __int64 (__fastcall *v12)(ViewManagerBridge *, struct IUnknown *, bool *); // rax
  int SplashScreenDismissed; // eax
  int v14; // eax
  unsigned int v15; // ebx
  int v17; // [rsp+20h] [rbp-18h]
  int v18; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (struct ViewEventDispatcher *)a6;
  v11 = a6[65];
  v12 = *(__int64 (__fastcall **)(ViewManagerBridge *, struct IUnknown *, bool *))(*(_QWORD *)v11 + 264LL);
  if ( v12 == ViewManagerBridge::GetSplashScreenDismissed )
    SplashScreenDismissed = ViewManagerBridge::GetSplashScreenDismissed(v11, a3, (bool *)&a6);
  else
    SplashScreenDismissed = v12(v11, a3, (bool *)&a6);
  if ( SplashScreenDismissed < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x20,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
      (const char *)(unsigned int)SplashScreenDismissed,
      v17);
  else
    *((_BYTE *)this + 564) = (_BYTE)a6 != 0;
  v14 = ViewWrapperBase::RuntimeClassInitialize((UAPViewWrapper *)((char *)this + 8), a2, a3, a4, a5, v6);
  v15 = v14;
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
      (const char *)(unsigned int)v14,
      v18);
  return v15;
}
