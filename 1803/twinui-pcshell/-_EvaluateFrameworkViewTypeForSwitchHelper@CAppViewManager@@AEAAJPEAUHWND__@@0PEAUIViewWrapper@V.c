/*
 * XREFs of ?_EvaluateFrameworkViewTypeForSwitchHelper@CAppViewManager@@AEAAJPEAUHWND__@@0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEA_N2@Z @ 0x180125CD0
 * Callers:
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180127904 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180009888 (-_IsMultiViewOperationAllowed@CAppViewManager@@AEAA_NPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180009F28 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_EvaluateFrameworkViewTypeForSwitchHelper(
        CAppViewManager *this,
        HWND a2,
        HWND a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a4,
        bool *a5,
        bool *a6)
{
  bool v10; // al
  int GlomForWindow; // ebx
  CAppViewManager *v12; // rcx
  char IsMultiViewOperationAllowed; // al
  int v14; // ecx
  int v15; // esi
  int v16; // ecx
  char v17; // di
  int v18; // eax
  bool v20; // [rsp+20h] [rbp-58h] BYREF
  bool v21; // [rsp+21h] [rbp-57h] BYREF
  int v22; // [rsp+24h] [rbp-54h] BYREF
  struct IImmersiveApplicationInternal *v23; // [rsp+28h] [rbp-50h] BYREF
  struct IImmersiveApplicationInternal *v24; // [rsp+30h] [rbp-48h] BYREF
  int v25; // [rsp+38h] [rbp-40h]
  __int64 v26; // [rsp+40h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-30h] BYREF
  __int64 v28; // [rsp+60h] [rbp-18h]

  v26 = -2LL;
  v10 = 0;
  v25 = 0;
  *a5 = 0;
  *a6 = 0;
  v24 = 0LL;
  v23 = 0LL;
  v20 = 0;
  v21 = 0;
  GlomForWindow = -2147024809;
  if ( a2 != a3 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    GlomForWindow = CAppViewManager::_GetGlomForWindow(this, a2, &v24, &v20);
    v10 = 0;
    if ( GlomForWindow >= 0 )
    {
      if ( v20 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
        GlomForWindow = CAppViewManager::_GetGlomForWindow(this, a3, &v23, &v21);
        v10 = 0;
        if ( GlomForWindow >= 0 )
        {
          IsMultiViewOperationAllowed = CAppViewManager::_IsMultiViewOperationAllowed(v12, v23);
          v14 = GlomForWindow;
          if ( !IsMultiViewOperationAllowed )
            v14 = -2147024891;
          GlomForWindow = v14;
          v10 = 0;
          if ( v14 >= 0 )
          {
            v15 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v24 + 616LL))(v24);
            v16 = 6;
            v22 = 6;
            if ( !a4
              || (v28 = 0LL,
                  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                    &hstringHeader,
                    L"FrameworkViewType",
                    0x12u,
                    0x11u),
                  v17 = 1,
                  v25 = 1,
                  v18 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64, int *))(*(_QWORD *)a4 + 360LL))(
                          a4,
                          v28,
                          &v22),
                  v16 = v22,
                  v18 < 0) )
            {
              v17 = 0;
            }
            v10 = 0;
            if ( v17 && v16 != 6 )
              v10 = v16 != v15;
          }
        }
      }
      else
      {
        GlomForWindow = -2147024891;
      }
    }
  }
  *a5 = v10;
  *a6 = v21;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  return (unsigned int)GlomForWindow;
}
