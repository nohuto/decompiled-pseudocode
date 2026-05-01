/*
 * XREFs of ??1?$ActivityBase@VWelcomeScreenExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800B26D8
 * Callers:
 *     ??1Hide@WelcomeScreenExperienceManagerTelemetry@@QEAA@XZ @ 0x1800B1AE8 (--1Hide@WelcomeScreenExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ??1PositionApplication@WelcomeScreenExperienceManagerTelemetry@@QEAA@XZ @ 0x1800B1FF8 (--1PositionApplication@WelcomeScreenExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ??1Show@WelcomeScreenExperienceManagerTelemetry@@QEAA@XZ @ 0x1800B2508 (--1Show@WelcomeScreenExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ?Hide@CWelcomeScreenExperienceManager@@UEAAJXZ @ 0x1800B31D0 (-Hide@CWelcomeScreenExperienceManager@@UEAAJXZ.c)
 *     ?Show@CWelcomeScreenExperienceManager@@UEAAJXZ @ 0x1800B3280 (-Show@CWelcomeScreenExperienceManager@@UEAAJXZ.c)
 *     ?PositionApplication@CWelcomeScreenExperienceManager@@UEAAJXZ @ 0x1800B3330 (-PositionApplication@CWelcomeScreenExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$ActivityData@VWelcomeScreenExperienceManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWelcomeScreenExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800B27E8 (--1-$ActivityData@VWelcomeScreenExperienceManagerLogging@@U_TlgReflectorTag_Param0I_ea_1800B27E8.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wil::ActivityBase<WelcomeScreenExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WelcomeScreenExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi

  v2 = *(volatile signed __int32 **)(a1 + 304);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(char **)(a1 + 304);
      if ( v3 )
      {
        wil::ActivityBase<WelcomeScreenExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WelcomeScreenExperienceManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WelcomeScreenExperienceManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v3 + 8);
        operator delete(v3);
      }
    }
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  wil::ActivityBase<WelcomeScreenExperienceManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WelcomeScreenExperienceManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WelcomeScreenExperienceManagerLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
