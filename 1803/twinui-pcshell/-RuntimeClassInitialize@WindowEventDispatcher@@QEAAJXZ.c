/*
 * XREFs of ?RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ @ 0x1801D84CC
 * Callers:
 *     ??$MakeAndInitialize@VWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801D187C (--$MakeAndInitialize@VWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     _Init_thread_footer @ 0x180098368 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800983C8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010A094 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIWindowManagerBridge@@$$QEAPEAVWindowEventDispatcher@@@Z @ 0x1801D194C (--$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@De.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1802FF250 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1802FF2BC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall WindowEventDispatcher::RuntimeClassInitialize(void **this)
{
  int v2; // eax
  CCriticalFailureHandler *v3; // rcx
  void *v4; // rcx
  int v5; // eax
  CCriticalFailureHandler *v6; // rcx
  const char *v7; // r9
  __int64 result; // rax
  unsigned __int64 *v9; // [rsp+20h] [rbp-28h]
  unsigned __int64 *v10; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  WindowEventDispatcher *v12; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    if ( dword_180439B18 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 4LL) )
    {
      Init_thread_header(&dword_180439B18);
      if ( dword_180439B18 == -1 )
      {
        xmmword_180439680 = SID_WindowEventDispatcher;
        qword_180439690 = 0LL;
        qword_180439698 = 0LL;
        xmmword_1804396A0 = (__int128)SID_ViewEventDispatcher;
        qword_1804396B0 = 0LL;
        qword_1804396B8 = 0LL;
        xmmword_1804396C0 = (__int128)GUID_998b4eac_6ac8_4db4_a28d_cf69c0d23e4b;
        qword_1804396D0 = 0LL;
        qword_1804396D8 = 0LL;
        xmmword_1804396E0 = xmmword_1803A99B8;
        qword_1804396F0 = 0LL;
        qword_1804396F8 = 0LL;
        xmmword_180439700 = (__int128)SID_ForegroundViewManager;
        qword_180439710 = 0LL;
        qword_180439718 = 0LL;
        Init_thread_footer(&dword_180439B18);
      }
    }
    v2 = CImmersiveShellComponent::RegisterServiceInformation(
           (CImmersiveShellComponent *)(this + 16),
           (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_180439680,
           5LL);
    LODWORD(v12) = v2;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v3, (int *)&v12);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v2 = (int)v12;
    }
    if ( v2 < 0 && v2 != -2147024882 && v2 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v3,
        (int *)&v12,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x3Du,
        v9,
        v10);
      v2 = (int)v12;
    }
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        62LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v2);
    v12 = (WindowEventDispatcher *)this;
    v4 = this[39];
    this[39] = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = Microsoft::WRL::Details::MakeAndInitialize<WindowManagerBridge,IWindowManagerBridge,WindowEventDispatcher *>(
           this + 39,
           &v12);
    LODWORD(v12) = v5;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v6, (int *)&v12);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      v5 = (int)v12;
    }
    if ( v5 < 0 && v5 != -2147024882 && v5 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v6,
        (int *)&v12,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        0x43u,
        v9,
        v10);
      v5 = (int)v12;
    }
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        68LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x48,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v7);
  }
  return result;
}
