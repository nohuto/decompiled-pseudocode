/*
 * XREFs of ?VirtualDesktopDestroyed@XamlAllUpViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180210EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?ViewLoaded@IXamlSwitcherWindowInteractionEvents@@UE$AAAXXZ @ 0x180216160 (-ViewLoaded@IXamlSwitcherWindowInteractionEvents@@UE$AAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::VirtualDesktopDestroyed(
        XamlAllUpViewHost *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rdx
  const char *v6; // r9
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 120) & -(__int64)(this != (XamlAllUpViewHost *)144));
    v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
    *((_BYTE *)this + 556) = 0;
    IXamlSwitcherWindowInteractionEvents::ViewLoaded(*((_QWORD *)this + 4), v5);
    if ( v8 >= 0 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x196,
                           (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
                           v6);
  }
  return result;
}
