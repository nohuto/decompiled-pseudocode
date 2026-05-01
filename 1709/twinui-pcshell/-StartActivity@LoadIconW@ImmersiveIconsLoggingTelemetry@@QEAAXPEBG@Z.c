/*
 * XREFs of ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x1801CA8A4
 * Callers:
 *     ??$Start@AEAPEBG@LoadIconW@ImmersiveIconsLoggingTelemetry@@SA?AV01@AEAPEBG@Z @ 0x1801CCD38 (--$Start@AEAPEBG@LoadIconW@ImmersiveIconsLoggingTelemetry@@SA-AV01@AEAPEBG@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180005888 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ??0CMarshaledInterface@@QEAA@XZ @ 0x1800059B0 (--0CMarshaledInterface@@QEAA@XZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18002697C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1?$unique_ptr@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180079D78 (--1-$unique_ptr@EU-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ.c)
 *     ?close_reset@?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@SAXPEAG@Z @ 0x180079D90 (-close_reset@-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constant@_K$0A@.c)
 *     ?CensorAppID@LoggingUtil@@YAJPEBGPEAPEAG@Z @ 0x1801CA1F8 (-CensorAppID@LoggingUtil@@YAJPEBGPEAPEAG@Z.c)
 *     ?Provider@ImmersiveIconsLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1801CA2B4 (-Provider@ImmersiveIconsLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801CC55C (-LockExclusive@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall ImmersiveIconsLoggingTelemetry::LoadIconW::StartActivity(
        ImmersiveIconsLoggingTelemetry::LoadIconW *this,
        const unsigned __int16 *a2)
{
  unsigned __int16 **v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rbx
  DWORD CurrentThreadId; // eax
  const WCHAR *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  const GUID *v12; // r9
  _QWORD *v13; // rbx
  _QWORD *Local; // rcx
  LPVOID pv; // [rsp+30h] [rbp-19h] BYREF
  RTL_SRWLOCK *v16; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  RTL_SRWLOCK **v18; // [rsp+60h] [rbp+17h]
  __int64 v19; // [rsp+68h] [rbp+1Fh]
  const WCHAR *v20; // [rsp+70h] [rbp+27h]
  int v21; // [rsp+78h] [rbp+2Fh]
  int v22; // [rsp+7Ch] [rbp+33h]

  CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&pv);
  if ( pv )
    wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>::close_reset(pv);
  pv = 0LL;
  LoggingUtil::CensorAppID(a2, (unsigned __int16 **)&pv, v4);
  wil::ActivityBase<ImmersiveIconsLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(this, &v16);
  v5 = *((_QWORD *)this + 6);
  if ( *(_DWORD *)ImmersiveIconsLogging::Provider() <= 5u )
    *(_QWORD *)(v5 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v5 + 8));
  *(_DWORD *)v5 = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v16);
  v7 = ImmersiveIconsLogging::Provider();
  if ( *(_DWORD *)v7 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v9 = &word_18021F3A8;
    LODWORD(v16) = CurrentThreadId;
    v18 = &v16;
    v19 = 4LL;
    LODWORD(v10) = 0;
    if ( pv )
    {
      v9 = (const WCHAR *)pv;
      v10 = -1LL;
      do
        ++v10;
      while ( *((_WORD *)pv + v10) );
    }
    v20 = v9;
    v21 = 2 * v10 + 2;
    v22 = 0;
    v11 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v11 + 4)
      || (v12 = (const GUID *)(v11 + 24), !*(_DWORD *)(v11 + 24))
      && !*(_DWORD *)(v11 + 28)
      && !*(_DWORD *)(v11 + 32)
      && !*(_DWORD *)(v11 + 36) )
    {
      v12 = 0LL;
    }
    TlgWrite(v7, &unk_180268A02, (LPCGUID)(v11 + 8), v12, 4u, &pData);
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
  wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
}
