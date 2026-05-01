/*
 * XREFs of ?_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z @ 0x180042D5C
 * Callers:
 *     ?IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z @ 0x18003D840 (-IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?GetGuid@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAU_GUID@@@Z @ 0x18003C2CC (-GetGuid@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppViewManager::_GetVirtualDesktopForPendingActivation(
        IUnknown **this,
        __int64 a2,
        struct IVirtualDesktop **a3)
{
  HRESULT v6; // ebx
  HRESULT v7; // eax
  int Guid; // eax
  void *v9; // rcx
  __int64 v10; // rcx
  void *v11; // rcx
  void *v13; // [rsp+20h] [rbp-60h] BYREF
  __int64 v14; // [rsp+28h] [rbp-58h] BYREF
  void *ppvOut; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-48h] BYREF
  struct _GUID v17; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v16[1] = -2LL;
  *a3 = 0LL;
  ppvOut = 0LL;
  v6 = IUnknown_QueryService(
         this[14],
         (const GUID *const)&SID_ViewEventDispatcher,
         &GUID_f36451a9_014a_43ea_9492_ff81c012e15f,
         &ppvOut);
  if ( v6 >= 0 )
  {
    v14 = 0LL;
    v6 = (*(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)ppvOut + 64LL))(ppvOut, a2, &v14);
    if ( v6 >= 0 )
    {
      v16[0] = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      v17 = GUID_NULL;
      string = 0LL;
      v7 = WindowsCreateStringReference(L"ActivationVirtualDesktopId", 0x1Au, &hstringHeader, &string);
      if ( v7 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
      Guid = Windows::Internal::ShellHelpers::PropertySetHelper::GetGuid(
               (Windows::Internal::ShellHelpers::PropertySetHelper *)v16,
               string,
               &v17);
      v6 = Guid;
      if ( Guid >= 0 )
        v6 = 0;
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x38,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\inc\\viewmanagerinteroppropertysethelpers.h",
          (const char *)(unsigned int)Guid);
      if ( v6 >= 0 )
      {
        v13 = 0LL;
        v6 = IUnknown_QueryService(
               this[14],
               (const GUID *const)&SID_VirtualDesktopManager,
               &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
               &v13);
        if ( v6 >= 0 )
          v6 = (*(__int64 (__fastcall **)(void *, struct _GUID *, struct IVirtualDesktop **))(*(_QWORD *)v13 + 96LL))(
                 v13,
                 &v17,
                 a3);
        v9 = v13;
        if ( v13 )
        {
          v13 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
        }
      }
      if ( v16[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
    }
    v10 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  v11 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v6;
}
