/*
 * XREFs of ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x180075BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800760F0 (-_AddApplicationView@CApplicationViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ??0CWin32ApplicationView@@QEAA@PEAUIClassicWindowExternal@@@Z @ 0x18007DF48 (--0CWin32ApplicationView@@QEAA@PEAUIClassicWindowExternal@@@Z.c)
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x18007E124 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 *     ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E4B0 (-QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::AddWin32ApplicationView(
        RTL_SRWLOCK *this,
        struct IClassicWindowExternal *a2,
        struct IApplicationView **a3)
{
  volatile signed __int32 *v6; // rbx
  CWin32ApplicationView *v7; // rax
  unsigned int v8; // esi
  int v9; // eax
  int v10; // eax
  int v12[2]; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  *(_QWORD *)v12 = 0LL;
  v7 = (CWin32ApplicationView *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v6 = (volatile signed __int32 *)CWin32ApplicationView::CWin32ApplicationView(v7, a2);
    *(_QWORD *)v12 = v6;
  }
  if ( v6 )
  {
    v9 = CWin32ApplicationView::RuntimeClassInitialize((CWin32ApplicationView *)v6);
    v8 = v9;
    if ( v9 >= 0 )
    {
      AcquireSRWLockExclusive(this + 47);
      v10 = CApplicationViewManager::_AddApplicationView(
              (CApplicationViewManager *)&this[-18],
              (struct IApplicationView *)v6);
      v8 = v10;
      if ( v10 >= 0 )
      {
        if ( this != (RTL_SRWLOCK *)-376LL )
          ReleaseSRWLockExclusive(this + 47);
        CWin32ApplicationView::QueryInterface(
          (CWin32ApplicationView *)v6,
          &GUID_9ac0b5c8_1484_4c5b_9533_4134a0f97cea,
          (void **)a3);
        v8 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x1D0,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v10);
        if ( this != (RTL_SRWLOCK *)-376LL )
          ReleaseSRWLockExclusive(this + 47);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1CC,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v9);
    }
  }
  else
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CB,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)0x8007000ELL);
  }
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 47, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(int *, __int64))(**(_QWORD **)v12 + 416LL))(*(int **)v12, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v8;
}
