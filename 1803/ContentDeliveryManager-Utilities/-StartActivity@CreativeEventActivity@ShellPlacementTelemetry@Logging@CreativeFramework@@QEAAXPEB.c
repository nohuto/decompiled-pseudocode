/*
 * XREFs of ?StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG0I@Z @ 0x18002AC60
 * Callers:
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x18002EF50 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180016F68 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x18002A584 (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180035310 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StartActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4)
{
  _DWORD *v7; // rsi
  const struct _TlgProvider_t *v8; // rax
  GUID *v9; // rdx
  RTL_SRWLOCK *v10; // rcx
  __int64 v11; // rcx
  const struct _TlgProvider_t *v12; // rsi
  DWORD CurrentThreadId; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // r8
  const GUID *v18; // r9
  _QWORD *v19; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  PSRWLOCK *v23; // [rsp+60h] [rbp-19h]
  __int64 v24; // [rsp+68h] [rbp-11h]
  const unsigned __int16 *v25; // [rsp+70h] [rbp-9h]
  int v26; // [rsp+78h] [rbp-1h]
  int v27; // [rsp+7Ch] [rbp+3h]
  const unsigned __int16 *v28; // [rsp+80h] [rbp+7h]
  int v29; // [rsp+88h] [rbp+Fh]
  int v30; // [rsp+8Ch] [rbp+13h]
  int *v31; // [rsp+90h] [rbp+17h]
  __int64 v32; // [rsp+98h] [rbp+1Fh]
  int v33; // [rsp+F8h] [rbp+7Fh] BYREF

  v33 = a4;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    SRWLock);
  v7 = (_DWORD *)*((_QWORD *)this + 6);
  v8 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  v9 = (GUID *)(v7 + 2);
  if ( *(_DWORD *)v8 <= 5u )
    *(_QWORD *)&v9->Data1 = 0LL;
  else
    EventActivityIdControl(3u, v9);
  v10 = SRWLock[0];
  *v7 = 1;
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  v12 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
  if ( *(_DWORD *)v12 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v24 = 4LL;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v23 = SRWLock;
    LODWORD(v14) = 0;
    if ( a2 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a2[v14] );
    }
    v27 = 0;
    v26 = 2 * v14 + 2;
    if ( !a2 )
      a2 = &Src;
    LODWORD(v15) = 0;
    v25 = a2;
    v16 = a3 == 0LL;
    if ( a3 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a3[v15] );
      v16 = a3 == 0LL;
    }
    v30 = 0;
    v29 = 2 * v15 + 2;
    if ( v16 )
      a3 = &Src;
    v28 = a3;
    v31 = &v33;
    v32 = 4LL;
    v17 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v17 + 4)
      || (v18 = (const GUID *)(v17 + 24), !*(_DWORD *)(v17 + 24))
      && !*(_DWORD *)(v17 + 28)
      && !*(_DWORD *)(v17 + 32)
      && !*(_DWORD *)(v17 + 36) )
    {
      v18 = 0LL;
    }
    TlgWrite(v12, &unk_180155424, (LPCGUID)(v17 + 8), v18, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v19 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v11,
                          1);
    else
      Local = 0LL;
    *v19 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v19;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
