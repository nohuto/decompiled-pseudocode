/*
 * XREFs of ?OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ @ 0x180060AD0
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_de6b1f6763cb8f9e5e4be32e0bbc9f12__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800614F0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_de6b1f6763cb8f9e5e4be32e0bbc9f12__0__ea_1800614F0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F0F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?LogMPCLastHeadYawMovement@ISMTracing@@SAXI@Z @ 0x180060650 (-LogMPCLastHeadYawMovement@ISMTracing@@SAXI@Z.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d5aa6f58b9b035c1fafff95d9d2ce509__IHeadEventHandler_ @ 0x180061360 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_d5aa6f58b9b035c1fafff95d9d2ce509__IHea.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread(MPCHeadUpdateListener *this)
{
  MPCHeadUpdateListener *v1; // rsi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rdi
  char v4; // r15
  __int128 v5; // xmm1
  volatile signed __int32 *v6; // rbx
  signed __int32 v7; // eax
  ULONGLONG TickCount64; // rax
  ULONGLONG v9; // rbx
  __int128 v10; // [rsp+30h] [rbp-D0h]
  __int128 v11; // [rsp+30h] [rbp-D0h]
  __int128 v12; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v13; // [rsp+60h] [rbp-A0h]
  __int128 v14; // [rsp+70h] [rbp-90h]
  __int128 v15; // [rsp+80h] [rbp-80h]
  _OWORD v16[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v17; // [rsp+D0h] [rbp-30h]
  __int128 v18; // [rsp+E0h] [rbp-20h]
  __int128 v19; // [rsp+F0h] [rbp-10h]
  __int128 v20; // [rsp+100h] [rbp+0h]
  MPCHeadUpdateListener *v21; // [rsp+140h] [rbp+40h] BYREF
  __int64 v22; // [rsp+148h] [rbp+48h] BYREF

  v21 = this;
  v1 = MPCHeadUpdateListener::s_instance;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)MPCHeadUpdateListener::s_instance + 136);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)MPCHeadUpdateListener::s_instance + 136));
  v3 = *((_QWORD *)v1 + 4);
  v4 = *((_BYTE *)v1 + 104);
  v17 = *(_OWORD *)((char *)v1 + 40);
  v14 = v17;
  v18 = *(_OWORD *)((char *)v1 + 56);
  v15 = v18;
  v19 = *(_OWORD *)((char *)v1 + 72);
  v12 = v19;
  v20 = *(_OWORD *)((char *)v1 + 88);
  v10 = v20;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *((_BYTE *)v1 + 104) = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  v22 = v3;
  LOBYTE(v21) = v4;
  v16[1] = v15;
  v5 = v10;
  *(_QWORD *)&v11 = v16;
  v6 = 0LL;
  v16[0] = v14;
  *((_QWORD *)&v11 + 1) = &v21;
  v16[2] = v12;
  v16[3] = v5;
  AcquireSRWLockExclusive((PSRWLOCK)v1 + 1);
  if ( *(_QWORD *)v1 )
  {
    v6 = *(volatile signed __int32 **)v1;
    do
      v7 = *((_DWORD *)v6 + 3);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange(v6 + 3, v7 + 1, v7) );
  }
  if ( v1 != (MPCHeadUpdateListener *)-8LL )
    ReleaseSRWLockExclusive((PSRWLOCK)v1 + 1);
  if ( v6 )
  {
    v12 = v11;
    v13 = &v22;
    Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d5aa6f58b9b035c1fafff95d9d2ce509__IHeadEventHandler_(
      &v12,
      v6,
      v1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
  }
  TickCount64 = GetTickCount64();
  v9 = TickCount64;
  if ( v4 )
  {
    RtlPublishWnfStateData(WNF_HOLO_RESET_IDLE_TIMER, 0LL, 0LL, 0LL, 0LL);
    *((_QWORD *)v1 + 14) = v9;
    ISMTracing::LogMPCLastHeadYawMovement(0);
    *((_QWORD *)v1 + 15) = v9 + *((unsigned int *)v1 + 32);
  }
  else if ( *((_QWORD *)v1 + 15) <= TickCount64 )
  {
    ISMTracing::LogMPCLastHeadYawMovement((TickCount64 - *((_QWORD *)v1 + 14)) / 0x3E8);
    *((_QWORD *)v1 + 15) = v9 + *((unsigned int *)v1 + 32);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
