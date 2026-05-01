/*
 * XREFs of ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x18007E4E0
 * Callers:
 *     ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x18007E35C (-InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z.c)
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18007E8B0 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18005D360 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::GetViewId(CWin32ApplicationView *this, unsigned __int16 **a2)
{
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  void *v6; // rcx
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  memset(v8, 0, 24);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 23) + 24LL))(*((_QWORD *)this + 23));
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         (__int64)v8,
         (__int64)L"W32:%p",
         v3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = 0LL;
    *a2 = (unsigned __int16 *)v8[0];
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x87,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v4);
    v6 = (void *)v8[0];
  }
  if ( v6 )
    CoTaskMemFree(v6);
  return v5;
}
