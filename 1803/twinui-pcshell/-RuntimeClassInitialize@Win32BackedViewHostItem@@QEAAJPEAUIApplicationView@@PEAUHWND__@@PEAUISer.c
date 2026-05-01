/*
 * XREFs of ?RuntimeClassInitialize@Win32BackedViewHostItem@@QEAAJPEAUIApplicationView@@PEAUHWND__@@PEAUIServiceProvider@@@Z @ 0x1801B8EF0
 * Callers:
 *     ??$MakeAndInitialize@VWin32BackedViewHostItem@@V1@AEAPEAUIApplicationView@@AEAPEAUHWND__@@PEAVHolographicPositioner@@@Details@WRL@Microsoft@@YAJPEAPEAVWin32BackedViewHostItem@@AEAPEAUIApplicationView@@AEAPEAUHWND__@@$$QEAPEAVHolographicPositioner@@@Z @ 0x1801AB674 (--$MakeAndInitialize@VWin32BackedViewHostItem@@V1@AEAPEAUIApplicationView@@AEAPEAUHWND__@@PEAVHo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18000AEC0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180149828 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Register@UIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK@ZP81@EAAJK@ZPEB_KIPEAVWin32BackedViewHostItem@@@SmartCookie@@QEAAJPEAUIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK@ZP81@EAAJK@Z1IPEAVWin32BackedViewHostItem@@@Z @ 0x1801B53A8 (--$Register@UIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK.c)
 *     ??$Set@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HString@Wrappers@WRL@Microsoft@@QEAAJAEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x1801B54EC (--$Set@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HString@Wrappe.c)
 *     ?CheckWindowTextChanged@Win32BackedViewHostItem@@AEAA_NXZ @ 0x1801B692C (-CheckWindowTextChanged@Win32BackedViewHostItem@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32BackedViewHostItem::RuntimeClassInitialize(
        Win32BackedViewHostItem *this,
        struct IApplicationView *a2,
        HWND a3,
        struct IServiceProvider *a4)
{
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r8
  const wchar_t *v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v19; // [rsp+80h] [rbp+20h] BYREF

  Microsoft::WRL::ComPtr<IApplicationView>::operator=((CWinRTApplicationView **)this + 13, a2);
  *((_QWORD *)this + 14) = a3;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v7 = *((_QWORD *)this + 13);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v15);
  v16 = -1LL;
  v17 = -1LL;
  if ( (*(int (__fastcall **)(__int64, const wchar_t **))(*(_QWORD *)v7 + 136LL))(v7, &v15) < 0
    || (v8 = Microsoft::WRL::Wrappers::HString::Set<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>(
               (HSTRING *)this + 19,
               &v15),
        v9 = v8,
        v8 >= 0) )
  {
    Win32BackedViewHostItem::CheckWindowTextChanged((HWND *)this);
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a4->lpVtbl->QueryService)(
            a4,
            &SID_ImmersiveShellHookService,
            &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
            &v19);
    v9 = v10;
    if ( v10 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
      v12 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a4->lpVtbl->QueryService)(
              a4,
              &GUID_afa69bd5_4b7a_4aa4_a984_53e14f61dd67,
              &GUID_afa69bd5_4b7a_4aa4_a984_53e14f61dd67,
              (char *)this + 136);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          56LL,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
          (const char *)(unsigned int)v12);
        __debugbreak();
      }
      v10 = SmartCookie::Register<IImmersiveShellHookService,long (IImmersiveShellHookService::*)(unsigned __int64 const *,unsigned int,IImmersiveShellHookNotification *,unsigned long *),long (IImmersiveShellHookService::*)(unsigned long),unsigned __int64 const *,unsigned int,Win32BackedViewHostItem *>(
              (__int64)this + 200,
              v19,
              v13);
      v9 = v10;
      if ( v10 >= 0 )
      {
        v9 = 0;
        goto LABEL_12;
      }
      v11 = 64LL;
    }
    else
    {
      v11 = 54LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)v10);
LABEL_12:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2B,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v8);
LABEL_13:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v15);
  return v9;
}
