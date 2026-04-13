/*
 * XREFs of ?StartActivity@HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAAXU_GUID@@PEBGPEBD@Z @ 0x180049BF0
 * Callers:
 *     _lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_::operator() @ 0x18004B79C (_lambda_8e4e9cc2004ae5ecc1ef9233f35a06b9_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180016F68 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180035310 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ?Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ @ 0x1800495E8 (-Provider@MobilityExperienceLogging@Telemetry@MobilityExperience@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

void __fastcall MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity::StartActivity(
        MobilityExperience::Telemetry::MobilityExperienceTelemetry::HandleResumableTaskNotificationActivity *this,
        struct _GUID *a2,
        const unsigned __int16 *a3,
        const char *a4)
{
  __int64 v8; // rdi
  const struct _TlgProvider_t *v9; // rax
  RTL_SRWLOCK *v10; // rcx
  const struct _TlgProvider_t *v11; // rax
  __int64 v12; // rcx
  const struct _TlgProvider_t *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  const GUID *v17; // r9
  _QWORD *v18; // rbx
  _QWORD *Local; // rcx
  PSRWLOCK SRWLock[2]; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  PSRWLOCK *v22; // [rsp+68h] [rbp-19h]
  __int64 v23; // [rsp+70h] [rbp-11h]
  struct _GUID *v24; // [rsp+78h] [rbp-9h]
  __int64 v25; // [rsp+80h] [rbp-1h]
  const unsigned __int16 *v26; // [rsp+88h] [rbp+7h]
  int v27; // [rsp+90h] [rbp+Fh]
  int v28; // [rsp+94h] [rbp+13h]
  const char *v29; // [rsp+98h] [rbp+17h]
  int v30; // [rsp+A0h] [rbp+1Fh]
  int v31; // [rsp+A4h] [rbp+23h]

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
      v23 = 4LL;
      LODWORD(SRWLock[0]) = v14;
      v22 = SRWLock;
      LODWORD(v14) = 0;
      v24 = a2;
      v25 = 16LL;
      if ( a3 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( a3[v14] );
      }
      v28 = 0;
      v27 = 2 * v14 + 2;
      if ( !a3 )
        a3 = &Src;
      LODWORD(v15) = 0;
      v26 = a3;
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
      TlgWrite(v13, &unk_180156592, (LPCGUID)(v16 + 8), v17, 6u, &pData);
    }
  }
  if ( !*((_DWORD *)this + 8) )
  {
    v18 = (_QWORD *)((char *)this + 8);
    if ( wil::details::g_pThreadFailureCallbacks )
      Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                          v12,
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
