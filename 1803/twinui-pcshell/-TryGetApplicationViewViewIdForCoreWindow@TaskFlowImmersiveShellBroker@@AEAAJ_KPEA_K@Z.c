/*
 * XREFs of ?TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z @ 0x180061150
 * Callers:
 *     ?SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU?$IVector@PEAVUserActivityAppId@UserActivities@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAUHSTRING__@@1UDateTime@56@3@Z @ 0x1800613C0 (-SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU-$IVector@PEAVUserActivityAppId.c)
 *     _lambda_d6636672e4e13f4147f7fcd674189ce6_::operator() @ 0x18008EF68 (_lambda_d6636672e4e13f4147f7fcd674189ce6_--operator().c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_18002B490.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18002C430 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::TryGetApplicationViewViewIdForCoreWindow(
        TaskFlowImmersiveShellBroker *this,
        HWND a2,
        HWND *a3)
{
  RTL_SRWLOCK *v4; // rcx
  __int64 (__fastcall *v5)(RTL_SRWLOCK *, HWND, struct IApplicationView **); // rax
  int ViewForHwnd; // eax
  struct IApplicationView *v7; // rdx
  const char *v8; // r9
  __int64 (__fastcall *v9)(CWinRTApplicationView *); // rax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CWinRTApplicationView *v12; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    *a3 = 0LL;
    v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 35);
    v12 = 0LL;
    v5 = (__int64 (__fastcall *)(RTL_SRWLOCK *, HWND, struct IApplicationView **))*((_QWORD *)v4->Ptr + 6);
    if ( v5 == CApplicationViewManager::GetViewForHwnd )
      ViewForHwnd = CApplicationViewManager::GetViewForHwnd(v4, a2, &v12);
    else
      ViewForHwnd = v5(v4, a2, &v12);
    if ( ViewForHwnd != -2147319765 )
    {
      if ( ViewForHwnd < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2DE,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)ViewForHwnd,
          -2);
        JUMPOUT(0x1800D5600LL);
      }
      *a3 = ApplicationViewHelpers::GetWindowForView(
              (__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))v12,
              v7);
    }
    if ( v12 )
    {
      v9 = *(__int64 (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v12 + 16LL);
      if ( v9 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(v12);
      else
        v9(v12);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2E5,
                           (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v8);
  }
  return result;
}
