/*
 * XREFs of ?_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ @ 0x180010C64
 * Callers:
 *     ?v_ShutdownServices@CApplicationManager@@MEAAJPEAUIProfferService@@@Z @ 0x18000B910 (-v_ShutdownServices@CApplicationManager@@MEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplicationManager::_ShutdownServiceProviders(CApplicationManager *this)
{
  unsigned int Ptr; // ebp
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  IUnknown *v7; // rcx
  __int64 v8; // rcx
  IUnknown *v9; // rcx
  __int64 v10; // rcx
  IUnknown *v11; // rcx
  __int64 v12; // rcx
  IUnknown *v13; // rcx
  __int64 v14; // rcx
  IUnknown *v15; // rcx
  __int64 v16; // rcx
  IUnknown *v17; // rcx
  __int64 v18; // rcx
  IUnknown *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx

  Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[11].Ptr;
  v3 = 0LL;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *v4 = &IAppViewDataSourceAdapter::`vftable';
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v5 = off_1801FA120;
    v3 = v5;
  }
  Windows::Internal::ComTaskPool::RunTask(3LL, 258LL, Ptr, 0LL);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  v6 = *((_QWORD *)this + 76);
  if ( v6 )
  {
    *((_QWORD *)this + 76) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (IUnknown *)*((_QWORD *)this + 67);
  if ( v7 )
  {
    IUnknown_SetSite(v7, 0LL);
    v8 = *((_QWORD *)this + 67);
    if ( v8 )
    {
      *((_QWORD *)this + 67) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  v9 = (IUnknown *)*((_QWORD *)this + 75);
  if ( v9 )
  {
    IUnknown_SetSite(v9, 0LL);
    v10 = *((_QWORD *)this + 75);
    if ( v10 )
    {
      *((_QWORD *)this + 75) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  v11 = (IUnknown *)*((_QWORD *)this + 72);
  if ( v11 )
  {
    IUnknown_SetSite(v11, 0LL);
    v12 = *((_QWORD *)this + 72);
    if ( v12 )
    {
      *((_QWORD *)this + 72) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  v13 = (IUnknown *)*((_QWORD *)this + 94);
  if ( v13 )
  {
    IUnknown_SetSite(v13, 0LL);
    v14 = *((_QWORD *)this + 94);
    if ( v14 )
    {
      *((_QWORD *)this + 94) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  v15 = (IUnknown *)*((_QWORD *)this + 66);
  if ( v15 )
  {
    IUnknown_SetSite(v15, 0LL);
    v16 = *((_QWORD *)this + 66);
    if ( v16 )
    {
      *((_QWORD *)this + 66) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  v17 = (IUnknown *)*((_QWORD *)this + 68);
  if ( v17 )
  {
    IUnknown_SetSite(v17, 0LL);
    v18 = *((_QWORD *)this + 68);
    if ( v18 )
    {
      *((_QWORD *)this + 68) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  v19 = (IUnknown *)*((_QWORD *)this + 77);
  if ( v19 )
  {
    IUnknown_SetSite(v19, 0LL);
    v20 = *((_QWORD *)this + 77);
    if ( v20 )
    {
      *((_QWORD *)this + 77) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  v21 = *((_QWORD *)this + 71);
  if ( v21 )
  {
    *((_QWORD *)this + 71) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = *((_QWORD *)this + 74);
  if ( v22 )
  {
    *((_QWORD *)this + 74) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = *((_QWORD *)this + 69);
  if ( v23 )
  {
    *((_QWORD *)this + 69) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v24 = *((_QWORD *)this + 70);
  if ( v24 )
  {
    *((_QWORD *)this + 70) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
}
