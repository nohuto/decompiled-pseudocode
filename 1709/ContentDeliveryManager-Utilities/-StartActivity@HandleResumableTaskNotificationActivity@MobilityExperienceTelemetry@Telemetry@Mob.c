/*
 * XREFs of ?StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXU_GUID@@PEBGPEBD@Z @ 0x180045E9C
 * Callers:
 *     _lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_::operator() @ 0x180047AE4 (_lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180014BAC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180032050 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ @ 0x1800458E8 (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

void __fastcall MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::StartActivity(
        MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *this,
        struct _GUID *a2,
        const unsigned __int16 *a3,
        const char *a4)
{
  __int64 v8; // rbx
  const struct _TlgProvider_t *v9; // rax
  RTL_SRWLOCK *v10; // rcx
  const struct _TlgProvider_t *v11; // rax
  __int64 v12; // rcx
  const struct _TlgProvider_t *v13; // rbx
  __int64 v14; // rax
  const WCHAR *v15; // rcx
  const unsigned __int16 *v16; // rcx
  __int64 v17; // r8
  const GUID *v18; // r9
  _QWORD *v19; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  PSRWLOCK *v23; // [rsp+68h] [rbp-19h]
  __int64 v24; // [rsp+70h] [rbp-11h]
  struct _GUID *v25; // [rsp+78h] [rbp-9h]
  __int64 v26; // [rsp+80h] [rbp-1h]
  const WCHAR *v27; // [rsp+88h] [rbp+7h]
  int v28; // [rsp+90h] [rbp+Fh]
  int v29; // [rsp+94h] [rbp+13h]
  const unsigned __int16 *v30; // [rsp+98h] [rbp+17h]
  int v31; // [rsp+A0h] [rbp+1Fh]
  int v32; // [rsp+A4h] [rbp+23h]

  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    SRWLock);
  v8 = *((_QWORD *)this + 6);
  v9 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
  if ( *(_DWORD *)v9 > 5u
    && (*((_QWORD *)v9 + 2) & 0x800000000000LL) != 0
    && (*((_QWORD *)v9 + 3) & 0x800000000000LL) == *((_QWORD *)v9 + 3) )
  {
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  }
  else
  {
    *(_QWORD *)(v8 + 8) = 0LL;
  }
  v10 = SRWLock[0];
  *(_DWORD *)v8 = 1;
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  v11 = MobilityExperience::Telemetry::MobilityExperienceLogging::Provider();
  v13 = v11;
  if ( *(_DWORD *)v11 > 5u && (*((_QWORD *)v11 + 2) & 0x800000000000LL) != 0 )
  {
    v12 = *((_QWORD *)v11 + 3) & 0x800000000000LL;
    if ( v12 == *((_QWORD *)v11 + 3) )
    {
      LODWORD(v14) = GetCurrentThreadId();
      v24 = 4LL;
      LODWORD(SRWLock[0]) = v14;
      v23 = SRWLock;
      LODWORD(v14) = 0;
      v25 = a2;
      v15 = &Src;
      v26 = 16LL;
      if ( a3 )
      {
        v15 = a3;
        v14 = -1LL;
        do
          ++v14;
        while ( a3[v14] );
      }
      v27 = v15;
      v28 = 2 * v14 + 2;
      LODWORD(v14) = 0;
      v29 = 0;
      v16 = &word_1800E10E4;
      if ( a4 )
      {
        v16 = (const unsigned __int16 *)a4;
        v14 = -1LL;
        do
          ++v14;
        while ( a4[v14] );
      }
      v30 = v16;
      v31 = v14 + 1;
      v32 = 0;
      v17 = *((_QWORD *)this + 6);
      if ( !*(_BYTE *)(v17 + 4)
        || (v18 = (const GUID *)(v17 + 24), !*(_DWORD *)(v17 + 24))
        && !*(_DWORD *)(v17 + 28)
        && !*(_DWORD *)(v17 + 32)
        && !*(_DWORD *)(v17 + 36) )
      {
        v18 = 0LL;
      }
      TlgWrite(v13, &unk_18013C2E9, (LPCGUID)(v17 + 8), v18, 6u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v19 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v12,
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
