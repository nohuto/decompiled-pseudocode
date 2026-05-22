/*
 * XREFs of ?OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ @ 0x18006966C
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_de6b1f6763cb8f9e5e4be32e0bbc9f12__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18006A760 (wistd--_Func_impl_wistd--_Callable_obj__lambda_de6b1f6763cb8f9e5e4be32e0bbc9f12__0__ea_18006A760.c)
 * Callees:
 *     ?LogMPCLastHeadYawMovement@ISMTracing@@SAXI@Z @ 0x1800691F8 (-LogMPCLastHeadYawMovement@ISMTracing@@SAXI@Z.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d5aa6f58b9b035c1fafff95d9d2ce509__IHeadEventHandler_ @ 0x18006A564 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_d5aa6f58b9b035c1fafff95d9d2ce509__IHea.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread(MPCHeadUpdateListener *this)
{
  MPCHeadUpdateListener *v1; // rsi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rdi
  char v4; // r15
  __int128 v5; // xmm1
  volatile signed __int32 *v6; // rbx
  ULONGLONG TickCount64; // rax
  ULONGLONG v8; // rbx
  __int128 v9; // [rsp+30h] [rbp-D0h]
  __int128 v10; // [rsp+30h] [rbp-D0h]
  __int128 v11; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v12; // [rsp+60h] [rbp-A0h]
  __int128 v13; // [rsp+70h] [rbp-90h]
  __int128 v14; // [rsp+80h] [rbp-80h]
  _OWORD v15[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v16; // [rsp+D0h] [rbp-30h]
  __int128 v17; // [rsp+E0h] [rbp-20h]
  __int128 v18; // [rsp+F0h] [rbp-10h]
  __int128 v19; // [rsp+100h] [rbp+0h]
  MPCHeadUpdateListener *v20; // [rsp+140h] [rbp+40h] BYREF
  __int64 v21; // [rsp+150h] [rbp+50h] BYREF

  v20 = this;
  v1 = MPCHeadUpdateListener::s_instance;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)MPCHeadUpdateListener::s_instance + 136);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)MPCHeadUpdateListener::s_instance + 136));
  v3 = *((_QWORD *)v1 + 4);
  v4 = *((_BYTE *)v1 + 104);
  v16 = *(_OWORD *)((char *)v1 + 40);
  v13 = v16;
  v17 = *(_OWORD *)((char *)v1 + 56);
  v14 = v17;
  v18 = *(_OWORD *)((char *)v1 + 72);
  v11 = v18;
  v19 = *(_OWORD *)((char *)v1 + 88);
  v9 = v19;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *((_BYTE *)v1 + 104) = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  v21 = v3;
  LOBYTE(v20) = v4;
  v15[1] = v14;
  v5 = v9;
  *(_QWORD *)&v10 = v15;
  v6 = 0LL;
  v15[0] = v13;
  *((_QWORD *)&v10 + 1) = &v20;
  v15[2] = v11;
  v15[3] = v5;
  AcquireSRWLockExclusive((PSRWLOCK)v1 + 1);
  if ( *(_QWORD *)v1 )
  {
    v6 = *(volatile signed __int32 **)v1;
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v1 + 12LL));
  }
  if ( v1 != (MPCHeadUpdateListener *)-8LL )
    ReleaseSRWLockExclusive((PSRWLOCK)v1 + 1);
  if ( v6 )
  {
    v11 = v10;
    v12 = &v21;
    Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d5aa6f58b9b035c1fafff95d9d2ce509__IHeadEventHandler_(
      &v11,
      v6,
      v1);
    if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  TickCount64 = GetTickCount64();
  v8 = TickCount64;
  if ( v4 )
  {
    RtlPublishWnfStateData(WNF_HOLO_RESET_IDLE_TIMER, 0LL, 0LL, 0LL, 0LL);
    *((_QWORD *)v1 + 14) = v8;
    ISMTracing::LogMPCLastHeadYawMovement(0);
    *((_QWORD *)v1 + 15) = v8 + *((unsigned int *)v1 + 32);
  }
  else if ( *((_QWORD *)v1 + 15) <= TickCount64 )
  {
    ISMTracing::LogMPCLastHeadYawMovement((TickCount64 - *((_QWORD *)v1 + 14)) / 0x3E8);
    *((_QWORD *)v1 + 15) = v8 + *((unsigned int *)v1 + 32);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
