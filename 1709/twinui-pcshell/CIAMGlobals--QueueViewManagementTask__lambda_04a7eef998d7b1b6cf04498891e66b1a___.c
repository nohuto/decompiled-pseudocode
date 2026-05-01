/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a___ @ 0x180019FD0
 * Callers:
 *     ?_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIApplicationView@@@Z @ 0x180013078 (-_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIn.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_67fff51ef85bdb7f782db56f669e2f17___ @ 0x18001BDE8 (Windows--Internal--ComTaskPool--QueueTask__lambda_67fff51ef85bdb7f782db56f669e2f17___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a___(
        __int64 a1,
        volatile signed __int32 **a2)
{
  PSRWLOCK v3; // rdi
  PVOID Ptr; // rbx
  volatile signed __int32 *v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rax
  unsigned int v10; // ebp
  volatile signed __int32 *v11; // rcx
  PVOID v12; // [rsp+28h] [rbp-30h] BYREF
  volatile signed __int32 *v13; // [rsp+30h] [rbp-28h]

  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v12 = Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v9 = *a2;
    v13 = v9;
    if ( v9 )
      _InterlockedIncrement(v9 + 11);
    v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_67fff51ef85bdb7f782db56f669e2f17___(
            v8,
            v7,
            LODWORD(v3[13].Ptr),
            &v12,
            -2LL);
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 11, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v13 + 72LL))(v13, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    if ( v12 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v12 + 16LL))(v12);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v11 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      if ( _InterlockedExchangeAdd(v11 + 11, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v11 + 72LL))(v11, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    return v10;
  }
  else
  {
    v5 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      if ( _InterlockedExchangeAdd(v5 + 11, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 72LL))(v5, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    return 2147943568LL;
  }
}
