/*
 * XREFs of _lambda_2f43d89a395d19e3e1d950b3dc34363f_::__lambda_2f43d89a395d19e3e1d950b3dc34363f_ @ 0x180010040
 * Callers:
 *     _ContentManagement::ThumbnailCacheHelper::AddThumbnailToCacheAsync_::_1_::dtor$1 @ 0x1800C2096 (_ContentManagement--ThumbnailCacheHelper--AddThumbnailToCacheAsync_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall lambda_2f43d89a395d19e3e1d950b3dc34363f_::__lambda_2f43d89a395d19e3e1d950b3dc34363f_(HSTRING *a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
