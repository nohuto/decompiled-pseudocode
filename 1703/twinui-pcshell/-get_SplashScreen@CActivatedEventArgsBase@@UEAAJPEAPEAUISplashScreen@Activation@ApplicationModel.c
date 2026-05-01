/*
 * XREFs of ?get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel@Windows@@@Z @ 0x180192870
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18002444C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180047CE4 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 */

__int64 __fastcall CActivatedEventArgsBase::get_SplashScreen(
        RTL_SRWLOCK *this,
        struct Windows::ApplicationModel::Activation::ISplashScreen **a2)
{
  CMarshaledInterface *v2; // r14
  PVOID Ptr; // rbx
  unsigned int v5; // edi
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (CMarshaledInterface *)&this[9];
  Ptr = this[9].Ptr;
  v5 = Ptr == 0LL ? 0x8007000E : 0;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 13, &v7);
  if ( Ptr )
    v5 = CMarshaledInterface::_Unmarshal(v2, &GUID_ca4d975c_d4d6_43f0_97c0_0833c6391c24, (void **)a2, 0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v7);
  return v5;
}
