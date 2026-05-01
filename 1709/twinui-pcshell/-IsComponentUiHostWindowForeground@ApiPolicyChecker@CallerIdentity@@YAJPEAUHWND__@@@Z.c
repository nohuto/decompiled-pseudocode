/*
 * XREFs of ?IsComponentUiHostWindowForeground@ApiPolicyChecker@CallerIdentity@@YAJPEAUHWND__@@@Z @ 0x1801C2938
 * Callers:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x1800FA52C (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::IsComponentUiHostWindowForeground(
        CallerIdentity::ApiPolicyChecker *this,
        HWND a2)
{
  unsigned int v2; // esi
  bool v3; // bl
  HRESULT v4; // eax
  HWND Ancestor; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v12[4]; // [rsp+30h] [rbp-40h] BYREF
  HWND hwnd; // [rsp+34h] [rbp-3Ch]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF

  v10 = 0LL;
  string = 0LL;
  v2 = (unsigned int)this;
  v3 = 0;
  v4 = WindowsCreateStringReference(L"Windows.Internal.Shell.Popups.PopupClient", 0x29u, &hstringHeader, &string);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
    JUMPOUT(0x1801C2A8ELL);
  }
  if ( (int)RoGetActivationFactory(string, &GUID_b2571928_3f1d_4f6d_8930_fd9f7d5a69fc, &v10) >= 0 )
  {
    v11 = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 56LL))(v10, v2, &v11) >= 0
      && (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 72LL))(v11, v12) >= 0 )
    {
      Ancestor = 0LL;
      if ( (_DWORD)hwnd )
        Ancestor = GetAncestor((HWND)(unsigned int)hwnd, 2u);
      v3 = GetForegroundWindow() == Ancestor;
    }
    v6 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  v7 = v10;
  v8 = !v3 ? 0x80070005 : 0;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v8;
}
