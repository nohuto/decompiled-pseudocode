/*
 * XREFs of ?GetFrameworkViewType@CImmersiveApp@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1800529D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180058298 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@PEA_K@Z @ 0x180059954 (-_GetWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEAPEAUITaskWi.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveApp::GetFrameworkViewType(CImmersiveApp *this, enum FRAMEWORK_VIEW_TYPE *a2)
{
  HWND ApplicationWindow; // rax
  unsigned __int64 v5; // rbx
  HRESULT v6; // eax
  int v7; // eax
  unsigned __int64 v8; // rcx
  struct ITaskWindow *v9; // rcx
  unsigned __int64 v11; // [rsp+20h] [rbp-50h] BYREF
  struct ITaskWindow *v12; // [rsp+28h] [rbp-48h] BYREF
  int v13; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF

  v14 = -2LL;
  *(_DWORD *)a2 = 6;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp *)((char *)this + 144));
  if ( ApplicationWindow )
  {
    v12 = 0LL;
    *(_OWORD *)&hstringHeader.Reserved.Reserved1 = (unsigned __int64)ApplicationWindow;
    if ( CImmersiveApp::CImmersiveWindowCollection::_GetWindow(
           (CImmersiveApp *)((char *)this + 144),
           (const struct CTaskWindowFinder *)&hstringHeader,
           &v12,
           &v11) >= 0 )
    {
      v11 = 0LL;
      if ( (*(int (__fastcall **)(struct ITaskWindow *, GUID *, unsigned __int64 *))(*(_QWORD *)v12 + 40LL))(
             v12,
             &GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e,
             &v11) >= 0 )
      {
        v5 = v11;
        string = 0LL;
        v6 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
        if ( v6 < 0 )
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
        v7 = (*(__int64 (__fastcall **)(unsigned __int64, HSTRING, int *))(*(_QWORD *)v5 + 360LL))(v5, string, &v13);
        string = 0LL;
        if ( v7 >= 0 )
          *(_DWORD *)a2 = v13;
      }
      v8 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
