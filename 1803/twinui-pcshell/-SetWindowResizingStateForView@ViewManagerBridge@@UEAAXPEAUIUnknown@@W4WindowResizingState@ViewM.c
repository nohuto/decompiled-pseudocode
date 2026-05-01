/*
 * XREFs of ?SetWindowResizingStateForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@W4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180056110
 * Callers:
 *     ?put_WindowResizingState@ViewWrapperBase@@UEAAJW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180050A50 (-put_WindowResizingState@ViewWrapperBase@@UEAAJW4WindowResizingState@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetWindowResizingStateForView(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 145) )
  {
    v8 = 0LL;
    (**a2)(a2, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, &v8);
    LOBYTE(v4) = a3 == 1;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 768LL))(v8, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x157,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v5,
        -2);
    v6 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
}
