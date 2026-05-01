/*
 * XREFs of ?SetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x180083BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800764A0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x18007D3E0 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWinRTApplicationView::SetSizeConstraintsForDpi(
        CWinRTApplicationView *this,
        const unsigned int *a2,
        const struct tagSIZE *a3,
        const struct tagSIZE *a4)
{
  RTL_SRWLOCK *v6; // rdi
  __int64 *ViewManager; // rax
  __int64 v8; // rcx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v6 = (RTL_SRWLOCK *)((char *)this + 40);
  AcquireSRWLockExclusive((PSRWLOCK)this + 5);
  if ( *(_QWORD *)((char *)this + 196) != *a3 )
  {
    *(struct tagSIZE *)((char *)this + 196) = *a3;
    if ( *((_BYTE *)this + 204) )
    {
      ViewManager = ApplicationViewManagement::CGlobals::GetViewManager(&v10);
      CApplicationViewManager::RaiseApplicationViewChanged(*ViewManager + 144, (struct IObjectArray *)this, 0xFu, 0LL);
      v8 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 228), 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v8 + 80) + 64LL))(v8 + 80, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
      }
    }
    *((_BYTE *)this + 204) = 1;
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return 0LL;
}
