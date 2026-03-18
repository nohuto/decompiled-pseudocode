/*
 * XREFs of ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0155A20
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0188F30 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C010DD10 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

void __fastcall DISPLAY_SOURCE::InitializeQueryStateUnsafe(DISPLAY_SOURCE *this)
{
  __int64 v2; // rax
  unsigned int v3; // eax
  __int64 i; // rdi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != KeGetCurrentThread() )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 8549LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = *((_DWORD *)this + 934);
  for ( i = 0LL; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
  {
    LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, i);
    if ( LatestPlaneConfigInternal && (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
    {
      *((_BYTE *)this + i + 2880) = 1;
      memset((char *)this + 80 * i + 2896, 0, 0x50uLL);
    }
    else
    {
      *((_BYTE *)this + i + 2880) = 0;
    }
    v3 = *((_DWORD *)this + 934);
  }
  *((_DWORD *)this + 935) = v3;
  *((_BYTE *)this + 3696) = 1;
  memset((char *)this + 3700, 0, 0x24uLL);
}
