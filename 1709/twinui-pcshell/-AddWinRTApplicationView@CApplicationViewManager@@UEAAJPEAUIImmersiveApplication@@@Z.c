/*
 * XREFs of ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180075D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800760F0 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18007888C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ??0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z @ 0x18008212C (--0CWinRTApplicationView@@QEAA@PEAUIImmersiveApplication@@@Z.c)
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x180082290 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x180084620 (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x18008492C (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::AddWinRTApplicationView(
        RTL_SRWLOCK *this,
        struct IImmersiveApplication *a2)
{
  CWinRTApplicationView *v4; // rbx
  CWinRTApplicationView *v5; // rax
  int v6; // esi
  int ViewId; // eax
  __int64 v8; // rdi
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  _QWORD v13[3]; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v14[2]; // [rsp+48h] [rbp-28h] BYREF
  int v15; // [rsp+50h] [rbp-20h]
  LPVOID pv[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  CWinRTApplicationView *v18; // [rsp+B8h] [rbp+48h]

  v13[1] = -2LL;
  v4 = 0LL;
  v18 = 0LL;
  v5 = (CWinRTApplicationView *)operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v4 = CWinRTApplicationView::CWinRTApplicationView(v5, a2);
    v18 = v4;
  }
  if ( !v4 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DA,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_29;
  }
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  ViewId = CWinRTApplicationView::GetViewId((CWinRTApplicationView *)((char *)v4 + 8), (unsigned __int16 **)pv);
  v6 = ViewId;
  if ( ViewId >= 0 )
  {
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(v13);
    v8 = v13[0];
    if ( !v13[0] )
    {
LABEL_19:
      v10 = CApplicationViewBase::RuntimeClassInitialize(v4);
      v6 = v10;
      if ( v10 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2E,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
          (const char *)(unsigned int)v10);
      goto LABEL_21;
    }
    v15 = 0;
    if ( ApplicationViewManagement::CPersistence::_ReadPersistedData(
           (ApplicationViewManagement::CPersistence *)(v13[0] + 48LL),
           (const unsigned __int16 *)pv[0],
           L"ShowInSwitchers",
           v14,
           0xCu) >= 0 )
    {
      if ( v14[0] != 4 )
      {
        v9 = 61LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\Persistence.h",
          (const char *)0x8007000DLL);
        goto LABEL_15;
      }
      if ( v14[1] != 1397960752 )
      {
        v9 = 62LL;
        goto LABEL_11;
      }
      *((_BYTE *)v4 + 192) = v15 != 0;
    }
LABEL_15:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 44), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v13[0] + 72LL))(v13[0], 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    v4 = v18;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x22,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)ViewId);
LABEL_21:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  if ( v6 >= 0 )
  {
    v13[2] = this + 47;
    AcquireSRWLockExclusive(this + 47);
    v11 = CApplicationViewManager::_AddApplicationView((CApplicationViewManager *)&this[-18], v4);
    v6 = v11;
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1DE,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v11);
    if ( this != (RTL_SRWLOCK *)-376LL )
      ReleaseSRWLockExclusive(this + 47);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1DB,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v6);
  }
LABEL_29:
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 45, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(CWinRTApplicationView *, __int64))(*(_QWORD *)v18 + 416LL))(v18, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return (unsigned int)v6;
}
