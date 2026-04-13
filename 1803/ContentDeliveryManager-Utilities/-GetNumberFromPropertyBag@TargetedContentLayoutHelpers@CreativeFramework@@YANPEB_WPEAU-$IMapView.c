/*
 * XREFs of ?GetNumberFromPropertyBag@TargetedContentLayoutHelpers@CreativeFramework@@YANPEB_WPEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@PEAE@Z @ 0x180099990
 * Callers:
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x180099ADC (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
double __fastcall CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(
        const WCHAR *a1,
        __int64 a2,
        _BYTE *a3)
{
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdi
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-50h] BYREF
  const WCHAR *v14; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v15[1] = -2LL;
  v14 = a1;
  *a3 = 0;
  v15[0] = 0LL;
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v16, &v14);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)a2 + 64LL))(a2, *(_QWORD *)(v5 + 24), a3);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x13C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v6);
LABEL_9:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x140,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v8);
LABEL_10:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x141,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  if ( !*a3 )
    return *(double *)v15;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v16, &v14);
  v13 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, *(_QWORD *)(v7 + 24), &v13);
  v9 = retaddr;
  if ( v8 < 0 )
    goto LABEL_9;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 80LL))(v13, v15);
  v11 = retaddr;
  if ( v10 < 0 )
    goto LABEL_10;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return *(double *)v15;
}
