/*
 * XREFs of MNClearCachedPopupSizes @ 0x1C0113B9C
 * Callers:
 *     xxxMenuBarCompute @ 0x1C000E5E4 (xxxMenuBarCompute.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall MNClearCachedPopupSizes(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rcx

  *(_DWORD *)(a1 + 72) = 0;
  v1 = 0;
  for ( *(_DWORD *)(a1 + 76) = 0; v1 < *(_DWORD *)(a1 + 68); ++v1 )
  {
    v3 = 152LL * v1;
    *(_DWORD *)(*(_QWORD *)(a1 + 96) + v3 + 92) = 0x7FFFFFFF;
    *(_DWORD *)(*(_QWORD *)(a1 + 96) + v3 + 96) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 96) + v3 + 112) = -1;
    memset((void *)(*(_QWORD *)(a1 + 96) + 120LL + v3), 0, 0x20uLL);
  }
  return MNRefreshUAHCachedSizes(a1);
}
