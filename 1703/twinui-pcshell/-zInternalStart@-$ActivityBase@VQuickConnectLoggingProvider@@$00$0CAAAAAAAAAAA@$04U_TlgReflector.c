/*
 * XREFs of ?zInternalStart@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800AE80C
 * Callers:
 *     ?StartActivity@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x1800A8650 (-StartActivity@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAAXXZ @ 0x1800A8C60 (-StartActivity@ExperienceManager_PopulateDelayLoadedContactCard@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAAXXZ @ 0x1800A9170 (-StartActivity@ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ @ 0x1800A9700 (-StartActivity@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ @ 0x1800A9D90 (-StartActivity@ExperienceManager_OnViewPropertiesChanging@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXXZ @ 0x1800AA410 (-StartActivity@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXXZ @ 0x1800AA8F8 (-StartActivity@ExperienceManager_FinalizeWindowPlacement@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAAXXZ @ 0x1800AADD8 (-StartActivity@ExperienceManager_FinalizeWindowPosition@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ @ 0x1800AB45C (-StartActivity@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800200CC (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?Provider@QuickConnectLoggingProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A810C (-Provider@QuickConnectLoggingProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 */

void __fastcall wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  const struct _TlgProvider_t *v3; // rax
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = QuickConnectLoggingProvider::Provider();
  if ( *(_DWORD *)v3 > 5u
    && (*((_QWORD *)v3 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v3 + 3) & 0x200000000000LL) == *((_QWORD *)v3 + 3) )
  {
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  }
  else
  {
    *(_QWORD *)(v2 + 8) = 0LL;
  }
  v4 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
