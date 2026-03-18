/*
 * XREFs of ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C0186EB8
 * Callers:
 *     DxgkCheckMultiPlaneOverlaySupport @ 0x1C018A260 (DxgkCheckMultiPlaneOverlaySupport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00D00CC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0186368 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlaySupport(
        ADAPTER_RENDER **this,
        unsigned int a2,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *a3,
        bool a4,
        int *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r8d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID *p_VidPnSourceId; // rdx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v15; // rsi
  char *v16; // rcx
  char *v17; // r9
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v18; // r10
  char *v19; // r11
  int v20; // eax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v23; // eax
  __int128 v24; // xmm0
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v25; // eax
  __int64 v27; // rax
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v28; // [rsp+40h] [rbp-3F8h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v29[8]; // [rsp+50h] [rbp-3E8h] BYREF
  char v30; // [rsp+90h] [rbp-3A8h] BYREF
  char v31; // [rsp+94h] [rbp-3A4h] BYREF
  char v32; // [rsp+190h] [rbp-2A8h] BYREF
  char v33; // [rsp+194h] [rbp-2A4h] BYREF

  *a5 = 0;
  if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(this[2]) && (v10 = *((_QWORD *)this[2] + 2), *(_QWORD *)(v10 + 776)) )
  {
    v13 = 0;
    if ( a2 )
    {
      p_VidPnSourceId = &a3->VidPnSourceId;
      v15 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)&v30;
      v16 = &v33;
      v17 = &v31;
      v18 = v29;
      v19 = &v32;
      do
      {
        v20 = *(p_VidPnSourceId - 3);
        v21 = *(_OWORD *)(p_VidPnSourceId + 2);
        *((_DWORD *)v16 + 14) = 0;
        v22 = *(_OWORD *)(p_VidPnSourceId + 6);
        *(_QWORD *)(v16 + 60) = 0LL;
        *(_DWORD *)v17 = v20;
        *(_QWORD *)(v17 + 4) = *((_QWORD *)p_VidPnSourceId - 1);
        *((_DWORD *)v17 + 3) = *p_VidPnSourceId;
        *((_DWORD *)v16 - 1) = p_VidPnSourceId[1];
        *((_DWORD *)v16 + 12) = p_VidPnSourceId[14];
        *((_DWORD *)v16 + 13) = p_VidPnSourceId[15];
        v23 = p_VidPnSourceId[25];
        *(_OWORD *)v16 = v21;
        *((_DWORD *)v16 + 18) = v23;
        v24 = *(_OWORD *)(p_VidPnSourceId + 10);
        v25 = p_VidPnSourceId[20];
        *v18 = v15;
        *((_DWORD *)v17 - 1) = v13;
        *(_QWORD *)(v17 + 20) = v19;
        *((_OWORD *)v16 + 1) = v22;
        *((_OWORD *)v16 + 2) = v24;
        if ( v25 )
        {
          if ( (v25 & 1) != 0 )
            *((_DWORD *)v16 + 17) = (v25 & 2) != 0 ? 8 : 6;
        }
        else
        {
          *((_DWORD *)v16 + 17) = 0;
        }
        ++v13;
        ++v15;
        v19 += 80;
        ++v18;
        v17 += 32;
        p_VidPnSourceId += 30;
        v16 += 80;
      }
      while ( v13 < a2 );
    }
    v28.0 = 0;
    return DXGDEVICE::CheckMultiPlaneOverlaySupport3((DXGDEVICE *)this, a2, v29, 0, 0LL, a4, a5, &v28);
  }
  else
  {
    v27 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v27 + 24) = 0LL;
    WdLogEvent5_WdWarning(v27);
    return 0LL;
  }
}
