/*
 * XREFs of ?get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel@Windows@@@Z @ 0x180071BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180071178 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180095670 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F60DC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18030C674 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CActivatedEventArgsBase::get_SplashScreen(
        CActivatedEventArgsBase *this,
        struct Windows::ApplicationModel::Activation::ISplashScreen **a2)
{
  CMarshaledInterface *v4; // r14
  __int64 v5; // rbx
  unsigned int v6; // edi
  char v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 93) )
    MicrosoftTelemetryAssertTriggeredNoArgs(this);
  *a2 = 0LL;
  v4 = (CActivatedEventArgsBase *)((char *)this + 80);
  v5 = *((_QWORD *)this + 10);
  Microsoft::WRL::Wrappers::SRWLock::LockShared((char *)this + 112, &v8);
  v6 = v5 == 0 ? 0x8007000E : 0;
  if ( v5 )
    v6 = CMarshaledInterface::_Unmarshal(v4, &GUID_ca4d975c_d4d6_43f0_97c0_0833c6391c24, (void **)a2, 0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v8);
  return v6;
}
