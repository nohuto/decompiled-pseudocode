/*
 * XREFs of ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FD218
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800FB720 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_IsPropertySetContextHolographic@HolographicPositioner@@AEAA?AW4HolographicDetermination@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FD3E0 (-_IsPropertySetContextHolographic@HolographicPositioner@@AEAA-AW4HolographicDetermination@@PEAUI.c)
 *     ?_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800FD7C0 (-_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Fo.c)
 *     ??$LaunchInHolographic@W4HolographicLaunchReason@@@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchReason@@@Z @ 0x180103298 (--$LaunchInHolographic@W4HolographicLaunchReason@@@HolographicPositionerTelemetry@@SAX$$QEAW4Hol.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall HolographicPositioner::_IsViewContextHolographic(
        HolographicPositioner *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  int (__fastcall **v6)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int IsPropertySetContextHolographic; // eax
  __int64 v16[2]; // [rsp+20h] [rbp-10h] BYREF
  int v17; // [rsp+58h] [rbp+28h] BYREF
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF

  v16[1] = -2LL;
  v18 = 0LL;
  v16[0] = 0LL;
  v6 = *a2;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v16);
  if ( (*v6)((struct IApplicationView *)a2, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, v7) >= 0 )
  {
    v8 = v16[0];
    v9 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, &v18) >= 0
      && ((*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 328LL))(v18, 0LL)
       || (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 328LL))(v18, 5LL)) )
    {
      v10 = v16[0];
      if ( v16[0] )
      {
        v16[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      return 0;
    }
  }
  v12 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v17 = 6;
  if ( ((int (__fastcall *)(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *), int *))(*a2)[47])(
         a2,
         &v17) >= 0
    && (unsigned int)(v17 - 1) <= 3 )
  {
    LODWORD(v18) = 1;
LABEL_18:
    HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason>(&v18);
    return 1;
  }
  IsPropertySetContextHolographic = HolographicPositioner::_IsPropertySetContextHolographic(this, a3);
  if ( IsPropertySetContextHolographic == 2 )
  {
    LODWORD(v18) = 0;
    goto LABEL_18;
  }
  if ( IsPropertySetContextHolographic != 1 && HolographicPositioner::_IsPropertySetHeuristicHolographic(this, a3) )
  {
    LODWORD(v18) = 2;
    goto LABEL_18;
  }
  return 0;
}
