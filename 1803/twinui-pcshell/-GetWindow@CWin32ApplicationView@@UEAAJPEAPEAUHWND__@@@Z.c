/*
 * XREFs of ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x18002A470
 * Callers:
 *     ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_3793e4c891056231a19fa9236fba9f97___::Invoke @ 0x18000BFC0 (ShellPositionerHelpers--Details--ShellPositionerCallback__lambda_3793e4c891056231a19fa9236fba9f9.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAJW4AppViewExecutionState@23456@PEAUIApplicationView@@PEAPEAUIAppViewExecutionData@23456@@Z @ 0x18001F6E0 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ?GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18002A4B0 (-GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _lambda_edd19650adc2bed30a6707bf286b378d_::operator() @ 0x18013EA18 (_lambda_edd19650adc2bed30a6707bf286b378d_--operator().c)
 *     ?IsMirrored@CWin32ApplicationView@@UEAAJPEAH@Z @ 0x1801406E0 (-IsMirrored@CWin32ApplicationView@@UEAAJPEAH@Z.c)
 *     ?SetViewState@CWin32ApplicationView@@UEAAJI@Z @ 0x180140E20 (-SetViewState@CWin32ApplicationView@@UEAAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetWindow(CWin32ApplicationView *this, HWND *a2)
{
  _QWORD **v2; // rcx
  __int64 (__fastcall *v3)(CClassicWindowExternal *); // rax

  v2 = (_QWORD **)*((_QWORD *)this + 8);
  v3 = (__int64 (__fastcall *)(CClassicWindowExternal *))(*v2)[3];
  if ( v3 == CClassicWindowExternal::GetWindow )
    v3 = *(__int64 (__fastcall **)(CClassicWindowExternal *))(*v2[7] + 24LL);
  *a2 = (HWND)((__int64 (*)(void))v3)();
  return 0LL;
}
