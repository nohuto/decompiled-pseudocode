/*
 * XREFs of ?LockExclusive@?$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18017F26C
 * Callers:
 *     ?StopActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@MEAAXXZ @ 0x18017D270 (-StopActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x18017D61C (-StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z.c)
 *     ?Destroy@?$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18017EC30 (-Destroy@-$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?NotifyFailure@?$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18017ECE0 (-NotifyFailure@-$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvi.c)
 * Callees:
 *     ??0CMarshaledInterface@@QEAA@XZ @ 0x1800056F0 (--0CMarshaledInterface@@QEAA@XZ.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@$$QEAV01@@Z @ 0x1800261DC (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18002620C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::ActivityBase<ImmersiveIconsLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
        __int64 a1,
        _QWORD *a2)
{
  RTL_SRWLOCK *v4; // rcx
  RTL_SRWLOCK *v5; // rax
  RTL_SRWLOCK **v6; // rax
  char v7; // bl
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  LODWORD(v9) = 0;
  if ( *(_QWORD *)(a1 + 304) )
  {
    v5 = *(RTL_SRWLOCK **)(a1 + 304);
    if ( v5 )
      v4 = v5 + 1;
    wil::srwlock::lock_exclusive(v4 + 30, &v10);
    v6 = &v10;
    v7 = 1;
  }
  else
  {
    v9 = 0LL;
    v6 = (RTL_SRWLOCK **)CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&v9);
    v7 = 2;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
    a2,
    v6);
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v9);
  }
  if ( (v7 & 1) != 0 )
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
  return a2;
}
