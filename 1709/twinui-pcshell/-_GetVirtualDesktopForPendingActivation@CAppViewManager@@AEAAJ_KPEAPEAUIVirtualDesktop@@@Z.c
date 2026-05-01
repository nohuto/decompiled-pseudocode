/*
 * XREFs of ?_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z @ 0x180045258
 * Callers:
 *     ?IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z @ 0x18003ED60 (-IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x180018BA4 (--$_GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPr.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppViewManager::_GetVirtualDesktopForPendingActivation(
        IUnknown **this,
        __int64 a2,
        struct IVirtualDesktop **a3)
{
  HRESULT v6; // ebx
  HRESULT v7; // eax
  struct Windows::Foundation::IPropertyValue *v8; // r8
  int v9; // eax
  void *v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  void *v14; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+28h] [rbp-58h] BYREF
  void *ppvOut; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-48h] BYREF
  GUID v18; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v17[1] = -2LL;
  *a3 = 0LL;
  ppvOut = 0LL;
  v6 = IUnknown_QueryService(this[16], &SID_ViewEventDispatcher, &GUID_f36451a9_014a_43ea_9492_ff81c012e15f, &ppvOut);
  if ( v6 >= 0 )
  {
    v15 = 0LL;
    v6 = (*(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)ppvOut + 64LL))(ppvOut, a2, &v15);
    if ( v6 >= 0 )
    {
      v17[0] = v15;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      v18 = GUID_NULL;
      string = 0LL;
      v7 = WindowsCreateStringReference(L"ActivationVirtualDesktopId", 0x1Au, &hstringHeader, &string);
      if ( v7 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
      v9 = Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<_GUID>(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)v17,
             string,
             v8,
             (__int64)&v18);
      v6 = v9;
      if ( v9 >= 0 )
        v6 = 0;
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x38,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\inc\\viewmanagerinteroppropertysethelpers.h",
          (const char *)(unsigned int)v9);
      if ( v6 >= 0 )
      {
        v14 = 0LL;
        v6 = IUnknown_QueryService(
               this[16],
               (const GUID *const)&SID_VirtualDesktopManager,
               &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
               &v14);
        if ( v6 >= 0 )
          v6 = (*(__int64 (__fastcall **)(void *, GUID *, struct IVirtualDesktop **))(*(_QWORD *)v14 + 96LL))(
                 v14,
                 &v18,
                 a3);
        v10 = v14;
        if ( v14 )
        {
          v14 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
      if ( v17[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
    }
    v11 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  v12 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v6;
}
