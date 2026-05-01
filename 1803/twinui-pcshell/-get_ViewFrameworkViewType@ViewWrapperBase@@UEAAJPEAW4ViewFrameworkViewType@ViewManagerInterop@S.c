/*
 * XREFs of ?get_ViewFrameworkViewType@ViewWrapperBase@@UEAAJPEAW4ViewFrameworkViewType@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801E7D20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewWrapperBase::get_ViewFrameworkViewType(
        ViewWrapperBase *this,
        enum Windows::Internal::Shell::ViewManagerInterop::ViewFrameworkViewType *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-38h] BYREF
  HSTRING string; // [rsp+28h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = 0;
  *(_DWORD *)a2 = 6;
  if ( WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v4 = (*(__int64 (__fastcall **)(ViewWrapperBase *, HSTRING, int *))(*(_QWORD *)this + 360LL))(this, string, &v7);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *(_DWORD *)a2 = v7;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x695,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
