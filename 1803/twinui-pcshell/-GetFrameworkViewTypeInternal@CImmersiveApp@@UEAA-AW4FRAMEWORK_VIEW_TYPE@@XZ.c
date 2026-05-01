/*
 * XREFs of ?GetFrameworkViewTypeInternal@CImmersiveApp@@UEAA?AW4FRAMEWORK_VIEW_TYPE@@XZ @ 0x18004BD00
 * Callers:
 *     ?GetFrameworkViewType@CImmersiveApp@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18004C370 (-GetFrameworkViewType@CImmersiveApp@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z.c)
 * Callees:
 *     ?GetView@CTaskWindow@@UEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180047DD0 (-GetView@CTaskWindow@@UEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B2C0 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     ?GetPropertyAsUInt@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAI@Z @ 0x180050930 (-GetPropertyAsUInt@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::GetFrameworkViewTypeInternal(CImmersiveApp *a1)
{
  unsigned int v1; // ebx
  __int64 (__fastcall *v2)(CImmersiveApp *, int, GUID *, CTaskWindow **); // rax
  int WindowsInternal; // eax
  __int64 (__fastcall *v4)(CTaskWindow *, const struct _GUID *, void **); // rax
  int View; // eax
  ViewWrapperBase *v6; // rdi
  HRESULT v7; // eax
  __int64 (__fastcall *v8)(ViewWrapperBase *__hidden, HSTRING, unsigned int *); // rax
  int PropertyAsUInt; // eax
  ViewWrapperBase *v10; // rcx
  CTaskWindow *v11; // rcx
  unsigned int v13; // [rsp+30h] [rbp-50h] BYREF
  ViewWrapperBase *v14; // [rsp+38h] [rbp-48h] BYREF
  CTaskWindow *v15[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF

  v15[1] = (CTaskWindow *)-2LL;
  v1 = 6;
  v15[0] = 0LL;
  v2 = *(__int64 (__fastcall **)(CImmersiveApp *, int, GUID *, CTaskWindow **))(*(_QWORD *)a1 + 352LL);
  if ( (char *)v2 == (char *)CImmersiveApp::GetWindowsInternal )
    WindowsInternal = CImmersiveApp::GetWindowsInternal(a1, 2, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, v15);
  else
    WindowsInternal = v2(a1, 2, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, v15);
  if ( WindowsInternal >= 0 )
  {
    v14 = 0LL;
    v4 = *(__int64 (__fastcall **)(CTaskWindow *, const struct _GUID *, void **))(*(_QWORD *)v15[0] + 40LL);
    if ( v4 == CTaskWindow::GetView )
      View = CTaskWindow::GetView(v15[0], &GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e, (void **)&v14);
    else
      View = v4(v15[0], &GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e, (void **)&v14);
    if ( View >= 0 )
    {
      v6 = v14;
      string = 0LL;
      v7 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
      if ( v7 < 0 )
      {
        RaiseException(v7, 1u, 0, 0LL);
        JUMPOUT(0x1800CBF80LL);
      }
      v8 = *(__int64 (__fastcall **)(ViewWrapperBase *__hidden, HSTRING, unsigned int *))(*(_QWORD *)v6 + 360LL);
      if ( v8 == ViewWrapperBase::GetPropertyAsUInt )
        PropertyAsUInt = ViewWrapperBase::GetPropertyAsUInt(v6, string, &v13);
      else
        PropertyAsUInt = v8(v6, string, &v13);
      if ( PropertyAsUInt >= 0 )
        v1 = v13;
    }
    v10 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  v11 = v15[0];
  if ( v15[0] )
  {
    v15[0] = 0LL;
    (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v1;
}
