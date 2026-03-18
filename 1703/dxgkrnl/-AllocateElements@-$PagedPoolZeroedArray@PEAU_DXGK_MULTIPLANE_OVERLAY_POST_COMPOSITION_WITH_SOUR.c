/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@PEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$00@@QEAAPEAPEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C01851A4
 * Callers:
 *     ?CallCheckMultiPlaneOverlaySupport3DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0185978 (-CallCheckMultiPlaneOverlaySupport3DDI@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *,1>::AllocateElements(
        _DWORD *a1,
        unsigned int a2)
{
  __int64 v2; // rdi
  void *v5; // rcx

  v2 = a2;
  if ( a2 <= 1 )
  {
    *(_QWORD *)a1 = a1 + 2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
      return 0LL;
    *(_QWORD *)a1 = ExAllocatePoolWithTag(PagedPool, 8LL * a2, 0x4B677844u);
  }
  v5 = *(void **)a1;
  a1[4] = v2;
  if ( v5 )
    memset(v5, 0, 8 * v2);
  return *(_QWORD *)a1;
}
