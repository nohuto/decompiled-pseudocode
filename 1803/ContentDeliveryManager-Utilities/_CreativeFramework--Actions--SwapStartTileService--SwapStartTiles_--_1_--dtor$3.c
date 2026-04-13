/*
 * XREFs of _CreativeFramework::Actions::SwapStartTileService::SwapStartTiles_::_1_::dtor$3 @ 0x1800C7237
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180014E2C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CreativeFramework::Actions::SwapStartTileService::SwapStartTiles_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 120) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 120) &= ~4u;
    return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 120));
  }
  return result;
}
