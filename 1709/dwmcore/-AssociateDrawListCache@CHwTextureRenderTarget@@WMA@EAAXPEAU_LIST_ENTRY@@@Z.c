/*
 * XREFs of ?AssociateDrawListCache@CHwTextureRenderTarget@@WMA@EAAXPEAU_LIST_ENTRY@@@Z @ 0x1800C6BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwTextureRenderTarget::AssociateDrawListCache(__int64 a1, struct _LIST_ENTRY *a2)
{
  CHwDisplayRenderTarget::AssociateDrawListCache((CHwDisplayRenderTarget *)(a1 - 192), a2);
}
