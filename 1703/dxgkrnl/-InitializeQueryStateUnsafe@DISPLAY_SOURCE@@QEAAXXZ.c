/*
 * XREFs of ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0171BF0
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0186368 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C016C758 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

void __fastcall DISPLAY_SOURCE::InitializeQueryStateUnsafe(DISPLAY_SOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v6; // rax
  __int64 i; // rdi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != CurrentThread )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, CurrentThread, a3, a4);
    *(_QWORD *)(v6 + 24) = 7758LL;
    WdLogEvent5_WdAssertion(v6);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 798); i = (unsigned int)(i + 1) )
  {
    LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, (unsigned int)i, a3, a4);
    if ( LatestPlaneConfigInternal && *((_BYTE *)LatestPlaneConfigInternal + 12) )
    {
      *((_BYTE *)this + i + 2504) = 1;
      memset((char *)this + 80 * i + 2512, 0, 0x50uLL);
    }
    else
    {
      *((_BYTE *)this + i + 2504) = 0;
    }
  }
  *((_DWORD *)this + 799) = *((_DWORD *)this + 798);
  *((_BYTE *)this + 3152) = 1;
  memset((char *)this + 3156, 0, 0x24uLL);
}
