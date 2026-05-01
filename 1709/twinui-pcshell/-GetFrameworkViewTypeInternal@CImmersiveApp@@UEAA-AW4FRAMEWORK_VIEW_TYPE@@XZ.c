/*
 * XREFs of ?GetFrameworkViewTypeInternal@CImmersiveApp@@UEAA?AW4FRAMEWORK_VIEW_TYPE@@XZ @ 0x1800557A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::GetFrameworkViewTypeInternal(__int64 *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rbx
  HRESULT v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+40h] [rbp-40h] BYREF
  __int64 v13; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF

  v13 = -2LL;
  v2 = 6;
  v11 = 0LL;
  v3 = *a1;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v11);
  if ( (*(int (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v3 + 352))(
         a1,
         2LL,
         &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
         v4) >= 0 )
  {
    v10 = 0LL;
    if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v11 + 40LL))(
           v11,
           &GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e,
           &v10) >= 0 )
    {
      v5 = v10;
      string = 0LL;
      v6 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
      if ( v6 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
      if ( (*(int (__fastcall **)(__int64, HSTRING, unsigned int *))(*(_QWORD *)v5 + 360LL))(v5, string, &v12) >= 0 )
        v2 = v12;
    }
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v2;
}
