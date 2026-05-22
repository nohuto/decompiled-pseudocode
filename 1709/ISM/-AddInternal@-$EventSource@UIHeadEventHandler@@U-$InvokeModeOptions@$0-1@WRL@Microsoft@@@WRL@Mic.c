/*
 * XREFs of ?AddInternal@?$EventSource@UIHeadEventHandler@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIHeadEventHandler@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180069E28
 * Callers:
 *     ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAJPEAUIHeadEventHandler@@PEAUEventRegistrationToken@@@Z @ 0x180069880 (-AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAJPEAUIHeadEventHandler@@PEAUEventRegistrationTo.c)
 * Callees:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180068FE4 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1800690EC (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<IHeadEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  RTL_SRWLOCK *v4; // r12
  unsigned __int64 v6; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  int v9; // edi
  struct Microsoft::WRL::Details::ModuleBase *v10; // rcx
  _QWORD *Ptr; // rax
  Microsoft::WRL::Details::EventTargetArray *v12; // rdi
  void **v13; // r13
  struct IUnknown **i; // rbx
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rax
  volatile signed __int32 *v18; // [rsp+20h] [rbp-20h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v19; // [rsp+28h] [rbp-18h]
  volatile signed __int32 *v20; // [rsp+30h] [rbp-10h]

  v4 = a1 + 2;
  *a4 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  if ( a1->Ptr )
    v6 = ((__int64)(*((_QWORD *)a1->Ptr + 3) - *((_QWORD *)a1->Ptr + 2)) >> 3) + 1;
  else
    v6 = 1LL;
  v19 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( !v7 )
  {
    v9 = -2147024882;
LABEL_21:
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return (unsigned int)v9;
  }
  v10 = Microsoft::WRL::Details::ModuleBase::module_;
  v7[3] = 1;
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( v10 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v10 + 8LL))(v10);
  *((_QWORD *)v8 + 2) = 0LL;
  *(_QWORD *)v8 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  *((_QWORD *)v8 + 3) = 0LL;
  *((_QWORD *)v8 + 4) = 0LL;
  v9 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
         (Microsoft::WRL::Details::EventTargetArray *)v8,
         v6);
  if ( v9 >= 0 )
  {
    _InterlockedIncrement(v8 + 3);
    v19 = (Microsoft::WRL::Details::EventTargetArray *)v8;
    if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    v9 = 0;
  }
  else if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  if ( v9 < 0 )
  {
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v19 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v19 + 24LL))(v19, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    goto LABEL_21;
  }
  Ptr = a1->Ptr;
  v12 = v19;
  if ( a1->Ptr )
  {
    v13 = (void **)Ptr[4];
    for ( i = (struct IUnknown **)Ptr[2]; i != (struct IUnknown **)Ptr[3]; ++i )
    {
      Microsoft::WRL::Details::EventTargetArray::AddTail(v19, *i, *v13);
      Ptr = a1->Ptr;
      ++v13;
    }
  }
  *a4 = a2;
  Microsoft::WRL::Details::EventTargetArray::AddTail(v12, a2, a3);
  AcquireSRWLockExclusive(a1 + 1);
  v15 = 0LL;
  v18 = 0LL;
  if ( &v18 != (volatile signed __int32 **)a1 )
  {
    v15 = (volatile signed __int32 *)a1->Ptr;
    a1->Ptr = 0LL;
    v18 = v15;
  }
  v20 = (volatile signed __int32 *)a1->Ptr;
  v16 = v20;
  a1->Ptr = v12;
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v20 + 24LL))(v20, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    v15 = v18;
  }
  if ( a1 != (RTL_SRWLOCK *)-8LL )
    ReleaseSRWLockExclusive(a1 + 1);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v9 = 0;
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v18 + 24LL))(v18, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return (unsigned int)v9;
}
