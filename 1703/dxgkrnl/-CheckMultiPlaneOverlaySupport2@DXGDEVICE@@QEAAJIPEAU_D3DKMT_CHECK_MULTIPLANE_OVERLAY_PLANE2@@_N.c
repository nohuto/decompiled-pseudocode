/*
 * XREFs of ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01861CC
 * Callers:
 *     DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C018A770 (DxgkCheckMultiPlaneOverlaySupport2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C00D00CC (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0186368 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlaySupport2(
        ADAPTER_RENDER **this,
        unsigned int a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *a3,
        bool a4,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  LUID *p_CompSurfaceLuid; // r8
  __int64 v15; // rbp
  char *v16; // rdx
  char *v17; // rcx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v18; // r9
  char *v19; // r10
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v20; // r11
  DWORD LowPart; // eax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  LUID v24; // rax
  __int128 v25; // xmm0
  __int64 v27; // rax
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v28[8]; // [rsp+40h] [rbp-3F8h] BYREF
  char v29; // [rsp+80h] [rbp-3B8h] BYREF
  char v30; // [rsp+84h] [rbp-3B4h] BYREF
  char v31; // [rsp+180h] [rbp-2B8h] BYREF
  char v32; // [rsp+184h] [rbp-2B4h] BYREF

  *a5 = 0;
  if ( ADAPTER_RENDER::IsMultiPlaneOverlaySupported(this[2]) && (v11 = *((_QWORD *)this[2] + 2), *(_QWORD *)(v11 + 776)) )
  {
    if ( a2 )
    {
      p_CompSurfaceLuid = &a3->CompSurfaceLuid;
      v15 = a2;
      v16 = &v32;
      v17 = &v30;
      v18 = v28;
      v19 = &v31;
      v20 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)&v29;
      do
      {
        LowPart = p_CompSurfaceLuid[-1].LowPart;
        v22 = *(_OWORD *)&p_CompSurfaceLuid[2].HighPart;
        *((_DWORD *)v16 + 14) = 0;
        v23 = *(_OWORD *)&p_CompSurfaceLuid[4].HighPart;
        *(_QWORD *)(v16 + 60) = 0LL;
        *((_DWORD *)v17 - 1) = LowPart;
        *(_DWORD *)v17 = p_CompSurfaceLuid[-1].HighPart;
        v24 = *p_CompSurfaceLuid;
        p_CompSurfaceLuid += 16;
        *(LUID *)(v17 + 4) = v24;
        *((_DWORD *)v17 + 3) = p_CompSurfaceLuid[-15].LowPart;
        *((_DWORD *)v16 - 1) = p_CompSurfaceLuid[-14].LowPart;
        *((_DWORD *)v16 + 12) = p_CompSurfaceLuid[-8].HighPart;
        *((_DWORD *)v16 + 13) = p_CompSurfaceLuid[-7].LowPart;
        v24.LowPart = p_CompSurfaceLuid[-2].LowPart;
        *v18 = v20++;
        *(_QWORD *)(v17 + 20) = v19;
        v17 += 32;
        *(_OWORD *)v16 = v22;
        *((_DWORD *)v16 + 18) = v24.LowPart;
        v19 += 80;
        ++v18;
        *((_DWORD *)v16 + 17) = p_CompSurfaceLuid[-5].HighPart;
        v25 = *(_OWORD *)&p_CompSurfaceLuid[-10].HighPart;
        *((_OWORD *)v16 + 1) = v23;
        *((_OWORD *)v16 + 2) = v25;
        v16 += 80;
        --v15;
      }
      while ( v15 );
    }
    return DXGDEVICE::CheckMultiPlaneOverlaySupport3((DXGDEVICE *)this, a2, v28, 0, 0LL, a4, a5, a6);
  }
  else
  {
    v27 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v27 + 24) = 0LL;
    WdLogEvent5_WdWarning(v27);
    return 0LL;
  }
}
