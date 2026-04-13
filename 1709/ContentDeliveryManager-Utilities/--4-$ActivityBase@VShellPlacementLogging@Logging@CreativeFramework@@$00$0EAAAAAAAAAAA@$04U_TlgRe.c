/*
 * XREFs of ??4?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18008DB20
 * Callers:
 *     ??0LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@AEBV0123@@Z @ 0x180089BFC (--0LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@AEBV0123@@Z.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800261B4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$?0V?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@RefAndObject@?$shared_object@V?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA@$$QEAV?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@3@@Z @ 0x18005D0D8 (--$-0V-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgRefl.c)
 *     ??1?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180089F6C (--1-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorT_ea_180089F6C.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
        __int64 a1,
        _QWORD *a2)
{
  __int64 **v4; // rdi
  void *v5; // rdx
  __int64 v6; // r8
  __int64 *i; // rax
  __int64 v8; // rax
  volatile signed __int32 *v9; // rcx
  void *v10; // rdi
  volatile signed __int32 *v11; // rax
  void *v12; // rax
  __int64 v13; // r14
  volatile signed __int32 *v14; // rcx
  void *v15; // rbp
  volatile signed __int32 *v16; // rcx
  void *v17; // rdi
  volatile signed __int32 *v18; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 32) )
  {
    v4 = (__int64 **)(a1 + 8);
    if ( *(_DWORD *)(a1 + 32) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v5, v6, (const char *)0x8007029CLL);
    *((_DWORD *)v4 + 6) = 0;
    for ( i = *v4; *i; *v4 = i )
    {
      v8 = **v4;
      if ( (__int64 **)v8 == v4 )
      {
        **v4 = (__int64)v4[2];
        break;
      }
      i = (__int64 *)(v8 + 16);
    }
    *v4 = 0LL;
  }
  if ( a2[38] )
  {
    *(_QWORD *)(a1 + 48) = a2[6];
    v9 = *(volatile signed __int32 **)(a1 + 304);
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd(v9, 0xFFFFFFFF) == 1 )
      {
        v10 = *(void **)(a1 + 304);
        if ( v10 )
        {
          wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v10 + 8);
          operator delete(v10);
        }
      }
      *(_QWORD *)(a1 + 304) = 0LL;
    }
    v11 = (volatile signed __int32 *)a2[38];
    *(_QWORD *)(a1 + 304) = v11;
    if ( v11 )
      _InterlockedIncrement(v11);
  }
  else
  {
    v12 = operator new(0x100uLL, (const struct std::nothrow_t *)&TLV::nothrow);
    if ( v12 )
      v13 = wil::details::shared_object<wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::RefAndObject::RefAndObject(
              (__int64)v12,
              (__int64)(a2 + 7));
    else
      v13 = 0LL;
    if ( v13 )
    {
      v14 = *(volatile signed __int32 **)(a1 + 304);
      if ( v14 )
      {
        if ( _InterlockedExchangeAdd(v14, 0xFFFFFFFF) == 1 )
        {
          v15 = *(void **)(a1 + 304);
          if ( v15 )
          {
            wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v15 + 8);
            operator delete(v15);
          }
        }
        *(_QWORD *)(a1 + 304) = 0LL;
      }
      *(_QWORD *)(a1 + 304) = v13;
      *(_QWORD *)(a1 + 48) = (v13 + 8) & -(__int64)(v13 != 0);
      v16 = (volatile signed __int32 *)a2[38];
      if ( v16 )
      {
        if ( _InterlockedExchangeAdd(v16, 0xFFFFFFFF) == 1 )
        {
          v17 = (void *)a2[38];
          if ( v17 )
          {
            wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v17 + 8);
            operator delete(v17);
          }
        }
        a2[38] = 0LL;
      }
      v18 = *(volatile signed __int32 **)(a1 + 304);
      a2[38] = v18;
      if ( v18 )
        _InterlockedIncrement(v18);
      a2[6] = *(_QWORD *)(a1 + 48);
      a2[5] = *(_QWORD *)(a1 + 48) + 40LL;
    }
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48) + 40LL;
  return a1;
}
