/*
 * XREFs of ?AssociateDrawListCache@CHwTextureRenderTarget@@WNI@EAAXPEAU_LIST_ENTRY@@@Z @ 0x1800DDF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwTextureRenderTarget::AssociateDrawListCache(__int64 a1, struct _LIST_ENTRY *a2)
{
  CHwDisplayRenderTarget::AssociateDrawListCache((CHwDisplayRenderTarget *)(a1 - 216), a2);
}
