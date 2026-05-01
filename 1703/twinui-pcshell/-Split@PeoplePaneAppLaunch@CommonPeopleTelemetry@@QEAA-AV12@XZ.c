/*
 * XREFs of ?Split@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA?AV12@XZ @ 0x1800E7904
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1800E7FB0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800EBE40 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto_ea_1800EBE40.c)
 */

_QWORD *__fastcall CommonPeopleTelemetry::PeoplePaneAppLaunch::Split(__int64 a1, _QWORD *a2)
{
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  if ( **(_DWORD **)(a1 + 48) != 1 )
    __fastfail(7u);
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v4 = SRWLock;
  ++*(_DWORD *)(*(_QWORD *)(a1 + 48) + 72LL);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    a2,
    a1);
  *a2 = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  return a2;
}
