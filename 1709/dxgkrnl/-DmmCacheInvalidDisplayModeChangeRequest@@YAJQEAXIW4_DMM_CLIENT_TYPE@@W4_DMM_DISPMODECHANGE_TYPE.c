/*
 * XREFs of ?DmmCacheInvalidDisplayModeChangeRequest@@YAJQEAXIW4_DMM_CLIENT_TYPE@@W4_DMM_DISPMODECHANGE_TYPE@@JQEBE@Z @ 0x1C01EB6C0
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C00E6690 (DxgkSetDisplayMode.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C00F8BC8 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 */

__int64 __fastcall DmmCacheInvalidDisplayModeChangeRequest(
        DXGADAPTER *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v7; // r9
  _BYTE v9[56]; // [rsp+40h] [rbp-38h] BYREF

  memset(v9, 0, 0x2CuLL);
  return DmmCacheDisplayModeChangeRequest(a1, a2, (__int64)v9, v7, a5);
}
