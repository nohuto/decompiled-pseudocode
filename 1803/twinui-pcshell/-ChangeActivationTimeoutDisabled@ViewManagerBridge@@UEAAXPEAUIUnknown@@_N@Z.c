/*
 * XREFs of ?ChangeActivationTimeoutDisabled@ViewManagerBridge@@UEAAXPEAUIUnknown@@_N@Z @ 0x1800561A0
 * Callers:
 *     ?SetActivationTimeoutPolicy@ViewWrapperBase@@UEAAJW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180053360 (-SetActivationTimeoutPolicy@ViewWrapperBase@@UEAAJW4ActivationTimeoutPolicy@ViewManagerInterop@S.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::ChangeActivationTimeoutDisabled(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        char a3)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 145) )
  {
    v8 = 0LL;
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v8);
    LOBYTE(v4) = a3;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 712LL))(v8, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x128,
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
