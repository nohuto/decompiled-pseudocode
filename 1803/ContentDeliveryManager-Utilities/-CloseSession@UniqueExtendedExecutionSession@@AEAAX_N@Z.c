/*
 * XREFs of ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x1800788E4
 * Callers:
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x1800783A8 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 *     ??_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z @ 0x1800787E0 (--_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z.c)
 *     ?OnSessionRevoked@UniqueExtendedExecutionSession@@QEAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Z @ 0x1800788D0 (-OnSessionRevoked@UniqueExtendedExecutionSession@@QEAAJPEAUIInspectable@@PEAUIExtendedExecutionR.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180029864 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z @ 0x180079CEC (--$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall UniqueExtendedExecutionSession::CloseSession(UniqueExtendedExecutionSession *this, char a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rax
  UniqueExtendedExecutionSession *v6; // rcx
  UniqueExtendedExecutionSession *v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, UniqueExtendedExecutionSession **); // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  UniqueExtendedExecutionSession *v13; // [rsp+70h] [rbp+28h] BYREF
  char v14; // [rsp+78h] [rbp+30h] BYREF
  __int64 v15; // [rsp+80h] [rbp+38h] BYREF
  __int64 v16; // [rsp+88h] [rbp+40h] BYREF

  v14 = a2;
  AcquireSRWLockExclusive(&UniqueExtendedExecutionSession::s_extendedExecutionLock);
  v13 = 0LL;
  if ( UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession )
  {
    v13 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, GUID *, UniqueExtendedExecutionSession **))(*UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession
                                                                                  + 24LL))(
           UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           &v13) < 0
      || !v13 )
    {
      v6 = (UniqueExtendedExecutionSession *)UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession;
      UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession = 0LL;
      if ( !v6 )
        goto LABEL_21;
      v5 = *(_QWORD *)v6;
      goto LABEL_20;
    }
    if ( this )
      (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)this + 8LL))(this);
    if ( v13 && this )
    {
      if ( v13 == this )
        goto LABEL_14;
      v16 = 0LL;
      v15 = 0LL;
      if ( (**(int (__fastcall ***)(UniqueExtendedExecutionSession *, GUID *, __int64 *))v13)(
             v13,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v16) >= 0 )
      {
        v3 = (**(__int64 (__fastcall ***)(UniqueExtendedExecutionSession *, GUID *, __int64 *))this)(
               this,
               &GUID_00000000_0000_0000_c000_000000000046,
               &v15);
        if ( v3 >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        if ( v3 >= 0 && v16 == v15 )
        {
LABEL_14:
          v4 = UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession;
          UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession = 0LL;
          if ( v4 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
      }
    }
    if ( this )
    {
      v5 = *(_QWORD *)this;
      v6 = this;
LABEL_20:
      (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(v5 + 16))(v6);
    }
  }
LABEL_21:
  v7 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  ReleaseSRWLockExclusive(&UniqueExtendedExecutionSession::s_extendedExecutionLock);
  v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, UniqueExtendedExecutionSession **))*((_QWORD *)this + 8);
  if ( v8 )
  {
    v13 = 0LL;
    v9 = (**v8)(v8, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e, &v13);
    if ( v9 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v13 + 48LL))(v13);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xCC,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
          (const char *)(unsigned int)v10);
      CDMUtilsUnlockTelemetry::ExtendedExecutionClosed<bool &>(&v14);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCA,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
        (const char *)(unsigned int)v9);
    }
    v11 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v13 )
      (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v13 + 16LL))(v13);
  }
}
