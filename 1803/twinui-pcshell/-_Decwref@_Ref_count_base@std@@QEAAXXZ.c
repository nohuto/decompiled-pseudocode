/*
 * XREFs of ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180149804
 * Callers:
 *     ??_E?$CTaskWrapper@V_lambda_379fb6251cfae0942258739af0295e77_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800037F0 (--_E-$CTaskWrapper@V_lambda_379fb6251cfae0942258739af0295e77_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800EF740 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 *     ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x1801C7890 (--$make_shared@VConnectedStandbyHelper@@$$V@std@@YA-AV-$shared_ptr@VConnectedStandbyHelper@@@0@X.c)
 *     ?_Destroy@?$_Ref_count_obj@VConnectedStandbyHelper@@@std@@EEAAXXZ @ 0x1801CFDC0 (-_Destroy@-$_Ref_count_obj@VConnectedStandbyHelper@@@std@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_base::_Decwref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
}
