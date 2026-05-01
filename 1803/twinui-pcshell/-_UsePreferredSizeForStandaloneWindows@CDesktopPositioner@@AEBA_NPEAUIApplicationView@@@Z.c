/*
 * XREFs of ?_UsePreferredSizeForStandaloneWindows@CDesktopPositioner@@AEBA_NPEAUIApplicationView@@@Z @ 0x1800217DC
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180023088 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUVie.c)
 * Callees:
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18001BA10 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B360 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicati.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CDesktopPositioner::_UsePreferredSizeForStandaloneWindows(
        CDesktopPositioner *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, CWinRTApplicationView **))
{
  bool v2; // bl
  __int64 (__fastcall *v3)(struct IApplicationView *, GUID *, CWinRTApplicationView **); // rax
  int v4; // eax
  __int64 (__fastcall *v5)(CWinRTApplicationView *, struct IImmersiveApplication **); // rax
  int Application; // eax
  struct IImmersiveApplication *v7; // rcx
  CWinRTApplicationView *v8; // rcx
  struct IImmersiveApplication *v10; // [rsp+40h] [rbp+10h] BYREF
  CWinRTApplicationView *v11; // [rsp+48h] [rbp+18h] BYREF

  v10 = this;
  v2 = 0;
  v11 = 0LL;
  v3 = **a2;
  if ( (char *)v3 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
    v4 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
           a2,
           &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
           &v11);
  else
    v4 = v3((struct IApplicationView *)a2, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &v11);
  if ( v4 >= 0 )
  {
    v10 = 0LL;
    v5 = *(__int64 (__fastcall **)(CWinRTApplicationView *, struct IImmersiveApplication **))(*(_QWORD *)v11 + 24LL);
    if ( v5 == CWinRTApplicationView::GetApplication )
      Application = CWinRTApplicationView::GetApplication(v11, &v10);
    else
      Application = v5(v11, &v10);
    if ( Application >= 0 )
      v2 = (*(unsigned int (__fastcall **)(struct IImmersiveApplication *, __int64))(*(_QWORD *)v10 + 328LL))(v10, 7LL) != 0;
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v2;
}
