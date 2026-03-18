/*
 * XREFs of ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x18018AB3C
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18009DD60 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x18008B008 (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDropShadow::SetOcclusionRect(CDropShadow *this, const struct D2D_RECT_F *a2)
{
  FLOAT v2; // xmm1_4
  FLOAT v3; // xmm0_4
  const struct D2D_RECT_F *v4; // rcx
  struct D2D_RECT_F *v5; // r8
  __int64 *v6; // r9
  __int64 v7; // rax
  struct D2D_RECT_F v8; // [rsp+20h] [rbp-18h] BYREF

  v8.left = a2->left - -0.5;
  v2 = a2->right - 0.5;
  v8.top = a2->top - -0.5;
  v3 = a2->bottom - 0.5;
  v8.right = v2;
  v8.bottom = v3;
  if ( !AreEqual((const struct D2D_RECT_F *)((char *)this + 172), &v8) && (!IsEmpty(v4) || !IsEmpty(&v8)) )
  {
    v7 = *v6;
    *v5 = v8;
    (*(void (__fastcall **)(__int64 *, __int64))(v7 + 64))(v6, 5LL);
  }
}
