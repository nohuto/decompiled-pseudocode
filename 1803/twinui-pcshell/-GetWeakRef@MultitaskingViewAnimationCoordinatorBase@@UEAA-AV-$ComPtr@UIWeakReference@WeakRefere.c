/*
 * XREFs of ?GetWeakRef@MultitaskingViewAnimationCoordinatorBase@@UEAA?AV?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@XZ @ 0x180298B40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall MultitaskingViewAnimationCoordinatorBase::GetWeakRef(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  v2 = v5;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v5);
  v5 = 0LL;
  *a2 = v2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  return a2;
}
