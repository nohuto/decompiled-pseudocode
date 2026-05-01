/*
 * XREFs of ?Stop@?$ActivityBase@VWelcomeScreenExperienceManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B4808
 * Callers:
 *     ?CheckExtensionForApplication@CWelcomeScreenExperienceManager@@AEAAJPEBG0PEA_N@Z @ 0x1800B34E8 (-CheckExtensionForApplication@CWelcomeScreenExperienceManager@@AEAAJPEBG0PEA_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Provider@WelcomeScreenExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B0FD0 (-Provider@WelcomeScreenExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?StopActivity@CheckExtensionForApplication@WelcomeScreenExperienceManagerTelemetry@@MEAAXXZ @ 0x1800B10E0 (-StopActivity@CheckExtensionForApplication@WelcomeScreenExperienceManagerTelemetry@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall wil::ActivityBase<WelcomeScreenExperienceManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        WelcomeScreenExperienceManagerTelemetry::CheckExtensionForApplication *this)
{
  __int64 v2; // rax
  int v3; // edi
  RTL_SRWLOCK *v4; // rcx
  int v5; // edi
  const struct _TlgProvider_t *v6; // rdi
  DWORD CurrentThreadId; // eax
  int v8; // [rsp+30h] [rbp-19h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]

  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v2 = *((_QWORD *)this + 6);
  v3 = *(_DWORD *)(v2 + 72);
  if ( v3 < 1 )
    __fastfail(7u);
  if ( *(int *)(v2 + 76) >= 0 )
    *(_DWORD *)(v2 + 76) = 0;
  v4 = SRWLock;
  v5 = v3 - 1;
  *(_DWORD *)(v2 + 72) = v5;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v5 )
  {
    v6 = WelcomeScreenExperienceManagerLogging::Provider();
    if ( *(_DWORD *)v6 > 5u )
    {
      v8 = 0;
      v13 = 0;
      v11 = &v8;
      v12 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v16 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v15 = 4;
      TlgWrite(v6, &unk_1801FBC83, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
    }
  }
  else
  {
    WelcomeScreenExperienceManagerTelemetry::CheckExtensionForApplication::StopActivity(this);
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((WelcomeScreenExperienceManagerTelemetry::CheckExtensionForApplication *)((char *)this + 8));
}
