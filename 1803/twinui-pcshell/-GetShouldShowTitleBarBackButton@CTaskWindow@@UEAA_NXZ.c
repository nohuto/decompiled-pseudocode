/*
 * XREFs of ?GetShouldShowTitleBarBackButton@CTaskWindow@@UEAA_NXZ @ 0x180047AE0
 * Callers:
 *     ?GetShouldShowTitleBarBackButton@CImmersiveApp@@UEAA_NXZ @ 0x18004C5B0 (-GetShouldShowTitleBarBackButton@CImmersiveApp@@UEAA_NXZ.c)
 * Callees:
 *     ?GetPropertyAsInt@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAH@Z @ 0x1800507E0 (-GetPropertyAsInt@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAH@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CTaskWindow::GetShouldShowTitleBarBackButton(CTaskWindow *this)
{
  char v1; // bl
  ViewWrapperBase *v2; // rdi
  HRESULT v3; // eax
  __int64 (__fastcall *v4)(ViewWrapperBase *__hidden, HSTRING, int *); // rax
  int PropertyAsInt; // eax
  int v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+28h] [rbp-40h]
  HSTRING_HEADER v9; // [rsp+30h] [rbp-38h] BYREF
  HSTRING v10; // [rsp+48h] [rbp-20h] BYREF

  v8 = -2LL;
  v1 = 0;
  v2 = (ViewWrapperBase *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    v10 = 0LL;
    v3 = WindowsCreateStringReference(L"BackVisible", 0xBu, &v9, &v10);
    if ( v3 < 0 )
    {
      RaiseException(v3, 1u, 0, 0LL);
      JUMPOUT(0x1800CB45ELL);
    }
    v4 = *(__int64 (__fastcall **)(ViewWrapperBase *__hidden, HSTRING, int *))(*(_QWORD *)v2 + 352LL);
    if ( v4 == ViewWrapperBase::GetPropertyAsInt )
      PropertyAsInt = ViewWrapperBase::GetPropertyAsInt(v2, v10, &v7);
    else
      PropertyAsInt = v4(v2, v10, &v7);
    if ( PropertyAsInt >= 0 )
      return v7 == 0;
  }
  return v1;
}
