/*
 * XREFs of ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C0172F80
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0186368 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAUtagRECT@@@Z @ 0x1C01B7BC0 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRES.c)
 * Callees:
 *     <none>
 */

void __fastcall DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
        DISPLAY_SOURCE *this,
        __int64 a2,
        const struct DXGALLOCATION *a3,
        __int64 a4,
        const struct tagRECT *a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        enum _D3DDDI_ROTATION a8,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a9,
        enum D3DDDI_COLOR_SPACE_TYPE a10)
{
  int v10; // esi
  __int64 v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm0

  v10 = a4;
  v12 = (unsigned int)a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 7802LL;
    WdLogEvent5_WdAssertion(v14);
  }
  *((_BYTE *)this + v12 + 2504) = 1;
  v15 = 10 * v12;
  *((_BYTE *)this + 8 * v15 + 2524) = 1;
  *((_QWORD *)this + v15 + 314) = a3;
  *((_DWORD *)this + 2 * v15 + 630) = v10;
  *(struct tagRECT *)((char *)this + 8 * v15 + 2528) = *a5;
  *(struct tagRECT *)((char *)this + 8 * v15 + 2544) = *a6;
  v16 = (__int128)*a7;
  *((_DWORD *)this + 2 * v15 + 644) = a8;
  *((_DWORD *)this + 2 * v15 + 645) = a9;
  *((_DWORD *)this + 2 * v15 + 646) = a10;
  *((_OWORD *)this + 5 * v12 + 160) = v16;
  if ( (unsigned int)v12 >= *((_DWORD *)this + 799) )
    *((_DWORD *)this + 799) = v12 + 1;
}
