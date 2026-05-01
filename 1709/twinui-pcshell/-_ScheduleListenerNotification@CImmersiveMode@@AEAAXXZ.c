/*
 * XREFs of ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x180032E3C
 * Callers:
 *     ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x1800327F0 (-ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CImmersiveMode::_ScheduleListenerNotification(CImmersiveMode *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r15
  _QWORD *v4; // rax
  _QWORD *v5; // r14
  int Ptr; // ebp
  IUnknown *v7; // rsi
  IUnknown *v8; // rax
  IUnknown *v9; // rdi
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+88h] [rbp+10h]
  _QWORD *v15; // [rsp+90h] [rbp+18h]
  __int64 v16; // [rsp+98h] [rbp+20h]

  v2 = (_QWORD *)*((_QWORD *)this + 45);
  v14 = v2;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = v2;
    v2 = 0LL;
    v14 = 0LL;
    v3[1] = v4;
    *v3 = &CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::`vftable';
    *((_DWORD *)v3 + 4) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  v15 = v3;
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v3 + 8LL))(v3);
    *((_QWORD *)this + 45) = 0LL;
    v5 = v3;
    v13 = v3;
    (*(void (__fastcall **)(_QWORD *))(*v3 + 8LL))(v3);
    Ptr = (int)CApplicationManagerUtility::g_pIAMGlobals[11].Ptr;
    v7 = 0LL;
    v16 = 0LL;
    v8 = (IUnknown *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    if ( v8 )
    {
      v8->lpVtbl = (struct IUnknownVtbl *)&IAppViewDataSourceAdapter::`vftable';
      HIDWORD(v8[1].lpVtbl) = 1;
      v8->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v9->lpVtbl = (struct IUnknownVtbl *)off_1801FB378;
      v9[2].lpVtbl = 0LL;
      if ( &v9[2] != (IUnknown *)&v13 )
      {
        v9[2].lpVtbl = (struct IUnknownVtbl *)v3;
        v5 = 0LL;
        v13 = 0LL;
      }
      v7 = v9;
    }
    Windows::Internal::ComTaskPool::RunTask(3, 2u, Ptr, 0, v7, 0LL);
    if ( v7 )
      ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  }
  else
  {
    v10 = (_QWORD *)*((_QWORD *)this + 45);
    if ( v10 )
    {
      v11 = v10[1];
      if ( v11 )
      {
        v10[1] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      operator delete(v10);
    }
  }
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  if ( v2 )
  {
    v12 = v2[1];
    if ( v12 )
    {
      v2[1] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    operator delete(v2);
  }
}
