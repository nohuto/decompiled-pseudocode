/*
 * XREFs of _lambda_47b0fc75c26617fafd85d8fafd598033_::__lambda_47b0fc75c26617fafd85d8fafd598033_ @ 0x18000F1D0
 * Callers:
 *     _ContentManagement::ThumbnailCacheHelper::AddThumbnailToCacheAsync_::_1_::dtor$1 @ 0x1800B5342 (_ContentManagement--ThumbnailCacheHelper--AddThumbnailToCacheAsync_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall lambda_47b0fc75c26617fafd85d8fafd598033_::__lambda_47b0fc75c26617fafd85d8fafd598033_(HSTRING *a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
