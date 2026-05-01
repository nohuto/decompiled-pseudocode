/*
 * XREFs of ?GetThumbnailForChildren@CScrollViewer@@UEAA?AV?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@XZ @ 0x1802A2590
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall CScrollViewer::GetThumbnailForChildren(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 224);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a2);
  return a2;
}
