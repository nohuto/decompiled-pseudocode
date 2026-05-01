/*
 * XREFs of ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x1800250F4
 * Callers:
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x18001B87C (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x18002E290 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 * Callees:
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18001CB50 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x18002B130 (-GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x18008E7FC (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E787C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E787C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::RuntimeClassInitialize(CApplicationViewBase *this)
{
  CWinRTApplicationView *v2; // rcx
  __int64 (__fastcall *v3)(CWinRTApplicationView *, LPVOID *); // rax
  int ViewId; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r10
  volatile int *v9; // rdx
  int PersistedData; // eax
  __int128 v11; // xmm0
  __int64 v12; // rdx
  unsigned int v14; // [rsp+20h] [rbp-50h]
  unsigned int v15; // [rsp+20h] [rbp-50h]
  LPVOID pv[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-28h]
  _DWORD v19[2]; // [rsp+50h] [rbp-20h] BYREF
  __int128 v20; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v18 = -2LL;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  v17 = -1LL;
  v2 = (CApplicationViewBase *)((char *)this + 16);
  v3 = *(__int64 (__fastcall **)(CWinRTApplicationView *, LPVOID *))(*(_QWORD *)v2 + 24LL);
  if ( v3 == CWinRTApplicationView::GetViewId )
  {
    ViewId = CWinRTApplicationView::GetViewId(v2, pv);
  }
  else if ( (char *)v3 == (char *)CWin32ApplicationView::GetViewId )
  {
    ViewId = CWin32ApplicationView::GetViewId(v2, (unsigned __int16 **)pv);
  }
  else
  {
    ViewId = v3(v2, pv);
  }
  v5 = ViewId;
  if ( ViewId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
      (const char *)(unsigned int)ViewId,
      v14);
    goto LABEL_28;
  }
  v6 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v7 = 0LL;
  if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals);
    v6 = v8;
    v7 = v8;
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  if ( v7 )
  {
    PersistedData = ApplicationViewManagement::CPersistence::_ReadPersistedData(
                      (ApplicationViewManagement::CPersistence *)(v7 + 40),
                      (const unsigned __int16 *)pv[0],
                      L"VirtualDesktop",
                      v19,
                      0x18u);
    if ( PersistedData < 0 )
    {
      v11 = *(_OWORD *)pv;
      goto LABEL_19;
    }
    if ( v19[0] == 16 )
    {
      if ( v19[1] == 1447309360 )
      {
        v11 = v20;
        PersistedData = 0;
LABEL_19:
        if ( PersistedData >= 0 )
          *((_OWORD *)this + 7) = v11;
        goto LABEL_21;
      }
      v12 = 62LL;
    }
    else
    {
      v12 = 61LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\Persistence.h",
      (const char *)0x8007000DLL,
      v15);
  }
LABEL_21:
  if ( v6 )
  {
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v6 + 36), v9) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 72LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( (unsigned int)EdpGetIsManaged() )
    *((_BYTE *)this + 56) = 1;
  v5 = 0;
LABEL_28:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v5;
}
