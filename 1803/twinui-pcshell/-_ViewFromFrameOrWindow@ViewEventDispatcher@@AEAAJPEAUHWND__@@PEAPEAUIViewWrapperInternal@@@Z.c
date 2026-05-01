/*
 * XREFs of ?_ViewFromFrameOrWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@PEAPEAUIViewWrapperInternal@@@Z @ 0x180032BA0
 * Callers:
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x180034860 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_ViewFromFrameOrWindow(
        ViewEventDispatcher *this,
        HWND a2,
        struct IViewWrapperInternal **a3)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r14
  ViewWrapperBase *v9; // rcx
  HWND (__fastcall *v10)(ViewWrapperBase *__hidden); // rax
  HWND v11; // rax
  ViewWrapperBase *v12; // rcx
  HWND (__fastcall *v13)(ViewWrapperBase *__hidden); // rax
  HWND v14; // rax
  __int64 result; // rax
  __int64 (__fastcall ***v16)(_QWORD, GUID *, struct IViewWrapperInternal **); // rcx
  int v17; // eax
  unsigned int v18; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  v7 = 0LL;
  if ( *((_QWORD *)this + 47) )
  {
    while ( 1 )
    {
      v8 = *((_QWORD *)this + 46);
      v9 = *(ViewWrapperBase **)(v8 + 8 * v7);
      v10 = *(HWND (__fastcall **)(ViewWrapperBase *__hidden))(*(_QWORD *)v9 + 648LL);
      v11 = v10 == ViewWrapperBase::GetWindow ? (HWND)*((_QWORD *)v9 + 32) : v10(v9);
      if ( v11 == a2 )
        break;
      v12 = *(ViewWrapperBase **)(v8 + 8 * v7);
      v13 = *(HWND (__fastcall **)(ViewWrapperBase *__hidden))(*(_QWORD *)v12 + 656LL);
      v14 = v13 == ViewWrapperBase::GetFrameWindow ? (HWND)*((_QWORD *)v12 + 33) : v13(v12);
      if ( v14 == a2 )
        break;
      if ( (unsigned __int64)++v7 >= *((_QWORD *)this + 47) )
        goto LABEL_9;
    }
    v6 = v7;
    result = 0LL;
  }
  else
  {
LABEL_9:
    result = 2147647531LL;
  }
  if ( (int)result >= 0 )
  {
    v16 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IViewWrapperInternal **))(*((_QWORD *)this + 46) + 8 * v6);
    v17 = (**v16)(v16, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, a3);
    v18 = v17;
    if ( v17 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9C1,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v17,
        -2);
    return v18;
  }
  return result;
}
