/*
 * XREFs of ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x180024B30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18001CB50 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x18002B130 (-GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ @ 0x180084040 (--1-$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180142830 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E787C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E787C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBase::SetVirtualDesktopId(RTL_SRWLOCK *this, const struct _GUID *a2)
{
  RTL_SRWLOCK *v4; // r14
  CWinRTApplicationView *v5; // rcx
  __int64 (__fastcall *v6)(CWinRTApplicationView *, LPVOID *); // rax
  int ViewId; // eax
  _QWORD *v8; // rbx
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  _QWORD *v11; // r10
  volatile int *v12; // rdx
  _QWORD *v13; // rcx
  HKEY v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rdx
  HKEY v17; // rax
  DWORD dwOptions; // [rsp+28h] [rbp-39h]
  DWORD dwOptionsa; // [rsp+28h] [rbp-39h]
  HKEY hKey; // [rsp+58h] [rbp-9h] BYREF
  LPCWSTR lpSubKey; // [rsp+60h] [rbp-1h] BYREF
  __int64 v23; // [rsp+68h] [rbp+7h]
  __int64 v24; // [rsp+70h] [rbp+Fh]
  __int64 v25; // [rsp+78h] [rbp+17h]
  RTL_SRWLOCK *v26; // [rsp+80h] [rbp+1Fh]
  BYTE Data[4]; // [rsp+88h] [rbp+27h] BYREF
  int v28; // [rsp+8Ch] [rbp+2Bh]
  __int128 v29; // [rsp+90h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v25 = -2LL;
  v4 = this + 6;
  AcquireSRWLockExclusive(this + 6);
  v26 = v4;
  *(struct _GUID *)&this[14].Ptr = *a2;
  lpSubKey = 0LL;
  v23 = -1LL;
  v24 = -1LL;
  v5 = (CWinRTApplicationView *)&this[2];
  v6 = (__int64 (__fastcall *)(CWinRTApplicationView *, LPVOID *))*((_QWORD *)this[2].Ptr + 3);
  if ( v6 == CWinRTApplicationView::GetViewId )
  {
    ViewId = CWinRTApplicationView::GetViewId(v5, (LPVOID *)&lpSubKey);
  }
  else if ( (char *)v6 == (char *)CWin32ApplicationView::GetViewId )
  {
    ViewId = CWin32ApplicationView::GetViewId(v5, (unsigned __int16 **)&lpSubKey);
  }
  else
  {
    ViewId = v6(v5, (LPVOID *)&lpSubKey);
  }
  if ( ViewId < 0 )
    goto LABEL_24;
  v8 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v9 = 0LL;
  v10 = 0LL;
  if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals);
    v8 = v11;
    v9 = v11;
    v10 = v11;
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v13 = v10;
  if ( v9 )
  {
    v29 = *(_OWORD *)&this[14].Ptr;
    *(_DWORD *)Data = 16;
    v28 = 1447309360;
    v14 = (HKEY)v8[5];
    if ( !v14 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4D,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
        (const char *)0x80270257LL,
        dwOptions);
LABEL_19:
      v13 = v10;
      goto LABEL_20;
    }
    hKey = 0LL;
    v15 = RegCreateKeyExW(v14, lpSubKey, 0, 0LL, 1u, 0x20006u, 0LL, &hKey, 0LL);
    if ( v15 )
    {
      v16 = 89LL;
LABEL_14:
      wil::details::in1diag3::Return_Win32(
        retaddr,
        (void *)v16,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
        (const char *)v15,
        dwOptionsa);
      CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(&hKey);
      goto LABEL_19;
    }
    v15 = RegSetValueExW(hKey, L"VirtualDesktop", 0, 3u, Data, 0x18u);
    if ( v15 )
    {
      v16 = 97LL;
      goto LABEL_14;
    }
    v17 = hKey;
    hKey = 0LL;
    v13 = v10;
    if ( v17 )
    {
      RegCloseKey(v17);
      goto LABEL_19;
    }
  }
LABEL_20:
  if ( v8 )
  {
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)v13 + 36), v12) )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v8 + 72LL))(v8, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
LABEL_24:
  if ( lpSubKey )
  {
    CoTaskMemFree((LPVOID)lpSubKey);
    lpSubKey = 0LL;
  }
  v23 = 0LL;
  v24 = 0LL;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
