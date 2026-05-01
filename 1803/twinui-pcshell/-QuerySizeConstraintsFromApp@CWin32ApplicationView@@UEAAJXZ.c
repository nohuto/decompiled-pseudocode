/*
 * XREFs of ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x18002A6D0
 * Callers:
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x18002E290 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 * Callees:
 *     ?QuerySizeConstraints@CPrivilegedSizeConstraintsOperations@@EEAAJPEAUHWND__@@@Z @ 0x18000B7F0 (-QuerySizeConstraints@CPrivilegedSizeConstraintsOperations@@EEAAJPEAUHWND__@@@Z.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800198CC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _lambda_b8642ff14e560df3dcd31f4e91e1514d_::operator() @ 0x1800921C0 (_lambda_b8642ff14e560df3dcd31f4e91e1514d_--operator().c)
 *     ?InternalRelease@?$ComPtr@UIPrivilegedSizeConstraintsOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180092220 (-InternalRelease@-$ComPtr@UIPrivilegedSizeConstraintsOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x180092E5C (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::QuerySizeConstraintsFromApp(CWin32ApplicationView *this)
{
  CPrivilegedSizeConstraintsOperations *v2; // rbx
  struct IApplicationView *v3; // rdx
  HWND WindowForView; // rdx
  unsigned int SizeConstraints; // eax
  unsigned int v6; // ebx
  CPrivilegedSizeConstraintsOperations *v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  CPrivilegedSizeConstraintsOperations **v10; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v10 = &v8;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v9);
  if ( v9 )
    lambda_b8642ff14e560df3dcd31f4e91e1514d_::operator()(&v10);
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v9);
  v2 = v8;
  WindowForView = ApplicationViewHelpers::GetWindowForView(this, v3);
  if ( *(__int64 (__fastcall **)(CPrivilegedSizeConstraintsOperations *, HWND))(*(_QWORD *)v2 + 24LL) == CPrivilegedSizeConstraintsOperations::QuerySizeConstraints )
    SizeConstraints = CPrivilegedSizeConstraintsOperations::QuerySizeConstraints(v2, WindowForView);
  else
    SizeConstraints = (*(__int64 (__fastcall **)(CPrivilegedSizeConstraintsOperations *, HWND))(*(_QWORD *)v2 + 24LL))(
                        v2,
                        WindowForView);
  v6 = SizeConstraints;
  Microsoft::WRL::ComPtr<IPrivilegedSizeConstraintsOperations>::InternalRelease(&v8);
  return v6;
}
