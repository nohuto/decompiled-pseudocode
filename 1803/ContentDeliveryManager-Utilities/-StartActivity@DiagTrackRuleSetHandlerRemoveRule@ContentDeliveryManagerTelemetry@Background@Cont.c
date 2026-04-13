/*
 * XREFs of ?StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x180074388
 * Callers:
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180075070 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180016F68 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180025AC8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180035310 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *this,
        const wchar_t *a2,
        int a3,
        const char *a4)
{
  _DWORD *v7; // r14
  const struct _TlgProvider_t *v8; // rax
  GUID *v9; // rdx
  RTL_SRWLOCK *v10; // rcx
  __int64 v11; // rcx
  const struct _TlgProvider_t *v12; // r14
  DWORD CurrentThreadId; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  const GUID *v17; // r9
  _QWORD *v18; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  PSRWLOCK *v22; // [rsp+60h] [rbp-19h]
  __int64 v23; // [rsp+68h] [rbp-11h]
  const wchar_t *v24; // [rsp+70h] [rbp-9h]
  int v25; // [rsp+78h] [rbp-1h]
  int v26; // [rsp+7Ch] [rbp+3h]
  int *v27; // [rsp+80h] [rbp+7h]
  __int64 v28; // [rsp+88h] [rbp+Fh]
  const char *v29; // [rsp+90h] [rbp+17h]
  int v30; // [rsp+98h] [rbp+1Fh]
  int v31; // [rsp+9Ch] [rbp+23h]
  int v32; // [rsp+F0h] [rbp+77h] BYREF

  v32 = a3;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v7 = (_DWORD *)*((_QWORD *)this + 6);
  v8 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v9 = (GUID *)(v7 + 2);
  if ( *(_DWORD *)v8 <= 5u )
    *(_QWORD *)&v9->Data1 = 0LL;
  else
    EventActivityIdControl(3u, v9);
  v10 = SRWLock[0];
  *v7 = 1;
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  v12 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v12 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v23 = 4LL;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v22 = SRWLock;
    LODWORD(v14) = 0;
    if ( a2 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a2[v14] );
    }
    v26 = 0;
    v28 = 4LL;
    if ( !a2 )
      a2 = &Src;
    v25 = 2 * v14 + 2;
    v27 = &v32;
    LODWORD(v15) = 0;
    v24 = a2;
    if ( a4 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a4[v15] );
    }
    v31 = 0;
    if ( !a4 )
      a4 = (const char *)&word_1800F144C;
    v30 = v15 + 1;
    v29 = a4;
    v16 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v16 + 4)
      || (v17 = (const GUID *)(v16 + 24), !*(_DWORD *)(v16 + 24))
      && !*(_DWORD *)(v16 + 28)
      && !*(_DWORD *)(v16 + 32)
      && !*(_DWORD *)(v16 + 36) )
    {
      v17 = 0LL;
    }
    TlgWrite(v12, &unk_180158779, (LPCGUID)(v16 + 8), v17, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v18 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v11,
                          1);
    else
      Local = 0LL;
    *v18 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v18;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
