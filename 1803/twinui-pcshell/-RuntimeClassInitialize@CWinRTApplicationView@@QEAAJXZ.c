/*
 * XREFs of ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x18001B87C
 * Callers:
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x18002DED0 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@.c)
 * Callees:
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18001CB50 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x1800250F4 (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x18008E7FC (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E787C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E787C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::RuntimeClassInitialize(CWinRTApplicationView *this)
{
  int ViewId; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r10
  volatile int *v8; // rdx
  __int64 v9; // rdx
  unsigned int v11; // [rsp+20h] [rbp-48h]
  _DWORD v12[2]; // [rsp+38h] [rbp-30h] BYREF
  int v13; // [rsp+40h] [rbp-28h]
  LPVOID pv[3]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  ViewId = CWinRTApplicationView::GetViewId((CWinRTApplicationView *)((char *)this + 16), (unsigned __int16 **)pv);
  v3 = ViewId;
  if ( ViewId < 0 )
  {
    v4 = 34LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)ViewId,
      v11);
    goto LABEL_20;
  }
  v5 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v6 = 0LL;
  if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals);
    v5 = v7;
    v6 = v7;
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  if ( v6 )
  {
    v13 = 0;
    if ( (int)ApplicationViewManagement::CPersistence::_ReadPersistedData(
                (ApplicationViewManagement::CPersistence *)(v6 + 40),
                (const unsigned __int16 *)pv[0],
                L"ShowInSwitchers",
                v12,
                0xCu) >= 0 )
    {
      if ( v12[0] == 4 )
      {
        if ( v12[1] == 1397960752 )
        {
          *((_BYTE *)this + 208) = v13 != 0;
          goto LABEL_13;
        }
        v9 = 62LL;
      }
      else
      {
        v9 = 61LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\Persistence.h",
        (const char *)0x8007000DLL,
        v11);
    }
  }
LABEL_13:
  if ( v5 )
  {
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v5 + 36), v8) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 72LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  ViewId = CApplicationViewBase::RuntimeClassInitialize(this);
  v3 = ViewId;
  if ( ViewId < 0 )
  {
    v4 = 46LL;
    goto LABEL_19;
  }
LABEL_20:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v3;
}
