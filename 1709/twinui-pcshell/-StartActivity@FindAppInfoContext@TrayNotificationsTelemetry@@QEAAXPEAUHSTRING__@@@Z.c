/*
 * XREFs of ?StartActivity@FindAppInfoContext@TrayNotificationsTelemetry@@QEAAXPEAUHSTRING__@@@Z @ 0x1801BA134
 * Callers:
 *     ?FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@ApplicationModel@Windows@@@Z @ 0x1801BA300 (-FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@Applicat.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020D80 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@TrayNotificationAreaLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1801B9A88 (-Provider@TrayNotificationAreaLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall TrayNotificationsTelemetry::FindAppInfoContext::StartActivity(
        TrayNotificationsTelemetry::FindAppInfoContext *this,
        HSTRING a2)
{
  __int64 v4; // rbx
  RTL_SRWLOCK *v5; // rcx
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rsi
  DWORD CurrentThreadId; // eax
  const WCHAR *StringRawBuffer; // rbx
  LPWSTR FileNameW; // rax
  const WCHAR *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  const GUID *v14; // r9
  _QWORD *v15; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  PSRWLOCK *v19; // [rsp+60h] [rbp-48h]
  __int64 v20; // [rsp+68h] [rbp-40h]
  const WCHAR *v21; // [rsp+70h] [rbp-38h]
  int v22; // [rsp+78h] [rbp-30h]
  int v23; // [rsp+7Ch] [rbp-2Ch]

  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v4 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)TrayNotificationAreaLogging::Provider() <= 5u )
    *(_QWORD *)(v4 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  v5 = SRWLock[0];
  *(_DWORD *)v4 = 1;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v7 = TrayNotificationAreaLogging::Provider();
  if ( *(_DWORD *)v7 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v20 = 4LL;
    LODWORD(SRWLock[0]) = CurrentThreadId;
    v19 = SRWLock;
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    FileNameW = 0LL;
    if ( StringRawBuffer )
    {
      if ( PathIsFileSpecW(StringRawBuffer) )
        FileNameW = (LPWSTR)StringRawBuffer;
      else
        FileNameW = PathFindFileNameW(StringRawBuffer);
    }
    v11 = &word_18021F3A8;
    LODWORD(v12) = 0;
    if ( FileNameW )
    {
      v11 = FileNameW;
      v12 = -1LL;
      do
        ++v12;
      while ( FileNameW[v12] );
    }
    v21 = v11;
    v22 = 2 * v12 + 2;
    v23 = 0;
    v13 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v13 + 4)
      || (v14 = (const GUID *)(v13 + 24), !*(_DWORD *)(v13 + 24))
      && !*(_DWORD *)(v13 + 28)
      && !*(_DWORD *)(v13 + 32)
      && !*(_DWORD *)(v13 + 36) )
    {
      v14 = 0LL;
    }
    TlgWrite(v7, &unk_180268594, (LPCGUID)(v13 + 8), v14, 4u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v15 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v6,
                          1);
    else
      Local = 0LL;
    *v15 = Local;
    if ( Local )
    {
      *((_QWORD *)this + 3) = *Local;
      *Local = v15;
      *((_DWORD *)this + 8) = GetCurrentThreadId();
    }
  }
}
