/*
 * XREFs of ?InitializePosition@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180021B10
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180023A80 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18001BA10 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?_RestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@@Z @ 0x180023304 (-_RestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSi.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B360 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicati.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18007C640 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::InitializePosition(
        CDesktopPositioner *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, CWinRTApplicationView **),
        struct IUnknown *a3)
{
  __int64 (__fastcall *v6)(struct IApplicationView *, GUID *, CWinRTApplicationView **); // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall *v9)(CWinRTApplicationView *, struct IImmersiveApplication **); // rax
  int Application; // eax
  PositionerPropertySetHelpers *v11; // rcx
  int DetailsForActivation; // eax
  __int64 v13; // r8
  struct IImmersiveApplication *v14; // rcx
  CWinRTApplicationView *v15; // rcx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  struct IImmersiveApplication *v19[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  int v21; // [rsp+38h] [rbp-8h]
  int v22; // [rsp+3Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IUnknown v24; // [rsp+68h] [rbp+28h] BYREF
  CWinRTApplicationView *v25; // [rsp+78h] [rbp+38h] BYREF

  v19[1] = (struct IImmersiveApplication *)-2LL;
  v25 = 0LL;
  v6 = **a2;
  if ( (char *)v6 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface )
    v7 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::QueryInterface(
           a2,
           &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
           &v25);
  else
    v7 = v6((struct IApplicationView *)a2, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, &v25);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x189,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v7,
      (int)v19[0]);
    goto LABEL_12;
  }
  v19[0] = 0LL;
  v9 = *(__int64 (__fastcall **)(CWinRTApplicationView *, struct IImmersiveApplication **))(*(_QWORD *)v25 + 24LL);
  if ( v9 == CWinRTApplicationView::GetApplication )
    Application = CWinRTApplicationView::GetApplication(v25, v19);
  else
    Application = v9(v25, v19);
  v8 = Application;
  if ( Application < 0 )
  {
    v17 = (unsigned int)Application;
    v18 = 396LL;
  }
  else
  {
    v20 = 0LL;
    v21 = 0;
    v22 = 0;
    DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                             v11,
                             (struct IApplicationView *)a3,
                             &v24,
                             (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v20,
                             v19[0]);
    v8 = DetailsForActivation;
    if ( DetailsForActivation < 0 )
    {
      v18 = 400LL;
    }
    else
    {
      DetailsForActivation = CDesktopPositioner::_RestorePosition((char *)this - 128, a2, v13, &v20);
      v8 = DetailsForActivation;
      if ( DetailsForActivation >= 0 )
      {
        v8 = 0;
        goto LABEL_10;
      }
      v18 = 402LL;
    }
    v17 = (unsigned int)DetailsForActivation;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)v17,
    (int)v19[0]);
LABEL_10:
  v14 = v19[0];
  if ( v19[0] )
  {
    v19[0] = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v14 + 16LL))(v14);
  }
LABEL_12:
  v15 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v8;
}
