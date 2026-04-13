/*
 * XREFs of ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x18006E404
 * Callers:
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x18006DEF8 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 *     ??_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z @ 0x18006E320 (--_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z.c)
 *     ?OnSessionRevoked@UniqueExtendedExecutionSession@@QEAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Z @ 0x18006E3F0 (-OnSessionRevoked@UniqueExtendedExecutionSession@@QEAAJPEAUIInspectable@@PEAUIExtendedExecutionR.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800261F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z @ 0x18006F7C4 (--$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall UniqueExtendedExecutionSession::CloseSession(UniqueExtendedExecutionSession *this, char a2)
{
  UniqueExtendedExecutionSession *v3; // r9
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  UniqueExtendedExecutionSession *v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, UniqueExtendedExecutionSession **); // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  UniqueExtendedExecutionSession *v16; // [rsp+70h] [rbp+28h] BYREF
  char v17; // [rsp+78h] [rbp+30h] BYREF
  __int64 v18; // [rsp+80h] [rbp+38h] BYREF
  __int64 v19; // [rsp+88h] [rbp+40h] BYREF

  v17 = a2;
  AcquireSRWLockExclusive(&UniqueExtendedExecutionSession::s_extendedExecutionLock);
  v3 = 0LL;
  v16 = 0LL;
  if ( UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession )
  {
    v16 = 0LL;
    v4 = (*(__int64 (__fastcall **)(_QWORD, GUID *, UniqueExtendedExecutionSession **))(*UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession
                                                                                      + 24LL))(
           UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           &v16);
    v3 = v16;
    if ( v4 < 0 || !v16 )
    {
      v10 = (UniqueExtendedExecutionSession *)UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession;
      UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession = 0LL;
      if ( !v10 )
        goto LABEL_23;
      v9 = *(_QWORD *)v10;
      goto LABEL_22;
    }
    if ( this )
    {
      (*(void (__fastcall **)(UniqueExtendedExecutionSession *, __int64, __int64, UniqueExtendedExecutionSession *, __int64, RTL_SRWLOCK *, UniqueExtendedExecutionSession *))(*(_QWORD *)this + 8LL))(
        this,
        v5,
        v6,
        v16,
        -2LL,
        &UniqueExtendedExecutionSession::s_extendedExecutionLock,
        this);
      v3 = v16;
    }
    if ( v3 && this )
    {
      if ( v3 != this )
      {
        v19 = 0LL;
        v18 = 0LL;
        if ( (**(int (__fastcall ***)(UniqueExtendedExecutionSession *, GUID *, __int64 *))v3)(
               v3,
               &GUID_00000000_0000_0000_c000_000000000046,
               &v19) < 0 )
          goto LABEL_17;
        v7 = (**(__int64 (__fastcall ***)(UniqueExtendedExecutionSession *, GUID *, __int64 *))this)(
               this,
               &GUID_00000000_0000_0000_c000_000000000046,
               &v18);
        if ( v7 >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        if ( v7 < 0 || v19 != v18 )
          goto LABEL_17;
        v3 = v16;
      }
      v8 = UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession;
      UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession = 0LL;
      if ( v8 )
      {
        (*(void (__fastcall **)(__int64, __int64, __int64, UniqueExtendedExecutionSession *))(*(_QWORD *)v8 + 16LL))(
          v8,
          v5,
          v6,
          v3);
LABEL_17:
        v3 = v16;
      }
    }
    if ( !this )
      goto LABEL_23;
    v9 = *(_QWORD *)this;
    v10 = this;
LABEL_22:
    (*(void (__fastcall **)(UniqueExtendedExecutionSession *, __int64, __int64, UniqueExtendedExecutionSession *))(v9 + 16))(
      v10,
      v5,
      v6,
      v3);
    v3 = v16;
  }
LABEL_23:
  if ( v3 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  ReleaseSRWLockExclusive(&UniqueExtendedExecutionSession::s_extendedExecutionLock);
  v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, UniqueExtendedExecutionSession **))*((_QWORD *)this + 9);
  if ( v11 )
  {
    v16 = 0LL;
    v12 = (**v11)(v11, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e, &v16);
    if ( v12 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v16 + 48LL))(v16);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC7,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
          (const char *)(unsigned int)v13);
      CDMUtilsUnlockTelemetry::ExtendedExecutionClosed<bool &>(&v17);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
        (const char *)(unsigned int)v12);
    }
    v14 = *((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v16 )
      (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v16 + 16LL))(v16);
  }
}
