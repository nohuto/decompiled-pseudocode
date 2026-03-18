/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@I@Z @ 0x1C0187F08
 * Callers:
 *     ?CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C018850C (-CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01888EC (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C018DBA0 (DxgkCheckMultiPlaneOverlaySupport3.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 */

PVOID __fastcall PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2,3>::AllocateElements(
        _DWORD *a1,
        unsigned int a2)
{
  __int64 v4; // rdi
  PVOID result; // rax

  v4 = a2;
  if ( a2 <= 3 )
  {
    result = a1 + 2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 0x58 )
      return 0LL;
    result = ExAllocatePoolWithTag(PagedPool, 88LL * a2, 0x4B677844u);
  }
  *(_QWORD *)a1 = result;
  a1[68] = a2;
  if ( result )
  {
    memset(result, 0, 88 * v4);
    return *(PVOID *)a1;
  }
  return result;
}
