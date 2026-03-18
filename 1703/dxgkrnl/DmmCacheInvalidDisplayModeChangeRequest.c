/*
 * XREFs of DmmCacheInvalidDisplayModeChangeRequest @ 0x1C01D49FC
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0096EF0 (DxgkSetDisplayMode.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     DmmCacheDisplayModeChangeRequest @ 0x1C00A5A38 (DmmCacheDisplayModeChangeRequest.c)
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
