/*
 * XREFs of ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x1800190B8
 * Callers:
 *     ?NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z @ 0x180007014 (-NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z.c)
 *     ??0InputDeliveryServer@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z @ 0x180023514 (--0InputDeliveryServer@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIInputTarget@@@Z @ 0x18004EF44 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x180050574 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@@Z @ 0x180064E18 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_KPEAPEAVBamoDragSourceCli.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x1800802D0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x180085090 (-HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 *     _lambda_44ea6c42bf870d75ce9c33fd848cc99e_::_lambda_invoker_cdecl_ @ 0x180085780 (_lambda_44ea6c42bf870d75ce9c33fd848cc99e_--_lambda_invoker_cdecl_.c)
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x180085C34 (-CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800860FC (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x180086D80 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_K3@Z @ 0x1800B2B98 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_K3@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VViewHierarchy@@UIViewHierarchy@@W4TestMode@1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewHierarchy@@@WRL@Microsoft@@@012@$$QEAW4TestMode@ViewHierarchy@@@Z @ 0x18002D058 (--$MakeAndInitialize@VViewHierarchy@@UIViewHierarchy@@W4TestMode@1@@Details@WRL@Microsoft@@YAJV-.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct IViewHierarchy *ISMStatics::GetViewHierarchy(void)
{
  int v0; // eax
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  if ( !ISMStatics::s_viewHierarchy )
  {
    v7 = 0LL;
    v6 = 0;
    v0 = Microsoft::WRL::Details::MakeAndInitialize<ViewHierarchy,IViewHierarchy,enum ViewHierarchy::TestMode>(&v7, &v6);
    if ( v0 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xF,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v0);
      __debugbreak();
    }
    v1 = v7;
    v2 = 0LL;
    v7 = 0LL;
    v3 = ISMStatics::s_viewHierarchy;
    ISMStatics::s_viewHierarchy = v1;
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      v2 = v7;
    }
    if ( v2 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  return (struct IViewHierarchy *)ISMStatics::s_viewHierarchy;
}
