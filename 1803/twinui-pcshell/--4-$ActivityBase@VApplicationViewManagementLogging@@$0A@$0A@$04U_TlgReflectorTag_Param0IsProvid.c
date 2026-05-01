/*
 * XREFs of ??4?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180017DA8
 * Callers:
 *     NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___ @ 0x180017610 (NotificationDispatcher--RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___.c)
 * Callees:
 *     ??1?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180095244 (--1-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??4?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x1800F991C (--4-$shared_object@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0Is.c)
 *     ??$create@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x1800F9950 (--$create@V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18010894C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 *v5; // rcx
  __int64 v6; // rax
  volatile signed __int32 **v7; // r14
  volatile signed __int32 **v8; // rdi
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v11; // rsi
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 32) )
  {
    v4 = a1 + 8;
    if ( *(_DWORD *)(a1 + 32) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL,
        v12);
    *(_DWORD *)(v4 + 24) = 0;
    v5 = *(__int64 **)v4;
    while ( 1 )
    {
      v6 = *v5;
      if ( !*v5 )
        break;
      if ( v6 == v4 )
      {
        *v5 = *(_QWORD *)(v4 + 16);
        break;
      }
      v5 = (__int64 *)(v6 + 16);
      *(_QWORD *)v4 = v6 + 16;
    }
    *(_QWORD *)v4 = 0LL;
  }
  v7 = (volatile signed __int32 **)(a2 + 38);
  v8 = (volatile signed __int32 **)(a1 + 304);
  if ( a2[38] )
  {
    *(_QWORD *)(a1 + 48) = a2[6];
    if ( *v8 )
    {
      if ( _InterlockedExchangeAdd(*v8, 0xFFFFFFFF) == 1 )
      {
        v11 = *v8;
        if ( *v8 )
        {
          wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>(v11 + 2);
          operator delete((void *)v11, (const struct std::nothrow_t *)0x100);
        }
      }
      *v8 = 0LL;
    }
    v9 = *v7;
    *v8 = *v7;
    if ( v9 )
      _InterlockedIncrement(v9);
  }
  else if ( (unsigned __int8)wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::create<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>(
                               a1 + 304,
                               a2 + 7) )
  {
    *(_QWORD *)(a1 + 48) = (unsigned __int64)(*v8 + 2) & -(__int64)(*v8 != 0LL);
    wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      a2 + 38,
      a1 + 304);
    a2[6] = *(_QWORD *)(a1 + 48);
    a2[5] = *(_QWORD *)(a1 + 48) + 40LL;
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48) + 40LL;
  return a1;
}
