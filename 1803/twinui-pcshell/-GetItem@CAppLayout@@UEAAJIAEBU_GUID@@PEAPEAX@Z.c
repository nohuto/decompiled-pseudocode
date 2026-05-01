/*
 * XREFs of ?GetItem@CAppLayout@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x180312A70
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180095670 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F60DC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?GetItemInternal@CAppLayout@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x180312C00 (-GetItemInternal@CAppLayout@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CAppLayout::GetItem(RTL_SRWLOCK *this, unsigned int a2, const struct _GUID *a3, void **a4)
{
  RTL_SRWLOCK *v5; // rbx
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 2, &v9);
  LODWORD(v5) = CAppLayout::GetItemInternal((CAppLayout *)&v5[-1], a2, a3, a4);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v9);
  return (unsigned int)v5;
}
