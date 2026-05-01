/*
 * XREFs of ?zInternalStart@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18016DF18
 * Callers:
 *     ?StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z @ 0x18016D2A4 (-StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z.c)
 *     ?StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z @ 0x18016D39C (-StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z.c)
 *     ?StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z @ 0x1801C47E4 (-StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1800755FC (TraceLoggingProviderEnabled.c)
 *     ?get@?$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLogging@@P6AXXZ@Z @ 0x18016DE28 (-get@-$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLog.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801AF520 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 */

void __fastcall wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  RTL_SRWLOCK *v5; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  v4 = wil::details::static_lazy<CommonPeopleTelemetryLogging>::get(
         v3,
         (void (__cdecl *)())lambda_d2dfcefe90c696f2f984ba2092e12d6b_::_lambda_invoker_cdecl_);
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)v4[1], 5u, 0x400000000000uLL) )
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  else
    *(_QWORD *)(v2 + 8) = 0LL;
  v5 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
}
