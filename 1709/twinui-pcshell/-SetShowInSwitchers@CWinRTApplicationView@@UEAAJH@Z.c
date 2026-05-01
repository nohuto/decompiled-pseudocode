/*
 * XREFs of ?SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z @ 0x1800832D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18007888C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x18007D3E0 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x180082290 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x180084534 (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWinRTApplicationView::SetShowInSwitchers(RTL_SRWLOCK *this, int a2)
{
  __int64 *ViewManager; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v8[3]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v9[4]; // [rsp+48h] [rbp-30h] BYREF
  int v10; // [rsp+4Ch] [rbp-2Ch]
  BOOL v11; // [rsp+50h] [rbp-28h]
  LPVOID pv[4]; // [rsp+58h] [rbp-20h] BYREF
  __int64 v14; // [rsp+C8h] [rbp+50h] BYREF

  v8[1] = -2LL;
  ViewManager = ApplicationViewManagement::CGlobals::GetViewManager(&v14);
  v4 = *ViewManager;
  if ( *ViewManager )
    v4 += 144LL;
  *ViewManager = 0LL;
  v5 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 228), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v5 + 80) + 64LL))(v5 + 80, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  AcquireSRWLockExclusive(this + 5);
  v8[2] = (__int64)&this[5];
  if ( (a2 != 0) != LOBYTE(this[24].Ptr) )
  {
    LOBYTE(this[24].Ptr) = a2 != 0;
    pv[0] = 0LL;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    if ( (int)CWinRTApplicationView::GetViewId((CWinRTApplicationView *)&this[1], (unsigned __int16 **)pv) >= 0 )
    {
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(v8);
      v6 = v8[0];
      if ( v8[0] )
      {
        v11 = a2 != 0;
        *(_DWORD *)v9 = 4;
        v10 = 1397960752;
        ApplicationViewManagement::CPersistence::_PersistData(
          (ApplicationViewManagement::CPersistence *)(v8[0] + 48),
          (const unsigned __int16 *)pv[0],
          L"ShowInSwitchers",
          v9,
          0xCu);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 44), 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8[0] + 72LL))(v8[0], 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
    }
    if ( v4 )
      (*(void (__fastcall **)(__int64, RTL_SRWLOCK *, _QWORD, _QWORD))(*(_QWORD *)v4 + 160LL))(
        v4,
        this,
        11 - (unsigned int)(a2 != 0),
        0LL);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
  if ( this != (RTL_SRWLOCK *)-40LL )
    ReleaseSRWLockExclusive(this + 5);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
