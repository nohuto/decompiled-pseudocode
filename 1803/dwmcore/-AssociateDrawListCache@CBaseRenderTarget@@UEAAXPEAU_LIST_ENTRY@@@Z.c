/*
 * XREFs of ?AssociateDrawListCache@CBaseRenderTarget@@UEAAXPEAU_LIST_ENTRY@@@Z @ 0x18013DC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBaseRenderTarget::AssociateDrawListCache(CBaseRenderTarget *this, struct _LIST_ENTRY *a2)
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
