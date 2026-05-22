/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180009338
 * Callers:
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle_::_1_::dtor$2 @ 0x1800E9860 (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--OpenDriverHandle_--_1_--dtor$2.c)
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle_::_1_::dtor$4 @ 0x1800E9878 (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--CloseDriverHandle_--_1_--dtor$4.c)
 *     _Windows::Internal::Holographic::PropertyCache::GetValue_::_1_::dtor$1 @ 0x1800E989C (_Windows--Internal--Holographic--PropertyCache--GetValue_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockShared(v1);
}
