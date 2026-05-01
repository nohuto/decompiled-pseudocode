/*
 * XREFs of ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180045654
 * Callers:
 *     ?ShowAsStandalone@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003E110 (-ShowAsStandalone@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsStandalone@ViewManagerInterop.c)
 *     ?Switch@CAppViewManager@@UEAAXPEAUIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003E6F0 (-Switch@CAppViewManager@@UEAAXPEAUIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Wind.c)
 *     ?ShowAsViewMode@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003EAE0 (-ShowAsViewMode@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@She.c)
 *     ?ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1EW4APPLICATION_VIEW_MODE@@MMPEAUIAsyncCallback@@@Z @ 0x18003EEF0 (-ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1EW4APPLICATION.c)
 *     ?PrepareToSwitch@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x18003F180 (-PrepareToSwitch@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallbac.c)
 *     ?SwitchViews@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x18003F3A0 (-SwitchViews@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?Add@?$CTSimpleArray@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@PEA_K@Z @ 0x180045CA4 (-Add@-$CTSimpleArray@V-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::_QueueOperation(CAppViewManager *this, struct IAsyncCallback *a2)
{
  _QWORD *v4; // r15
  int v5; // r12d
  struct IAsyncCallback *v6; // rcx
  CAppViewManager *v7; // rdi
  int v8; // r12d
  IUnknown *v9; // rsi
  IUnknown *v10; // rax
  IUnknown *v11; // rbx
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct IAsyncCallback *v16; // [rsp+90h] [rbp+40h] BYREF
  CAppViewManager *v17; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int64 v18; // [rsp+A0h] [rbp+50h] BYREF
  CAppViewManager *v19; // [rsp+A8h] [rbp+58h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v16 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = (_QWORD *)((char *)this + 144);
  v5 = CTSimpleArray<Microsoft::WRL::ComPtr<IAsyncCallback>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>>::Add(
         (char *)this + 144,
         &v16,
         &v18);
  v6 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v5 >= 0 )
  {
    v19 = this;
    if ( this )
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)this + 8LL))(this);
    v7 = this;
    v17 = this;
    if ( this )
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)this + 8LL))(this);
    v8 = *((_DWORD *)this + 44);
    v9 = 0LL;
    v10 = (IUnknown *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( v10 )
    {
      v10->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
      HIDWORD(v10[1].lpVtbl) = 1;
      v10->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v11->lpVtbl = (struct IUnknownVtbl *)off_1801FC478;
      v11[2].lpVtbl = 0LL;
      if ( &v11[2] != (IUnknown *)&v17 )
      {
        v11[2].lpVtbl = (struct IUnknownVtbl *)this;
        v7 = 0LL;
        v17 = 0LL;
      }
      v9 = v11;
    }
    v5 = Windows::Internal::ComTaskPool::RunTask(0, 2u, v8, 0, v9, 0LL);
    if ( v9 )
      ((void (__fastcall *)(IUnknown *))v9->lpVtbl->Release)(v9);
    if ( v7 )
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v5 < 0 )
    {
      v12 = v18;
      if ( v18 < *((_QWORD *)this + 19) )
      {
        v13 = *(_QWORD *)(*v4 + 8 * v18);
        if ( v13 )
        {
          *(_QWORD *)(*v4 + 8 * v18) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        v14 = *((_QWORD *)this + 19);
        if ( v12 != v14 - 1 )
          memmove((void *)(*v4 + 8 * v12), (const void *)(*v4 + 8 * v12 + 8), 8 * (v14 - v12) - 8);
        --*((_QWORD *)this + 19);
      }
    }
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)this + 16LL))(this);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)v5;
}
