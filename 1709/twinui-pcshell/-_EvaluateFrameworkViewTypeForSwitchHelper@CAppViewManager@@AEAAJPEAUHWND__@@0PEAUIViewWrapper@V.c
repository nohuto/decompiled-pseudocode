/*
 * XREFs of ?_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEA_N@Z @ 0x1800432FC
 * Callers:
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180041DB0 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180043660 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18004521C (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_EvaluateFrameworkViewTypeForSwitchHelper(
        CAppViewManager *this,
        HWND a2,
        HWND a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a4,
        bool *a5)
{
  struct IImmersiveApplicationInternal *v8; // rbx
  struct IImmersiveApplicationInternal *v9; // rdi
  int GlomForWindow; // esi
  bool v11; // al
  CAppViewManager *v12; // rcx
  bool IsMultiViewOperationAllowed; // al
  int v14; // ecx
  int v15; // r15d
  int v16; // ecx
  HRESULT v17; // eax
  char v18; // r14
  int v19; // eax
  bool v21; // [rsp+20h] [rbp-58h] BYREF
  bool v22; // [rsp+21h] [rbp-57h] BYREF
  int v23; // [rsp+24h] [rbp-54h] BYREF
  struct IImmersiveApplicationInternal *v24; // [rsp+28h] [rbp-50h] BYREF
  int v25; // [rsp+30h] [rbp-48h]
  struct IImmersiveApplicationInternal *v26[2]; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-30h] BYREF
  HSTRING string; // [rsp+60h] [rbp-18h] BYREF

  v26[1] = (struct IImmersiveApplicationInternal *)-2LL;
  v25 = 0;
  v8 = 0LL;
  v24 = 0LL;
  v9 = 0LL;
  v26[0] = 0LL;
  v21 = 0;
  v22 = 0;
  GlomForWindow = 0;
  if ( a2 == a3 )
    GlomForWindow = -2147024809;
  v11 = 0;
  if ( a2 != a3 )
  {
    GlomForWindow = CAppViewManager::_GetGlomForWindow(this, a2, &v24, &v21);
    if ( GlomForWindow >= 0 )
    {
      if ( !v21 )
      {
        GlomForWindow = -2147024891;
        v11 = 0;
LABEL_21:
        v8 = v24;
        goto LABEL_22;
      }
      GlomForWindow = CAppViewManager::_GetGlomForWindow(this, a3, v26, &v22);
      v9 = v26[0];
      if ( GlomForWindow >= 0 )
      {
        IsMultiViewOperationAllowed = CAppViewManager::_IsMultiViewOperationAllowed(v12, v26[0]);
        v14 = GlomForWindow;
        if ( !IsMultiViewOperationAllowed )
          v14 = -2147024891;
        GlomForWindow = v14;
      }
    }
    v11 = 0;
    if ( GlomForWindow < 0 || v22 )
      goto LABEL_21;
    v8 = v24;
    v15 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v24 + 616LL))(v24);
    v16 = 6;
    v23 = 6;
    if ( !a4 )
      goto LABEL_17;
    string = 0LL;
    v17 = WindowsCreateStringReference(L"FrameworkViewType", 0x11u, &hstringHeader, &string);
    if ( v17 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
    v18 = 1;
    v25 = 1;
    v19 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING, int *))(*(_QWORD *)a4 + 360LL))(
            a4,
            string,
            &v23);
    v16 = v23;
    if ( v19 < 0 )
LABEL_17:
      v18 = 0;
    v11 = 0;
    if ( v18 && v16 != 6 )
      v11 = v16 != v15;
  }
LABEL_22:
  *a5 = v11;
  if ( v9 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v8 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)GlomForWindow;
}
