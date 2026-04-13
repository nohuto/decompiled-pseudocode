/*
 * XREFs of ?StartActivity@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x18005D4A8
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x18005FE58 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180016F68 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180025AC8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180035310 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity *this,
        const char *a2)
{
  __int64 v4; // rsi
  RTL_SRWLOCK *v5; // rcx
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  const GUID *v11; // r9
  char *v12; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  PSRWLOCK *v16; // [rsp+60h] [rbp-38h]
  int v17; // [rsp+68h] [rbp-30h]
  int v18; // [rsp+6Ch] [rbp-2Ch]
  const char *v19; // [rsp+70h] [rbp-28h]
  int v20; // [rsp+78h] [rbp-20h]
  int v21; // [rsp+7Ch] [rbp-1Ch]

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
    v18 = 0;
    LODWORD(v9) = 0;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v16 = SRWLock;
    v17 = 4;
    if ( a2 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a2[v9] );
    }
    if ( !a2 )
      a2 = (const char *)&word_1800F144C;
    v21 = 0;
    v19 = a2;
    v20 = v9 + 1;
    v10 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v10 + 4)
      || (v11 = (const GUID *)(v10 + 24), !*(_DWORD *)(v10 + 24))
      && !*(_DWORD *)(v10 + 28)
      && !*(_DWORD *)(v10 + 32)
      && !*(_DWORD *)(v10 + 36) )
    {
      v11 = 0LL;
    }
    TlgWrite(v7, &unk_180157D6A, (LPCGUID)(v10 + 8), v11, 4u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v12 = (char *)this + 8;
    if ( *((_DWORD *)v12 + 6) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v6,
                          1);
    else
      Local = 0LL;
    *(_QWORD *)v12 = Local;
    if ( Local )
    {
      *((_QWORD *)v12 + 2) = *Local;
      *Local = v12;
      *((_DWORD *)v12 + 6) = GetCurrentThreadId();
    }
  }
}
