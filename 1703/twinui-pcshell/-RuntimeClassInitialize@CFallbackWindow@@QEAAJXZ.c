/*
 * XREFs of ?RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ @ 0x18002CE94
 * Callers:
 *     ?CFallbackWindow_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D9CC (-CFallbackWindow_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeSpecialWindow@CIAMSpecialWindowBase@@IEAAJPEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x18002C8AC (-InitializeSpecialWindow@CIAMSpecialWindowBase@@IEAAJPEBUSPECIAL_WINDOW_INIT_DATA@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFallbackWindow::RuntimeClassInitialize(HWND *this)
{
  int v2; // edi
  HRESULT v3; // eax
  HWND v4; // rcx
  HSTRING v5; // rsi
  int ActivationFactory; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  HSTRING string; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = 0LL;
  hstringHeader.Reserved.Reserved1 = L"ApplicationManager_ImmersiveShellWindow";
  *(_DWORD *)&hstringHeader.Reserved.Reserved2[16] = 12;
  v2 = CIAMSpecialWindowBase::InitializeSpecialWindow(
         (CIAMSpecialWindowBase *)(this + 2),
         (const struct SPECIAL_WINDOW_INIT_DATA *)&hstringHeader);
  if ( v2 >= 0 )
  {
    SetPropW(this[3], L"UIA_WindowVisibilityOverridden", HANDLE_FLAG_PROTECT_FROM_CLOSE);
    ShowWindow(this[3], 4);
    v2 = (*(__int64 (__fastcall **)(PVOID, HWND, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[15].Ptr
                                                        + 24LL))(
           CApplicationManagerUtility::g_pIAMGlobals[15].Ptr,
           this[3],
           0LL);
    if ( v2 >= 0 )
    {
      string = 0LL;
      v3 = WindowsCreateStringReference(
             L"Windows.Internal.Shell.Holographic.ContextIdentifier",
             0x34u,
             &hstringHeader,
             &string);
      if ( v3 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
        JUMPOUT(0x18002CFCDLL);
      }
      v4 = this[14];
      v5 = string;
      if ( v4 )
      {
        this[14] = 0LL;
        (*(void (__fastcall **)(HWND))(*(_QWORD *)v4 + 16LL))(v4);
      }
      ActivationFactory = RoGetActivationFactory(v5, &GUID_b80ca0d2_a583_4e8b_84c6_fac647a1d771, this + 14);
      if ( ActivationFactory < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x133,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\iamspecialwnd.cpp",
          (const char *)(unsigned int)ActivationFactory);
    }
  }
  return (unsigned int)v2;
}
