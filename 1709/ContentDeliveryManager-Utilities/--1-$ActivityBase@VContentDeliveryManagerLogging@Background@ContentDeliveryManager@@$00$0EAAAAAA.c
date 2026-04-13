/*
 * XREFs of ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004E554
 * Callers:
 *     ??1ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18004CB90 (--1ActionInvokedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA.c)
 *     _lambda_b7df6605325939df64e4896ead66165a_::operator() @ 0x18004F318 (_lambda_b7df6605325939df64e4896ead66165a_--operator().c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800261B4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004E608 (--1-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@_ea_18004E608.c)
 */

__int64 *__fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi
  __int64 *result; // rax
  __int64 **v5; // rbx
  void *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(volatile signed __int32 **)(a1 + 304);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(char **)(a1 + 304);
      if ( v3 )
      {
        wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>(v3 + 8);
        operator delete(v3);
      }
    }
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  result = (__int64 *)wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  v5 = (__int64 **)(a1 + 8);
  if ( *((_DWORD *)v5 + 6) )
  {
    if ( *((_DWORD *)v5 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v6, v7, (const char *)0x8007029CLL);
    *((_DWORD *)v5 + 6) = 0;
    for ( result = *v5; *result; *v5 = result )
    {
      v8 = **v5;
      if ( (__int64 **)v8 == v5 )
      {
        result = v5[2];
        **v5 = (__int64)result;
        break;
      }
      result = (__int64 *)(v8 + 16);
    }
    *v5 = 0LL;
  }
  return result;
}
