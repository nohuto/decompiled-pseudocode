/*
 * XREFs of ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800165C0
 * Callers:
 *     ?_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z @ 0x1800163D0 (-_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___::operator() @ 0x18001A750 (CDelayIAMOperations--CDelayedOperation__lambda_c784fe341da5436104ad3e4e13eefb9b___--operator().c)
 * Callees:
 *     ??$CreateRefCountedObj@USERVICE_AVAILABILITY_CHANGED_DATA@@U1@@@YA?AV?$ComPtr@V?$CRefCountedObject@USERVICE_AVAILABILITY_CHANGED_DATA@@@@@WRL@Microsoft@@$$QEAUSERVICE_AVAILABILITY_CHANGED_DATA@@@Z @ 0x18001A4B4 (--$CreateRefCountedObj@USERVICE_AVAILABILITY_CHANGED_DATA@@U1@@@YA-AV-$ComPtr@V-$CRefCountedObje.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E3058 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1801E5CBD (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CApplicationManager::_SendServiceAvailabilityChangedNotification(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const void *a4,
        int a5)
{
  unsigned __int64 v6; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  void *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  unsigned int Ptr; // r15d
  _QWORD *v14; // rsi
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v19[4]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h] BYREF
  __int64 v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+68h] [rbp-18h]
  void *Block; // [rsp+70h] [rbp-10h]
  int v24; // [rsp+78h] [rbp-8h]
  __int64 v25; // [rsp+A0h] [rbp+20h] BYREF

  v19[1] = -2LL;
  v6 = a3;
  v25 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 240) + 24LL))(a1 + 240, &v25) >= 0 )
  {
    v8 = v25;
    v20 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v21 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v22 = a5;
    Block = 0LL;
    v24 = 0;
    if ( (_DWORD)v6 )
    {
      v9 = 16 * v6;
      if ( !is_mul_ok(v6, 0x10uLL) )
        v9 = -1LL;
      v10 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
      Block = v10;
      if ( v10 )
      {
        memcpy_0(v10, a4, 16 * v6);
        v24 = v6;
      }
    }
    CreateRefCountedObj<SERVICE_AVAILABILITY_CHANGED_DATA,SERVICE_AVAILABILITY_CHANGED_DATA>(v19, &v20);
    v11 = v19[0];
    if ( v19[0] )
    {
      v12 = v19[0];
      v18 = v19[0];
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19[0] + 8LL))(v19[0]);
      Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[11].Ptr;
      v14 = 0LL;
      v19[2] = 0LL;
      v15 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v16 = v15;
      if ( v15 )
      {
        *v15 = &IAppViewDataSourceAdapter::`vftable';
        *((_DWORD *)v15 + 3) = 1;
        *v15 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *v16 = off_1801F9640;
        v16[2] = 0LL;
        if ( v16 + 2 != &v18 )
        {
          v16[2] = v11;
          v12 = 0LL;
          v18 = 0LL;
        }
        v14 = v16;
      }
      v19[3] = v14;
      Windows::Internal::ComTaskPool::RunTask(3LL, 2LL, Ptr, 0LL);
      if ( v14 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    operator delete(Block);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v17 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
}
