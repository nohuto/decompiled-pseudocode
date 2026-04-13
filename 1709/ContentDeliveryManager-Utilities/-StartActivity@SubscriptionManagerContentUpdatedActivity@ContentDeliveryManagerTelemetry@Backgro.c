/*
 * XREFs of ?StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXXZ @ 0x18003E148
 * Callers:
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180041174 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180014BAC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x1800229D8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?zInternalStart@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180041B40 (-zInternalStart@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *this)
{
  __int64 v2; // rcx
  const struct _TlgProvider_t *v3; // rdi
  __int64 v4; // r8
  const GUID *v5; // r9
  char *v6; // rbx
  _QWORD *Local; // rcx
  DWORD CurrentThreadId; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v3 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v3 > 5u && (*((_QWORD *)v3 + 2) & 0x200000000000LL) != 0 )
  {
    v2 = *((_QWORD *)v3 + 3) & 0x200000000000LL;
    if ( v2 == *((_QWORD *)v3 + 3) )
    {
      v12 = 0;
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v11 = 4;
      v4 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v4 + 4)
        || (v5 = (const GUID *)(v4 + 24), !*(_DWORD *)(v4 + 24))
        && !*(_DWORD *)(v4 + 28)
        && !*(_DWORD *)(v4 + 32)
        && !*(_DWORD *)(v4 + 36) )
      {
        v5 = 0LL;
      }
      TlgWrite(v3, &unk_18013C10D, (LPCGUID)(v4 + 8), v5, 3u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v6 = (char *)this + 8;
    if ( *((_DWORD *)v6 + 6) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v2,
                          1);
    else
      Local = 0LL;
    *(_QWORD *)v6 = Local;
    if ( Local )
    {
      *((_QWORD *)v6 + 2) = *Local;
      *Local = v6;
      *((_DWORD *)v6 + 6) = GetCurrentThreadId();
    }
  }
}
