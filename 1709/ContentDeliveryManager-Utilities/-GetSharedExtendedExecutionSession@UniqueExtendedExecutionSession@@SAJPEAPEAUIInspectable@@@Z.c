/*
 * XREFs of ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x18006E660
 * Callers:
 *     ?QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ @ 0x18006D8D4 (-QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003D64 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ @ 0x18006D860 (-ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ.c)
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x18006DEF8 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession(struct IInspectable **a1)
{
  struct IInspectable *v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  int v5; // edi
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct IInspectable *v16; // rcx
  struct IInspectable *v17; // rcx
  _QWORD *v19; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  struct IInspectable *v21; // [rsp+80h] [rbp+38h] BYREF
  __int64 v22; // [rsp+88h] [rbp+40h] BYREF
  __int64 v23; // [rsp+90h] [rbp+48h] BYREF
  struct IInspectable *v24; // [rsp+98h] [rbp+50h] BYREF

  *a1 = 0LL;
  AcquireSRWLockExclusive(&UniqueExtendedExecutionSession::s_extendedExecutionLock);
  v21 = 0LL;
  if ( UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession )
  {
    v21 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, GUID *, struct IInspectable **))(*UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession
                                                                       + 24LL))(
           UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           &v21) >= 0 )
    {
      if ( v21 )
      {
        CDMUtilsUnlockTelemetry::ReusingExistingExtendedExecution();
        v2 = v21;
        if ( v21 )
        {
          ((void (__fastcall *)(struct IInspectable *))v21->lpVtbl->AddRef)(v21);
          v2 = v21;
        }
        *a1 = v2;
LABEL_46:
        v5 = 0;
        goto LABEL_47;
      }
    }
  }
  v24 = 0LL;
  v3 = operator new(0x58uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v4 = v3;
  v19 = v3;
  if ( !v3 )
  {
    v5 = -2147024882;
LABEL_17:
    v8 = 223LL;
    goto LABEL_38;
  }
  v6 = v3 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v3 + 1));
  v4[8] = 1LL;
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase>::`vftable';
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::FtmBase'};
  v7 = v4 + 6;
  v4[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v4 = v19;
  }
  *v4 = &UniqueExtendedExecutionSession::`vftable';
  *v6 = &UniqueExtendedExecutionSession::`vftable'{for `Microsoft::WRL::FtmBase'};
  *v7 = &UniqueExtendedExecutionSession::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  v4[9] = 0LL;
  v4[10] = 0LL;
  v5 = UniqueExtendedExecutionSession::RuntimeClassInitialize((UniqueExtendedExecutionSession *)v4);
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct IInspectable **))*v4)(
           v4,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           &v24);
  }
  else if ( !v4 )
  {
    goto LABEL_16;
  }
  (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
LABEL_16:
  if ( v5 < 0 )
    goto LABEL_17;
  v9 = UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession;
  UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v22 = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64 *))v24->lpVtbl->QueryInterface)(
         v24,
         &GUID_00000038_0000_0000_c000_000000000046,
         &v22);
  v10 = v22;
  if ( v5 >= 0 )
  {
    v23 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 24LL))(v22, &v23);
    if ( v5 >= 0 )
    {
      v12 = v23;
      v13 = v23;
      if ( v23 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
        v12 = v23;
      }
      v14 = UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession;
      UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession = v13;
      if ( v14 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        v12 = v23;
      }
      if ( v12 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v15 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v5 = 0;
      goto LABEL_36;
    }
    v11 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v10 = v22;
  }
  if ( v10 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_36:
  if ( v5 >= 0 )
  {
    v17 = v24;
    if ( v24 )
    {
      ((void (__fastcall *)(struct IInspectable *))v24->lpVtbl->AddRef)(v24);
      v17 = v24;
    }
    *a1 = v17;
    if ( v17 )
    {
      v24 = 0LL;
      ((void (__fastcall *)(struct IInspectable *))v17->lpVtbl->Release)(v17);
    }
    v2 = v21;
    goto LABEL_46;
  }
  v8 = 224LL;
LABEL_38:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v8,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
    (const char *)(unsigned int)v5);
  v16 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    ((void (__fastcall *)(struct IInspectable *))v16->lpVtbl->Release)(v16);
  }
  v2 = v21;
LABEL_47:
  if ( v2 )
  {
    v21 = 0LL;
    ((void (__fastcall *)(struct IInspectable *))v2->lpVtbl->Release)(v2);
  }
  ReleaseSRWLockExclusive(&UniqueExtendedExecutionSession::s_extendedExecutionLock);
  return (unsigned int)v5;
}
