/*
 * XREFs of ?StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_W0PEBD@Z @ 0x18005EAB8
 * Callers:
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180061070 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180016F68 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180025AC8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180035310 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::StartActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const char *a4)
{
  _DWORD *v8; // r14
  const struct _TlgProvider_t *v9; // rax
  GUID *v10; // rdx
  RTL_SRWLOCK *v11; // rcx
  __int64 v12; // rcx
  const struct _TlgProvider_t *v13; // r14
  DWORD CurrentThreadId; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  bool v17; // zf
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r8
  const GUID *v21; // r9
  _QWORD *v22; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  PSRWLOCK *v26; // [rsp+60h] [rbp-19h]
  __int64 v27; // [rsp+68h] [rbp-11h]
  const wchar_t *v28; // [rsp+70h] [rbp-9h]
  int v29; // [rsp+78h] [rbp-1h]
  int v30; // [rsp+7Ch] [rbp+3h]
  const wchar_t *v31; // [rsp+80h] [rbp+7h]
  int v32; // [rsp+88h] [rbp+Fh]
  int v33; // [rsp+8Ch] [rbp+13h]
  const char *v34; // [rsp+90h] [rbp+17h]
  int v35; // [rsp+98h] [rbp+1Fh]
  int v36; // [rsp+9Ch] [rbp+23h]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v8 = (_DWORD *)*((_QWORD *)this + 6);
  v9 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  v10 = (GUID *)(v8 + 2);
  if ( *(_DWORD *)v9 <= 5u )
    *(_QWORD *)&v10->Data1 = 0LL;
  else
    EventActivityIdControl(3u, v10);
  v11 = SRWLock[0];
  *v8 = 1;
  if ( v11 )
    ReleaseSRWLockExclusive(v11);
  v13 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
  if ( *(_DWORD *)v13 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v27 = 4LL;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v26 = SRWLock;
    LODWORD(v15) = 0;
    if ( a2 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a2[v15] );
    }
    v30 = 0;
    v29 = 2 * v15 + 2;
    if ( !a2 )
      a2 = &Src;
    LODWORD(v16) = 0;
    v28 = a2;
    v17 = a3 == 0LL;
    if ( a3 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a3[v16] );
      v17 = a3 == 0LL;
    }
    v18 = 2 * v16 + 2;
    v33 = 0;
    if ( v17 )
      a3 = &Src;
    v32 = v18;
    v31 = a3;
    LODWORD(v19) = 0;
    if ( a4 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a4[v19] );
    }
    v36 = 0;
    if ( !a4 )
      a4 = (const char *)&word_1800F144C;
    v35 = v19 + 1;
    v34 = a4;
    v20 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v20 + 4)
      || (v21 = (const GUID *)(v20 + 24), !*(_DWORD *)(v20 + 24))
      && !*(_DWORD *)(v20 + 28)
      && !*(_DWORD *)(v20 + 32)
      && !*(_DWORD *)(v20 + 36) )
    {
      v21 = 0LL;
    }
    TlgWrite(v13, &unk_180157917, (LPCGUID)(v20 + 8), v21, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v22 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v12,
                          1);
    else
      Local = 0LL;
    *v22 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v22;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
