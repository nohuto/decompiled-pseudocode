/*
 * XREFs of ?AssociateDrawListCache@CHwDisplayRenderTarget@@UEAAXPEAU_LIST_ENTRY@@@Z @ 0x18002B5C0
 * Callers:
 *     ?AssociateDrawListCache@CHwTextureRenderTarget@@WMA@EAAXPEAU_LIST_ENTRY@@@Z @ 0x1800C6BB0 (-AssociateDrawListCache@CHwTextureRenderTarget@@WMA@EAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwDisplayRenderTarget::AssociateDrawListCache(CHwDisplayRenderTarget *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v2; // rcx
  struct _LIST_ENTRY *Flink; // rax

  v2 = (struct _LIST_ENTRY *)((char *)this + 120);
  Flink = v2->Flink;
  if ( v2->Flink->Blink != v2 )
    __fastfail(3u);
  a2->Flink = Flink;
  a2->Blink = v2;
  Flink->Blink = a2;
  v2->Flink = a2;
}
