/*
 * XREFs of ?StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_W0PEBD@Z @ 0x180057AD0
 * Callers:
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180059C60 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180014BAC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x1800229D8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180032050 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const char *a4)
{
  __int64 v8; // rbx
  RTL_SRWLOCK *v9; // rcx
  __int64 v10; // rcx
  const struct _TlgProvider_t *v11; // rbx
  DWORD CurrentThreadId; // eax
  const WCHAR *v13; // rdx
  const WCHAR *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  const unsigned __int16 *v17; // rcx
  __int64 v18; // r8
  const GUID *v19; // r9
  _QWORD *v20; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  PSRWLOCK *v24; // [rsp+60h] [rbp-19h]
  __int64 v25; // [rsp+68h] [rbp-11h]
  const WCHAR *v26; // [rsp+70h] [rbp-9h]
  int v27; // [rsp+78h] [rbp-1h]
  int v28; // [rsp+7Ch] [rbp+3h]
  const WCHAR *v29; // [rsp+80h] [rbp+7h]
  int v30; // [rsp+88h] [rbp+Fh]
  int v31; // [rsp+8Ch] [rbp+13h]
  const unsigned __int16 *v32; // [rsp+90h] [rbp+17h]
  int v33; // [rsp+98h] [rbp+1Fh]
  int v34; // [rsp+9Ch] [rbp+23h]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v8 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider() <= 5u )
    *(_QWORD *)(v8 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  v9 = SRWLock[0];
  *(_DWORD *)v8 = 1;
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  v11 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v11 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v25 = 4LL;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v24 = SRWLock;
    v13 = &Src;
    v14 = &Src;
    LODWORD(v15) = 0;
    if ( a2 )
    {
      v14 = a2;
      v15 = -1LL;
      do
        ++v15;
      while ( a2[v15] );
    }
    v26 = v14;
    v27 = 2 * v15 + 2;
    LODWORD(v16) = 0;
    v28 = 0;
    if ( a3 )
    {
      v13 = a3;
      v16 = -1LL;
      do
        ++v16;
      while ( a3[v16] );
    }
    v29 = v13;
    v30 = 2 * v16 + 2;
    LODWORD(v16) = 0;
    v31 = 0;
    v17 = &word_1800E10E4;
    if ( a4 )
    {
      v17 = (const unsigned __int16 *)a4;
      v16 = -1LL;
      do
        ++v16;
      while ( a4[v16] );
    }
    v32 = v17;
    v33 = v16 + 1;
    v34 = 0;
    v18 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v18 + 4)
      || (v19 = (const GUID *)(v18 + 24), !*(_DWORD *)(v18 + 24))
      && !*(_DWORD *)(v18 + 28)
      && !*(_DWORD *)(v18 + 32)
      && !*(_DWORD *)(v18 + 36) )
    {
      v19 = 0LL;
    }
    TlgWrite(v11, &unk_18013DC26, (LPCGUID)(v18 + 8), v19, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v20 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v10,
                          1);
    else
      Local = 0LL;
    *v20 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v20;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
