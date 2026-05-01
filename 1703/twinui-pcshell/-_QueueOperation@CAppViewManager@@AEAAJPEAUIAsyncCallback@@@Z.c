/*
 * XREFs of ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180043150
 * Callers:
 *     ?ShowAsStandalone@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003D040 (-ShowAsStandalone@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsStandalone@ViewManagerInterop.c)
 *     ?Switch@CAppViewManager@@UEAAXPEAUIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003D520 (-Switch@CAppViewManager@@UEAAXPEAUIViewEventArgsForSwitch@ViewManagerInterop@Shell@Internal@Wind.c)
 *     ?ShowAsViewMode@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003D650 (-ShowAsViewMode@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@She.c)
 *     ?ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1EW4APPLICATION_VIEW_MODE@@MMPEAUIAsyncCallback@@@Z @ 0x18003D9D0 (-ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1EW4APPLICATION.c)
 *     ?PrepareToSwitch@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x18003DB80 (-PrepareToSwitch@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallbac.c)
 *     ?SwitchViews@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x18003DD20 (-SwitchViews@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?Add@?$CTSimpleArray@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@PEA_K@Z @ 0x1800437C0 (-Add@-$CTSimpleArray@V-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_d8d2db46f898e0ad7843c45335dab43b___ @ 0x180045C0C (Windows--Internal--ComTaskPool--WrapWithTask__lambda_d8d2db46f898e0ad7843c45335dab43b___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::_QueueOperation(CAppViewManager *this, struct IAsyncCallback *a2)
{
  _QWORD *v4; // rsi
  int v5; // r14d
  int v6; // ebx
  IUnknown **v7; // rax
  struct IAsyncCallback *v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct IAsyncCallback *v13; // [rsp+70h] [rbp+30h] BYREF
  CAppViewManager *v14; // [rsp+78h] [rbp+38h] BYREF
  unsigned __int64 v15; // [rsp+80h] [rbp+40h] BYREF
  CAppViewManager *v16; // [rsp+88h] [rbp+48h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = (_QWORD *)((char *)this + 128);
  v5 = CTSimpleArray<Microsoft::WRL::ComPtr<IAsyncCallback>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>>::Add(
         (char *)this + 128,
         &v13,
         &v15);
  if ( v13 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v5 >= 0 )
  {
    v16 = this;
    if ( this )
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)this + 8LL))(this);
    v14 = this;
    if ( this )
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)this + 8LL))(this);
    v6 = *((_DWORD *)this + 40);
    v7 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_d8d2db46f898e0ad7843c45335dab43b___(
                        &v13,
                        &v14);
    v5 = Windows::Internal::ComTaskPool::RunTask(0, 2u, v6, 0, *v7, 0LL);
    v8 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( v14 )
      (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v5 < 0 )
    {
      v9 = v15;
      if ( v15 < *((_QWORD *)this + 17) )
      {
        v10 = *(_QWORD *)(*v4 + 8 * v15);
        if ( v10 )
        {
          *(_QWORD *)(*v4 + 8 * v15) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        v11 = *((_QWORD *)this + 17);
        if ( v9 != v11 - 1 )
          memmove((void *)(*v4 + 8 * v9), (const void *)(*v4 + 8 * v9 + 8), 8 * (v11 - v9) - 8);
        --*((_QWORD *)this + 17);
      }
    }
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)this + 16LL))(this);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)v5;
}
