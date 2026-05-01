/*
 * XREFs of ?_IsViewTypeHolographicCompatible@HolographicPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180020848
 * Callers:
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180020958 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 * Callees:
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18001BA10 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B360 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicati.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall HolographicPositioner::_IsViewTypeHolographicCompatible(
        HolographicPositioner *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, CWinRTApplicationView **))
{
  __int64 (__fastcall *v2)(struct IApplicationView *, GUID *, CWinRTApplicationView **); // rax
  int v3; // eax
  CWinRTApplicationView *v4; // rbx
  struct IImmersiveApplication *v5; // rcx
  __int64 (__fastcall *v6)(CWinRTApplicationView *, struct IImmersiveApplication **); // rax
  int v7; // eax
  char v8; // bl
  CWinRTApplicationView *v9; // rcx
  struct IImmersiveApplication *v10; // rcx
  struct IImmersiveApplication *v12; // [rsp+40h] [rbp+10h] BYREF
  CWinRTApplicationView *v13; // [rsp+48h] [rbp+18h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v2 = **a2;
  if ( (char *)v2 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
    v3 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
           a2,
           &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
           &v13);
  else
    v3 = v2((struct IApplicationView *)a2, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &v13);
  if ( v3 < 0 )
    goto LABEL_11;
  v4 = v13;
  v5 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *(__int64 (__fastcall **)(CWinRTApplicationView *, struct IImmersiveApplication **))(*(_QWORD *)v4 + 24LL);
  v7 = v6 == CWinRTApplicationView::GetApplication ? CWinRTApplicationView::GetApplication(v4, &v12) : v6(v4, &v12);
  if ( v7 >= 0
    && ((*(unsigned int (__fastcall **)(struct IImmersiveApplication *, _QWORD))(*(_QWORD *)v12 + 328LL))(v12, 0LL)
     || (*(unsigned int (__fastcall **)(struct IImmersiveApplication *, __int64))(*(_QWORD *)v12 + 328LL))(v12, 5LL)) )
  {
    v8 = 0;
  }
  else
  {
LABEL_11:
    v8 = 1;
  }
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v8;
}
