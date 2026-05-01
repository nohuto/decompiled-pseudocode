/*
 * XREFs of ?_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800DB18C
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800D8600 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z @ 0x18003C58C (-SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z.c)
 *     ?GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z @ 0x1800D6CF0 (-GetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ?_GetApplicationViewUniqueId@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAI@Z @ 0x1800DBDD8 (-_GetApplicationViewUniqueId@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAI@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicPositioner::_HandleSwitchAsyncActivation(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  HRESULT v4; // eax
  int ApplicationViewUniqueId; // eax
  HolographicPositioner *v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  HRESULT v9; // eax
  struct IApplicationView *v10; // rcx
  HRESULT v11; // eax
  HolographicPositioner *v12; // rcx
  HRESULT v13; // eax
  struct IApplicationView *v14; // rcx
  struct IApplicationView *v15; // rcx
  struct IApplicationView *v17; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-48h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v19; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v21; // [rsp+3Ch] [rbp-34h] BYREF
  __int64 v22; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v22 = -2LL;
  v19 = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *, struct IApplicationView *))(*(_QWORD *)a3 + 8LL))(
      a3,
      a2);
  string = 0LL;
  v4 = WindowsCreateStringReference(L"SwitchAsync_IdTo", 0x10u, &hstringHeader, &string);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v19,
              string,
              &v20) >= 0 )
  {
    v17 = 0LL;
    ApplicationViewUniqueId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView **))(**((_QWORD **)this + 24) + 48LL))(
                                *((_QWORD *)this + 24),
                                v20,
                                &v17);
    v7 = ApplicationViewUniqueId;
    if ( ApplicationViewUniqueId < 0 )
    {
      v8 = 1335LL;
      goto LABEL_27;
    }
    v18 = 0;
    ApplicationViewUniqueId = HolographicPositioner::_GetApplicationViewUniqueId(v6, v17, &v18);
    v7 = ApplicationViewUniqueId;
    if ( ApplicationViewUniqueId < 0 )
    {
      v8 = 1338LL;
      goto LABEL_27;
    }
    string = 0LL;
    v9 = WindowsCreateStringReference(L"SwitchAsync_IdTo", 0x10u, &hstringHeader, &string);
    if ( v9 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    ApplicationViewUniqueId = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
                                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v19,
                                string,
                                v18);
    v7 = ApplicationViewUniqueId;
    if ( ApplicationViewUniqueId < 0 )
    {
      v8 = 1340LL;
      goto LABEL_27;
    }
    v10 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  string = 0LL;
  v11 = WindowsCreateStringReference(L"SwitchAsync_IdFrom", 0x12u, &hstringHeader, &string);
  if ( v11 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetUInt32(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v19,
              string,
              &v21) < 0 )
  {
LABEL_31:
    v7 = 0;
    goto LABEL_32;
  }
  v17 = 0LL;
  ApplicationViewUniqueId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationView **))(**((_QWORD **)this + 24)
                                                                                                  + 48LL))(
                              *((_QWORD *)this + 24),
                              v21,
                              &v17);
  v7 = ApplicationViewUniqueId;
  if ( ApplicationViewUniqueId < 0 )
  {
    v8 = 1349LL;
    goto LABEL_27;
  }
  v18 = 0;
  ApplicationViewUniqueId = HolographicPositioner::_GetApplicationViewUniqueId(v12, v17, &v18);
  v7 = ApplicationViewUniqueId;
  if ( ApplicationViewUniqueId < 0 )
  {
    v8 = 1352LL;
    goto LABEL_27;
  }
  string = 0LL;
  v13 = WindowsCreateStringReference(L"SwitchAsync_IdFrom", 0x12u, &hstringHeader, &string);
  if ( v13 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
  ApplicationViewUniqueId = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
                              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v19,
                              string,
                              v18);
  v7 = ApplicationViewUniqueId;
  if ( ApplicationViewUniqueId >= 0 )
  {
    v15 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    goto LABEL_31;
  }
  v8 = 1354LL;
LABEL_27:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)ApplicationViewUniqueId);
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v14 + 16LL))(v14);
  }
LABEL_32:
  if ( v19 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v19 + 16LL))(v19);
  return v7;
}
