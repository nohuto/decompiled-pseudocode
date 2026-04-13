/*
 * XREFs of ?StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ @ 0x18006D718
 * Callers:
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x18006DEF8 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180014BAC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180032050 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18006CFE8 (-Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

void __fastcall CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::StartActivity(
        CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *this)
{
  __int64 v2; // rdi
  RTL_SRWLOCK *v3; // rcx
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  const GUID *v8; // r9
  char *v9; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+60h] [rbp-18h]
  int v15; // [rsp+64h] [rbp-14h]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v2 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)CDMUtilsUnlockLogging::Provider() <= 5u )
    *(_QWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  v3 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  v5 = CDMUtilsUnlockLogging::Provider();
  if ( *(_DWORD *)v5 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v15 = 0;
    LODWORD(SRWLock) = CurrentThreadId;
    p_SRWLock = &SRWLock;
    v14 = 4;
    v7 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v7 + 4)
      || (v8 = (const GUID *)(v7 + 24), !*(_DWORD *)(v7 + 24))
      && !*(_DWORD *)(v7 + 28)
      && !*(_DWORD *)(v7 + 32)
      && !*(_DWORD *)(v7 + 36) )
    {
      v8 = 0LL;
    }
    TlgWrite(v5, &unk_18013EBCF, (LPCGUID)(v7 + 8), v8, 3u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v9 = (char *)this + 8;
    if ( *((_DWORD *)v9 + 6) )
      __fastfail(7u);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v4,
                          1);
    else
      Local = 0LL;
    *(_QWORD *)v9 = Local;
    if ( Local )
    {
      *((_QWORD *)v9 + 2) = *Local;
      *Local = v9;
      *((_DWORD *)v9 + 6) = GetCurrentThreadId();
    }
  }
}
