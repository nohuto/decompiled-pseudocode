/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C0185390
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0185D44 (-CheckMultiPlaneOverlayInternal3@DXGDEVICE@@QEAAJIPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPOR.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C018ACA0 (DxgkCheckMultiPlaneOverlaySupport3.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
        _DWORD *a1,
        unsigned int a2)
{
  __int64 v2; // rdi
  void *v5; // rcx

  v2 = a2;
  if ( a2 <= 3 )
  {
    *(_QWORD *)a1 = a1 + 2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 0x2C )
      return 0LL;
    *(_QWORD *)a1 = ExAllocatePoolWithTag(PagedPool, 44LL * a2, 0x4B677844u);
  }
  v5 = *(void **)a1;
  a1[35] = v2;
  if ( v5 )
    memset(v5, 0, 44 * v2);
  return *(_QWORD *)a1;
}
