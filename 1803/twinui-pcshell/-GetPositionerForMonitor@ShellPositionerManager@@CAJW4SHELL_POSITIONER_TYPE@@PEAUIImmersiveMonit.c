/*
 * XREFs of ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1802B93F0
 * Callers:
 *     ?HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180023878 (-HandleFrameworkViewTypeChange@ShellPositionerManager@@AEAAJW4FRAMEWORK_VIEW_TYPE@@PEAUIApplicat.c)
 *     _lambda_82278fcd7836ba841de055e25599339d_::operator() @ 0x1802B8AD4 (_lambda_82278fcd7836ba841de055e25599339d_--operator().c)
 *     ?SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@W4SHELL_POSITIONER_TYPE@@2PEAPEAUIUnknown@@@Z @ 0x1802B9BC4 (-SendControlLostToPositioner@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellPositionerManager::GetPositionerForMonitor(int a1, IUnknown *a2, const IID *a3, void **a4)
{
  __int64 v7; // rsi
  HRESULT Service; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  void *ppvOut[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  ppvOut[1] = (void *)-2LL;
  v7 = a1;
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  if ( IUnknown_QueryService(
         a2,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
         ppvOut) < 0 )
  {
    Service = IUnknown_QueryService(a2, &c_positionersSIDs + v7, a3, a4);
    v9 = Service;
    if ( Service < 0 )
    {
      v10 = 1030LL;
      goto LABEL_6;
    }
LABEL_7:
    v9 = 0;
    goto LABEL_8;
  }
  Service = (*(__int64 (__fastcall **)(void *, _QWORD, const IID *, void **))(*(_QWORD *)ppvOut[0] + 24LL))(
              ppvOut[0],
              (unsigned int)v7,
              a3,
              a4);
  v9 = Service;
  if ( Service >= 0 )
    goto LABEL_7;
  v10 = 1023LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)Service);
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  return v9;
}
