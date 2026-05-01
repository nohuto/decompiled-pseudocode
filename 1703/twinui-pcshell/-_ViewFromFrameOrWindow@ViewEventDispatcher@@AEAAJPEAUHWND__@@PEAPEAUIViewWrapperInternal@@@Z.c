/*
 * XREFs of ?_ViewFromFrameOrWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@PEAPEAUIViewWrapperInternal@@@Z @ 0x1800F8390
 * Callers:
 *     ?_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1800F819C (-_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_ViewFromFrameOrWindow(
        ViewEventDispatcher *this,
        HWND a2,
        struct IViewWrapperInternal **a3)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 result; // rax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct IViewWrapperInternal **); // rcx
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  v7 = 0LL;
  if ( *((_QWORD *)this + 38) )
  {
    while ( 1 )
    {
      v8 = *((_QWORD *)this + 37);
      if ( (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 8 * v7) + 624LL))(*(_QWORD *)(v8 + 8 * v7)) == a2
        || (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 8 * v7) + 632LL))(*(_QWORD *)(v8 + 8 * v7)) == a2 )
      {
        break;
      }
      if ( (unsigned __int64)++v7 >= *((_QWORD *)this + 38) )
        goto LABEL_7;
    }
    v6 = v7;
    result = 0LL;
  }
  else
  {
LABEL_7:
    result = 2147647531LL;
  }
  if ( (int)result >= 0 )
  {
    v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IViewWrapperInternal **))(*((_QWORD *)this + 37) + 8 * v6);
    v11 = (**v10)(v10, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, a3);
    v12 = v11;
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAE2,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v11);
    return v12;
  }
  return result;
}
