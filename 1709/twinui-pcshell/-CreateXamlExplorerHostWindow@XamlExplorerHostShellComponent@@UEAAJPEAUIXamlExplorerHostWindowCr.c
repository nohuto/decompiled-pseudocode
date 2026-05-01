/*
 * XREFs of ?CreateXamlExplorerHostWindow@XamlExplorerHostShellComponent@@UEAAJPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@AEBU_GUID@@PEAPEAX@Z @ 0x180146600
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateXamlExplorerHostWindow@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@AEBU_GUID@@PEAPEAX@Z @ 0x180148338 (-CreateXamlExplorerHostWindow@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallbac.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlExplorerHostShellComponent::CreateXamlExplorerHostWindow(
        XamlExplorerHostShellComponent *this,
        struct IXamlExplorerHostWindowCreatedCallback *a2,
        struct tagRECT *a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v6; // rbx
  int v7; // eax
  const char *v8; // r9
  unsigned int v9; // ebx
  void **v10; // rcx
  __int64 result; // rax
  void **v12; // rcx
  __int128 v13; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    v6 = a5;
    *a5 = 0LL;
    a5 = 0LL;
    v13 = (__int128)*a3;
    XamlExplorerHost::CreateXamlExplorerHostWindow(
      *((_QWORD *)this + 9),
      (_DWORD)a2,
      (unsigned int)&v13,
      (_DWORD)a4,
      (__int64)&a5);
    v7 = (*(__int64 (__fastcall **)(void **, const struct _GUID *, void **))*a5)(a5, a4, v6);
    v9 = v7;
    if ( v7 >= 0 )
    {
      v12 = a5;
      if ( a5 )
      {
        a5 = 0LL;
        (*((void (__fastcall **)(void **))*v12 + 2))(v12);
      }
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x68,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
        (const char *)(unsigned int)v7);
      v10 = a5;
      if ( a5 )
      {
        a5 = 0LL;
        (*((void (__fastcall **)(void **))*v10 + 2))(v10);
      }
      result = v9;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6B,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
                           v8);
  }
  return result;
}
