/*
 * XREFs of ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEAU2@PEA_K3@Z @ 0x1800B2B98
 * Callers:
 *     ?OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800B2220 (-OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessor.c)
 *     ?StartDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z @ 0x1800B27D4 (-StartDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z.c)
 *     ?CancelDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z @ 0x1800B29D0 (-CancelDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18000C024 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18000C750 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F2BC (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x1800190B8 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x180019640 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     ApplyInverseTransformToPoint @ 0x1800630CC (ApplyInverseTransformToPoint.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DragNDropProcessorLegacy::HitTest(
        DragNDropProcessorLegacy *this,
        struct tagPOINT a2,
        HMONITOR a3,
        struct tagPOINT *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int ViewInstanceIdFromInputSiteList; // edi
  __int64 WindowIdFromViewId; // rax
  struct IViewHierarchy *ViewHierarchy; // rax
  int v13; // eax
  int CompositionInputSinkLuid; // eax
  struct tagPOINT v16; // [rsp+30h] [rbp-99h] BYREF
  int v17; // [rsp+38h] [rbp-91h] BYREF
  struct tagPOINT v18; // [rsp+40h] [rbp-89h]
  _QWORD v19[3]; // [rsp+48h] [rbp-81h] BYREF
  _BYTE v20[8]; // [rsp+60h] [rbp-69h] BYREF
  _QWORD v21[3]; // [rsp+68h] [rbp-61h] BYREF
  __int64 v22; // [rsp+80h] [rbp-49h]
  float v23[18]; // [rsp+88h] [rbp-41h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+4Fh]

  v19[1] = -2LL;
  v18 = a2;
  (*(void (__fastcall **)(_QWORD, _BYTE *, struct tagPOINT, HMONITOR, int))(**((_QWORD **)this + 3) + 32LL))(
    *((_QWORD *)this + 3),
    v20,
    a2,
    a3,
    2);
  v9 = v22;
  if ( v20[0] && (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    ViewInstanceIdFromInputSiteList = InputSiteManager::GetViewInstanceIdFromInputSiteList(v21);
    WindowIdFromViewId = 0LL;
    if ( ViewInstanceIdFromInputSiteList )
    {
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, ViewInstanceIdFromInputSiteList);
    }
    *a6 = WindowIdFromViewId;
    v13 = ApplyInverseTransformToPoint(v23, a2.x, v18.y, &v16, &v17);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1D9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\li"
                 "b\\dragndropprocessorlegacy.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    v16.y = v17;
    *a4 = v16;
    CompositionInputSinkLuid = NtQueryCompositionInputSinkLuid(v22, v19);
    if ( CompositionInputSinkLuid < 0 )
    {
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x1E0,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndroplegacy\\system\\li"
                 "b\\dragndropprocessorlegacy.cpp",
        (const char *)(unsigned int)CompositionInputSinkLuid);
      JUMPOUT(0x1800B2D04LL);
    }
    *a5 = v19[0];
    v9 = v22;
  }
  else
  {
    *a4 = a2;
    *a5 = 0LL;
  }
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v9);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v21, v8);
  return 0LL;
}
