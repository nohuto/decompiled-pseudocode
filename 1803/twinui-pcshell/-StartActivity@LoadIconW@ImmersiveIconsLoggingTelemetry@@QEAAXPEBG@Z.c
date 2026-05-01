/*
 * XREFs of ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x1803047E8
 * Callers:
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x180303EB4 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180071170 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800F60C4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1?$unique_ptr@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800F61A0 (--1-$unique_ptr@EU-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800F61B8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x18011E3CC (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1802C8744 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?get@?$static_lazy@VImmersiveIconsLogging@@@details@wil@@QEAAPEAVImmersiveIconsLogging@@P6AXXZ@Z @ 0x180304CA4 (-get@-$static_lazy@VImmersiveIconsLogging@@@details@wil@@QEAAPEAVImmersiveIconsLogging@@P6AXXZ@Z.c)
 */

void __fastcall ImmersiveIconsLoggingTelemetry::LoadIconW::StartActivity(
        ImmersiveIconsLoggingTelemetry::LoadIconW *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rbx
  DWORD CurrentThreadId; // eax
  const GUID *v9; // rax
  UINT32 cData; // r10d
  LPCWSTR pwsz; // [rsp+30h] [rbp-9h] BYREF
  RTL_SRWLOCK *v12; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  RTL_SRWLOCK **v14; // [rsp+60h] [rbp+27h]
  int v15; // [rsp+68h] [rbp+2Fh]
  int v16; // [rsp+6Ch] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+37h] BYREF

  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&pwsz);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&pwsz,
    0LL);
  LoggingUtil::AppIdCensorUtility::CensorAppIdBuffer(a2, (unsigned __int16 **)&pwsz);
  wil::ActivityBase<WindowManagementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &v12);
  v4 = *((_QWORD *)this + 6);
  if ( **(_DWORD **)(wil::details::static_lazy<ImmersiveIconsLogging>::get(
                       v5,
                       lambda_ff1cb61a894a675aef28afa9d97db49a_::_lambda_invoker_cdecl_)
                   + 8) <= 5u )
    *(_QWORD *)(v4 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  *(_DWORD *)v4 = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
  v7 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<ImmersiveIconsLogging>::get(
                                           v6,
                                           lambda_ff1cb61a894a675aef28afa9d97db49a_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v7 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v16 = 0;
    LODWORD(v12) = CurrentThreadId;
    v14 = &v12;
    v15 = 4;
    TlgCreateWsz(&pDesc, pwsz);
    v9 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v7, &unk_18039EC35, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v9, cData, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ImmersiveIconsLoggingTelemetry::LoadIconW *)((char *)this + 8));
  wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&pwsz);
}
