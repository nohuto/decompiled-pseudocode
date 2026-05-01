/*
 * XREFs of ??1FeatureFunctorHost@details@wil@@QEAA@XZ @ 0x18008C6FC
 * Callers:
 *     _TaskbarLayoutPolicyManager::CanApplyMDMLayout_::_1_::dtor$0 @ 0x1801EA370 (_TaskbarLayoutPolicyManager--CanApplyMDMLayout_--_1_--dtor$0.c)
 *     _CActionCenterExperienceManager::OnViewUncloaking_::_1_::dtor$0 @ 0x1801EAC73 (_CActionCenterExperienceManager--OnViewUncloaking_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::FeatureFunctorHost::~FeatureFunctorHost(wil::details::FeatureFunctorHost *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    *(_DWORD *)(v1 + 16) = *((_DWORD *)this + 5);
}
