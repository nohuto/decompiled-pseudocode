/*
 * XREFs of ?_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIApplicationView@@@Z @ 0x180013078
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@@Z @ 0x18000CAF0 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@@012@@Z @ 0x180019E34 (--$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComPtr@.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a___ @ 0x180019FD0 (CIAMGlobals--QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a___.c)
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x18002C790 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_HandleViewCreation_EnsureApplicationView(
        CApplicationManager *this,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64),
        struct IApplicationView **a3)
{
  void (__fastcall **v5)(struct IImmersiveApplicationInternal *, GUID *, __int64); // rbx
  __int64 v6; // rax
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rbx
  HWND v10; // rcx
  PVOID Ptr; // rdi
  struct IApplicationView *v12; // rcx
  volatile signed __int32 *v13; // rcx
  struct IApplicationView *v14; // rcx
  struct IApplicationView *v15; // rax
  __int64 v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-38h]
  unsigned int v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+30h] [rbp-28h]
  _QWORD v21[4]; // [rsp+38h] [rbp-20h] BYREF
  struct IApplicationView *v22; // [rsp+88h] [rbp+30h] BYREF
  __int64 v23; // [rsp+90h] [rbp+38h] BYREF
  __int64 v24; // [rsp+98h] [rbp+40h] BYREF

  v21[1] = -2LL;
  *a3 = 0LL;
  v24 = 0LL;
  v5 = *a2;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v24);
  (*v5)((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v6);
  v22 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PVOID, __int64, struct IApplicationView **))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[12].Ptr
                                                                             + 56LL))(
         CApplicationManagerUtility::g_pIAMGlobals[12].Ptr,
         v24,
         &v22);
  if ( v7 >= 0 )
    goto LABEL_21;
  v23 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(&v23);
  if ( v7 >= 0 )
  {
    v9 = v23;
    v20 = v23;
    if ( v23 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 44));
      v9 = v20;
    }
    v21[0] = v9;
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 44));
      v9 = v20;
    }
    if ( (int)CIAMGlobals::QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a___(v8, v21) >= 0 )
      SHProcessMessagesUntilEventsEx(v10, (void **)(v23 + 48), 1u, 0x1388u, v18, v19);
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
    v12 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v7 = (*(__int64 (__fastcall **)(PVOID, __int64, struct IApplicationView **))(*(_QWORD *)Ptr + 56LL))(Ptr, v24, &v22);
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 44), 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 72LL))(v20, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  v13 = (volatile signed __int32 *)v23;
  if ( v23 )
  {
    v23 = 0LL;
    if ( _InterlockedExchangeAdd(v13 + 11, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v13 + 72LL))(v13, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( v7 >= 0 )
  {
LABEL_21:
    v15 = v22;
    v14 = 0LL;
    v22 = 0LL;
    *a3 = v15;
  }
  else
  {
    v14 = v22;
  }
  if ( v14 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v16 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return (unsigned int)v7;
}
