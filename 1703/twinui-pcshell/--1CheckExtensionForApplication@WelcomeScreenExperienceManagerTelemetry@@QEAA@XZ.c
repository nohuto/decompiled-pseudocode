/*
 * XREFs of ??1CheckExtensionForApplication@WelcomeScreenExperienceManagerTelemetry@@QEAA@XZ @ 0x1800B14A4
 * Callers:
 *     ?CheckExtensionForApplication@CWelcomeScreenExperienceManager@@AEAAJPEBG0PEA_N@Z @ 0x1800B34E8 (-CheckExtensionForApplication@CWelcomeScreenExperienceManager@@AEAAJPEBG0PEA_N@Z.c)
 *     _CWelcomeScreenExperienceManager::CheckExtensionForApplication_::_1_::dtor$0 @ 0x18019C923 (_CWelcomeScreenExperienceManager--CheckExtensionForApplication_--_1_--dtor$0.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StopActivity@CheckExtensionForApplication@WelcomeScreenExperienceManagerTelemetry@@MEAAXXZ @ 0x1800B10E0 (-StopActivity@CheckExtensionForApplication@WelcomeScreenExperienceManagerTelemetry@@MEAAXXZ.c)
 *     ??1?$ActivityData@VWelcomeScreenExperienceManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWelcomeScreenExperienceManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800B274C (--1-$ActivityData@VWelcomeScreenExperienceManagerLogging@@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall WelcomeScreenExperienceManagerTelemetry::CheckExtensionForApplication::~CheckExtensionForApplication(
        WelcomeScreenExperienceManagerTelemetry::CheckExtensionForApplication *this)
{
  bool v1; // zf
  char v3; // si
  volatile signed __int32 *v4; // rax
  char *v5; // rdi
  _DWORD *v6; // rdx
  int v7; // r8d
  int v8; // eax
  volatile signed __int32 *v9; // rcx
  char *v10; // rdi
  PSRWLOCK SRWLock[2]; // [rsp+28h] [rbp-10h] BYREF

  v1 = *((_QWORD *)this + 38) == 0LL;
  *(_QWORD *)this = &WelcomeScreenExperienceManagerTelemetry::CheckExtensionForApplication::`vftable';
  v3 = 1;
  if ( v1 )
    goto LABEL_12;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( !v4 || *v4 != 1 )
  {
    v3 = 0;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
      {
        v5 = (char *)*((_QWORD *)this + 38);
        if ( v5 )
        {
          wil::ActivityBase<WelcomeScreenExperienceManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WelcomeScreenExperienceManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WelcomeScreenExperienceManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v5 + 8);
          operator delete(v5);
        }
      }
      *((_QWORD *)this + 38) = 0LL;
    }
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  if ( v3 )
  {
LABEL_12:
    v6 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v6 == 1 )
    {
      v7 = -2147024322;
      if ( (int)v6[21] < 0 )
        v7 = v6[21];
      v8 = v6[18];
      if ( v8 < 1 )
        __fastfail(7u);
      if ( (int)v6[19] >= 0 )
        v6[19] = v7;
      v6[18] = v8 - 1;
      WelcomeScreenExperienceManagerTelemetry::CheckExtensionForApplication::StopActivity(this);
    }
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 38);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
    {
      v10 = (char *)*((_QWORD *)this + 38);
      if ( v10 )
      {
        wil::ActivityBase<WelcomeScreenExperienceManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WelcomeScreenExperienceManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WelcomeScreenExperienceManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v10 + 8);
        operator delete(v10);
      }
    }
    *((_QWORD *)this + 38) = 0LL;
  }
  wil::ActivityBase<WelcomeScreenExperienceManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WelcomeScreenExperienceManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WelcomeScreenExperienceManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)this + 56);
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((WelcomeScreenExperienceManagerTelemetry::CheckExtensionForApplication *)((char *)this + 8));
}
