/*
 * XREFs of ?MultitaskingViewDragVisual_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1AEBUCSize@Geometry@@NAEBU_GUID@@PEAPEAX@Z @ 0x1802AA318
 * Callers:
 *     ?StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1802A58C0 (-StartDrag@ElementDragData@@UEAAJW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VMultitaskingViewDragVisual@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@AEAPEAU3@AEBUCSize@Geometry@@AEAN@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewDragVisual@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@2AEBUCSize@Geometry@@AEAN@Z @ 0x1802AA038 (--$MakeAndInitialize@VMultitaskingViewDragVisual@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMul.c)
 */

__int64 __fastcall MultitaskingViewDragVisual_CreateInstance(
        struct ISwitchThumbnailFactory *a1,
        struct IMultitaskingViewElement *a2,
        struct IMultitaskingViewElement *a3,
        const struct Geometry::CSize *a4,
        double a5,
        const struct _GUID *a6,
        void **a7)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  struct ISwitchThumbnailFactory *v13; // [rsp+40h] [rbp+10h] BYREF
  struct IMultitaskingViewElement *v14; // [rsp+48h] [rbp+18h] BYREF
  struct IMultitaskingViewElement *v15; // [rsp+50h] [rbp+20h] BYREF

  v15 = a3;
  v14 = a2;
  v13 = a1;
  a6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a6);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewDragVisual,MultitaskingViewDragVisual,ISwitchThumbnailFactory * &,IMultitaskingViewElement * &,IMultitaskingViewElement * &,Geometry::CSize const &,double &>(
         (MultitaskingViewDragVisual **)&a6,
         &v13,
         &v14,
         &v15,
         a4,
         &a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 172LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragvisual.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_6;
  }
  v8 = (**(__int64 (__fastcall ***)(const struct _GUID *, GUID *, void **))&a6->Data1)(
         a6,
         &GUID_6ef49d09_f270_4bf1_b2cf_2666522db610,
         a7);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 173LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a6);
  return v9;
}
