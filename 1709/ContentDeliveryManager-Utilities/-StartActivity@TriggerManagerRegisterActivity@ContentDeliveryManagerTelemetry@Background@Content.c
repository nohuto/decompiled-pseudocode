/*
 * XREFs of ?StartActivity@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x180056500
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180058824 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180014BAC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x1800229D8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180032050 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *this,
        const char *a2)
{
  __int64 v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rbx
  DWORD CurrentThreadId; // eax
  const unsigned __int16 *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  const GUID *v12; // r9
  _QWORD *v13; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  PSRWLOCK *v17; // [rsp+60h] [rbp-38h]
  int v18; // [rsp+68h] [rbp-30h]
  int v19; // [rsp+6Ch] [rbp-2Ch]
  const unsigned __int16 *v20; // [rsp+70h] [rbp-28h]
  int v21; // [rsp+78h] [rbp-20h]
  int v22; // [rsp+7Ch] [rbp-1Ch]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v4 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider() <= 5u )
    *(_QWORD *)(v4 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  v5 = SRWLock[0];
  *(_DWORD *)v4 = 1;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v7 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v7 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v19 = 0;
    v9 = &word_1800E10E4;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    LODWORD(v10) = 0;
    v17 = SRWLock;
    v18 = 4;
    if ( a2 )
    {
      v9 = (const unsigned __int16 *)a2;
      v10 = -1LL;
      do
        ++v10;
      while ( a2[v10] );
    }
    v22 = 0;
    v21 = v10 + 1;
    v20 = v9;
    v11 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v11 + 4)
      || (v12 = (const GUID *)(v11 + 24), !*(_DWORD *)(v11 + 24))
      && !*(_DWORD *)(v11 + 28)
      && !*(_DWORD *)(v11 + 32)
      && !*(_DWORD *)(v11 + 36) )
    {
      v12 = 0LL;
    }
    TlgWrite(v7, &unk_18013E079, (LPCGUID)(v11 + 8), v12, 4u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v13 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v6,
                          1);
    else
      Local = 0LL;
    *v13 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v13;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
