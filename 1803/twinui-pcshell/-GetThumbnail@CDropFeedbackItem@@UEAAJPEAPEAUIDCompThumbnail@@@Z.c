/*
 * XREFs of ?GetThumbnail@CDropFeedbackItem@@UEAAJPEAPEAUIDCompThumbnail@@@Z @ 0x1802F5FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CDropFeedbackItem::GetThumbnail(CDropFeedbackItem *this, struct IDCompThumbnail **a2)
{
  struct IDCompThumbnail **v2; // rbx

  v2 = (struct IDCompThumbnail **)((char *)this + 168);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this + 21);
  *a2 = *v2;
  return 0LL;
}
