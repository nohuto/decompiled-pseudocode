/*
 * XREFs of ?LightDismissElement_CreateInstance@@YAJPEAUILightDismissElementHost@@IAEBU_GUID@@PEAPEAX@Z @ 0x1802A3968
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@4PEAUIAnimationCoordinator@@@Z @ 0x180292E40 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VLightDismissElement@@V1@AEAPEAUILightDismissElementHost@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVLightDismissElement@@AEAPEAUILightDismissElementHost@@AEAI@Z @ 0x1802A36A0 (--$MakeAndInitialize@VLightDismissElement@@V1@AEAPEAUILightDismissElementHost@@AEAI@Details@WRL@.c)
 */

__int64 __fastcall LightDismissElement_CreateInstance(
        struct ILightDismissElementHost *a1,
        __int64 a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ILightDismissElementHost *v11; // [rsp+40h] [rbp+8h] BYREF
  LightDismissElement *v12; // [rsp+50h] [rbp+18h] BYREF

  v11 = a1;
  *a4 = 0LL;
  v12 = 0LL;
  v9[0] = 13040;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<LightDismissElement,LightDismissElement,ILightDismissElementHost * &,unsigned int &>(
         &v12,
         (__int64 *)&v11,
         v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 80LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\lightdismisselement.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_6;
  }
  v5 = (**(__int64 (__fastcall ***)(LightDismissElement *, GUID *, void **))v12)(
         v12,
         &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
         a4);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 81LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v6;
}
