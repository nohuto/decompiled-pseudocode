/*
 * XREFs of ??1CortanaSharedExperienceManager@@UEAA@XZ @ 0x1800A8864
 * Callers:
 *     ??_ECortanaSharedExperienceManager@@UEAAPEAXI@Z @ 0x1800A8830 (--_ECortanaSharedExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CortanaSharedExperienceManager::~CortanaSharedExperienceManager(CortanaSharedExperienceManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _TP_TIMER *v7; // rdi
  struct _TP_TIMER *v8; // rdi
  void *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rcx
  volatile signed __int32 *v13; // rcx
  volatile signed __int32 *v14; // rcx
  volatile signed __int32 *v15; // rcx
  volatile signed __int32 *v16; // rcx
  volatile signed __int32 *v17; // rcx
  volatile signed __int32 *v18; // rcx
  volatile signed __int32 *v19; // rcx
  volatile signed __int32 *v20; // rcx
  volatile signed __int32 *v21; // rcx
  volatile signed __int32 *v22; // rcx
  volatile signed __int32 *v23; // rcx
  volatile signed __int32 *v24; // rcx
  volatile signed __int32 *v25; // rcx
  __int64 v26; // rcx
  volatile signed __int32 *v27; // rcx

  v2 = *((_QWORD *)this + 65);
  if ( v2 )
  {
    *((_QWORD *)this + 65) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 60);
  if ( v3 )
  {
    *((_QWORD *)this + 60) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 59);
  if ( v4 )
  {
    *((_QWORD *)this + 59) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 58);
  if ( v5 )
  {
    *((_QWORD *)this + 58) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 57);
  if ( v6 )
  {
    *((_QWORD *)this + 57) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (struct _TP_TIMER *)*((_QWORD *)this + 56);
  if ( v7 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 56), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v7, 1);
    CloseThreadpoolTimer(v7);
  }
  v8 = (struct _TP_TIMER *)*((_QWORD *)this + 54);
  if ( v8 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 54), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v8, 1);
    CloseThreadpoolTimer(v8);
  }
  v9 = (void *)*((_QWORD *)this + 50);
  if ( v9 )
    operator delete(v9);
  v10 = *((_QWORD *)this + 49);
  if ( v10 )
  {
    *((_QWORD *)this + 49) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 48);
  if ( v11 )
  {
    *((_QWORD *)this + 48) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = (volatile signed __int32 *)*((_QWORD *)this + 45);
  if ( v12 )
  {
    *((_QWORD *)this + 45) = 0LL;
    if ( !_InterlockedDecrement(v12 + 3) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v12 + 24LL))(v12, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v13 = (volatile signed __int32 *)*((_QWORD *)this + 42);
  if ( v13 )
  {
    *((_QWORD *)this + 42) = 0LL;
    if ( !_InterlockedDecrement(v13 + 3) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v13 + 24LL))(v13, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v14 = (volatile signed __int32 *)*((_QWORD *)this + 39);
  if ( v14 )
  {
    *((_QWORD *)this + 39) = 0LL;
    if ( !_InterlockedDecrement(v14 + 3) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v14 + 24LL))(v14, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v15 = (volatile signed __int32 *)*((_QWORD *)this + 36);
  if ( v15 )
  {
    *((_QWORD *)this + 36) = 0LL;
    if ( !_InterlockedDecrement(v15 + 3) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v15 + 24LL))(v15, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v16 = (volatile signed __int32 *)*((_QWORD *)this + 33);
  if ( v16 )
  {
    *((_QWORD *)this + 33) = 0LL;
    if ( !_InterlockedDecrement(v16 + 3) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v16 + 24LL))(v16, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v17 = (volatile signed __int32 *)*((_QWORD *)this + 30);
  if ( v17 )
  {
    *((_QWORD *)this + 30) = 0LL;
    if ( !_InterlockedDecrement(v17 + 3) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v17 + 24LL))(v17, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v18 = (volatile signed __int32 *)*((_QWORD *)this + 27);
  if ( v18 )
  {
    *((_QWORD *)this + 27) = 0LL;
    if ( !_InterlockedDecrement(v18 + 3) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v18 + 24LL))(v18, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v19 = (volatile signed __int32 *)*((_QWORD *)this + 24);
  if ( v19 )
  {
    *((_QWORD *)this + 24) = 0LL;
    if ( !_InterlockedDecrement(v19 + 3) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v19 + 24LL))(v19, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v20 = (volatile signed __int32 *)*((_QWORD *)this + 21);
  if ( v20 )
  {
    *((_QWORD *)this + 21) = 0LL;
    if ( !_InterlockedDecrement(v20 + 3) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v20 + 24LL))(v20, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v21 = (volatile signed __int32 *)*((_QWORD *)this + 18);
  if ( v21 )
  {
    *((_QWORD *)this + 18) = 0LL;
    if ( !_InterlockedDecrement(v21 + 3) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v21 + 24LL))(v21, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v22 = (volatile signed __int32 *)*((_QWORD *)this + 15);
  if ( v22 )
  {
    *((_QWORD *)this + 15) = 0LL;
    if ( !_InterlockedDecrement(v22 + 3) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v22 + 24LL))(v22, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v23 = (volatile signed __int32 *)*((_QWORD *)this + 12);
  if ( v23 )
  {
    *((_QWORD *)this + 12) = 0LL;
    if ( !_InterlockedDecrement(v23 + 3) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v23 + 24LL))(v23, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v24 = (volatile signed __int32 *)*((_QWORD *)this + 9);
  if ( v24 )
  {
    *((_QWORD *)this + 9) = 0LL;
    if ( !_InterlockedDecrement(v24 + 3) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v24 + 24LL))(v24, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v25 = (volatile signed __int32 *)*((_QWORD *)this + 6);
  if ( v25 )
  {
    *((_QWORD *)this + 6) = 0LL;
    if ( !_InterlockedDecrement(v25 + 3) )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v25 + 24LL))(v25, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v26 = *((_QWORD *)this + 5);
  if ( v26 < 0 )
  {
    v27 = (volatile signed __int32 *)(2 * v26);
    if ( !_InterlockedDecrement(v27 + 3) )
    {
      if ( v27 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v27 + 32LL))(v27, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}
