/*
 * XREFs of ?SetSizeConstraintsForDpi@CWin32ApplicationView@@UEAAJPEBIPEBUtagSIZE@@1@Z @ 0x18007FC40
 * Callers:
 *     ?SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z @ 0x1800805C0 (-SizeConstraintsQueried@CWin32ApplicationView@@UEAAJIUtagSIZE@@0@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800764A0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?GetViewManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@XZ @ 0x18007D3E0 (-GetViewManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@VCApplicationViewManager@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWin32ApplicationView::SetSizeConstraintsForDpi(
        RTL_SRWLOCK *this,
        const unsigned int *a2,
        const struct tagSIZE *a3,
        const struct tagSIZE *a4)
{
  RTL_SRWLOCK *v8; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *ViewManager; // rax
  unsigned __int64 v12; // rcx
  __int128 v14; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned __int64 v17; // [rsp+90h] [rbp+40h] BYREF
  RTL_SRWLOCK *v18; // [rsp+98h] [rbp+48h]

  v8 = this + 5;
  AcquireSRWLockExclusive(this + 5);
  v18 = v8;
  (*(void (__fastcall **)(PVOID, __int128 *, _QWORD))(*(_QWORD *)this[25].Ptr + 24LL))(this[25].Ptr, &v14, *a2);
  v17 = (unsigned __int64)*a4;
  v15[0] = *a3;
  v15[1] = v17;
  if ( v14 != __PAIR128__(v17, v15[0]) )
  {
    v9 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD *))(*(_QWORD *)this[25].Ptr + 32LL))(this[25].Ptr, *a2, v15);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x270,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_9;
    }
    ViewManager = ApplicationViewManagement::CGlobals::GetViewManager((__int64 *)&v17);
    CApplicationViewManager::RaiseApplicationViewChanged(*ViewManager + 144, (struct IObjectArray *)this, 0xFu, 0LL);
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 228), 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(v12 + 80) + 64LL))(v12 + 80, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  v10 = 0;
LABEL_9:
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return v10;
}
