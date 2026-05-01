/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180093D88
 * Callers:
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064B10 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007523C (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18007527C (--1-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 * Callees:
 *     ??1?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180075460 (--1-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_180075460.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rdi

  v2 = *a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *a1;
      if ( *a1 )
      {
        wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)(v3 + 2));
        operator delete((void *)v3, (const struct std::nothrow_t *)0x100);
      }
    }
    *a1 = 0LL;
  }
}
