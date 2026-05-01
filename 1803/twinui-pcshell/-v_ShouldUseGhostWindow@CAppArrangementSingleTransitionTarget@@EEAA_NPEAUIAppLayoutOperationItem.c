/*
 * XREFs of ?v_ShouldUseGhostWindow@CAppArrangementSingleTransitionTarget@@EEAA_NPEAUIAppLayoutOperationItem@@@Z @ 0x1802B04F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x18013E9F4 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?_GetSpecialTransitionInfo@CAppTransitionTargetBase@@IEAA?AW4AppTransitionTargetSpecialFlags@@PEAUIApplicationView@@@Z @ 0x1802AF8E8 (-_GetSpecialTransitionInfo@CAppTransitionTargetBase@@IEAA-AW4AppTransitionTargetSpecialFlags@@PE.c)
 */

bool __fastcall CAppArrangementSingleTransitionTarget::v_ShouldUseGhostWindow(
        CAppArrangementSingleTransitionTarget *this,
        struct IAppLayoutOperationItem *a2)
{
  __int64 v2; // rax
  bool v4; // bl
  CWinRTApplicationView *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)a2;
  v4 = 0;
  v7 = 0LL;
  if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(v2 + 88))(a2)
    && (!Platform::Guid::Equals(
           (CAppArrangementSingleTransitionTarget *)((char *)this + 172),
           (const struct _GUID *)((char *)this + 188))
     || !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)) )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v7);
    if ( (*(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, CWinRTApplicationView **))(*(_QWORD *)a2 + 32LL))(
           a2,
           &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
           &v7) >= 0 )
      v4 = (CAppTransitionTargetBase::_GetSpecialTransitionInfo((__int64)this, (__int64)v7) & 1) == 0;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v7);
  return v4;
}
