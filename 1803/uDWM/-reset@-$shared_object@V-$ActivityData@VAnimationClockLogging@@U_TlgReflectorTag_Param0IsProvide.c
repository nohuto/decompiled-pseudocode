/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180039240
 * Callers:
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000AD4C (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??1?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18000AD8C (--1-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 * Callees:
 *     ??1?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18000AFF4 (--1-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBas.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::shared_object<wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rdi

  v2 = *a1;
  if ( v2 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v4 = *a1;
      if ( *a1 )
      {
        wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)(v4 + 2));
        result = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, volatile signed __int32 *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 32LL))(
                   WPF::g_pProcessHeap,
                   v4);
      }
    }
    *a1 = 0LL;
  }
  return result;
}
