/*
 * XREFs of ?GetRootThumbnail@CMultitaskingViewElementBase@@UEAA?AV?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@XZ @ 0x18028A900
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall CMultitaskingViewElementBase::GetRootThumbnail(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 88);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a2);
  return a2;
}
